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

#include "publisher.h"
#include "rotate_engineering.h"
#include "rotate_engineeringSupport.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CRotateEngineeringStatePublisher : public TPublisher< nec::engineering::RotateEngineeringState >
{
    public:
        CRotateEngineeringStatePublisher();
        ~CRotateEngineeringStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetId(DataTypes::Uuid &id);
        void SetStatus(const DataTypes::Status status);
        void SetTimestamp(const DataTypes::Time timestamp);
        void SetState(nec::engineering::State state);
        void SetMode(nec::engineering::Mode mode);
        void SetActualVelocity(const units::angular_velocity::radians_per_second_t actualVelocity);
        void SetActualTorque(const units::torque::newton_meter_t actualTorque);
        void SetActualPosition(const double actualPosition);
        void SetActualPower(const double actualPower);
        void SetMinVelocity(const units::angular_velocity::radians_per_second_t minVelocity);
        void SetMaxVelocity(const units::angular_velocity::radians_per_second_t maxVelocity);
        void SetMinTorque(const units::torque::newton_meter_t minTorque);
        void SetMaxTorque(const units::torque::newton_meter_t maxTorque);
        void SetMinPosition(const double minPosition);
        void SetMaxPosition(const double maxPosition);
        void SetTargetVelocity(const units::angular_velocity::radians_per_second_t targetVelocity);
        void SetTargetTorque(const units::torque::newton_meter_t targetTorque);
        void SetTargetPosition(const double targetPosition);
};

#endif // __NEC_ENGINEERING_ROTATE_ENGINEERING_STATE_PUBLISHER_H__
