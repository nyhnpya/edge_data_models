#ifndef __DRILLING_STATE_PUBLISHER_H__
#define __DRILLING_STATE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drilling.h"
#include "drillingSupport.h"

class CDrillingStatePublisher : public TPublisher< Hoisting::DrillingState >
{
 public:
    CDrillingStatePublisher();
    ~CDrillingStatePublisher();

    bool Create(int32_t domain);
    bool PublishSample();

    // Topic getters
    void SetId(const DataTypes::Uuid id);
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetRopActual(const double ropActual);
    void SetWobActual(const double wobActual);
    void SetDifferentialPressureActual(const double differentialPressureActual);
    void SetTorqueActual(const double torqueActual);
    void SetRopLimit(const double ropLimit);
    void SetWobLimit(const double wobLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
    void SetRopTarget(const double ropTarget);
    void SetWobTarget(const double wobTarget);
    void SetDifferentialPressureTarget(const double differentialPressureTarget);
    void SetTorqueTarget(const double torqueTarget);
    void SetBitOnBottom(const bool bitOnBottom);
};

#endif // __DRILLING_STATE_PUBLISHER_H__
