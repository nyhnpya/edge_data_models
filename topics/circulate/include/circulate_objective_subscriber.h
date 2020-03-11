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
#ifndef __NEC_PROCESS_CIRCULATE_OBJECTIVE_SUBSCRIBER_H__
#define __NEC_PROCESS_CIRCULATE_OBJECTIVE_SUBSCRIBER_H__

#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Objective
/// @brief current requested state change in the circulation system.
///
///
class CCirculateObjectiveSubscriber : public TSubscriber< nec::process::CirculateObjective >
{
    public:
        CCirculateObjectiveSubscriber();
        ~CCirculateObjectiveSubscriber();
        
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
        /// requetsed flow rate
        /// @return units::volume_velocity::cubic_meters_per_second_t targetFlowRate
        units::volume_velocity::cubic_meters_per_second_t GetTargetFlowRate();

    protected:
        void DataAvailable(const nec::process::CirculateObjective &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::CirculateObjective                                      m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_CIRCULATE_OBJECTIVE_SUBSCRIBER_H__
