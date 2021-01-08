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
#ifndef __NEC_PROCESS_HOIST_STATE_PUBLISHER_H__
#define __NEC_PROCESS_HOIST_STATE_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "hoist.h"
#include "hoistSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Actual
/// @brief current state of the hoisting system.
///
/// The hoist state interface is a persistent interface which is guaranteed to be available by the system at all times regardless of the current system objective.
/// The state of the interface will be published only when any of the interface contents change.
/// This interface is available for consumption by any actor of the system interested in observing the current process state of the hoisting system.
/// The interface is guaranteed to publish only at a frequency equal to or less than that of the underlying control system.
/// *NOTE* : Please note the following semantics<br>
/// **velocity** is always in reference to block speed
/// <br>**position** is always in reference to elevator (*internal calculation of the control system may use both the elevator and the block to calculate position*).
/// ### Hoist State QoS
/// The following QoS events are available for any observer of the Hoist State Topic.
/// | Policy                 | Definition                |
/// | :-------------------  | :--------------------------|
/// | Reliability           | Reliable                   |
/// | Durability            | Transient Local Durability |
/// | History               | Last sample                |
/// | OnDataAvailable       | |
/// | OnLivelinessLost      | |
/// | OnDataDisposed        | |
///
class CHoistStatePublisher : public TKeyedDataWriter< nec::process::HoistState >
{
    public:
        CHoistStatePublisher();
        ~CHoistStatePublisher();
        
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
        /// status of ciruclation system
        /// @param DataTypes::Status status
        void SetStatus(const DataTypes::Status status);
        /// actual hookload
        /// @param units::force::newton_t actualHookload
        void SetActualHookload(const units::force::newton_t actualHookload);
        /// actual velicoty in m/s
        /// @param units::velocity::meters_per_second_t actualVelocity
        void SetActualVelocity(const units::velocity::meters_per_second_t actualVelocity);
        /// actual position in m
        /// @param units::length::meter_t actualPosition
        void SetActualPosition(const units::length::meter_t actualPosition);
        /// machine maximum hookload
        /// @param units::force::newton_t maxHookload
        void SetMaxHookload(const units::force::newton_t maxHookload);
        /// machine maximum hoisting velocity in m/s
        /// @param units::velocity::meters_per_second_t maxHoistVelocity
        void SetMaxHoistVelocity(const units::velocity::meters_per_second_t maxHoistVelocity);
        /// machine maximum lowering velocity in m/s
        /// @param units::velocity::meters_per_second_t maxLowerVelocity
        void SetMaxLowerVelocity(const units::velocity::meters_per_second_t maxLowerVelocity);
        /// machine maximum hoisting position in m
        /// @param units::length::meter_t maxHoistPosition
        void SetMaxHoistPosition(const units::length::meter_t maxHoistPosition);
        /// machine maximum lowering position in m/s
        /// @param units::length::meter_t maxLowerPosition
        void SetMaxLowerPosition(const units::length::meter_t maxLowerPosition);
        /// requested target velocity
        /// @param units::velocity::meters_per_second_t targetVelocity
        void SetTargetVelocity(const units::velocity::meters_per_second_t targetVelocity);
        /// requested target position
        /// @param units::length::meter_t targetPosition
        void SetTargetPosition(const units::length::meter_t targetPosition);
};

#endif // __NEC_PROCESS_HOIST_STATE_PUBLISHER_H__
