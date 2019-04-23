#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "rotate_request_publisher.h"
#include "objective_state_machine.h"

bool     gTerminate = false;
int32_t  gDomain;

CRotateRequestPublisher *gpRequestPublisher = nullptr;
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

void set_rate()
{
    revolutions_per_minute_t targetRate;
    double input;

    std::cout << "RPM Target: ";
    std::cin >> input;
    targetRate = (revolutions_per_minute_t)input;
    LOG_INFO("Target Rate RPM: [%f]", targetRate);
    LOG_INFO("Target Rate rad/sec: [%f]", (radians_per_second_t)targetRate);

    gpRequestPublisher->SetObjectiveId(CObjectiveStateMachine::Instance()->GetId());
    gpRequestPublisher->SetTargetRate((radians_per_second_t)targetRate);
}

void top_level_menu()
{
    char choice;

    do
    {
        std::cout << std::endl;
        std::cout << "Rotate Request" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cout << "1. Create new instance" << std::endl;
        std::cout << "2. Dispose instance" << std::endl;
        std::cout << "3. Publish rotate parameters" << std::endl;
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
                gpRequestPublisher->CreateInstance();
                set_rate();
                gpRequestPublisher->PublishSample();
                break;
            case '2':
                gpRequestPublisher->DeleteInstance();
                break;
            case '3':
                set_rate();
                gpRequestPublisher->PublishSample();
                break;
        }
    } while (gTerminate == false);

}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser              parser(argc, argv);

	register_signal_handler();

    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 100, "DDS Domain.");
    parser.run_and_exit_if_error();

    gDomain = parser.get<int32_t>("d");

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(gDomain);

    gpRequestPublisher = new CRotateRequestPublisher();

    bool retVal = CObjectiveStateMachine::Instance()->Initialize(gDomain);

    if ((retVal == true) && (gpRequestPublisher->Create(gDomain) == true))
    {
        top_level_menu();
    }

    std::cout << "Waiting for thread: "  << std::endl;

    if (threadId.joinable())
    {
        threadId.join();
    }

    gpRequestPublisher->DeleteInstance();
    gpRequestPublisher->Destroy();
    CObjectiveStateMachine::Instance()->Destroy();
}
