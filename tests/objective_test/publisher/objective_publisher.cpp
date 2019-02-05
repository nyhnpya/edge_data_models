#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#include <condition_variable>
#include <mutex>
#endif
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "objective_state_publisher.h"

bool gTerminate = false;
std::mutex gTerminateMutex;
std::condition_variable gTerminateCondition;

CObjectiveStatePublisher *gpStatePublisher = nullptr;
std::thread threadId;

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

void publish_thread()
{
    DataTypes::Objective objective = DataTypes::None;

    while (gTerminate == false)
    {
        gpStatePublisher->SetObjective(objective);
        gpStatePublisher->PublishSample();
        usleep(100);
    }

    std::cout << "thread terminated"  << std::endl;
}

void delete_instance()
{
    char choice;

    std::cout << std::endl;
    std::cout << "d. Delete Instance" << std::endl;
    std::cout << "option: ";
    std::cin >> choice;
    std::cout << std::endl;

    switch (choice)
    {
        case 'd':
            gpStatePublisher->DeleteInstance();
            break;
    }
}

void top_level_menu()
{
    char choice;

    do
    {
        std::cout << std::endl;
        std::cout << "Objective State Publisher" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "1. Publish drilling objective" << std::endl;
        std::cout << "2. Publish tripping objective" << std::endl;
        std::cout << "3. Publish clean hole objective" << std::endl;
        std::cout << "4. Publish casing objective" << std::endl;
        std::cout << "5. Publish none objective" << std::endl;
        std::cout << "6. Publish objective continuously" << std::endl;
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
                gpStatePublisher->CreateInstance();
                gpStatePublisher->Initialize();
                gpStatePublisher->SetObjective(DataTypes::Drilling);
                gpStatePublisher->PublishSample();
                delete_instance();
                break;
            case '2':
                gpStatePublisher->CreateInstance();
                gpStatePublisher->Initialize();
                gpStatePublisher->SetObjective(DataTypes::Tripping);
                gpStatePublisher->PublishSample();
                delete_instance();
                break;
            case '3':
                gpStatePublisher->CreateInstance();
                gpStatePublisher->Initialize();
                gpStatePublisher->SetObjective(DataTypes::CleaningHole);
                gpStatePublisher->PublishSample();
                delete_instance();
                break;
            case '4':
                gpStatePublisher->CreateInstance();
                gpStatePublisher->Initialize();
                gpStatePublisher->SetObjective(DataTypes::Casing);
                gpStatePublisher->PublishSample();
                delete_instance();
                break;
            case '5':
                gpStatePublisher->CreateInstance();
                gpStatePublisher->Initialize();
                gpStatePublisher->SetObjective(DataTypes::None);
                gpStatePublisher->PublishSample();
                delete_instance();
                break;
            case '6':
                gpStatePublisher->CreateInstance();
                gpStatePublisher->Initialize();
                threadId = std::thread(publish_thread);
                delete_instance();
                break;
        }
    } while (gTerminate == false);

}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser              parser(argc, argv);
    int32_t                  domain;
    bool                     drillObjective;;

	register_signal_handler();

    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 100, "DDS Domain.");
    parser.set_optional<bool>("o", "objective", false, "Drill objective.");
    parser.run_and_exit_if_error();

    domain = parser.get<int32_t>("d");
    drillObjective = parser.get<bool>("o");

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(domain);

    gpStatePublisher = new CObjectiveStatePublisher();

    if (gpStatePublisher->Create(domain) == true)
    {
        if (drillObjective == false)
        {
            top_level_menu();
        }
        else
        {
            gpStatePublisher->CreateInstance();
            gpStatePublisher->Initialize();
            gpStatePublisher->SetObjective(DataTypes::Drilling);
            gpStatePublisher->PublishSample();
            
            std::unique_lock<std::mutex> lk(gTerminateMutex);
            gTerminateCondition.wait(lk);
            LOG_INFO("Signal received: terminating process");
         }
    }

    /*    std::cout << "Waiting for thread: "  << std::endl;

    if (threadId.joinable())
    {
        threadId.join();
        }*/

    gpStatePublisher->Destroy();
}
