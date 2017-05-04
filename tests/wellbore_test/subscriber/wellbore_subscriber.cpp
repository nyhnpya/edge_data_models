#include <ncurses.h>
#include <iostream>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include "cmdparser.h"
#include "wellbore_subscriber.h"

bool gTerminate = false;

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

void get_depths(const Downhole::Wellbore &data)
{
    double value; 

    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(2, 1, "Bit depth: [%6.2f]", data.bitDepth);
    mvprintw(3, 1, "Hole depth: [%6.2f]", data.holeDepth);
    mvprintw(4, 1, "Timestamp: [%d]:[%d]", data.timestamp.sec, data.timestamp.nanosec);
    attroff(COLOR_PAIR(1));

    refresh();
}

void invalid_data()
{
    double value; 

    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(2, 1, "Bit depth: [------]");
    mvprintw(3, 1, "Hole depth: [------]");
    attroff(COLOR_PAIR(1));

    refresh();
}

void liveliness_changed(const DDS::LivelinessChangedStatus &status)
{
    if (status.alive_count == 0)
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

    CWellboreStateSubscriber *pSubscriber = new CWellboreStateSubscriber();

    if (pSubscriber->Create(domain) == true)
    {
        pSubscriber->OnDataAvailable([&](const Downhole::Wellbore &data)
                                     {
                                         get_depths(data);
                                     });

        pSubscriber->OnLivelinessChanged([&](const DDS::LivelinessChangedStatus &status)
                                         {
                                             liveliness_changed(status);
                                         });

        invalid_data();
        while (gTerminate == false)
        {
            usleep(100 * 1000);
        }
    }

    endwin();

    pSubscriber->Destroy();
}
