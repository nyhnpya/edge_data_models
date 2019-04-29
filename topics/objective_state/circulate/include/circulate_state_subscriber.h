/*
 *  Copyright (c) 2019 Ensign Energy Incorporated
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
#ifndef __NEC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__
#define __NEC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CCirculateStateSubscriber : public TSubscriber< nec::process::CirculateState >
{
    public:
        CCirculateStateSubscriber();
        ~CCirculateStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        
        DataTypes::Uuid GetId();
        DataTypes::Uuid GetObjectiveId();
        DataTypes::Time GetTimestamp();
        DataTypes::Status GetStatus();
        units::volume_velocity::cubic_meters_per_second_t GetActualFlowRate();
        units::pressure::pascal_t GetActualStandpipePressure();
        units::volume_velocity::cubic_meters_per_second_t GetMinFlowRate();
        units::volume_velocity::cubic_meters_per_second_t GetMaxFlowRate();
        units::pressure::pascal_t GetMinStandpipePressure();
        units::pressure::pascal_t GetMaxStandpipePressure();
        units::volume_velocity::cubic_meters_per_second_t GetTargetFlowRate//();

    protected:
        void DataAvailable(const nec::process::CirculateState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

    private:
        nec::process::CirculateState                      m_data;
        DDS::SampleInfo                                   m_sampleInfo;
        DDS::LivelinessChangedStatus                      m_livelinessStatus;
        OnDataAvailableEvent                              m_pOnDataAvailable;
        OnDataDisposedEvent                               m_pOnDataDisposed;
        OnLivelinessChangedEvent                          m_pOnLivelinessChanged;
        OnSubscriptionMatchedEvent                        m_pOnSubscriptionMatched;
};

#endif // __NEC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__
