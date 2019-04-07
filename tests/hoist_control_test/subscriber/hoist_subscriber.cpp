#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <mutex>
#include <condition_variable>
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "hoist_state_subscriber.h"

std::mutex gTerminateMutex;
std::condition_variable gTerminateCondition;
int32_t  gDomain;

CHoistStateSubscriber *gpHoistSubscriber = nullptr;

#ifdef _LINUX
void SignalHandler(int32_t signal)
{
    /// Signal handler for SIGINT, SIGABRT, SIGFPE, SIGILL, SIGSEGV, SIGHUP 
    switch (signal)
    {
        case SIGINT:
            LOG_INFO("Signal SIGINT received.");
            gTerminateCondition.notify_all();
            break;
        case SIGTERM:
            LOG_WARN("Signal SIGTERM received.");
            gTerminateCondition.notify_all();
            break;
        case SIGABRT:
            LOG_FATAL("Signal SIGABRT received.");
            gTerminateCondition.notify_all();
            break;
        case SIGFPE:
            LOG_FATAL("Signal SIGFPE received.");
            gTerminateCondition.notify_all();
            break;
        case SIGILL:
            LOG_FATAL("Signal SIGGILL received.");
            gTerminateCondition.notify_all();
            break;
        case SIGSEGV:
            LOG_FATAL("Signal SIGSEGV received.");
            gTerminateCondition.notify_all();
            break;
        case SIGHUP:
            LOG_WARN("Signal SIGHUB received.");
            gTerminateCondition.notify_all();
            break;
        case SIGPIPE:
            LOG_INFO("Signal SIGPIPE received.");
            break;
        default:
            LOG_INFO("Undhandled Signal [%d] received.", signal);
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

void DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Data Disposed");
}

void DataAvailable(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Status [%d]", gpHoistSubscriber->GetStatus());
    LOG_INFO("Hookload Actual [%f]", gpHoistSubscriber->GetActualHookload());
    LOG_INFO("Velocity Actual [%f]", gpHoistSubscriber->GetActualVelocity());
    LOG_INFO("Position Actual [%f]", gpHoistSubscriber->GetActualPosition());
    LOG_INFO("Max Hookload [%f]", gpHoistSubscriber->GetMaxHookload());
    LOG_INFO("Max Hoist Velocity [%f]", gpHoistSubscriber->GetMaxHoistVelocity());
    LOG_INFO("Max Lower Velocity [%f]", gpHoistSubscriber->GetMaxLowerVelocity());
    LOG_INFO("Max Hoist Position [%f]", gpHoistSubscriber->GetMaxHoistPosition());
    LOG_INFO("Max Lower Position [%f]", gpHoistSubscriber->GetMaxLowerPosition());
    LOG_INFO("Target Velocity [%f]", gpHoistSubscriber->GetTargetVelocity());
    LOG_INFO("Target Position [%f]", gpHoistSubscriber->GetTargetPosition());
}

void LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("LivelinessChanged");
    LOG_INFO("Alive Count [%d]", status.alive_count);
    LOG_INFO("Not Alive Count [%d]", status.not_alive_count);
    LOG_INFO("Alive Count Change [%d]", status.alive_count_change);
    LOG_INFO("Not Alive Count Change [%d]", status.not_alive_count_change);
}

void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription Matched");
    LOG_INFO("Current Count [%d]", status.current_count);
    LOG_INFO("Current Count Change [%d]", status.current_count_change);
    LOG_INFO("Current Count Peak [%d]", status.current_count_peak);
    LOG_INFO("Total Count [%d]", status.total_count);
    LOG_INFO("Total Count Change [%d]", status.total_count_change);
}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser              parser(argc, argv);

	register_signal_handler();

    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 5, "DDS Domain.");
    parser.run_and_exit_if_error();

    gDomain = parser.get<int32_t>("d");

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(gDomain);

    gpHoistSubscriber = new CHoistStateSubscriber();

    if (gpHoistSubscriber->Create(gDomain) == true)
    {
        gpHoistSubscriber->OnDataAvailable([&](const DDS::SampleInfo &sampleInfo)
                                             {
                                                 DataAvailable(sampleInfo);
                                             });

        gpHoistSubscriber->OnSubscriptionMatched([&](const DDS::SubscriptionMatchedStatus &status)
                                                 {
                                                     SubscriptionMatched(status);
                                                 });

        gpHoistSubscriber->OnDataDisposed([&](const DDS::SampleInfo &sampleInfo)
                                          {
                                              DataDisposed(sampleInfo);
                                          });

        gpHoistSubscriber->OnLivelinessChanged([&](const DDS::LivelinessChangedStatus &status)
                                               {
                                                   LivelinessChanged(status);
                                               });
    }
    else
    {
        LOG_ERROR("Failed to create effectors rotate state topic");
    }

    LOG_INFO("PLC HoistState subscriber started");
    
    std::unique_lock<std::mutex> lk(gTerminateMutex);
    gTerminateCondition.wait(lk);
    LOG_INFO("Signal received: terminating process");


    gpHoistSubscriber->Destroy();
}