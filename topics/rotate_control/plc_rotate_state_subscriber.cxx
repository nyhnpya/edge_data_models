#include "plc_rotate_state_subscriber.h"

CPlcRotateStateSubscriber::CPlcRotateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CPlcRotateStateSubscriber::~CPlcRotateStateSubscriber()
{
}

bool CPlcRotateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::ROTATE_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "PlcProfile");
}

bool CPlcRotateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

int32_t CPlcRotateStateSubscriber::GetStatus()
{
    return m_data.status;
}

double CPlcRotateStateSubscriber::GetActualRate()
{
    return m_data.actualRate;
}

double CPlcRotateStateSubscriber::GetMinRate()
{
    return m_data.minRate;
}

double CPlcRotateStateSubscriber::GetMaxRate()
{
    return m_data.maxRate;
}

double CPlcRotateStateSubscriber::GetTargetRate()
{
    return m_data.targetRate;
}


void CPlcRotateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CPlcRotateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CPlcRotateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CPlcRotateStateSubscriber::DataAvailable(const plc::process::PlcRotateState &data,
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

void CPlcRotateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CPlcRotateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

