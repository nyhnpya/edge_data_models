#include "auto_ream_objective_publisher.h"

CAutoReamObjectivePublisher::CAutoReamObjectivePublisher()
{
}

CAutoReamObjectivePublisher::~CAutoReamObjectivePublisher()
{
}

bool CAutoReamObjectivePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::AUTO_REAM_OBJECTIVE,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
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

void CAutoReamObjectivePublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CAutoReamObjectivePublisher::SetQuillTipPosPV_m(const double QuillTipPosPV_m)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->QuillTipPosPV_m = QuillTipPosPV_m;
    }
}

void CAutoReamObjectivePublisher::SetHole_depth(const double Hole_depth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Hole_depth = Hole_depth;
    }
}

void CAutoReamObjectivePublisher::SetDp_PressurePV_kPa(const double Dp_PressurePV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Dp_PressurePV_kPa = Dp_PressurePV_kPa;
    }
}

void CAutoReamObjectivePublisher::SetWeightOnBitPV_daN(const double WeightOnBitPV_daN)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->WeightOnBitPV_daN = WeightOnBitPV_daN;
    }
}

void CAutoReamObjectivePublisher::SetStandpipePressUnfiltPV_kPa(const double StandpipePressUnfiltPV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->StandpipePressUnfiltPV_kPa = StandpipePressUnfiltPV_kPa;
    }
}

void CAutoReamObjectivePublisher::SetBlockSpeedPV_mps(const double BlockSpeedPV_mps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->BlockSpeedPV_mps = BlockSpeedPV_mps;
    }
}

void CAutoReamObjectivePublisher::SetTD_Quill_SpeedPV_rpm(const double TD_Quill_SpeedPV_rpm)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->TD_Quill_SpeedPV_rpm = TD_Quill_SpeedPV_rpm;
    }
}

