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
#ifndef __DRILLING_REQUEST_SUBSCRIBER_H__
#define __DRILLING_REQUEST_SUBSCRIBER_H__

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

class CDrillRequestSubscriber : public TSubscriber< nec::process::DrillingRequest >
{
 public:
    CDrillRequestSubscriber();
    ~CDrillRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // getters
    DataTypes::Uuid GetId();
    DataTypes::Priority GetPriority();
    DataTypes::Time GetTimeNeeded();
    DataTypes::Time GetDuration();
    meters_per_second_t GetRopLimit();
    newton_t GetWobLimit();
    pascal_t GetDifferentialPressureLimit();
    newton_meter_t GetTorqueLimit();
    bool GetRopMode();
    bool GetWobMode();
    bool GetDifferentialPressureMode();
    bool GetTorqueMode();

 protected:
    void DataAvailable(const nec::process::DrillingRequest &data,
               const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
    
 private:
    nec::process::DrillingRequest m_data;
    DDS::SampleInfo           m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent      m_pOnDataAvailable;
    OnDataDisposedEvent       m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
	OnSubscriptionMatchedEvent m_pOnSubscriptionMatched;
};

#endif // __DRILLING_REQUEST_SUBSCRIBER_H__
