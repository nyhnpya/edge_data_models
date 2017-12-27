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
#ifndef __ROTATE_STATE_SUBSCRIBER_H__
#define __ROTATE_STATE_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"
#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::angular_velocity;

class CRotateStateSubscriber : public TSubscriber< nec::process::RotateState>
{
public:
    typedef std::function<void(const nec::process::RotateState &data)> OnDataAvailableEvent;

    CRotateStateSubscriber();
    virtual ~CRotateStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetStatus(DataTypes::Status &status);
    bool GetActualRate(radians_per_second_t &actualRate);
    bool GetMinRate(radians_per_second_t &minRate);
    bool GetMaxRate(radians_per_second_t &maxRate);
    bool GetTargetRate(radians_per_second_t &targetRate);

protected:
    ///Derived Methods
    void DataAvailable(const nec::process::RotateState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
    nec::process::RotateState    m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __ROTATE_STATE_SUBSCRIBER_H__
