#include <iostream>
#include <stdint.h>
#ifdef _LINUX
#include <unistd.h>
#endif
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "wellbore_state_publisher.h"

bool gTerminate = false;
int32_t gHoleDepth = -1;
int32_t gBitDepth = -1;

CWellboreStatePublisher *gpStatePublisher = nullptr;
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
    while (gTerminate == false)
    {
        gpStatePublisher->PublishSample();
        gBitDepth += 1;
        gHoleDepth += 1;
        gpStatePublisher->SetBitDepth(gBitDepth);
        gpStatePublisher->SetHoleDepth(gHoleDepth);
        usleep(100 * 1000);
    }
}

void set_bit_depth()
{
    std::cout << "Bit Depth: ";
    std::cin >> gBitDepth;    
    gpStatePublisher->SetBitDepth(gBitDepth);
}

void set_hole_depth()
{
    std::cout << "Hole Depth: ";
    std::cin >> gHoleDepth;
    gpStatePublisher->SetHoleDepth(gHoleDepth);
}

void top_level_menu()
{
    char choice;

    do
    {
        std::cout << std::endl;
        std::cout << "Wellbore State Publisher" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "1. Publish bit depth and hole depth" << std::endl;
        std::cout << "2. Publish bit depth" << std::endl;
        std::cout << "3. Publish hole depth" << std::endl;
        std::cout << "4. Publish bit depth and hole depth continuously" << std::endl;
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
                set_bit_depth();
                set_hole_depth();
                gpStatePublisher->PublishSample();
                break;
            case '2':
                set_bit_depth();
                gpStatePublisher->PublishSample();
                break;
            case '3':
                set_hole_depth();
                gpStatePublisher->PublishSample();
                break;
            case '4':
                set_bit_depth();
                set_hole_depth();
                threadId = std::thread(publish_thread);
                break;
        }
    } while (gTerminate == false);

}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser              parser(argc, argv);
    int32_t                  domain;

#ifdef _LINUX
	register_signal_handler();
#endif
    parser.set_optional<int32_t>("d", "domain", 100, "DDS Domain.");
    parser.run_and_exit_if_error();

    domain = parser.get<int32_t>("d");

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(domain);

    gpStatePublisher = new CWellboreStatePublisher();

    if (gpStatePublisher->Create(domain) == true)
    {
        gpStatePublisher->CreateInstance();
        top_level_menu();
    }

    gpStatePublisher->Destroy();
    CDomainParticipant::Instance()->Destroy();
}
