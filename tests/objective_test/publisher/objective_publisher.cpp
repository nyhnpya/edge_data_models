#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "objective_state_publisher.h"

bool gTerminate = false;

CObjectiveStatePublisher *gpStatePublisher = nullptr;
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

	register_signal_handler();

    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 100, "DDS Domain.");
    parser.run_and_exit_if_error();

    domain = parser.get<int32_t>("d");

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(domain);

    gpStatePublisher = new CObjectiveStatePublisher();

    if (gpStatePublisher->Create(domain) == true)
    {
        top_level_menu();
    }

    std::cout << "Waiting for thread: "  << std::endl;

    if (threadId.joinable())
    {
        threadId.join();
    }

    gpStatePublisher->Destroy();
}
