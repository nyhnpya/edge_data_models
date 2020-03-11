#include "drill_request_topic_subscriber.h"

CDrillRequestTopicSubscriber::CDrillRequestTopicSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillRequestTopicSubscriber::~CDrillRequestTopicSubscriber()
{
}

bool CDrillRequestTopicSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::DRILL_REQUEST_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillRequestTopicSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CDrillRequestTopicSubscriber::GetRopLimit()
{
    return m_data.ropLimit;
}

double CDrillRequestTopicSubscriber::GetWobLimit()
{
    return m_data.wobLimit;
}

double CDrillRequestTopicSubscriber::GetDiffPressureLimit()
{
    return m_data.diffPressureLimit;
}

double CDrillRequestTopicSubscriber::GetTorqueLimit()
{
    return m_data.torqueLimit;
}

bool CDrillRequestTopicSubscriber::GetRopMode()
{
    return m_data.ropMode;
}

bool CDrillRequestTopicSubscriber::GetWobMode()
{
    return m_data.wobMode;
}

bool CDrillRequestTopicSubscriber::GetDiffPressureMode()
{
    return m_data.diffPressureMode;
}

bool CDrillRequestTopicSubscriber::GetTorqueMode()
{
    return m_data.torqueMode;
}


void CDrillRequestTopicSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillRequestTopicSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillRequestTopicSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CDrillRequestTopicSubscriber::DataAvailable(const plc::process::DrillRequestTopic &data,
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

void CDrillRequestTopicSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillRequestTopicSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

