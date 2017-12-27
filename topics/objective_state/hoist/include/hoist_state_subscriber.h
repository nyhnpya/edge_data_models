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
#ifndef __HOIST_STATE_SUBSCRIBER_H__ 
#define __HOIST_STATE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::force;
using namespace units::velocity;

class CHoistStateSubscriber : public TSubscriber< nec::process::HoistState >
{
 public:
    typedef std::function<void(const nec::process::HoistState &data)> OnDataAvailableEvent;

    CHoistStateSubscriber();
    ~CHoistStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetStatus(DataTypes::Status &status);
    bool GetActualHookload(newton_t &actualHookload);
    bool GetActualVelocity(meters_per_second_t &actualVelocity);
    bool GetActualPosition(meter_t &actualPosition);
    bool GetMaxHoistVelocity(meters_per_second_t &maxHoistVelocity);
    bool GetMaxLowerVelocity(meters_per_second_t  &maxLowerVelocity);
    bool GetMaxHoistPosition(meter_t &maxHoistPosition);
    bool GetMaxLowerPosition(meter_t &maxLowerPosition);
    bool GetMaxHookload(newton_t &maxHookload);
    bool GetTargetVelocity(meters_per_second_t &targetVelocity);
    bool GetTargetPosition(meter_t &targetPosition);

 protected:
    ///Derived Methods
    void DataAvailable(const nec::process::HoistState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    nec::process::HoistState m_data;
    DDS::SampleInfo          m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent     m_pOnDataAvailable;
    OnDataDisposedEvent      m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __HOIST_STATE_SUBSCRIBER_H__ 
