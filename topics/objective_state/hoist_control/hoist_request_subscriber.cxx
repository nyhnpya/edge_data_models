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
#include "hoist_request_subscriber.h"

CHoistRequestSubscriber::CHoistRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CHoistRequestSubscriber::~CHoistRequestSubscriber()
{
}

bool CHoistRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::HOIST_REQUEST_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHoistRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CHoistRequestSubscriber::GetTargetVelocity()
{
    return m_data.targetVelocity;
}

double CHoistRequestSubscriber::GetTargetPosition()
{
    return m_data.targetPosition;
}


void CHoistRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CHoistRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CHoistRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CHoistRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CHoistRequestSubscriber::DataAvailable(const plc::process::HoistRequest &data,
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

void CHoistRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHoistRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CHoistRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
