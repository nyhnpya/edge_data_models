#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <mutex>
#include <condition_variable>
#include <signal.h>
#include <string.h>
#include "cmdparser.h"
#include "drilling_limits_subscriber.h"

std::mutex gTerminateMutex;
std::condition_variable gTerminateCondition;

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
            gTerminateCondition.notify_all();
        case SIGTERM:
            std::cout << "Signal SIGTERM received." << std::endl;
            gTerminateCondition.notify_all();
            break;
        case SIGABRT:
            std::cout << "Signal SIGABRT received." << std::endl;
            gTerminateCondition.notify_all();
            break;
        case SIGFPE:
            std::cout << "Signal SIGFPE received." << std::endl;
            gTerminateCondition.notify_all();
            break;
        case SIGILL:
            std::cout << "Signal SIGGILL received." << std::endl;
            gTerminateCondition.notify_all();
            break;
        case SIGSEGV:
            std::cout << "Signal SIGSEGV received." << std::endl;
            gTerminateCondition.notify_all();
            break;
        case SIGHUP:
            std::cout << "Signal SIGHUB received." << std::endl;
            gTerminateCondition.notify_all();
            break;
        default:
            std::cout << "Undhandled Signal received: " << signal  << std::endl;
            gTerminateCondition.notify_all();
            break;
    }

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
    fprintf(stdout, "Start Depth: %f m\n", units::unit_cast<double>(gpStateSubscriber->GetStartDepth()));
    fprintf(stdout, "End Depth: %f m\n", units::unit_cast<double>(gpStateSubscriber->GetEndDepth()));
    fprintf(stdout, "ROP Min: %f ft/hr\n", units::unit_cast<double>(feet_per_hour_t(gpStateSubscriber->GetRopMin())));
    fprintf(stdout, "ROP Max: %f ft/hr\n", units::unit_cast<double>(feet_per_hour_t(gpStateSubscriber->GetRopMax())));
    fprintf(stdout, "WOB Min: %f Klbs\n", (units::unit_cast<double>(pound_t(gpStateSubscriber->GetWobMin()))) / 1000);
    fprintf(stdout, "WOB Max: %f Klbs\n", (units::unit_cast<double>(pound_t(gpStateSubscriber->GetWobMax()))) / 1000);
    /*    gpStateSubscriber->GetWobMin(units::force::newton_t(pound_t(input * 1000)));
    gpStateSubscriber->GetWobMax(units::force::newton_t(pound_t(input * 1000)));
    gpStateSubscriber->GetDiffPMin(units::pressure::pascal_t(pounds_per_square_inch_t(input)));
    gpStateSubscriber->GetDiffPMax(units::pressure::pascal_t(pounds_per_square_inch_t(input)));
    gpStateSubscriber->GetTorqueMin(units::torque::newton_meter_t(input));
    gpStateSubscriber->GetTorqueMax(units::torque::newton_meter_t(input));*/
    fprintf(stdout, "RPM Min: %f rpm\n", units::unit_cast<double>(revolutions_per_minute_t(units::angular_velocity::radians_per_second_t(gpStateSubscriber->GetRotateMin()))));
    fprintf(stdout, "RPM Max: %f rpm\n", units::unit_cast<double>(revolutions_per_minute_t(units::angular_velocity::radians_per_second_t(gpStateSubscriber->GetRotateMax()))));
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
                                               if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
                                               {
                                                   DisplayLimits();
                                               }
                                           });
    }

    std::unique_lock<std::mutex> lk(gTerminateMutex);
    gTerminateCondition.wait(lk);
    LOG_INFO("Signal received: terminating process");
    
    gpStateSubscriber->Destroy();
}
