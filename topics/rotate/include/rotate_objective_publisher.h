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
#ifndef __NEC_PROCESS_ROTATE_OBJECTIVE_PUBLISHER_H__
#define __NEC_PROCESS_ROTATE_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Objective
/// @brief Current requested state change in the rotation system.
///
///
class CRotateObjectivePublisher : public TPublisher< nec::process::RotateObjective >
{
    public:
        CRotateObjectivePublisher();
        ~CRotateObjectivePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
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
        /// requested traget in rad/s
        /// @param units::angular_velocity::radians_per_second_t targetRate
        void SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate);
};

#endif // __NEC_PROCESS_ROTATE_OBJECTIVE_PUBLISHER_H__
