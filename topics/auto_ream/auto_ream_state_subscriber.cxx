#include "auto_ream_state_subscriber.h"

CAutoReamStateSubscriber::CAutoReamStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CAutoReamStateSubscriber::~CAutoReamStateSubscriber()
{
}

bool CAutoReamStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::AUTO_REAM_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoReamStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CAutoReamStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CAutoReamStateSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CAutoReamStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

DataTypes::Status CAutoReamStateSubscriber::GetStatus()
{
    return m_data.status;
}

double CAutoReamStateSubscriber::GetHookloadActual()
{
    return m_data.hookloadActual;
}

double CAutoReamStateSubscriber::GetHoleDepthActual()
{
    return m_data.holeDepthActual;
}

double CAutoReamStateSubscriber::GetDifferentialPressureActual()
{
    return m_data.differentialPressureActual;
}

double CAutoReamStateSubscriber::GetWeightOnBitActual()
{
    return m_data.weightOnBitActual;
}

double CAutoReamStateSubscriber::GetStandpipePressureActual()
{
    return m_data.standpipePressureActual;
}

double CAutoReamStateSubscriber::GetBlockSpeedActual()
{
    return m_data.blockSpeedActual;
}

double CAutoReamStateSubscriber::GetQuillPositionActual()
{
    return m_data.quillPositionActual;
}

double CAutoReamStateSubscriber::GetQuillRateActual()
{
    return m_data.quillRateActual;
}


void CAutoReamStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CAutoReamStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CAutoReamStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CAutoReamStateSubscriber::DataAvailable(const nec::process::AutoReamState &data,
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

void CAutoReamStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoReamStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

