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
#ifndef __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_SUBSCRIBER_H__
#define __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "rotate_engineering.h"
#include "rotate_engineeringSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CRotateEngineeringStateSubscriber : public TSubscriber< nec::engineering::RotateEngineeringState >
{
    public:
        CRotateEngineeringStateSubscriber();
        ~CRotateEngineeringStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        
        CDdsUuid GetId();
        DataTypes::Status GetStatus();
        DataTypes::Time GetTimestamp();
        nec::engineering::State GetState();
        nec::engineering::Mode GetMode();
        units::angular_velocity::radians_per_second_t GetActualVelocity();
        units::torque::newton_meter_t GetActualTorque();
        units::angle::radian_t GetActualPosition();
        double GetActualPower();
        units::angular_velocity::radians_per_second_t GetMinVelocity();
        units::angular_velocity::radians_per_second_t GetMaxVelocity();
        units::torque::newton_meter_t GetMinTorque();
        units::torque::newton_meter_t GetMaxTorque();
        units::angle::radian_t GetMinPosition();
        units::angle::radian_t GetMaxPosition();
        units::angular_velocity::radians_per_second_t GetTargetVelocity();
        units::torque::newton_meter_t GetTargetTorque();
        units::angle::radian_t GetTargetPosition();

    protected:
        void DataAvailable(const nec::engineering::RotateEngineeringState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

    private:
        nec::engineering::RotateEngineeringState          m_data;
        DDS::SampleInfo                                   m_sampleInfo;
        DDS::LivelinessChangedStatus                      m_livelinessStatus;
        OnDataAvailableEvent                              m_pOnDataAvailable;
        OnDataDisposedEvent                               m_pOnDataDisposed;
        OnLivelinessChangedEvent                          m_pOnLivelinessChanged;
        OnSubscriptionMatchedEvent                        m_pOnSubscriptionMatched;
};

#endif // __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_SUBSCRIBER_H__
