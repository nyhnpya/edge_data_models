#include "dds_uuid.h"
#include "hoist_state_publisher.h"

CHoistStatePublisher::CHoistStatePublisher()
{
}

CHoistStatePublisher::~CHoistStatePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CHoistStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CHoistStatePublisher::SetObjectiveId(const DataTypes::Uuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId);
    }
}

void CHoistStatePublisher::SetStatus(const DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;;
    }
}

void CHoistStatePublisher::SetActualHookload(newton_t actualHookload)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualHookload = units::unit_cast<double>(actualHookload);
    }
}

void CHoistStatePublisher::SetActualVelocity(meters_per_second_t actualVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualVelocity = units::unit_cast<double>(actualVelocity);
    }
}

void CHoistStatePublisher::SetActualPosition(meter_t actualPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualPosition = units::unit_cast<double>(actualPosition);
    }
}

void CHoistStatePublisher::SetMaxHoistVelocity(meters_per_second_t maxHoistVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHoistVelocity = units::unit_cast<double>(maxHoistVelocity);
    }
}

void CHoistStatePublisher::SetMaxLowerVelocity(meters_per_second_t maxLowerVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxLowerVelocity = units::unit_cast<double>(maxLowerVelocity);
    }
}

void CHoistStatePublisher::SetMaxHoistPosition(meter_t maxHoistPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHoistPosition = units::unit_cast<double>(maxHoistPosition);
    }
}

void CHoistStatePublisher::SetMaxLowerPosition(meter_t maxLowerPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxLowerPosition = units::unit_cast<double>(maxLowerPosition);
    }
}

void CHoistStatePublisher::SetMaxHookload(newton_t maxHookload)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxHookload = units::unit_cast<double>(maxHookload);
    }
}

void CHoistStatePublisher::SetTargetVelocity(meters_per_second_t targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = units::unit_cast<double>(targetVelocity);
    }
}

void CHoistStatePublisher::SetTargetPosition(meter_t targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = units::unit_cast<double>(targetPosition);
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
                              nec::process::HOIST_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
