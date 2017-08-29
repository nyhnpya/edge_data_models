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
                              nec::process::ROTATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
