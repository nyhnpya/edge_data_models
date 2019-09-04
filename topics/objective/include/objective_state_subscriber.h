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
#ifndef __PROCESS_PLAN_OBJECTIVE_STATE_SUBSCRIBER_H__
#define __PROCESS_PLAN_OBJECTIVE_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "objective.h"
#include "objectiveSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup Actual
/// @brief current state of rotation system.
///
///
class CObjectiveStateSubscriber : public TSubscriber< process::plan::ObjectiveState >
{
    public:
        CObjectiveStateSubscriber();
        ~CObjectiveStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// id of requestor
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// id of parent objective
        /// @return CDdsUuid parentId
        CDdsUuid GetParentId();
        /// timestamp when the data was published
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// current objective
        /// @return DataTypes::Objective objective
        DataTypes::Objective GetObjective();

    protected:
        void DataAvailable(const process::plan::ObjectiveState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        process::plan::ObjectiveState                     m_data;
        DDS::SampleInfo                                   m_sampleInfo;
        DDS::LivelinessChangedStatus                      m_livelinessStatus;
        OnDataAvailableEvent                              m_pOnDataAvailable;
        OnDataDisposedEvent                               m_pOnDataDisposed;
        OnLivelinessChangedEvent                          m_pOnLivelinessChanged;
};

#endif // __PROCESS_PLAN_OBJECTIVE_STATE_SUBSCRIBER_H__
