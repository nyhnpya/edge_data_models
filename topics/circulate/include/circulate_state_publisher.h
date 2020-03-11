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
#ifndef __NEC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__
#define __NEC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Actual
/// @brief current state of circulation system.
///
/// The circulation state interface is a persistent interface which is guaranteed to be available by the system at all times regardless of the current system objective.
/// The state of the interface will be published only when any of the interface contents change.
/// This interface is available for consumption by any actor of the system interested in observing the current process state of the circulation system.
/// The interface is guaranteed to publish only at a frequency equal to or less than that of the underlying control system.
/// ### Circulation State QoS
/// The following QoS events are available for any observer of the Circulate State Topic.
/// | Policy                 | Definition                |
/// | :-------------------  | :--------------------------|
/// | Reliability           | Reliable                   |
/// | Durability            | Transient Local Durability |
/// | History               | Last sample                |
/// | OnDataAvailable       | |
/// | OnLivelinessLost      | |
/// | OnDataDisposed        | |
///
class CCirculateStatePublisher : public TPublisher< nec::process::CirculateState >
{
    public:
        CCirculateStatePublisher();
        ~CCirculateStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
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
        /// status of ciruclation system
        /// @param DataTypes::Status status
        void SetStatus(const DataTypes::Status status);
        /// actual flow rate
        /// @param units::volume_velocity::cubic_meters_per_second_t actualFlowRate
        void SetActualFlowRate(const units::volume_velocity::cubic_meters_per_second_t actualFlowRate);
        /// actual standpipe pressure
        /// @param units::pressure::pascal_t actualStandpipePressure
        void SetActualStandpipePressure(const units::pressure::pascal_t actualStandpipePressure);
        /// minimum machine flow rate
        /// @param units::volume_velocity::cubic_meters_per_second_t minFlowRate
        void SetMinFlowRate(const units::volume_velocity::cubic_meters_per_second_t minFlowRate);
        /// maximum machine flow rate
        /// @param units::volume_velocity::cubic_meters_per_second_t maxFlowRate
        void SetMaxFlowRate(const units::volume_velocity::cubic_meters_per_second_t maxFlowRate);
        /// minimum machine standpipe pressure
        /// @param units::pressure::pascal_t minStandpipePressure
        void SetMinStandpipePressure(const units::pressure::pascal_t minStandpipePressure);
        /// maximum machine standpipe pressure
        /// @param units::pressure::pascal_t maxStandpipePressure
        void SetMaxStandpipePressure(const units::pressure::pascal_t maxStandpipePressure);
        /// requetsed flow rate
        /// @param units::volume_velocity::cubic_meters_per_second_t targetFlowRate
        void SetTargetFlowRate(const units::volume_velocity::cubic_meters_per_second_t targetFlowRate);
};

#endif // __NEC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__
