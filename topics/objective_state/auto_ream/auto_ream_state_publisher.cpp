#include "dds_uuid.h"
#include "auto_ream_state_publisher.h"

CAutoReamStatePublisher::CAutoReamStatePublisher()
{
}

CAutoReamStatePublisher::~CAutoReamStatePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CAutoReamStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CAutoReamStatePublisher::SetObjectiveId(DataTypes::Uuid pObjectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(pObjectiveId);
    }
    else
    {
        LOG_ERROR("Failed to set objective id because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
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

void CAutoReamStatePublisher::SetHookloadActual(double hookloadActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->hookloadActual = hookloadActual;
    }
    else
    {
        LOG_ERROR("Failed to set hookload actual because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetHoleDepthActual(double holeDepthActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->holeDepthActual = holeDepthActual;
    }
    else
    {
        LOG_ERROR("Failed to set holeDepth actual because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetDeltaPressureActual(double differentialPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureActual = differentialPressureActual;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure actual because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetWeightOnBitActual(double weightOnBitActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitActual = weightOnBitActual;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBit actual because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetStandpipePressureActual(double standpipePressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->standpipePressureActual = standpipePressureActual;
    }
    else
    {
        LOG_ERROR("Failed to set standpipe pressure actual because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetBlockSpeedActual(double blockSpeedActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->blockSpeedActual = blockSpeedActual;
    }
    else
    {
        LOG_ERROR("Failed to set block speed actual because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetQuillPositionActual(double quillPositionActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->quillPositionActual = quillPositionActual;
    }
    else
    {
        LOG_ERROR("Failed to set quill position actual limit because of uninitialized sample");
    }
}

void CAutoReamStatePublisher::SetQuillRateActual(double quillRateActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->quillRateActual = quillRateActual;
    }
    else
    {
        LOG_ERROR("Failed to set quill rate actual because of uninitialized sample");
    }
}

bool CAutoReamStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CAutoReamStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::AUTO_REAM_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
