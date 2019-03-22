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
#include "plc_rotate_state_subscriber.h"

CPlcRotateStateSubscriber::CPlcRotateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CPlcRotateStateSubscriber::~CPlcRotateStateSubscriber()
{
}

bool CPlcRotateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::ROTATE_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "PlcProfile");
}

bool CPlcRotateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

int32_t CPlcRotateStateSubscriber::GetStatus()
{
    return m_data.status;
}

double CPlcRotateStateSubscriber::GetActualRate()
{
    return m_data.actualRate;
}

double CPlcRotateStateSubscriber::GetMinRate()
{
    return m_data.minRate;
}

double CPlcRotateStateSubscriber::GetMaxRate()
{
    return m_data.maxRate;
}

double CPlcRotateStateSubscriber::GetTargetRate()
{
    return m_data.targetRate;
}


void CPlcRotateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CPlcRotateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CPlcRotateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CPlcRotateStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CPlcRotateStateSubscriber::DataAvailable(const plc::process::RotateState &data,
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

void CPlcRotateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CPlcRotateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CPlcRotateStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
