#include "auto_ream_objective_publisher.h"

CAutoReamObjectivePublisher::CAutoReamObjectivePublisher()
{
}

CAutoReamObjectivePublisher::~CAutoReamObjectivePublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CAutoReamObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::AUTO_REAM_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoReamObjectivePublisher::Initialize()
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

bool CAutoReamObjectivePublisher::PublishSample()
{
    return Publish();
}

void CAutoReamObjectivePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CAutoReamObjectivePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CAutoReamObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CAutoReamObjectivePublisher::SetQuillTipPosPV_m(double QuillTipPosPV_m)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->QuillTipPosPV_m = QuillTipPosPV_m;
    }
}

void CAutoReamObjectivePublisher::SetHole_depth(double Hole_depth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Hole_depth = Hole_depth;
    }
}

void CAutoReamObjectivePublisher::SetDp_PressurePV_kPa(double Dp_PressurePV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Dp_PressurePV_kPa = Dp_PressurePV_kPa;
    }
}

void CAutoReamObjectivePublisher::SetWeightOnBitPV_daN(double WeightOnBitPV_daN)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->WeightOnBitPV_daN = WeightOnBitPV_daN;
    }
}

void CAutoReamObjectivePublisher::SetStandpipePressUnfiltPV_kPa(double StandpipePressUnfiltPV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->StandpipePressUnfiltPV_kPa = StandpipePressUnfiltPV_kPa;
    }
}

void CAutoReamObjectivePublisher::SetBlockSpeedPV_mps(double BlockSpeedPV_mps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->BlockSpeedPV_mps = BlockSpeedPV_mps;
    }
}

void CAutoReamObjectivePublisher::SetTD_Quill_SpeedPV_rpm(double TD_Quill_SpeedPV_rpm)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->TD_Quill_SpeedPV_rpm = TD_Quill_SpeedPV_rpm;
    }
}

