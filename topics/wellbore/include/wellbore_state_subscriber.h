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
#ifndef __NEC_PROCESS_WELLBORE_STATE_SUBSCRIBER_H__
#define __NEC_PROCESS_WELLBORE_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "wellbore.h"
#include "wellboreSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Actual
/// @brief Wellbore state information.
///
/// ### Wellbore
/// The wellbore state interface is a persistent interface which is guaranteed to be available by the system at all times regardless of the current system objective.
/// The state of the interface will be published only when any of the interface contents change.
/// This interface is available for consumption by any actor of the system interested in observing the current state of the bit in relation to the bottom of the wellbore.
/// The interface is guaranteed to publish only at a frequency equal to or less than that of the underlying control system.
/// ### Rotate Request QoS
/// The following QoS events are available for any observer of the Rotate Request Topic.
/// | Policy                | Definition                 |
/// | :-------------------  | :--------------------------|
/// | Reliability           | Reliable                   |
/// | Durability            | Transient Local Durability |
/// | History               | Last 3000 samples          |
/// | OnDataAvailable       | |
/// | OnLivelinessLost      | |
/// | OnDataDisposed        | |
///
class CWellboreStateSubscriber : public TSubscriber< nec::process::WellboreState >
{
    public:
        CWellboreStateSubscriber();
        ~CWellboreStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// Unique id of publisher.
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return CDdsUuid objectiveId
        CDdsUuid GetObjectiveId();
        /// Timestamp when the data was published.
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// Reported hole depth.
        /// @return units::length::meter_t holeDepth
        units::length::meter_t GetHoleDepth();
        /// Measured depth of hole.
        /// @return units::length::meter_t measuredDepth
        units::length::meter_t GetMeasuredDepth();
        /// Measured true vertical depth of hole.
        /// @return units::length::meter_t trueVerticalDepth
        units::length::meter_t GetTrueVerticalDepth();
        /// Measured depth of bit.
        /// @return units::length::meter_t bitDepth
        units::length::meter_t GetBitDepth();

    protected:
        void DataAvailable(const nec::process::WellboreState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::WellboreState                                           m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_WELLBORE_STATE_SUBSCRIBER_H__
