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
#ifndef __NEC_PROCESS_DRILL_STATE_SUBSCRIBER_H__
#define __NEC_PROCESS_DRILL_STATE_SUBSCRIBER_H__

#include "subscriber.h"
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
class CDrillStateSubscriber : public TSubscriber< nec::process::DrillState >
{
    public:
        CDrillStateSubscriber();
        ~CDrillStateSubscriber();
        
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
        /// Actual measured rate of penetration (ROP)
        /// @return units::velocity::meters_per_second_t ropActual
        units::velocity::meters_per_second_t GetRopActual();
        /// Actual measured weight on bit (WOB)
        /// @return units::force::newton_t wobActual
        units::force::newton_t GetWobActual();
        /// actual differential pressure
        /// @return units::pressure::pascal_t diffPressureActual
        units::pressure::pascal_t GetDiffPressureActual();
        /// actual differential torque
        /// @return units::torque::newton_meter_t torqueActual
        units::torque::newton_meter_t GetTorqueActual();
        /// machine rate of penetration limit
        /// @return units::velocity::meters_per_second_t ropLimit
        units::velocity::meters_per_second_t GetRopLimit();
        /// machine weight on bit limit
        /// @return units::force::newton_t wobLimit
        units::force::newton_t GetWobLimit();
        /// machine differential pressure limit
        /// @return units::pressure::pascal_t diffPressureLimit
        units::pressure::pascal_t GetDiffPressureLimit();
        /// machine differential torque limit
        /// @return units::torque::newton_meter_t torqueLimit
        units::torque::newton_meter_t GetTorqueLimit();
        /// rate of penetration axis enabled
        /// @return bool ropMode
        bool GetRopMode();
        /// weight on bit axis enabled
        /// @return bool wobMode
        bool GetWobMode();
        /// differential pressure axis enabled
        /// @return bool diffPressureMode
        bool GetDiffPressureMode();
        /// differential torque mode enabled
        /// @return bool torqueMode
        bool GetTorqueMode();
        /// target rate of penetration
        /// @return units::velocity::meters_per_second_t ropTarget
        units::velocity::meters_per_second_t GetRopTarget();
        /// target weight on bit
        /// @return units::force::newton_t wobTarget
        units::force::newton_t GetWobTarget();
        /// target differential pressure
        /// @return units::pressure::pascal_t diffPressureTarget
        units::pressure::pascal_t GetDiffPressureTarget();
        /// target differential torque
        /// @return units::torque::newton_meter_t torqueTarget
        units::torque::newton_meter_t GetTorqueTarget();
        /// @return bool bitOnBottom
        bool GetBitOnBottom();

    protected:
        void DataAvailable(const nec::process::DrillState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::DrillState                                              m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_DRILL_STATE_SUBSCRIBER_H__
