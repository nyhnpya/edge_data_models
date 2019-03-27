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
#include "plc_rotate_request_publisher.h"
#include "timer.h"

std::mutex gTerminateMutex;
std::condition_variable gTerminateCondition;
int32_t    gDomain;
Timer      publishEvent;

CPlcRotateRequestPublisher *gpRotatePublisher = nullptr;
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

void create_request()
{
    LOG_INFO("Request Created");
    publishEvent.Create(100,
                        [&](){
                            gpRotatePublisher->PublishSample();
                        });
}

void destroy_request()
{
    LOG_INFO("Request Destroyed");
    publishEvent.Destroy();
}

void set_rate()
{
    double input;

    std::cout << "Rotate Rate: ";
    std::cin >> input;
    gpRotatePublisher->SetTargetRate(input);
}

void top_level_menu()
{
    char choice;

    do
    {
        std::cout << std::endl;
        std::cout << " Rotate" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cout << "1. Create new instance" << std::endl;
        std::cout << "2. Dispose instance" << std::endl;
        std::cout << "q. exit" << std::endl;
        std::cout << "option: ";
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice)
        {
            case 'q':
                gTerminateCondition.notify_all();

                if (threadId.joinable())
                {
                    threadId.join();
                }
                break;
            case '1':
                destroy_request();
                gpRotatePublisher->CreateInstance();
                set_rate();
                create_request();
                break;
            case '2':
                destroy_request();
                gpRotatePublisher->DeleteInstance();
                break;
        }
    } while (true);

}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser parser(argc, argv);

	register_signal_handler();

    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 5, "DDS Domain.");
    parser.run_and_exit_if_error();

    gDomain = parser.get<int32_t>("d");

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(gDomain);

    gpRotatePublisher = new CPlcRotateRequestPublisher();

    if (gpRotatePublisher->Create(gDomain) == true)
    {
        top_level_menu();
    }

    std::cout << "Waiting for thread: "  << std::endl;

    if (threadId.joinable())
    {
        threadId.join();
    }

    gpRotatePublisher->Destroy();
}
