#include <iostream>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include "cmdparser.h"
#include "drilling_calibration_request_publisher.h"
#include "drilling_calibration_state_subscriber.h"

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
CDrillingCalibrationStateSubscriber gDrillingCalibrationStateSubscriber;

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

void display_data(const CalibrationHoisting::DrillingCalibrationState &data)
{
    double dValue;
    bool   bValue;

    if (gDrillingCalibrationStateSubscriber.GetWobProportional(dValue) == true)
    {
        std::cout << "WOB Proportional: " << dValue << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetWobIntegral(dValue) == true)
    {
        std::cout << "WOB Integral: " << dValue << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetDifferentialPressureProportional(dValue) == true)
    {
        std::cout << "Differential Pressure Proportional: " << dValue << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetDifferentialPressureIntegral(dValue) == true)
    {
        std::cout << "Differential Pressure Integral: " << dValue << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetTorqueProportional(dValue) == true)
    {
        std::cout << "TORQUE Proportional: " << dValue << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetTorqueIntegral(dValue) == true)
    {
        std::cout << "TORQUE Integral: " << dValue << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetRopMode(bValue) == true)
    {
        std::cout << "Rop Mode: " << ((bValue == true)  ? "true": "false") << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetWobMode(bValue) == true)
    {
        std::cout << "Wob Mode: " << ((bValue == true)  ? "true": "false") << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetTorqueMode(bValue) == true)
    {
        std::cout << "Torque Mode: " << ((bValue == true)  ? "true": "false") << std::endl;
    }

    if (gDrillingCalibrationStateSubscriber.GetDifferentialPressureMode(bValue) == true)
    {
        std::cout << "Differential Presure Mode: " << ((bValue == true)  ? "true": "false") << std::endl;
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

        if (gDrillingCalibrationStateSubscriber.Create(domain) == true)
        {
            gDrillingCalibrationStateSubscriber.OnDataAvailable([&](const CalibrationHoisting::DrillingCalibrationState &data)
                                                                  {
                                                                      display_data(data);
                                                                  });

            top_level_menu();
        }
    }
}
