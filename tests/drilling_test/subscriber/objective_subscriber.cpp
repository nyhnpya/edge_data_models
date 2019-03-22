#include <ncurses.h>
#include <iostream>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include "cmdparser.h"
#include "drilling_limits_objective_subscriber.h"

bool gTerminate = false;
bool gCreated = true;

void SignalHandler(int32_t signal)
{
    /// Signal handler for SIGINT, SIGABRT, SIGFPE, SIGILL, SIGSEGV, SIGHUP 
    switch (signal)
    {
        case SIGINT:
            std::cout << "Signal SIGINT received." << std::endl;
            break;
        case SIGTERM:
            std::cout << "Signal SIGTERM received." << std::endl;
            break;
        case SIGABRT:
            std::cout << "Signal SIGABRT received." << std::endl;
            break;
        case SIGFPE:
            std::cout << "Signal SIGFPE received." << std::endl;
            break;
        case SIGILL:
            std::cout << "Signal SIGGILL received." << std::endl;
            break;
        case SIGSEGV:
            std::cout << "Signal SIGSEGV received." << std::endl;
            break;
        case SIGHUP:
            std::cout << "Signal SIGHUB received." << std::endl;
            break;
        default:
            std::cout << "Undhandled Signal received: " << signal  << std::endl;
            break;
    }

    gTerminate = true;

    return;
}

void register_signal_handler()
{
    struct sigaction sigact;  /// Signal mask

    sigact.sa_handler = SignalHandler;
    sigemptyset(&sigact.sa_mask);
    sigact.sa_flags = 0;

    sigaction(SIGINT,  &sigact, (struct sigaction *)NULL);
    sigaction(SIGABRT, &sigact, (struct sigaction *)NULL);
    sigaction(SIGFPE,  &sigact, (struct sigaction *)NULL);
    sigaction(SIGILL,  &sigact, (struct sigaction *)NULL);
    sigaction(SIGSEGV, &sigact, (struct sigaction *)NULL);
    sigaction(SIGHUP,  &sigact, (struct sigaction *)NULL);
    sigaction(SIGTERM, &sigact, (struct sigaction *)NULL);
}

void get_objective(const Plan::ObjectiveState &data)
{
    double value; 

    mvprintw(2, 1, "Objective: [%d]", data.objective);
    mvprintw(4, 1, "Timestamp: [%d]:[%d]", data.timestamp.sec, data.timestamp.nanosec);
    mvprintw(8, 1, "Status [%s]", gCreated ? "Created  ": "Destroyed");

    refresh();
}

void update_state()
{
    mvprintw(8, 1, "Status [%s]", gCreated ? "Created  ": "Destroyed");

    refresh();
}

void invalid_data()
{
    double value; 

    mvprintw(2, 1, "Objective: [-]");
    mvprintw(8, 1, "Status [%s]", gCreated ? "Created  ": "Destroyed");

    refresh();
}

void liveliness_changed(const DDS::LivelinessChangedStatus &status)
{
    if (status.alive_count == 0)
    {
        invalid_data();
    }
}

void data_disposed(const DDS::SampleInfo &sampleInfo)
{
    if (sampleInfo.valid_data == DDS_BOOLEAN_FALSE)
    {
        invalid_data();
    }
}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser parser(argc, argv);
    int32_t     domain;

    //    register_signal_handler();
    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 100, "DDS Domain.");
    parser.run_and_exit_if_error();

    domain = parser.get<int32_t>("d");

    initscr();

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(domain);

    CObjectiveStateSubscriber *pSubscriber = new CObjectiveStateSubscriber();

    if (pSubscriber->Create(domain) == true)
    {
        pSubscriber->OnDataAvailable([&](const Plan::ObjectiveState &data)
                                     {
                                         get_objective(data);
                                     });

        pSubscriber->OnLivelinessChanged([&](const DDS::LivelinessChangedStatus &status)
                                         {
                                             liveliness_changed(status);
                                         });

        pSubscriber->OnDataDisposed([&](const DDS::SampleInfo &sampleInfo)
                                    {
                                        data_disposed(sampleInfo);
                                    });

        invalid_data();
        while (gTerminate == false)
        {
            char choice;

            std::cin >> choice;

            switch (choice)
            {
                case 'q':
                    gTerminate = true;
                    break;
                case 'c':
                    //                    if (gCreated == false)
                    {
                        pSubscriber->Create(domain);
                        gCreated = true;
                        update_state();
                    }
                    break;
                case 'd':
                    //                    if (gCreated == true)
                    {
                        pSubscriber->Destroy();
                        gCreated = false;
                        update_state();
                    }
                    break;
            }            
        }
    }

    endwin();

    pSubscriber->Destroy();
}
