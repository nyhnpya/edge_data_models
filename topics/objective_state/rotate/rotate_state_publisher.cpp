#include "dds_uuid.h"
#include "rotate_state_publisher.h"

CRotateStatePublisher::CRotateStatePublisher()
{
}

CRotateStatePublisher::~CRotateStatePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CRotateStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CRotateStatePublisher::SetObjectiveId(const DataTypes::Uuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId);
    }
}

void CRotateStatePublisher::SetStatus(const DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;;
    }
}

void CRotateStatePublisher::SetActualRate(radians_per_second_t actualRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualRate = units::unit_cast<double>(actualRate);
    }
}

void CRotateStatePublisher::SetMinRate(radians_per_second_t minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = units::unit_cast<double>(minRate);
    }
}

void CRotateStatePublisher::SetMaxRate(radians_per_second_t maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = units::unit_cast<double>(maxRate);
    }
}

void CRotateStatePublisher::SetTargetRate(radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

bool CRotateStatePublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CRotateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::ROTATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
