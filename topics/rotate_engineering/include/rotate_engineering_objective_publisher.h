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
#ifndef __NEC_ENGINEERING_ROTATE_ENGINEERING_OBJECTIVE_PUBLISHER_H__
#define __NEC_ENGINEERING_ROTATE_ENGINEERING_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "rotate_engineering.h"
#include "rotate_engineeringSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup NonSafeRotationFunctions
/// @brief current requested state change in the rotation system.
///
///
class CRotateEngineeringObjectivePublisher : public TPublisher< nec::engineering::RotateEngineeringObjective >
{
    public:
        CRotateEngineeringObjectivePublisher();
        ~CRotateEngineeringObjectivePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param DataTypes::Time estimatedDuration
        void SetEstimatedDuration(const DataTypes::Time estimatedDuration);
        /// @param units::angular_velocity::radians_per_second_t targetRate
        void SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate);
        /// @param units::torque::newton_meter_t targetTorque
        void SetTargetTorque(const units::torque::newton_meter_t targetTorque);
};

#endif // __NEC_ENGINEERING_ROTATE_ENGINEERING_OBJECTIVE_PUBLISHER_H__
