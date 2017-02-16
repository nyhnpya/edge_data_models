#include <ncurses.h>
#include <iostream>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include "cmdparser.h"
#include "drilling_calibration_request_subscriber.h"
#include "drilling_calibration_state_publisher.h"

bool gTerminate = false;
CDrillingCalibrationRequestSubscriber gDrillingCalibrationRequestSubscriber;
CDrillingCalibrationStatePublisher gDrillingCalibrationStatePublisher;

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

void new_publisher(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("new publisher");
}

void display_data(const CalibrationHoisting::DrillingCalibrationRequest &data)
{
    double dValue;
    bool   bValue;

    if (gDrillingCalibrationRequestSubscriber.GetWobProportional(dValue) == true)
    {
        gDrillingCalibrationStatePublisher.SetWobProportional(dValue);
        mvprintw(1, 1, "WOB Proportional: [%f]", dValue);
    }

    if (gDrillingCalibrationRequestSubscriber.GetWobIntegral(dValue) == true)
    {
        gDrillingCalibrationStatePublisher.SetWobIntegral(dValue);
        mvprintw(2, 1,"WOB Integral: [%f]", dValue);
    }

    if (gDrillingCalibrationRequestSubscriber.GetDifferentialPressureProportional(dValue) == true)
    {
        gDrillingCalibrationStatePublisher.SetDifferentialPressureProportional(dValue);
        mvprintw(3, 1,"Differential Pressure Proportional: [%f]", dValue);
    }

    if (gDrillingCalibrationRequestSubscriber.GetDifferentialPressureIntegral(dValue) == true)
    {
        gDrillingCalibrationStatePublisher.SetDifferentialPressureIntegral(dValue);
        mvprintw(4, 1,"Differential Pressure Integral: [%f]", dValue);
    }

    if (gDrillingCalibrationRequestSubscriber.GetTorqueProportional(dValue) == true)
    {
        gDrillingCalibrationStatePublisher.SetTorqueProportional(dValue);
        mvprintw(5, 1,"TORQUE Proportional: [%f]", dValue);
    }

    if (gDrillingCalibrationRequestSubscriber.GetTorqueIntegral(dValue) == true)
    {
        gDrillingCalibrationStatePublisher.SetTorqueIntegral(dValue);
        mvprintw(6, 1,"TORQUE Integral: [%f]", dValue);
    }

    refresh();
    gDrillingCalibrationStatePublisher.Publish();
}

int32_t main(int32_t argc, char **argv)
{
    cli::Parser parser(argc, argv);
    int32_t     domain;

    register_signal_handler();
    parser.set_optional<std::string>("c", "configFile", "pipe_handler.conf", "External configuration file.");
    parser.set_optional<int32_t>("d", "domain", 100, "DDS Domain.");
    parser.run_and_exit_if_error();

    domain = parser.get<int32_t>("d");

    initscr();

    CDomainParticipant::Instance()->SetQosFile("USER_QOS_PROFILES.xml", "EdgeBaseLibrary", "EdgeBaseProfile");
    CDomainParticipant::Instance()->Create(domain);

    if (gDrillingCalibrationStatePublisher.Create(domain) == true)
    {
        gDrillingCalibrationStatePublisher.CreateInstance();

        if (gDrillingCalibrationRequestSubscriber.Create(domain) == true)
        {
            gDrillingCalibrationRequestSubscriber.OnDataAvailable([&](const CalibrationHoisting::DrillingCalibrationRequest &data)
                                                                  {
                                                                      display_data(data);
                                                                  });

            gDrillingCalibrationRequestSubscriber.OnSubscriptionMatched([&](const DDS::SubscriptionMatchedStatus &status)
                                                                        {
                                                                            new_publisher(status);
                                                                        });

            while (gTerminate == false)
            {
                usleep(100 * 1000);
            }
        }
    }

    endwin();
}
