#include "auto_ream_request_subscriber.h"

CAutoReamRequestSubscriber::CAutoReamRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CAutoReamRequestSubscriber::~CAutoReamRequestSubscriber()
{
}

bool CAutoReamRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::AUTO_REAM_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoReamRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CAutoReamRequestSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CAutoReamRequestSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Priority CAutoReamRequestSubscriber::GetPriority()
{
    return m_data.priority;
}

DataTypes::Time CAutoReamRequestSubscriber::GetTimeNeeded()
{
    return m_data.timeNeeded;
}

DataTypes::Time CAutoReamRequestSubscriber::GetDuration()
{
    return m_data.duration;
}

double CAutoReamRequestSubscriber::GetQuillTipPosPV_m()
{
    return m_data.QuillTipPosPV_m;
}

double CAutoReamRequestSubscriber::GetHole_depth()
{
    return m_data.Hole_depth;
}

double CAutoReamRequestSubscriber::GetDp_PressurePV_kPa()
{
    return m_data.Dp_PressurePV_kPa;
}

double CAutoReamRequestSubscriber::GetWeightOnBitPV_daN()
{
    return m_data.WeightOnBitPV_daN;
}

double CAutoReamRequestSubscriber::GetStandpipePressUnfiltPV_kPa()
{
    return m_data.StandpipePressUnfiltPV_kPa;
}

double CAutoReamRequestSubscriber::GetBlockSpeedPV_mps()
{
    return m_data.BlockSpeedPV_mps;
}

double CAutoReamRequestSubscriber::GetTD_Quill_SpeedPV_rpm()
{
    return m_data.TD_Quill_SpeedPV_rpm;
}


void CAutoReamRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CAutoReamRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CAutoReamRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CAutoReamRequestSubscriber::DataAvailable(const nec::process::AutoReamRequest &data,
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

void CAutoReamRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoReamRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

