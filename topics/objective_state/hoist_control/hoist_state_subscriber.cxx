#include "hoist_state_subscriber.h"

CHoistStateSubscriber::CHoistStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CHoistStateSubscriber::~CHoistStateSubscriber()
{
}

bool CHoistStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       plc::process::HOIST_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHoistStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

int32_t CHoistStateSubscriber::GetStatus()
{
    return m_data.status;
}

double CHoistStateSubscriber::GetActualHookload()
{
    return m_data.actualHookload;
}

double CHoistStateSubscriber::GetActualVelocity()
{
    return m_data.actualVelocity;
}

double CHoistStateSubscriber::GetActualPosition()
{
    return m_data.actualPosition;
}

double CHoistStateSubscriber::GetMaxHookload()
{
    return m_data.maxHookload;
}

double CHoistStateSubscriber::GetMaxHoistVelocity()
{
    return m_data.maxHoistVelocity;
}

double CHoistStateSubscriber::GetMaxLowerVelocity()
{
    return m_data.maxLowerVelocity;
}

double CHoistStateSubscriber::GetMaxHoistPosition()
{
    return m_data.maxHoistPosition;
}

double CHoistStateSubscriber::GetMaxLowerPosition()
{
    return m_data.maxLowerPosition;
}

double CHoistStateSubscriber::GetTargetVelocity()
{
    return m_data.targetVelocity;
}

double CHoistStateSubscriber::GetTargetPosition()
{
    return m_data.targetPosition;
}


void CHoistStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CHoistStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CHoistStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CHoistStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CHoistStateSubscriber::DataAvailable(const plc::process::HoistState &data,
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

void CHoistStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHoistStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CHoistStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
