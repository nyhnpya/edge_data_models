#include "dds_uuid.h"
#include "rotate_state_publisher.h"

CRotateStatePublisher::CRotateStatePublisher() :
    m_interfaceChanged(false)
{
}

CRotateStatePublisher::~CRotateStatePublisher()
{
}

bool CRotateStatePublisher::HasInterfaceChanged()
{
    return m_interfaceChanged;
}

bool CRotateStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CRotateStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
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
        m_interfaceChanged = true;
    }
}

void CRotateStatePublisher::SetMinRate(radians_per_second_t minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = units::unit_cast<double>(minRate);
        m_interfaceChanged = true;
    }
}

void CRotateStatePublisher::SetMaxRate(radians_per_second_t maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = units::unit_cast<double>(maxRate);
        m_interfaceChanged = true;
    }
}

void CRotateStatePublisher::SetTargetRate(radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
        m_interfaceChanged = true;
    }
}

void CRotateStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp.sec = timestamp.sec;
        m_pDataInstance->timestamp.nanosec = timestamp.nanosec;
    }
    else
    {
        LOG_ERROR("Failed to set timestamp because of uninitialized sample");
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
    m_interfaceChanged = false;

    return bRetVal;
}

bool CRotateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::ROTATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
