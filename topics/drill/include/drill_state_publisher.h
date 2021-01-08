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
#ifndef __NEC_PROCESS_DRILL_STATE_PUBLISHER_H__
#define __NEC_PROCESS_DRILL_STATE_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "drill.h"
#include "drillSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Actual
/// @brief current state of the drilling system.
///
/// The Drill State topic will only be published when the current system objective is "Drilling".
/// The Drill State is an aperiodic interface which is published on change.
/// This topic is available by any actor of the system interested in observing the current state of the drilling process.
/// ### Drilling State QoS
/// The following QoS policies are available for any observer of the Drill State Topic.
/// | Policy                 | Definition                |
/// | :-------------------  | :--------------------------|
/// | Reliability           | Reliable                   |
/// | Durability            | Transient Local Durability |
/// | History               | Last sample                |
/// | OnDataAvailable       | |
/// | OnLivelinessLost      | |
/// | OnDataDisposed        | |
///
class CDrillStatePublisher : public TKeyedDataWriter< nec::process::DrillState >
{
    public:
        CDrillStatePublisher();
        ~CDrillStatePublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// id of requestor
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// id of current objective
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// timestamp when the data was published.
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// Actual measured rate of penetration (ROP)
        /// @param units::velocity::meters_per_second_t ropActual
        void SetRopActual(const units::velocity::meters_per_second_t ropActual);
        /// Actual measured weight on bit (WOB)
        /// @param units::force::newton_t wobActual
        void SetWobActual(const units::force::newton_t wobActual);
        /// actual differential pressure
        /// @param units::pressure::pascal_t diffPressureActual
        void SetDiffPressureActual(const units::pressure::pascal_t diffPressureActual);
        /// actual differential torque
        /// @param units::torque::newton_meter_t torqueActual
        void SetTorqueActual(const units::torque::newton_meter_t torqueActual);
        /// machine rate of penetration limit
        /// @param units::velocity::meters_per_second_t ropLimit
        void SetRopLimit(const units::velocity::meters_per_second_t ropLimit);
        /// machine weight on bit limit
        /// @param units::force::newton_t wobLimit
        void SetWobLimit(const units::force::newton_t wobLimit);
        /// machine differential pressure limit
        /// @param units::pressure::pascal_t diffPressureLimit
        void SetDiffPressureLimit(const units::pressure::pascal_t diffPressureLimit);
        /// machine differential torque limit
        /// @param units::torque::newton_meter_t torqueLimit
        void SetTorqueLimit(const units::torque::newton_meter_t torqueLimit);
        /// rate of penetration axis enabled
        /// @param bool ropMode
        void SetRopMode(const bool ropMode);
        /// weight on bit axis enabled
        /// @param bool wobMode
        void SetWobMode(const bool wobMode);
        /// differential pressure axis enabled
        /// @param bool diffPressureMode
        void SetDiffPressureMode(const bool diffPressureMode);
        /// differential torque mode enabled
        /// @param bool torqueMode
        void SetTorqueMode(const bool torqueMode);
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
        /// @param bool bitOnBottom
        void SetBitOnBottom(const bool bitOnBottom);
};

#endif // __NEC_PROCESS_DRILL_STATE_PUBLISHER_H__
