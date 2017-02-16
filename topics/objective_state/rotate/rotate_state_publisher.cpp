#include "rotate_state_publisher.h"

CRotateStatePublisher::CRotateStatePublisher()
{
}

CRotateStatePublisher::~CRotateStatePublisher()
{
}

void CRotateStatePublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
    }
}

void CRotateStatePublisher::SetStatus(const DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;;
    }
}

void CRotateStatePublisher::SetActualRate(double actualRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualRate = actualRate;
    }
}

void CRotateStatePublisher::SetMinRate(double minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = minRate;;
    }
}

void CRotateStatePublisher::SetMaxRate(double maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = maxRate;
    }
}

void CRotateStatePublisher::SetTargetRate(double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
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
                              ProcessRotation::ROTATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
