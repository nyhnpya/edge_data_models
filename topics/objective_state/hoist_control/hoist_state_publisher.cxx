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
#include "hoist_state_publisher.h"

CHoistStatePublisher::CHoistStatePublisher()
{
}

CHoistStatePublisher::~CHoistStatePublisher()
{
}

bool CHoistStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::HOIST_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHoistStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CHoistStatePublisher::PublishSample()
{
    return Publish();
}

void CHoistStatePublisher::SetStatus(int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CHoistStatePublisher::SetActualHookload(double actualHookload)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualHookload = actualHookload;
    }
}

void CHoistStatePublisher::SetActualVelocity(double actualVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualVelocity = actualVelocity;
    }
}

void CHoistStatePublisher::SetActualPosition(double actualPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualPosition = actualPosition;
    }
}

void CHoistStatePublisher::SetMaxHookload(double maxHookload)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHookload = maxHookload;
    }
}

void CHoistStatePublisher::SetMaxHoistVelocity(double maxHoistVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHoistVelocity = maxHoistVelocity;
    }
}

void CHoistStatePublisher::SetMaxLowerVelocity(double maxLowerVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxLowerVelocity = maxLowerVelocity;
    }
}

void CHoistStatePublisher::SetMaxHoistPosition(double maxHoistPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHoistPosition = maxHoistPosition;
    }
}

void CHoistStatePublisher::SetMaxLowerPosition(double maxLowerPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxLowerPosition = maxLowerPosition;
    }
}

void CHoistStatePublisher::SetTargetVelocity(double targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = targetVelocity;
    }
}

void CHoistStatePublisher::SetTargetPosition(double targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = targetPosition;
    }
}

