#ifndef __HOIST_OBJECTIVE_PUBLISHER_H__ 
#define __HOIST_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistObjectivePublisher : public TPublisher< nec::process::HoistObjective >
{
 public:
    CHoistObjectivePublisher();
    ~CHoistObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetEstimatedDuration(DataTypes::Time &estimatedDuration);
    void SetTargetVelocity(double &targetVelocity);
    void SetTargetPosition(double &targetPosition);
};

#endif // __HOIST_OBJECTIVE_PUBLISHER_H__ 
