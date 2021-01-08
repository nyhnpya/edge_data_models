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
#ifndef __NEC_PROCESS_ROTATE_STATE_PUBLISHER_H__
#define __NEC_PROCESS_ROTATE_STATE_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "rotate.h"
#include "rotateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Actual
/// @brief Current state of rotation system.
///
/// ### Rotate State
/// The rotation state interface is a persistent interface which is guaranteed to be available by the system at all times regardless of the current system objective.
/// The state of the interface will be published only when any of the interface contents change.
/// This interface is available for consumption by any actor of the system interested in observing the current process state of the rotation system.
/// The interface is guaranteed to publish only at a frequency equal to or less than that of the underlying control system.
/// ### Rotate State QoS
/// The following QoS policies are available for any observer of the Rotate State Topic.
/// | Policy                 | Definition                |
/// | :-------------------  | :--------------------------|
/// | Reliability           | Reliable                   |
/// | Durability            | Transient Local Durability |
/// | History               | Last sample                |
/// | OnDataAvailable       | |
/// | OnLivelinessLost      | |
/// | OnDataDisposed        | |
///
class CRotateStatePublisher : public TKeyedDataWriter< nec::process::RotateState >
{
    public:
        CRotateStatePublisher();
        ~CRotateStatePublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// id of requestor
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// id of current objective
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// timestamp when the data was published
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// Unique id of publisher
        /// @param DataTypes::Status status
        void SetStatus(const DataTypes::Status status);
        /// actual rate in rad/s
        /// @param units::angular_velocity::radians_per_second_t actualRate
        void SetActualRate(const units::angular_velocity::radians_per_second_t actualRate);
        /// minimum machine rate in rad/s
        /// @param units::angular_velocity::radians_per_second_t minRate
        void SetMinRate(const units::angular_velocity::radians_per_second_t minRate);
        /// maximum machine rate in rad/s
        /// @param units::angular_velocity::radians_per_second_t maxRate
        void SetMaxRate(const units::angular_velocity::radians_per_second_t maxRate);
        /// requested traget in rad/s
        /// @param units::angular_velocity::radians_per_second_t targetRate
        void SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate);
};

#endif // __NEC_PROCESS_ROTATE_STATE_PUBLISHER_H__
