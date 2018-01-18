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
#ifndef __CIRCULATE_STATE_SUBSCRIBER_H__ 
#define __CIRCULATE_STATE_SUBSCRIBER_H__ 

#include <mutex>
#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::pressure;

class CCirculateStateSubscriber : public TSubscriber< nec::process::CirculateState>
{
public:
    CCirculateStateSubscriber();
    virtual ~CCirculateStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    DataTypes::Uuid GetId();
    DataTypes::Status GetStatus();
    double GetActualFlowRate();
    pascal_t GetActualStandpipePressure();
    double GetMinFlowRate();
    double GetMaxFlowRate();
    pascal_t GetMinStandpipePressure();
    pascal_t GetMaxStandpipePressure();
    double GetTargetFlowRate();

protected:
    ///Derived Methods
    void DataAvailable(const nec::process::CirculateState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
    nec::process::CirculateState m_data;
    DDS::SampleInfo                    m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent               m_pOnDataAvailable;
    OnDataDisposedEvent                m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __CIRCULATE_STATE_SUBSCRIBER_H__ 
