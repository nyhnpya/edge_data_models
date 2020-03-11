#include "auto_ream_objective_subscriber.h"

CAutoReamObjectiveSubscriber::CAutoReamObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CAutoReamObjectiveSubscriber::~CAutoReamObjectiveSubscriber()
{
}

bool CAutoReamObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::AUTO_REAM_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoReamObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CAutoReamObjectiveSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CAutoReamObjectiveSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CAutoReamObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

double CAutoReamObjectiveSubscriber::GetQuillTipPosPV_m()
{
    return m_data.QuillTipPosPV_m;
}

double CAutoReamObjectiveSubscriber::GetHole_depth()
{
    return m_data.Hole_depth;
}

double CAutoReamObjectiveSubscriber::GetDp_PressurePV_kPa()
{
    return m_data.Dp_PressurePV_kPa;
}

double CAutoReamObjectiveSubscriber::GetWeightOnBitPV_daN()
{
    return m_data.WeightOnBitPV_daN;
}

double CAutoReamObjectiveSubscriber::GetStandpipePressUnfiltPV_kPa()
{
    return m_data.StandpipePressUnfiltPV_kPa;
}

double CAutoReamObjectiveSubscriber::GetBlockSpeedPV_mps()
{
    return m_data.BlockSpeedPV_mps;
}

double CAutoReamObjectiveSubscriber::GetTD_Quill_SpeedPV_rpm()
{
    return m_data.TD_Quill_SpeedPV_rpm;
}


void CAutoReamObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CAutoReamObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CAutoReamObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CAutoReamObjectiveSubscriber::DataAvailable(const nec::process::AutoReamObjective &data,
                          const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;
    
        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(sampleInfo);
        }
    
    }
}

void CAutoReamObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoReamObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

