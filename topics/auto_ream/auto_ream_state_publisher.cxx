#include "auto_ream_state_publisher.h"

CAutoReamStatePublisher::CAutoReamStatePublisher()
{
}

CAutoReamStatePublisher::~CAutoReamStatePublisher()
{
}

bool CAutoReamStatePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::AUTO_REAM_STATE,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
}

bool CAutoReamStatePublisher::PublishSample()
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

void CAutoReamStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CAutoReamStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CAutoReamStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CAutoReamStatePublisher::SetStatus(const DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CAutoReamStatePublisher::SetHookloadActual(const double hookloadActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->hookloadActual = hookloadActual;
    }
}

void CAutoReamStatePublisher::SetHoleDepthActual(const double holeDepthActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->holeDepthActual = holeDepthActual;
    }
}

void CAutoReamStatePublisher::SetDifferentialPressureActual(const double differentialPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureActual = differentialPressureActual;
    }
}

void CAutoReamStatePublisher::SetWeightOnBitActual(const double weightOnBitActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitActual = weightOnBitActual;
    }
}

void CAutoReamStatePublisher::SetStandpipePressureActual(const double standpipePressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->standpipePressureActual = standpipePressureActual;
    }
}

void CAutoReamStatePublisher::SetBlockSpeedActual(const double blockSpeedActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->blockSpeedActual = blockSpeedActual;
    }
}

void CAutoReamStatePublisher::SetQuillPositionActual(const double quillPositionActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->quillPositionActual = quillPositionActual;
    }
}

void CAutoReamStatePublisher::SetQuillRateActual(const double quillRateActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->quillRateActual = quillRateActual;
    }
}

