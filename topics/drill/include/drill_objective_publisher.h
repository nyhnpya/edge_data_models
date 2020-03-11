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
#ifndef __NEC_PROCESS_DRILL_OBJECTIVE_PUBLISHER_H__
#define __NEC_PROCESS_DRILL_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "drill.h"
#include "drillSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Objective
/// @brief current requested state change in the drilling system.
///
/// | Variable           | Description                                      | Data Type       | Unit  |
/// | ------------------ | ------------------------------------------------ | ----------------| ------|
/// | id                 | id of requestor                                  | DataTypes::Uuid | N/A   |
/// | objectiveId        | id of current objective                          | DataTypes::Uuid | N/A   |
/// | estimatedDuration  | estimated duration requestor needs the resource  | DataTypes::Time | N/A   |
///
class CDrillObjectivePublisher : public TPublisher< nec::process::DrillObjective >
{
    public:
        CDrillObjectivePublisher();
        ~CDrillObjectivePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// @param DataTypes::Time estimatedDuration
        void SetEstimatedDuration(const DataTypes::Time estimatedDuration);
        /// target rate of penetration
        /// @param units::velocity::meters_per_second_t ropTarget
        void SetRopTarget(const units::velocity::meters_per_second_t ropTarget);
        /// target weight on bit
        /// @param units::force::newton_t wobTarget
        void SetWobTarget(const units::force::newton_t wobTarget);
        /// target differential pressure
        /// @param units::pressure::pascal_t diffPressureTarget
        void SetDiffPressureTarget(const units::pressure::pascal_t diffPressureTarget);
        /// target differential torque
        /// @param units::torque::newton_meter_t torqueTarget
        void SetTorqueTarget(const units::torque::newton_meter_t torqueTarget);
        /// @param bool ropMode
        void SetRopMode(const bool ropMode);
        /// @param bool wobMode
        void SetWobMode(const bool wobMode);
        /// @param bool diffPressureMode
        void SetDiffPressureMode(const bool diffPressureMode);
        /// @param bool torqueMode
        void SetTorqueMode(const bool torqueMode);
};

#endif // __NEC_PROCESS_DRILL_OBJECTIVE_PUBLISHER_H__
