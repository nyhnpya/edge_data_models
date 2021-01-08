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
#ifndef __NEC_PROCESS_WELLBORE_STATE_PUBLISHER_H__
#define __NEC_PROCESS_WELLBORE_STATE_PUBLISHER_H__

#include "keyed_data_writer.h"
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
class CWellboreStatePublisher : public TKeyedDataWriter< nec::process::WellboreState >
{
    public:
        CWellboreStatePublisher();
        ~CWellboreStatePublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// Unique id of publisher.
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// Timestamp when the data was published.
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// Reported hole depth.
        /// @param units::length::meter_t holeDepth
        void SetHoleDepth(const units::length::meter_t holeDepth);
        /// Measured depth of bit.
        /// @param units::length::meter_t bitDepth
        void SetBitDepth(const units::length::meter_t bitDepth);
};

#endif // __NEC_PROCESS_WELLBORE_STATE_PUBLISHER_H__
