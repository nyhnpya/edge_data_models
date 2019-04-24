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
#include "drill_request_topic_publisher.h"

CDrillRequestTopicPublisher::CDrillRequestTopicPublisher()
{
}

CDrillRequestTopicPublisher::~CDrillRequestTopicPublisher()
{
}

bool CDrillRequestTopicPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::DRILL_REQUEST_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillRequestTopicPublisher::Initialize()
{
    return true;
}

bool CDrillRequestTopicPublisher::PublishSample()
{
    return Publish();
}

void CDrillRequestTopicPublisher::SetRopLimit(double ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = ropLimit;
    }
}

void CDrillRequestTopicPublisher::SetWobLimit(double wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = wobLimit;
    }
}

void CDrillRequestTopicPublisher::SetDiffPressureLimit(double diffPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureLimit = diffPressureLimit;
    }
}

void CDrillRequestTopicPublisher::SetTorqueLimit(double torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = torqueLimit;
    }
}

void CDrillRequestTopicPublisher::SetRopMode(bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
}

void CDrillRequestTopicPublisher::SetWobMode(bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
}

void CDrillRequestTopicPublisher::SetDiffPressureMode(bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
}

void CDrillRequestTopicPublisher::SetTorqueMode(bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
}

