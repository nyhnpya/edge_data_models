#include <iostream>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <thread>
#include "cmdparser.h"
#include "drilling_calibration_request_publisher.h"

bool gTerminate = false;
double gWobProportional;
double gWobIntegral;
double gDifferentialPressureProportional;
double gDifferentialPressureIntegral;
double gTorqueProportional;
double gTorqueIntegral;
bool   gRopMode;
bool   gWobMode;
bool   gDifferentialPressureMode;
bool   gTorqueMode;

CDrillingCalibrationRequestPublisher gDrillingCalibrationRequestPublisher;

std::thread threadId;

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

void publish_thread()
{
    while (gTerminate == false)
    {
        gDrillingCalibrationRequestPublisher.PublishSample();

        gWobProportional++;
        gWobIntegral++;
        gDifferentialPressureProportional++;
        gDifferentialPressureIntegral++;
        gTorqueProportional++;
        gTorqueIntegral++;
        gDrillingCalibrationRequestPublisher.SetWobProportional(gWobProportional);
        gDrillingCalibrationRequestPublisher.SetWobIntegral(gWobIntegral);
        gDrillingCalibrationRequestPublisher.SetDifferentialPressureProportional(gDifferentialPressureProportional);
        gDrillingCalibrationRequestPublisher.SetDifferentialPressureIntegral(gDifferentialPressureIntegral);
        gDrillingCalibrationRequestPublisher.SetTorqueProportional(gTorqueProportional);
        gDrillingCalibrationRequestPublisher.SetTorqueIntegral(gTorqueIntegral);
        usleep(100 * 1000);
    }
}

void set_wob_proportional()
{
    std::cout << "WOB Proportional: ";
    std::cin >> gWobProportional;    
    gDrillingCalibrationRequestPublisher.SetWobProportional(gWobProportional);
}

void set_wob_integral()
{
    std::cout << "WOB Integral: ";
    std::cin >> gWobIntegral;
    gDrillingCalibrationRequestPublisher.SetWobIntegral(gWobIntegral);
}

void set_differential_pressure_proportional()
{
    std::cout << "Differntial Pressure Proportional: ";
    std::cin >> gDifferentialPressureProportional;    
    gDrillingCalibrationRequestPublisher.SetDifferentialPressureProportional(gDifferentialPressureProportional);
}

void set_differential_pressure_integral()
{
    std::cout << "Differential Pressure Integral: ";
    std::cin >> gDifferentialPressureIntegral;
    gDrillingCalibrationRequestPublisher.SetDifferentialPressureIntegral(gDifferentialPressureIntegral);
}

void set_torque_proportional()
{
    std::cout << "Torque Proportional: ";
    std::cin >> gTorqueProportional;    
    gDrillingCalibrationRequestPublisher.SetTorqueProportional(gTorqueProportional);
}

void set_torque_integral()
{
    std::cout << "Torque Integral: ";
    std::cin >> gTorqueIntegral;
    gDrillingCalibrationRequestPublisher.SetTorqueIntegral(gTorqueIntegral);
}

void top_level_menu()
{
    char choice;

    do
    {
        std::cout << std::endl;
        std::cout << "Wellbore State Publisher" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "1. Tune autodrill calibration parameters" << std::endl;
        std::cout << "2. Tune autodrill calibration parameters continuously" << std::endl;
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
                set_wob_proportional();
                set_wob_integral();
                set_differential_pressure_proportional();
                set_differential_pressure_integral();
                set_torque_proportional();
                set_torque_integral();
                gDrillingCalibrationRequestPublisher.PublishSample();
                break;
            case '2':
                set_wob_proportional();
                set_wob_integral();
                set_differential_pressure_proportional();
                set_differential_pressure_integral();
                set_torque_proportional();
                set_torque_integral();
                threadId = std::thread(publish_thread);
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

    if (gDrillingCalibrationRequestPublisher.Create(domain) == true)
    {
        gDrillingCalibrationRequestPublisher.CreateInstance();

        top_level_menu();
    }

    gDrillingCalibrationRequestPublisher.Destroy();
    CDomainParticipant::Instance()->Destroy();
}
