#ifndef __SIM_AUTODRILLER_STATE_PUBLISHER_H__
#define __SIM_AUTODRILLER_STATE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drill_simulation.h"
#include "drill_simulationSupport.h"

class CSimDrillStatePublisher : public TPublisher< Simulation::AutoDrillerState >
{
 public:
    CSimDrillStatePublisher();
    ~CSimDrillStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic setters
    void SetId(const DataTypes::Uuid id);
    void SetHookloadActual(const double hookload);
    void SetRopActual(const double ropActual);
    void SetWobActual(const double wobActual);
    void SetDifferentialPressureActual(const double differentialPressureActual);
    void SetTorqueActual(const double torqueActual);
    void SetRopLimit(const double ropLimit);
    void SetWobLimit(const double wobLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
    void SetRopTarget(const double ropTarget);
    void SetWobTarget(const double wobTarget);
    void SetDifferentialPressureTarget(const double differentialPressureTarget);
    void SetTorqueTarget(const double torqueTarget);
};

#endif // __SIM_AUTODRILLER_STATE_PUBLISHER_H__
