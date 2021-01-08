#include "auto_ream_request_publisher.h"

CAutoReamRequestPublisher::CAutoReamRequestPublisher()
{
}

CAutoReamRequestPublisher::~CAutoReamRequestPublisher()
{
}

bool CAutoReamRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::AUTO_REAM_REQUEST,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
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

void CAutoReamRequestPublisher::SetPriority(const DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CAutoReamRequestPublisher::SetTimeNeeded(const DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CAutoReamRequestPublisher::SetDuration(const DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->duration = duration;
    }
}

void CAutoReamRequestPublisher::SetQuillTipPosPV_m(const double QuillTipPosPV_m)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->QuillTipPosPV_m = QuillTipPosPV_m;
    }
}

void CAutoReamRequestPublisher::SetHole_depth(const double Hole_depth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Hole_depth = Hole_depth;
    }
}

void CAutoReamRequestPublisher::SetDp_PressurePV_kPa(const double Dp_PressurePV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->Dp_PressurePV_kPa = Dp_PressurePV_kPa;
    }
}

void CAutoReamRequestPublisher::SetWeightOnBitPV_daN(const double WeightOnBitPV_daN)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->WeightOnBitPV_daN = WeightOnBitPV_daN;
    }
}

void CAutoReamRequestPublisher::SetStandpipePressUnfiltPV_kPa(const double StandpipePressUnfiltPV_kPa)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->StandpipePressUnfiltPV_kPa = StandpipePressUnfiltPV_kPa;
    }
}

void CAutoReamRequestPublisher::SetBlockSpeedPV_mps(const double BlockSpeedPV_mps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->BlockSpeedPV_mps = BlockSpeedPV_mps;
    }
}

void CAutoReamRequestPublisher::SetTD_Quill_SpeedPV_rpm(const double TD_Quill_SpeedPV_rpm)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->TD_Quill_SpeedPV_rpm = TD_Quill_SpeedPV_rpm;
    }
}

