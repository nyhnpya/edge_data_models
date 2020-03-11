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
#ifndef __NEC_PROCESS_HOIST_STATE_SUBSCRIBER_H__
#define __NEC_PROCESS_HOIST_STATE_SUBSCRIBER_H__

#include "subscriber.h"
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
class CHoistStateSubscriber : public TSubscriber< nec::process::HoistState >
{
    public:
        CHoistStateSubscriber();
        ~CHoistStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// id of requestor
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// id of current objective
        /// @return CDdsUuid objectiveId
        CDdsUuid GetObjectiveId();
        /// timestamp when the data was published.
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// status of ciruclation system
        /// @return DataTypes::Status status
        DataTypes::Status GetStatus();
        /// actual hookload
        /// @return units::force::newton_t actualHookload
        units::force::newton_t GetActualHookload();
        /// actual velicoty in m/s
        /// @return units::velocity::meters_per_second_t actualVelocity
        units::velocity::meters_per_second_t GetActualVelocity();
        /// actual position in m
        /// @return units::length::meter_t actualPosition
        units::length::meter_t GetActualPosition();
        /// machine maximum hookload
        /// @return units::force::newton_t maxHookload
        units::force::newton_t GetMaxHookload();
        /// machine maximum hoisting velocity in m/s
        /// @return units::velocity::meters_per_second_t maxHoistVelocity
        units::velocity::meters_per_second_t GetMaxHoistVelocity();
        /// machine maximum lowering velocity in m/s
        /// @return units::velocity::meters_per_second_t maxLowerVelocity
        units::velocity::meters_per_second_t GetMaxLowerVelocity();
        /// machine maximum hoisting position in m
        /// @return units::length::meter_t maxHoistPosition
        units::length::meter_t GetMaxHoistPosition();
        /// machine maximum lowering position in m/s
        /// @return units::length::meter_t maxLowerPosition
        units::length::meter_t GetMaxLowerPosition();
        /// requested target velocity
        /// @return units::velocity::meters_per_second_t targetVelocity
        units::velocity::meters_per_second_t GetTargetVelocity();
        /// requested target position
        /// @return units::length::meter_t targetPosition
        units::length::meter_t GetTargetPosition();

    protected:
        void DataAvailable(const nec::process::HoistState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::HoistState                                              m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_HOIST_STATE_SUBSCRIBER_H__
