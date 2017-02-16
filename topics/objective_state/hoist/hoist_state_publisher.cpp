#include "hoist_state_publisher.h"

CHoistStatePublisher::CHoistStatePublisher()
{
}

CHoistStatePublisher::~CHoistStatePublisher()
{
}

void CHoistStatePublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
    }
}

void CHoistStatePublisher::SetStatus(const DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;;
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

bool CHoistStatePublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CHoistStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              ProcessHoist::HOIST_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
