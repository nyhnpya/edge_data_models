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

/// @ingroup NonSafeRotationFunctions
/// @brief current state of rotation system.
///
///
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
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return DataTypes::Status status
        DataTypes::Status GetStatus();
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// @return nec::engineering::State state)
        nec::engineering::State GetState();
        /// @return nec::engineering::Mode mode)
        nec::engineering::Mode GetMode();
        /// @return units::angular_velocity::radians_per_second_t actualVelocity
        units::angular_velocity::radians_per_second_t GetActualVelocity();
        /// @return units::torque::newton_meter_t actualTorque
        units::torque::newton_meter_t GetActualTorque();
        /// @return units::angle::radian_t actualPosition
        units::angle::radian_t GetActualPosition();
        /// @return double actualPower
        double GetActualPower();
        /// @return units::angular_velocity::radians_per_second_t minVelocity
        units::angular_velocity::radians_per_second_t GetMinVelocity();
        /// @return units::angular_velocity::radians_per_second_t maxVelocity
        units::angular_velocity::radians_per_second_t GetMaxVelocity();
        /// @return units::torque::newton_meter_t minTorque
        units::torque::newton_meter_t GetMinTorque();
        /// @return units::torque::newton_meter_t maxTorque
        units::torque::newton_meter_t GetMaxTorque();
        /// @return units::angle::radian_t minPosition
        units::angle::radian_t GetMinPosition();
        /// @return units::angle::radian_t maxPosition
        units::angle::radian_t GetMaxPosition();
        /// @return units::angular_velocity::radians_per_second_t targetVelocity
        units::angular_velocity::radians_per_second_t GetTargetVelocity();
        /// @return units::torque::newton_meter_t targetTorque
        units::torque::newton_meter_t GetTargetTorque();
        /// @return units::angle::radian_t targetPosition
        units::angle::radian_t GetTargetPosition();

    protected:
        void DataAvailable(const nec::engineering::RotateEngineeringState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::engineering::RotateEngineeringState                              m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_SUBSCRIBER_H__
