#include "auto_ream_state_publisher.h"

CAutoReamStatePublisher::CAutoReamStatePublisher()
{
}

CAutoReamStatePublisher::~CAutoReamStatePublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CAutoReamStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::AUTO_REAM_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoReamStatePublisher::Initialize()
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

void CAutoReamStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CAutoReamStatePublisher::SetStatus(DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CAutoReamStatePublisher::SetHookloadActual(double hookloadActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->hookloadActual = hookloadActual;
    }
}

void CAutoReamStatePublisher::SetHoleDepthActual(double holeDepthActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->holeDepthActual = holeDepthActual;
    }
}

void CAutoReamStatePublisher::SetDifferentialPressureActual(double differentialPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureActual = differentialPressureActual;
    }
}

void CAutoReamStatePublisher::SetWeightOnBitActual(double weightOnBitActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitActual = weightOnBitActual;
    }
}

void CAutoReamStatePublisher::SetStandpipePressureActual(double standpipePressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->standpipePressureActual = standpipePressureActual;
    }
}

void CAutoReamStatePublisher::SetBlockSpeedActual(double blockSpeedActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->blockSpeedActual = blockSpeedActual;
    }
}

void CAutoReamStatePublisher::SetQuillPositionActual(double quillPositionActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->quillPositionActual = quillPositionActual;
    }
}

void CAutoReamStatePublisher::SetQuillRateActual(double quillRateActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->quillRateActual = quillRateActual;
    }
}

