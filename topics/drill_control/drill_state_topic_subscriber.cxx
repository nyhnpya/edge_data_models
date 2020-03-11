#include "drill_state_topic_subscriber.h"

CDrillStateTopicSubscriber::CDrillStateTopicSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillStateTopicSubscriber::~CDrillStateTopicSubscriber()
{
}

bool CDrillStateTopicSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::DRILL_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillStateTopicSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CDrillStateTopicSubscriber::GetRopActual()
{
    return m_data.ropActual;
}

double CDrillStateTopicSubscriber::GetWobActual()
{
    return m_data.wobActual;
}

double CDrillStateTopicSubscriber::GetDiffPressureActual()
{
    return m_data.diffPressureActual;
}

double CDrillStateTopicSubscriber::GetTorqueActual()
{
    return m_data.torqueActual;
}

double CDrillStateTopicSubscriber::GetRopMachineLimit()
{
    return m_data.ropMachineLimit;
}

double CDrillStateTopicSubscriber::GetWobMachineLimit()
{
    return m_data.wobMachineLimit;
}

double CDrillStateTopicSubscriber::GetDiffPressureMachineLimit()
{
    return m_data.diffPressureMachineLimit;
}

double CDrillStateTopicSubscriber::GetTorqueMachineLimit()
{
    return m_data.torqueMachineLimit;
}

bool CDrillStateTopicSubscriber::GetRopMode()
{
    return m_data.ropMode;
}

bool CDrillStateTopicSubscriber::GetWobMode()
{
    return m_data.wobMode;
}

bool CDrillStateTopicSubscriber::GetDiffPressureMode()
{
    return m_data.diffPressureMode;
}

bool CDrillStateTopicSubscriber::GetTorqueMode()
{
    return m_data.torqueMode;
}

double CDrillStateTopicSubscriber::GetRopLimit()
{
    return m_data.ropLimit;
}

double CDrillStateTopicSubscriber::GetWobLimit()
{
    return m_data.wobLimit;
}

double CDrillStateTopicSubscriber::GetDiffPressureLimit()
{
    return m_data.diffPressureLimit;
}

double CDrillStateTopicSubscriber::GetTorqueLimit()
{
    return m_data.torqueLimit;
}


void CDrillStateTopicSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillStateTopicSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillStateTopicSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CDrillStateTopicSubscriber::DataAvailable(const plc::process::DrillStateTopic &data,
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

void CDrillStateTopicSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillStateTopicSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

