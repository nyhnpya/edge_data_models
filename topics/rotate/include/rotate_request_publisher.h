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
#ifndef __NEC_PROCESS_ROTATE_REQUEST_PUBLISHER_H__
#define __NEC_PROCESS_ROTATE_REQUEST_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "rotate.h"
#include "rotateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Request
/// @brief Requested state change in the rotation system.
///
/// ### Rotate Request
/// The rotate request interface is an ephemeral interface which issued by a requestor to modify the current state of the system.
/// The state of the interface will be published only when the publishing algorithm requests.
/// ### Rotate Request QoS
/// The following QoS events are available for any observer of the Rotate Request Topic.
/// | Policy                 | Definition                |
/// | :-------------------  | :--------------------------|
/// | Reliability           | Reliable                   |
/// | Durability            | Transient Local Durability |
/// | History               | Last sample                |
/// | OnDataAvailable       | |
/// | OnLivelinessLost      | |
/// | OnDataDisposed        | |
///
class CRotateRequestPublisher : public TKeyedDataWriter< nec::process::RotateRequest >
{
    public:
        CRotateRequestPublisher();
        ~CRotateRequestPublisher();
        
        bool Create(const std::string &publisher);
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
        /// requested traget in rad/s
        /// @param units::angular_velocity::radians_per_second_t targetRate
        void SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate);
};

#endif // __NEC_PROCESS_ROTATE_REQUEST_PUBLISHER_H__
