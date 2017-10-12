#ifndef __DRILLING_REQUEST_PUBLISHER_H__
#define __DRILLING_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "drilling.h"
#include "drillingSupport.h"
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::length;
using namespace units::velocity;
using namespace units::force;
using namespace units::torque;
using namespace units::pressure;

class CDrillingRequestPublisher : public TPublisher< nec::process::DrillingRequest >
{
 public:
    CDrillingRequestPublisher();
    ~CDrillingRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
    void SetRopLimit(const meters_per_second_t ropLimit);
    void SetWobLimit(const newton_t wobLimit);
    void SetDifferentialPressureLimit(const pascal_t differentialPressureLimit);
    void SetTorqueLimit(const newton_meter_t torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __DRILLING_REQUEST_PUBLISHER_H__
