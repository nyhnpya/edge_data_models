/*
 *  Copyright (c) 2017 Ensign Energy Incorporated
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
#ifndef __OBJECTIVE_STATE_SUBSCRIBER_H__
#define __OBJECTIVE_STATE_SUBSCRIBER_H__

#include <mutex>
#include "dds_uuid.h"
#include "subscriber.h"
#include "base_data_types.h"
#include "objective.h"
#include "objectiveSupport.h"

class CObjectiveStateSubscriber : public TSubscriber< process::plan::ObjectiveState>
{
public:
    CObjectiveStateSubscriber();
    virtual ~CObjectiveStateSubscriber();

	// Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);

    // Topic getters
    CDdsUuid GetId();
    CDdsUuid GetParentId();
    DataTypes::Objective GetObjective();
	
    // Topic status
    bool ValidData();

protected:
    ///Derived Methods
    void DataAvailable(const process::plan::ObjectiveState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

private:
    process::plan::ObjectiveState  m_data;
    DDS::SampleInfo                m_sampleInfo;
    OnDataAvailableEvent           m_pOnDataAvailable;
    OnDataDisposedEvent            m_pOnDataDisposed;
    OnLivelinessChangedEvent       m_pOnLivelinessChanged;
};

#endif // __OBJECTIVE_STATE_SUBSCRIBER_H__
