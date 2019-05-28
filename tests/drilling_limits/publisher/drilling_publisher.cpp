#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <signal.h>
#include <string.h>
#include "cmdparser.h"
#include "drilling_limits_publisher.h"

bool gTerminate = false;

CDrillingLimitsPublisher *gpStatePublisher = nullptr;

using namespace units;
using namespace units::length;
using namespace units::velocity;
using namespace units::force;
using namespace units::pressure;
using namespace units::torque;
using namespace units::angular_velocity;


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

void SetStartDepth()
{
    double input;

    std::cout << "Start depth (ft): ";
    std::cin >> input;
    gpStatePublisher->SetStartDepth(units::length::meter_t(foot_t(input)));
}
        
void SetEndDepth()
{
    double input;

    std::cout << "End depth (ft): ";
    std::cin >> input;
    gpStatePublisher->SetEndDepth(units::length::meter_t(foot_t(input)));
}

void SetRopMin()
{
    double input;

    std::cout << "Rop min (fph): ";
    std::cin >> input;
    gpStatePublisher->SetRopMin(units::velocity::meters_per_second_t(feet_per_hour_t(input)));
}

void SetRopMax()
{
    double input;

    std::cout << "Rop max (fph): ";
    std::cin >> input;
    gpStatePublisher->SetRopMax(units::velocity::meters_per_second_t(feet_per_hour_t(input)));
}

void SetWobMin()
{
    double input;
    std::cout << "WOb min (klbs): ";
    std::cin >> input;
    gpStatePublisher->SetWobMin(units::force::newton_t(pound_t(input * 1000)));
}

void SetWobMax()
{
    double input;

    std::cout << "WOb max (klbs): ";
    std::cin >> input;
    gpStatePublisher->SetWobMax(units::force::newton_t(pound_t(input * 1000)));
}

void SetDiffPMin()
{
    double input;

    std::cout << "DiffP min (psi): ";
    std::cin >> input;
    gpStatePublisher->SetDiffPMin(units::pressure::pascal_t(pounds_per_square_inch_t(input)));
}

void SetDiffPMax()
{
    double input;

    std::cout << "DiffP max (psi): ";
    std::cin >> input;
    gpStatePublisher->SetDiffPMax(units::pressure::pascal_t(pounds_per_square_inch_t(input)));
}

void SetTorqueMin()
{
    double input;

    std::cout << "Torque min (nM): ";
    std::cin >> input;
    gpStatePublisher->SetTorqueMin(units::torque::newton_meter_t(input));
}

void SetTorqueMax()
{
    double input;

    std::cout << "Torque max (nM): ";
    std::cin >> input;
    gpStatePublisher->SetTorqueMax(units::torque::newton_meter_t(input));
}    

void SetRotateMin()
{
    double input;

    std::cout << "Rotate min (rpm): ";
    std::cin >> input;
    gpStatePublisher->SetRotateMin(units::angular_velocity::radians_per_second_t(revolutions_per_minute_t(input)));
}

void SetRotateMax()
{
    double input;

    std::cout << "Rotate max (rpm): ";
    std::cin >> input;
    gpStatePublisher->SetRotateMax(units::angular_velocity::radians_per_second_t(revolutions_per_minute_t(input)));
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
                break;
            case '1':
                SetStartDepth();
                SetEndDepth();
                SetRopMin();
                SetRopMax();
                SetWobMin();
                SetWobMax();
                SetDiffPMin();
                SetDiffPMax();
                SetTorqueMin();
                SetTorqueMax();
                SetRotateMin();
                SetRotateMax();
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

    gpStatePublisher = new CDrillingLimitsPublisher();

    if (gpStatePublisher->Create(domain) == true)
    {
        gpStatePublisher->CreateInstance();
        top_level_menu();
    }

    gpStatePublisher->Destroy();
}
