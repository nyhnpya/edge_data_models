#include "hoist_request_publisher.h"

CHoistRequestPublisher::CHoistRequestPublisher()
{
}

CHoistRequestPublisher::~CHoistRequestPublisher()
{
}

void CHoistRequestPublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
    }
}

void CHoistRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CHoistRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CHoistRequestPublisher::SetDuration(DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = duration;
    }
}

void CHoistRequestPublisher::SetTargetVelocity(DDS_Double targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = targetVelocity;
    }
}

void CHoistRequestPublisher::SetTargetDestination(DDS_Double targetDestination)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetDestination = targetDestination;
    }
}

bool CHoistRequestPublisher::PublishSample()
{
    return Publish();
}

bool CHoistRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              ProcessHoist::HOIST_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
