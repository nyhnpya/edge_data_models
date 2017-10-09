#ifndef __HOIST_STATE_PUBLISHER_H__ 
#define __HOIST_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::length;
using namespace units::velocity;

class CHoistStatePublisher : public TPublisher< nec::process::HoistState >
{
 public:
    CHoistStatePublisher();
    ~CHoistStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetStatus(const DataTypes::Status status);
    void SetActualVelocity(meters_per_second_t actualVelocity);
    void SetActualPosition(meter_t actualPosition);
    void SetMaxHoistVelocity(meters_per_second_t maxHoistVelocity);
    void SetMaxLowerVelocity(meters_per_second_t maxLowerVelocity);
    void SetMaxHoistPosition(meter_t maxHoistPosition);
    void SetMaxLowerPosition(meter_t maxLowerPosition);
    void SetTargetVelocity(meters_per_second_t targetVelocity);
    void SetTargetPosition(meter_t targetPosition);
};

#endif // __HOIST_STATE_PUBLISHER_H__ 
