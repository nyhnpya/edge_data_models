#ifndef __HOIST_OBJECTIVE_PUBLISHER_H__ 
#define __HOIST_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::velocity;

class CHoistObjectivePublisher : public TPublisher< nec::process::HoistObjective >
{
 public:
    CHoistObjectivePublisher();
    ~CHoistObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetTargetVelocity(meters_per_second_t targetVelocity);
    void SetTargetPosition(meter_t targetPosition);
};

#endif // __HOIST_OBJECTIVE_PUBLISHER_H__ 
