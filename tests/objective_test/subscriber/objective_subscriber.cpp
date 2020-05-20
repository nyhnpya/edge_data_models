#include <iostream>
#include <unistd.h>
#include <mutex>
#include <condition_variable>
#include <signal.h>
#include <string.h>
#include <logger.h>
#include "cmdparser.h"
#include "objective_state_subscriber.h"

std::mutex gTerminateMutex;
std::condition_variable gTerminateCondition;
CObjectiveStateSubscriber *pSubscriber = nullptr;

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

void get_objective(const DDS::SampleInfo &sampleInfo)
{
    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        DataTypes::Objective objective = pSubscriber->GetObjective();

        switch (objective)
        {
            case DataTypes::Drilling:
                LOG_INFO("Rig state Drilling");
                break;
            case DataTypes::Casing:
                LOG_INFO("Rig state Casing");
                break;
            case DataTypes::Tripping:
                LOG_INFO("Rig state Tripping");
                break;
            case DataTypes::CleaningHole:
                LOG_INFO("Rig state CleaningHole");
                break;
            case DataTypes::AutoReaming:
                LOG_INFO("Rig state AutoReaming");
                break;
            case DataTypes::None:
                LOG_INFO("Rig state None");
                break;
        }
    }
}

void liveliness_changed(const DDS::LivelinessChangedStatus &status)
{
    if (status.alive_count == 0)
    {
        LOG_INFO("Objective Completed - State [unknown]");
    }
}

void data_disposed(const DDS::SampleInfo &sampleInfo)
{
    if (sampleInfo.valid_data == DDS_BOOLEAN_FALSE)
    {
        LOG_INFO("Objective Completed - State [completed]");
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

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(domain);

    pSubscriber = new CObjectiveStateSubscriber();

    if (pSubscriber->Create(domain) == true)
    {
        pSubscriber->OnDataAvailable([&](const DDS::SampleInfo &sampleInfo)
                                     {
                                         get_objective(sampleInfo);
                                     });

        pSubscriber->OnLivelinessChanged([&](const DDS::LivelinessChangedStatus &status)
                                         {
                                             liveliness_changed(status);
                                         });

        pSubscriber->OnDataDisposed([&](const DDS::SampleInfo &sampleInfo)
                                    {
                                        data_disposed(sampleInfo);
                                    });

        std::unique_lock<std::mutex> lk(gTerminateMutex);
        gTerminateCondition.wait(lk);
        LOG_INFO("Signal received: terminating process");
    }

    pSubscriber->Destroy();
}
