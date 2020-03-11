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
#ifndef __NEC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__
#define __NEC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__

#include "subscriber.h"
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
class CCirculateStateSubscriber : public TSubscriber< nec::process::CirculateState >
{
    public:
        CCirculateStateSubscriber();
        ~CCirculateStateSubscriber();
        
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
        /// actual flow rate
        /// @return units::volume_velocity::cubic_meters_per_second_t actualFlowRate
        units::volume_velocity::cubic_meters_per_second_t GetActualFlowRate();
        /// actual standpipe pressure
        /// @return units::pressure::pascal_t actualStandpipePressure
        units::pressure::pascal_t GetActualStandpipePressure();
        /// minimum machine flow rate
        /// @return units::volume_velocity::cubic_meters_per_second_t minFlowRate
        units::volume_velocity::cubic_meters_per_second_t GetMinFlowRate();
        /// maximum machine flow rate
        /// @return units::volume_velocity::cubic_meters_per_second_t maxFlowRate
        units::volume_velocity::cubic_meters_per_second_t GetMaxFlowRate();
        /// minimum machine standpipe pressure
        /// @return units::pressure::pascal_t minStandpipePressure
        units::pressure::pascal_t GetMinStandpipePressure();
        /// maximum machine standpipe pressure
        /// @return units::pressure::pascal_t maxStandpipePressure
        units::pressure::pascal_t GetMaxStandpipePressure();
        /// requetsed flow rate
        /// @return units::volume_velocity::cubic_meters_per_second_t targetFlowRate
        units::volume_velocity::cubic_meters_per_second_t GetTargetFlowRate();

    protected:
        void DataAvailable(const nec::process::CirculateState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::CirculateState                                          m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__
