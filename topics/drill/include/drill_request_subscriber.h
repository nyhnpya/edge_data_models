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
#ifndef __NEC_PROCESS_DRILL_REQUEST_SUBSCRIBER_H__
#define __NEC_PROCESS_DRILL_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
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
class CDrillRequestSubscriber : public TSubscriber< nec::process::DrillRequest >
{
    public:
        CDrillRequestSubscriber();
        ~CDrillRequestSubscriber();
        
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
        /// priority of the request
        /// @return DataTypes::Priority priority
        DataTypes::Priority GetPriority();
        /// time requester needs the resource
        /// @return DataTypes::Time timeNeeded
        DataTypes::Time GetTimeNeeded();
        /// estimated duration requestor needs the resource
        /// @return DataTypes::Time estimatedDuration
        DataTypes::Time GetEstimatedDuration();
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

    protected:
        void DataAvailable(const nec::process::DrillRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::DrillRequest                                            m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_DRILL_REQUEST_SUBSCRIBER_H__
