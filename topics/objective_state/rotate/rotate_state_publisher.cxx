#include "dds_uuid.h"
#include "rotate_state_publisher.h"

CRotateStatePublisher::CRotateStatePublisher()
{
}

CRotateStatePublisher::~CRotateStatePublisher()
{
}

bool CRotateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::ROTATE_STATE,
                       "EdgeBaseLibrary",
                       "StateProfile");
}

bool CRotateStatePublisher::Initialize()
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

bool CRotateStatePublisher::PublishSample()
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

void CRotateStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CRotateStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CRotateStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CRotateStatePublisher::SetStatus(DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CRotateStatePublisher::SetActualRate(const units::angular_velocity::radians_per_second_t actualRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualRate = units::unit_cast<double>(actualRate);
    }
}

void CRotateStatePublisher::SetMinRate(const units::angular_velocity::radians_per_second_t minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = units::unit_cast<double>(minRate);
    }
}

void CRotateStatePublisher::SetMaxRate(const units::angular_velocity::radians_per_second_t maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = units::unit_cast<double>(maxRate);
    }
}

void CRotateStatePublisher::SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

