#include <iostream>
#include <stdint.h>
#include <unistd.h>
#include <condition_variable>
#include <mutex>
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "edge_data_store.h"
#include "plant_interface.h"

EdgeTypeBoolPtr gioAutoDrillerEnabled;

bool terminate = false;
std::mutex terminateMutex;
std::condition_variable terminateCondition;
std::thread threadId;

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
        std::cout << "1. Enable Autodrill" << std::endl;
        std::cout << "2. Disable Autodrill" << std::endl;
        std::cout << "3. Enable clean hole objective" << std::endl;
        std::cout << "4. Enable casing objective" << std::endl;
        std::cout << "5. Enable none objective" << std::endl;
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
                gioAutoDrillerEnabled->SetValue(true);
                gioAutoDrillerEnabled->GetProtocol()->WriteData();
                break;
            case '2':
                gioAutoDrillerEnabled->SetValue(false);
                gioAutoDrillerEnabled->GetProtocol()->WriteData();
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                break;
        }
    } while (terminate == false);

}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser              parser(argc, argv);

	register_signal_handler();

    parser.set_required<std::string>("f", "configFile", "objective.json", "External configuration file.");
    parser.run_and_exit_if_error();

    std::string configFile = parser.get<std::string>("f");

    if (CPlantInterface::Instance()->Initialize(configFile) == true)
    {
        gioAutoDrillerEnabled = CEdgeDataStore::Instance()->GetTypeBool("AutoDriller.enabled");

        CPlantInterface::Instance()->Start();

        threadId = std::thread(top_level_menu);

        std::unique_lock<std::mutex> lk(terminateMutex);
        terminateCondition.wait(lk);
        LOG_INFO("Signal received: terminating process");

        if (threadId.joinable())
        {
            threadId.join();
        }

        CPlantInterface::Instance()->Stop();
    }
    else
    {
        LOG_FATAL("Failed to initialize plant interface");
        return 1;
    }
}
