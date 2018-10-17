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
        if (std::fabs(units::unit_cast<double>(actualRate) - m_pDataInstance->actualRate) <= .001)
        {
            m_pDataInstance->actualRate = units::unit_cast<double>(actualRate);
            m_interfaceChanged = true;
        }
    }
}

void CRotateStatePublisher::SetMinRate(radians_per_second_t minRate)
{
    if (m_pDataInstance != nullptr)
    {
        if (std::fabs(units::unit_cast<double>(minRate) - m_pDataInstance->minRate) <= .001)
        {
            m_pDataInstance->minRate = units::unit_cast<double>(minRate);
            m_interfaceChanged = true;
        }
    }
}

void CRotateStatePublisher::SetMaxRate(radians_per_second_t maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        if (std::fabs(units::unit_cast<double>(maxRate) - m_pDataInstance->maxRate) <= .001)
        {
            m_pDataInstance->maxRate = units::unit_cast<double>(maxRate);
            m_interfaceChanged = true;
        }
    }
}

void CRotateStatePublisher::SetTargetRate(radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        if (std::fabs(units::unit_cast<double>(targetRate) - m_pDataInstance->targetRate) <= .001)
        {
            m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
            m_interfaceChanged = true;
        }
    }
}

bool CRotateStatePublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    if (m_interfaceChanged == true)
    {
        GetParticipant()->get_current_time(currentTime);
        m_pDataInstance->timestamp.sec = currentTime.sec;
        m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
        bRetVal = Publish();
        m_interfaceChanged = false;
    }

    return bRetVal;
}

bool CRotateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::ROTATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
