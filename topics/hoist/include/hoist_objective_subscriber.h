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
#ifndef __NEC_PROCESS_HOIST_OBJECTIVE_SUBSCRIBER_H__
#define __NEC_PROCESS_HOIST_OBJECTIVE_SUBSCRIBER_H__

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Objective
/// @brief current requested state change in the hoisting system.
///
///
class CHoistObjectiveSubscriber : public TSubscriber< nec::process::HoistObjective >
{
    public:
        CHoistObjectiveSubscriber();
        ~CHoistObjectiveSubscriber();
        
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
        /// estimated duration requestor needs the resource
        /// @return DataTypes::Time estimatedDuration
        DataTypes::Time GetEstimatedDuration();
        /// requested target velocity
        /// @return units::velocity::meters_per_second_t targetVelocity
        units::velocity::meters_per_second_t GetTargetVelocity();
        /// requested target position
        /// @return units::length::meter_t targetPosition
        units::length::meter_t GetTargetPosition();

    protected:
        void DataAvailable(const nec::process::HoistObjective &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::HoistObjective                                          m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_HOIST_OBJECTIVE_SUBSCRIBER_H__
