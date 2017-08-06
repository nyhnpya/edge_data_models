#ifndef __SIMULATION_AUTODRILL_REQUEST_PUBLISHER_H__
#define __SIMULATION_AUTODRILL_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drill_simulation.h"
#include "drill_simulationSupport.h"

class CSimDrillRequestPublisher : public TPublisher< Simulation::AutoDrillerRequest >
{
 public:
    CSimDrillRequestPublisher();
    ~CSimDrillRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetId(const DataTypes::Uuid id);
    void SetHookload(const double hookload);
    void SetWobLimit(const double wobLimit);
    void SetRopLimit(const double ropLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __SIMULATION_AUTODRILL_REQUEST_PUBLISHER_H__
