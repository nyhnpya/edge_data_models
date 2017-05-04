#ifndef __HOIST_OBJECTIVE_PUBLISHER_H__ 
#define __HOIST_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistObjectivePublisher : public TPublisher< ProcessHoist::HoistObjective >
{
 public:
    CHoistObjectivePublisher();
    ~CHoistObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetId(const DataTypes::Uuid &id);
    void SetEstimatedDuration(DataTypes::Time &estimatedDuration);
    void SetTargetVelocity(double &targetVelocity);
    void SetTargetDestination(double &targetDestination);
};

#endif // __HOIST_OBJECTIVE_PUBLISHER_H__ 
