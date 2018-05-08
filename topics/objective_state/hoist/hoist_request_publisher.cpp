#include "dds_uuid.h"
#include "hoist_request_publisher.h"

CHoistRequestPublisher::CHoistRequestPublisher()
{
}

CHoistRequestPublisher::~CHoistRequestPublisher()
{
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

void CHoistRequestPublisher::SetTargetVelocity(meters_per_second_t targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = units::unit_cast<double>(targetVelocity);
    }
}

void CHoistRequestPublisher::SetTargetPosition(meter_t targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = units::unit_cast<double>(targetPosition);
    }
}

bool CHoistRequestPublisher::PublishSample()
{
    return Publish();
}

bool CHoistRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::HOIST_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
