#ifndef __HOIST_REQUEST_PUBLISHER_H__ 
#define __HOIST_REQUEST_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"
#undef pascal
#include "units.h"

using namespace units;
//using namespace units::literals;
using namespace units::length;
using namespace units::velocity;

class CHoistRequestPublisher : public TPublisher< nec::process::HoistRequest >
{
 public:
    CHoistRequestPublisher();
    ~CHoistRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
    void SetTargetVelocity(meters_per_second_t targetVelocity);
    void SetTargetPosition(meter_t targetPosition);
};

#endif // __HOIST_REQUEST_PUBLISHER_H__ 
