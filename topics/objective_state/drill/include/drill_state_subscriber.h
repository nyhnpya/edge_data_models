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
#ifndef __DRILL_STATE_SUBSCRIBER_H__
#define __DRILL_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "drill.h"
#include "drillSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::velocity;
using namespace units::force;
using namespace units::torque;
using namespace units::pressure;

class CDrillStateSubscriber : public TSubscriber< nec::process::DrillState >
{
 public:
    CDrillStateSubscriber();
    ~CDrillStateSubscriber();

        // Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    DataTypes::Uuid GetId();
    DataTypes::Time GetTimestamp();
    meters_per_second_t GetRopActual();
    newton_t GetWobActual();
    pascal_t GetDiffPressureActual();
    newton_meter_t GetTorqueActual();
    meters_per_second_t GetRopLimit();
    newton_t GetWobLimit();
    pascal_t GetDiffPressureLimit();
    newton_meter_t GetTorqueLimit();
    bool GetRopMode();
    bool GetWobMode();
    bool GetDiffPressureMode();
    bool GetTorqueMode();
    meters_per_second_t GetRopTarget();
    newton_t GetWobTarget();
    pascal_t GetDiffPressureTarget();
    newton_meter_t GetTorqueTarget();

    // Topic status
    bool ValidData();
    bool ValidSubscription();

 protected:
    void DataAvailable(const nec::process::DrillState &data,
		       const DDS::SampleInfo &sampleInfo);
    
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    bool                         m_subscriptionMatched;
    nec::process::DrillState      m_data;
    DDS::SampleInfo              m_sampleInfo;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __DRILL_STATE_SUBSCRIBER_H__
