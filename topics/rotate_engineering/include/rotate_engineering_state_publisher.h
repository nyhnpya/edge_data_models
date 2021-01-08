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
#ifndef __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_PUBLISHER_H__
#define __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_PUBLISHER_H__

#include "keyed_data_writer.h"
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
class CRotateEngineeringStatePublisher : public TKeyedDataWriter< nec::engineering::RotateEngineeringState >
{
    public:
        CRotateEngineeringStatePublisher();
        ~CRotateEngineeringStatePublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param DataTypes::Status status
        void SetStatus(const DataTypes::Status status);
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// @param nec::engineering::State state)
        void SetState(nec::engineering::State state);
        /// @param nec::engineering::Mode mode)
        void SetMode(nec::engineering::Mode mode);
        /// @param units::angular_velocity::radians_per_second_t actualVelocity
        void SetActualVelocity(const units::angular_velocity::radians_per_second_t actualVelocity);
        /// @param units::torque::newton_meter_t actualTorque
        void SetActualTorque(const units::torque::newton_meter_t actualTorque);
        /// @param units::angle::radian_t actualPosition
        void SetActualPosition(const units::angle::radian_t actualPosition);
        /// @param double actualPower
        void SetActualPower(const double actualPower);
        /// @param units::angular_velocity::radians_per_second_t minVelocity
        void SetMinVelocity(const units::angular_velocity::radians_per_second_t minVelocity);
        /// @param units::angular_velocity::radians_per_second_t maxVelocity
        void SetMaxVelocity(const units::angular_velocity::radians_per_second_t maxVelocity);
        /// @param units::torque::newton_meter_t minTorque
        void SetMinTorque(const units::torque::newton_meter_t minTorque);
        /// @param units::torque::newton_meter_t maxTorque
        void SetMaxTorque(const units::torque::newton_meter_t maxTorque);
        /// @param units::angle::radian_t minPosition
        void SetMinPosition(const units::angle::radian_t minPosition);
        /// @param units::angle::radian_t maxPosition
        void SetMaxPosition(const units::angle::radian_t maxPosition);
        /// @param units::angular_velocity::radians_per_second_t targetVelocity
        void SetTargetVelocity(const units::angular_velocity::radians_per_second_t targetVelocity);
        /// @param units::torque::newton_meter_t targetTorque
        void SetTargetTorque(const units::torque::newton_meter_t targetTorque);
        /// @param units::angle::radian_t targetPosition
        void SetTargetPosition(const units::angle::radian_t targetPosition);
};

#endif // __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_PUBLISHER_H__
