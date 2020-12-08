#include "auto_ream_request_publisher.h"

CAutoReamRequestPublisher::CAutoReamRequestPublisher()
{
}

CAutoReamRequestPublisher::~CAutoReamRequestPublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CAutoReamRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::AUTO_REAM_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoReamRequestPublisher::Initialize()
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

bool CAutoReamRequestPublisher::PublishSample()
{
    return Publish();
}

void CAutoReamRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CAutoReamRequestPublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CAutoReamRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CAutoReamRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CAutoReamRequestPublisher::SetDuration(DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->duration = duration;
    }
}

void CAutoReamRequestPublisher::SetQuillTipPosPV_m(double QuillTipPosPV_m)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->QuillTipPosPV_m = QuillTipPosPV_m;
    }
}

void CAutoReamRequestPublisher::SetHole_depth(double Hole_depth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Hole_depth = Hole_depth;
    }
}

void CAutoReamRequestPublisher::SetDp_PressurePV_kPa(double Dp_PressurePV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Dp_PressurePV_kPa = Dp_PressurePV_kPa;
    }
}

void CAutoReamRequestPublisher::SetWeightOnBitPV_daN(double WeightOnBitPV_daN)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->WeightOnBitPV_daN = WeightOnBitPV_daN;
    }
}

void CAutoReamRequestPublisher::SetStandpipePressUnfiltPV_kPa(double StandpipePressUnfiltPV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->StandpipePressUnfiltPV_kPa = StandpipePressUnfiltPV_kPa;
    }
}

void CAutoReamRequestPublisher::SetBlockSpeedPV_mps(double BlockSpeedPV_mps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->BlockSpeedPV_mps = BlockSpeedPV_mps;
    }
}

void CAutoReamRequestPublisher::SetTD_Quill_SpeedPV_rpm(double TD_Quill_SpeedPV_rpm)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->TD_Quill_SpeedPV_rpm = TD_Quill_SpeedPV_rpm;
    }
}

