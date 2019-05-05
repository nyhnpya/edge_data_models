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
#ifndef __PROCESS_PLAN_DRILLING_LIMITS_SUBSCRIBER_H__
#define __PROCESS_PLAN_DRILLING_LIMITS_SUBSCRIBER_H__

#include "subscriber.h"
#include "drilling_limits.h"
#include "drilling_limitsSupport.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CDrillingLimitsSubscriber : public TSubscriber< process::plan::DrillingLimits >
{
    public:
        CDrillingLimitsSubscriber();
        ~CDrillingLimitsSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        
        DataTypes::Uuid GetId();
        units::length::meter_t GetStartDepth();
        units::length::meter_t GetEndDepth();
        units::velocity::meters_per_second_t GetRopMin();
        units::velocity::meters_per_second_t GetRopMax();
        units::force::newton_t GetWobMin();
        units::force::newton_t GetWobMax();
        units::pressure::pascal_t GetDiffPMin();
        units::pressure::pascal_t GetDiffPMax();
        units::torque::newton_meter_t GetTorqueMin();
        units::torque::newton_meter_t GetTorqueMax();
        units::angular_velocity::radians_per_second_t GetRotateMin();
        units::angular_velocity::radians_per_second_t GetRotateMax();

    protected:
        void DataAvailable(const process::plan::DrillingLimits &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

    private:
        process::plan::DrillingLimits                     m_data;
        DDS::SampleInfo                                   m_sampleInfo;
        DDS::LivelinessChangedStatus                      m_livelinessStatus;
        OnDataAvailableEvent                              m_pOnDataAvailable;
        OnDataDisposedEvent                               m_pOnDataDisposed;
        OnLivelinessChangedEvent                          m_pOnLivelinessChanged;
        OnSubscriptionMatchedEvent                        m_pOnSubscriptionMatched;
};

#endif // __PROCESS_PLAN_DRILLING_LIMITS_SUBSCRIBER_H__
