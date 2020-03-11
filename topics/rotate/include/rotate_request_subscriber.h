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
#ifndef __NEC_PROCESS_ROTATE_REQUEST_SUBSCRIBER_H__
#define __NEC_PROCESS_ROTATE_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
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
class CRotateRequestSubscriber : public TSubscriber< nec::process::RotateRequest >
{
    public:
        CRotateRequestSubscriber();
        ~CRotateRequestSubscriber();
        
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
        /// requested traget in rad/s
        /// @return units::angular_velocity::radians_per_second_t targetRate
        units::angular_velocity::radians_per_second_t GetTargetRate();

    protected:
        void DataAvailable(const nec::process::RotateRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::RotateRequest                                           m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_ROTATE_REQUEST_SUBSCRIBER_H__
