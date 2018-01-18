#include "hoist_state_subscriber.h"

CHoistStateSubscriber::CHoistStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CHoistStateSubscriber::~CHoistStateSubscriber()
{
}

bool CHoistStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CHoistStateSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Status CHoistStateSubscriber::GetStatus()
{
    return m_data.status;
}

newton_t  CHoistStateSubscriber::GetActualHookload()
{
    return (newton_t)m_data.actualHookload;
}

meters_per_second_t  CHoistStateSubscriber::GetActualVelocity()
{
    return (meters_per_second_t)m_data.actualVelocity;
}

meter_t CHoistStateSubscriber::GetActualPosition()
{
    return (meter_t)m_data.actualPosition;
}

meters_per_second_t CHoistStateSubscriber::GetMaxHoistVelocity()
{
    return (meters_per_second_t)m_data.maxHoistVelocity;
}

meters_per_second_t CHoistStateSubscriber::GetMaxLowerVelocity()
{
    return (meters_per_second_t)m_data.maxLowerVelocity;
}

meter_t CHoistStateSubscriber::GetMaxHoistPosition()
{
    return (meter_t)m_data.maxHoistPosition;
}

meter_t  CHoistStateSubscriber::GetMaxLowerPosition()
{
    return (meter_t)m_data.maxLowerPosition;
}

newton_t CHoistStateSubscriber::GetMaxHookload()
{
    return (newton_t)m_data.maxHookload;
}

meters_per_second_t CHoistStateSubscriber::GetTargetVelocity()
{
    return (meters_per_second_t)m_data.targetVelocity;
}

meter_t CHoistStateSubscriber::GetTargetPosition()
{
    return (meter_t)m_data.targetPosition;
}

bool CHoistStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::HOIST_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
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

void CHoistStateSubscriber::DataAvailable(const nec::process::HoistState &data,
                                          const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable();
        }
    }
}

void CHoistStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHoistStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CHoistStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
