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
                       nec::process::HOIST_STATE,
                       "EdgeBaseLibrary",
                       "HoistStateProfile");
}

bool CHoistStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        uuid.GenerateUuid();
        m_pDataInstance->id = DDS_String_dup(uuid.c_str());
        retVal = true;
    }

    return retVal;
}

bool CHoistStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
        m_pDataInstance->timestamp.sec = currentTime.sec;
        m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    }

    return Publish();
}

void CHoistStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CHoistStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CHoistStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CHoistStatePublisher::SetStatus(DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CHoistStatePublisher::SetActualHookload(const units::force::newton_t actualHookload)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualHookload = units::unit_cast<double>(actualHookload);
    }
}

void CHoistStatePublisher::SetActualVelocity(const units::velocity::meters_per_second_t actualVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualVelocity = units::unit_cast<double>(actualVelocity);
    }
}

void CHoistStatePublisher::SetActualPosition(const units::length::meter_t actualPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualPosition = units::unit_cast<double>(actualPosition);
    }
}

void CHoistStatePublisher::SetMaxHookload(const units::force::newton_t maxHookload)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHookload = units::unit_cast<double>(maxHookload);
    }
}

void CHoistStatePublisher::SetMaxHoistVelocity(const units::velocity::meters_per_second_t maxHoistVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHoistVelocity = units::unit_cast<double>(maxHoistVelocity);
    }
}

void CHoistStatePublisher::SetMaxLowerVelocity(const units::velocity::meters_per_second_t maxLowerVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxLowerVelocity = units::unit_cast<double>(maxLowerVelocity);
    }
}

void CHoistStatePublisher::SetMaxHoistPosition(const units::length::meter_t maxHoistPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHoistPosition = units::unit_cast<double>(maxHoistPosition);
    }
}

void CHoistStatePublisher::SetMaxLowerPosition(const units::length::meter_t maxLowerPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxLowerPosition = units::unit_cast<double>(maxLowerPosition);
    }
}

void CHoistStatePublisher::SetTargetVelocity(const units::velocity::meters_per_second_t targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = units::unit_cast<double>(targetVelocity);
    }
}

void CHoistStatePublisher::SetTargetPosition(const units::length::meter_t targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = units::unit_cast<double>(targetPosition);
    }
}

