#ifndef __DRILLING_REQUEST_PUBLISHER_H__
#define __DRILLING_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drilling.h"
#include "drillingSupport.h"

class CDrillingRequestPublisher : public TPublisher< Hoisting::DrillingRequest >
{
 public:
    CDrillingRequestPublisher();
    ~CDrillingRequestPublisher();

    bool Create(int32_t domain);
    bool PublishSample();

    // Topic getters
    void SetId(const DataTypes::Uuid id);
    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
    void SetRopLimit(const double ropLimit);
    void SetWobLimit(const double wobLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __DRILLING_REQUEST_PUBLISHER_H__
