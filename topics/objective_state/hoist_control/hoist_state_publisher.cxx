#include "hoist_state_publisher.h"
#include "dds_uuid.h"

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

