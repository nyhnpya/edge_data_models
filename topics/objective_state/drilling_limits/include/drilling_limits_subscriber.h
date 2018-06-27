/*
 *  Copyright (c) 2017 Ensign Energy Incorporated
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Ensign Energy Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Ensign Energy Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Ensign Energy Incorporated.
 */
#ifndef __DRILLING_LIMITS_SUBSCRIBER_H__
#define __DRILLING_LIMITS_SUBSCRIBER_H__

#include "subscriber.h"
#include "drilling_limits.h"
#include "drilling_limitsSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::angular_velocity;
using namespace units::velocity;
using namespace units::force;
using namespace units::torque;
using namespace units::pressure;

class CDrillingLimitsSubscriber : public TSubscriber< process::plan::DrillingLimits >
{
 public:
    CDrillingLimitsSubscriber();
    ~CDrillingLimitsSubscriber();

        // Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    DataTypes::Uuid GetId();
    meter_t GetStartDepth();
    meter_t GetEndDepth();
    meters_per_second_t GetRopMin();
    meters_per_second_t GetRopMax();
    newton_t GetWobMin();
    newton_t GetWobMax();
    pascal_t GetDifferentialPressureMin();
    pascal_t GetDifferentialPressureMax();
    newton_meter_t GetTorqueMin();
    newton_meter_t GetTorqueMax();
    radians_per_second_t GetRotateMin();
    radians_per_second_t GetRotateMax();

    // Topic status
    bool ValidData();
    bool ValidSubscription();

 protected:
    void DataAvailable(const process::plan::DrillingLimits &data,
		       const DDS::SampleInfo &sampleInfo);
    
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    bool                          m_subscriptionMatched;
    process::plan::DrillingLimits m_data;
    DDS::SampleInfo               m_sampleInfo;
    OnDataAvailableEvent          m_pOnDataAvailable;
    OnDataDisposedEvent           m_pOnDataDisposed;
    OnLivelinessChangedEvent      m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent    m_pOnSubscriptionMatched;
};

#endif // __DRILLING_LIMITS_SUBSCRIBER_H__
