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
#include "dds_uuid.h"
#include "plc_rotate_state_publisher.h"

CPlcRotateStatePublisher::CPlcRotateStatePublisher()
{
}

CPlcRotateStatePublisher::~CPlcRotateStatePublisher()
{
}

bool CPlcRotateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::ROTATE_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CPlcRotateStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CPlcRotateStatePublisher::PublishSample()
{
    return Publish();
}

void CPlcRotateStatePublisher::SetStatus(int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CPlcRotateStatePublisher::SetActualRate(double actualRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualRate = actualRate;
    }
}

void CPlcRotateStatePublisher::SetMinRate(double minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = minRate;
    }
}

void CPlcRotateStatePublisher::SetMaxRate(double maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = maxRate;
    }
}

void CPlcRotateStatePublisher::SetTargetRate(double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

