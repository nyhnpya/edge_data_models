#include <iostream>
#include <stdint.h>
#include <unistd.h>
#include <condition_variable>
#include <mutex>
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "objective_state_publisher.h"

bool terminate = false;
std::mutex terminateMutex;
std::condition_variable terminateCondition;
std::thread threadId;
DataTypes::Uuid          m_objectiveId;
CObjectiveStatePublisher m_objectivePublisher;

#ifdef _LINUX
void SignalHandler(int32_t signal)
{
    /// Signal handler for SIGINT, SIGABRT, SIGFPE, SIGILL, SIGSEGV, SIGHUP
    switch (signal)
    {
        case SIGINT:
            LOG_INFO("Signal SIGINT received.");
            terminateCondition.notify_all();
            break;
        case SIGTERM:
            LOG_WARN("Signal SIGTERM received.");
            terminateCondition.notify_all();
            break;
        case SIGABRT:
            LOG_FATAL("Signal SIGABRT received.");
            terminateCondition.notify_all();
            break;
        case SIGFPE:
            LOG_FATAL("Signal SIGFPE received.");
            terminateCondition.notify_all();
            break;
        case SIGILL:
            LOG_FATAL("Signal SIGGILL received.");
            terminateCondition.notify_all();
            break;
        case SIGSEGV:
            LOG_FATAL("Signal SIGSEGV received.");
            terminateCondition.notify_all();
            break;
        case SIGHUP:
            LOG_WARN("Signal SIGHUB received.");
            terminateCondition.notify_all();
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

void top_level_menu()
{
    char choice;

    do
    {
        std::cout << std::endl;
        std::cout << "Objective State Publisher" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "1. Initiate Drill Objective" << std::endl;
        std::cout << "2. Cancel Drill Objective" << std::endl;
        std::cout << "3. Initiate Slide Objective" << std::endl;
        std::cout << "4. Cancel Slide Objective" << std::endl;
        std::cout << "q. exit" << std::endl;
        std::cout << "option: ";
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice)
        {
            case 'q':
                terminateCondition.notify_all();
               terminate = true;
                break;
            case '1':
                m_objectivePublisher.DeleteInstance();
                m_objectivePublisher.CreateInstance();
                m_objectivePublisher.SetObjective(DataTypes::Drilling);
                m_objectivePublisher.PublishSample();
                break;
            case '2':
                m_objectivePublisher.DeleteInstance();
                break;
            case '3':
                m_objectivePublisher.DeleteInstance();
                m_objectivePublisher.CreateInstance();
                m_objectivePublisher.SetObjective(DataTypes::Sliding);
                m_objectivePublisher.PublishSample();
                break;
            case '4':
                m_objectivePublisher.DeleteInstance();
                break;
        }
    } while (terminate == false);

}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser              parser(argc, argv);

	register_signal_handler();

    parser.set_optional<int32_t>("d", "domain", 100, "Default configruation domain.");
    parser.set_optional<std::string>("q", "qosFile", "USER_QOS_PROFILES.xml", "External QoS file.");
    parser.set_optional<std::string>("l", "qosLibrary", "EdgeBaseLibrary", "QoS library.");
    parser.set_optional<std::string>("p", "qosProfile", "EdgeBaseProfile", "QoS profile.");
    parser.run_and_exit_if_error();

    int32_t     domain = parser.get<int32_t>("d");
    std::string qosFile = parser.get<std::string>("q");
    std::string qosLibrary = parser.get<std::string>("l");
    std::string qosProfile = parser.get<std::string>("p");

    if (CDomainParticipant::Instance()->SetQosFile(qosFile,
                                                   qosLibrary,
                                                   qosProfile) == true)
    {
        if (CDomainParticipant::Instance()->Create(domain) != nullptr)
        {
            if (m_objectivePublisher.Create(domain) == true)
            {
                threadId = std::thread(top_level_menu);

                std::unique_lock<std::mutex> lk(terminateMutex);
                terminateCondition.wait(lk);
                LOG_INFO("Signal received: terminating process");

                if (threadId.joinable())
                {
                    threadId.join();
                }
            }
            else
            {
                LOG_FATAL("Failed to create DDS instance");
                return 1;
            }
        }
    }
}
