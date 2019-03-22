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
#include "plc_rotate_state_topic_subscriber.h"

CPlcRotateStateTopicSubscriber::CPlcRotateStateTopicSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CPlcRotateStateTopicSubscriber::~CPlcRotateStateTopicSubscriber()
{
}

bool CPlcRotateStateTopicSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::ROTATE_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CPlcRotateStateTopicSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

int32_t CPlcRotateStateTopicSubscriber::GetStatus()
{
    return m_data.status;
}

double CPlcRotateStateTopicSubscriber::GetActualRate()
{
    return m_data.actualRate;
}

double CPlcRotateStateTopicSubscriber::GetMinRate()
{
    return m_data.minRate;
}

double CPlcRotateStateTopicSubscriber::GetMaxRate()
{
    return m_data.maxRate;
}

double CPlcRotateStateTopicSubscriber::GetTargetRate()
{
    return m_data.targetRate;
}


void CPlcRotateStateTopicSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CPlcRotateStateTopicSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CPlcRotateStateTopicSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CPlcRotateStateTopicSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CPlcRotateStateTopicSubscriber::DataAvailable(const plc::process::RotateStateTopic &data,
                          const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;
    
        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(sampleInfo);
        }
    
    }
}

void CPlcRotateStateTopicSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CPlcRotateStateTopicSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CPlcRotateStateTopicSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
