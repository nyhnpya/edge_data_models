#include "dds_uuid.h"
#include "hoist_request_publisher.h"

CHoistRequestPublisher::CHoistRequestPublisher()
{
}

CHoistRequestPublisher::~CHoistRequestPublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CHoistRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
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
