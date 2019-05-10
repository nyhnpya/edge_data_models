#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <signal.h>
#include <string.h>
#include "cmdparser.h"
#include "drilling_limits_subscriber.h"

bool gTerminate = false;

CDrillingLimitsSubscriber *gpStateSubscriber = nullptr;

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

void DisplayLimits()
{
    gpStateSubscriber->GetEndDepth(units::length::meter_t(foot_t(input)));
    gpStateSubscriber->GetStartDepth(units::length::meter_t(foot_t(input)));
    gpStateSubscriber->GetRopMin(units::velocity::meters_per_second_t(feet_per_hour_t(input)));
    gpStateSubscriber->GetRopMax(units::velocity::meters_per_second_t(feet_per_hour_t(input)));
    gpStateSubscriber->GetWobMin(units::force::newton_t(pound_t(input * 1000)));
    gpStateSubscriber->GetWobMax(units::force::newton_t(pound_t(input * 1000)));
    gpStateSubscriber->GetDiffPMin(units::pressure::pascal_t(pounds_per_square_inch_t(input)));
    gpStateSubscriber->GetDiffPMax(units::pressure::pascal_t(pounds_per_square_inch_t(input)));
    gpStateSubscriber->GetTorqueMin(units::torque::newton_meter_t(input));
    gpStateSubscriber->GetTorqueMax(units::torque::newton_meter_t(input));
    gpStateSubscriber->GetRotateMin(units::angular_velocity::radians_per_second_t(revolutions_per_minute_t(input)));
    gpStateSubscriber->GetRotateMax(units::angular_velocity::radians_per_second_t(revolutions_per_minute_t(input)));
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

    gpStateSubscriber = new CDrillingLimitsSubscriber();

    if (gpStateSubscriber->Create(domain) == true)
    {
        gpStateSubscriber->OnDataAvailable([&](const DDS::SampleInfo &sampleInfo)
                                           {
                                               DisplayLimits();
                                           });
    }

    gpStateSubscriber->Destroy();
}
