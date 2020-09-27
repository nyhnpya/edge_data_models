#include "plc_rotate_state_publisher.h"

CPlcRotateStatePublisher::CPlcRotateStatePublisher()
{
}

CPlcRotateStatePublisher::~CPlcRotateStatePublisher()
{
}

bool CPlcRotateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::PLC_ROTATE_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "PlcProfile");
}

bool CPlcRotateStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CPlcRotateStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CPlcRotateStatePublisher::SetStatus(int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CPlcRotateStatePublisher::SetActualRate(double actualRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualRate = actualRate;
    }
}

void CPlcRotateStatePublisher::SetMinRate(double minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = minRate;
    }
}

void CPlcRotateStatePublisher::SetMaxRate(double maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = maxRate;
    }
}

void CPlcRotateStatePublisher::SetTargetRate(double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

