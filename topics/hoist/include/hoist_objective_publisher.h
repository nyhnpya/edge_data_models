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
#ifndef __NEC_PROCESS_HOIST_OBJECTIVE_PUBLISHER_H__
#define __NEC_PROCESS_HOIST_OBJECTIVE_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "hoist.h"
#include "hoistSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Objective
/// @brief current requested state change in the hoisting system.
///
///
class CHoistObjectivePublisher : public TKeyedDataWriter< nec::process::HoistObjective >
{
    public:
        CHoistObjectivePublisher();
        ~CHoistObjectivePublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// id of requestor
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// id of current objective
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// estimated duration requestor needs the resource
        /// @param DataTypes::Time estimatedDuration
        void SetEstimatedDuration(const DataTypes::Time estimatedDuration);
        /// requested target velocity
        /// @param units::velocity::meters_per_second_t targetVelocity
        void SetTargetVelocity(const units::velocity::meters_per_second_t targetVelocity);
        /// requested target position
        /// @param units::length::meter_t targetPosition
        void SetTargetPosition(const units::length::meter_t targetPosition);
};

#endif // __NEC_PROCESS_HOIST_OBJECTIVE_PUBLISHER_H__
