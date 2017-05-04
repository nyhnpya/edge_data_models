#ifndef __HOIST_REQUEST_PUBLISHER_H__ 
#define __HOIST_REQUEST_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistRequestPublisher : public TPublisher< ProcessHoist::HoistRequest >
{
 public:
    CHoistRequestPublisher();
    ~CHoistRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetId(const DataTypes::Uuid id);
    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
    void SetTargetVelocity(double targetVelocity);
    void SetTargetDestination(double targetDestination);
};

#endif // __HOIST_REQUEST_PUBLISHER_H__ 
