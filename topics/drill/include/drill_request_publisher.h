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
#ifndef __NEC_PROCESS_DRILL_REQUEST_PUBLISHER_H__
#define __NEC_PROCESS_DRILL_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "drill.h"
#include "drillSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Request
/// @brief Requested state change in the drilling system.
///
/// <div id='drill_request' />
/// Drill Request is an epermeral topic which can only be published when the current system objective is "Drilling".
/// This topic is used to request changes in the operational drilling parameters.
/// This is an aperiodic topic and should only be published when a value changes.
/// #### Drill Request QoS
/// The following QoS events are available for any observer who subscribes to the Drill Requst Topic.
/// | Policy                 | Definition                |
/// | :-------------------  | :--------------------------|
/// | Reliability           | Reliable                   |
/// | Durability            | Transient Local Durability |
/// | History               | Last sample                |
/// | OnDataAvailable       | |
/// | OnLivelinessLost      | |
/// | OnDataDisposed        | |
///
class CDrillRequestPublisher : public TPublisher< nec::process::DrillRequest >
{
    public:
        CDrillRequestPublisher();
        ~CDrillRequestPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// id of requestor
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// id of current objective
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// priority of the request
        /// @param DataTypes::Priority priority
        void SetPriority(const DataTypes::Priority priority);
        /// time requester needs the resource
        /// @param DataTypes::Time timeNeeded
        void SetTimeNeeded(const DataTypes::Time timeNeeded);
        /// estimated duration requestor needs the resource
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
};

#endif // __NEC_PROCESS_DRILL_REQUEST_PUBLISHER_H__
