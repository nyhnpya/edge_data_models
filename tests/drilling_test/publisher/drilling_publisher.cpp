#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "drilling_request_publisher.h"

bool gTerminate = false;

CDrillingRequestPublisher *gpStatePublisher = nullptr;
std::thread threadId;

#ifdef _LINUX
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
#endif

//    void SetRopMode(const bool ropMode);
//    void SetWobMode(const bool wobMode);
//    void SetDifferentialPressureMode(const bool differentialPressureMode);
//    void SetTorqueMode(const bool torqueMode);
void set_rop()
{
    feet_per_hour_t ropLimit;
    double input;

    std::cout << "ROP Limit: ";
    std::cin >> input;
    ropLimit = (feet_per_hour_t)input;
    gpStatePublisher->SetRopLimit((meters_per_second_t)ropLimit);
}

void set_wob()
{
    double input;

    std::cout << "WOB Limit: ";
    std::cin >> input;
    pound_t wobLimit = (pound_t)(input * 1000);
    gpStatePublisher->SetWobLimit((newton_t)wobLimit);
}

void set_diffp()
{
    double input;

    std::cout << "DiffP Limit: ";
    std::cin >> input;
    pounds_per_square_inch_t diffpLimit = (pounds_per_square_inch_t)input;
    gpStatePublisher->SetDifferentialPressureLimit((pascal_t)diffpLimit);
}

void set_torque()
{
    double input;

    std::cout << "Torque Limit: ";
    std::cin >> input;
    foot_pound_t torqueLimit = (foot_pound_t)(input * 1000);
    gpStatePublisher->SetTorqueLimit((newton_meter_t)torqueLimit);
}

void top_level_menu()
{
    char choice;

    do
    {
        std::cout << std::endl;
        std::cout << "Objective State Publisher" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "1. Publish drilling parameters" << std::endl;
        std::cout << "q. exit" << std::endl;
        std::cout << "option: ";
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice)
        {
            case 'q':
                gTerminate = true;

                if (threadId.joinable())
                {
                    threadId.join();
                }
                break;
            case '1':
                set_rop();
                set_wob();
                set_diffp();
                set_torque();
                gpStatePublisher->SetRopMode(true);
                gpStatePublisher->SetWobMode(true);
                gpStatePublisher->SetDifferentialPressureMode(true);
                gpStatePublisher->SetTorqueMode(true);
                gpStatePublisher->PublishSample();
                break;
        }
    } while (gTerminate == false);

}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser              parser(argc, argv);
    int32_t                  domain;

	register_signal_handler();

    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 100, "DDS Domain.");
    parser.run_and_exit_if_error();

    domain = parser.get<int32_t>("d");

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(domain);

    gpStatePublisher = new CDrillingRequestPublisher();

    if (gpStatePublisher->Create(domain) == true)
    {
        gpStatePublisher->CreateInstance();
        top_level_menu();
    }

    std::cout << "Waiting for thread: "  << std::endl;

    if (threadId.joinable())
    {
        threadId.join();
    }

    gpStatePublisher->Destroy();
}
