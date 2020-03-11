#include "circulate_state_subscriber.h"

CCirculateStateSubscriber::CCirculateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CCirculateStateSubscriber::~CCirculateStateSubscriber()
{
}

bool CCirculateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::CIRCULATE_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CCirculateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Status CCirculateStateSubscriber::GetStatus()
{
    return m_data.status;
}

double CCirculateStateSubscriber::GetActualFlowRate()
{
    return m_data.actualFlowRate;
}

double CCirculateStateSubscriber::GetActualStandpipePressure()
{
    return m_data.actualStandpipePressure;
}

double CCirculateStateSubscriber::GetMinFlowRate()
{
    return m_data.minFlowRate;
}

double CCirculateStateSubscriber::GetMaxFlowRate()
{
    return m_data.maxFlowRate;
}

double CCirculateStateSubscriber::GetMinStandpipePressure()
{
    return m_data.minStandpipePressure;
}

double CCirculateStateSubscriber::GetMaxStandpipePressure()
{
    return m_data.maxStandpipePressure;
}

double CCirculateStateSubscriber::GetTargetFlowRate()
{
    return m_data.targetFlowRate;
}


void CCirculateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CCirculateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CCirculateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CCirculateStateSubscriber::DataAvailable(const plc::process::CirculateState &data,
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

void CCirculateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CCirculateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

