#ifndef __SIM_AUTODRILLER_OBJECTIVE_PUBLISHER_H__
#define __SIM_AUTODRILLER_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drill_simulation.h"
#include "drill_simulationSupport.h"

class CSimDrillObjectivePublisher : public TPublisher< Simulation::AutoDrillerObjective >
{
 public:
    CSimDrillObjectivePublisher();
    ~CSimDrillObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // setters
    void SetId(const DataTypes::Uuid id);
    void SetRopLimit(const double ropLimit);
    void SetWobLimit(const double wobLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __SIM_AUTODRILLER_OBJECTIVE_PUBLISHER_H__
