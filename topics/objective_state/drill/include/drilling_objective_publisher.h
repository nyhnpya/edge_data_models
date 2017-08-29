#ifndef __DRILLING_OBJECTIVE_PUBLISHER_H__
#define __DRILLING_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drilling.h"
#include "drillingSupport.h"

class CDrillingObjectivePublisher : public TPublisher< nec::process::DrillingObjective >
{
 public:
    CDrillingObjectivePublisher();
    ~CDrillingObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // setters
    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetRopLimit(const double ropLimit);
    void SetWobLimit(const double wobLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __DRILLING_OBJECTIVE_PUBLISHER_H__
