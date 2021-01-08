#include "plc_rotate_state_publisher.h"

CPlcRotateStatePublisher::CPlcRotateStatePublisher()
{
}

CPlcRotateStatePublisher::~CPlcRotateStatePublisher()
{
}

bool CPlcRotateStatePublisher::Create(const std::string &publisher)
{
    return TDataWriter::Create(publisher,
                                    plc::process::PLC_ROTATE_STATE_TOPIC,
                                    "EdgeBaseLibrary",
                                    "PlcProfile");
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

void CPlcRotateStatePublisher::SetStatus(const int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CPlcRotateStatePublisher::SetActualRate(const double actualRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualRate = actualRate;
    }
}

void CPlcRotateStatePublisher::SetMinRate(const double minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = minRate;
    }
}

void CPlcRotateStatePublisher::SetMaxRate(const double maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = maxRate;
    }
}

void CPlcRotateStatePublisher::SetTargetRate(const double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

