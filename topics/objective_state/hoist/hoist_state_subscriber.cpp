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

bool CHoistStateSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetStatus(DataTypes::Status &status)
{
    status = m_data.status;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetActualVelocity(meters_per_second_t &actualVelocity)
{
    actualVelocity = (meters_per_second_t)m_data.actualVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetActualPosition(meter_t &actualPosition)
{
    actualPosition = (meter_t)m_data.actualPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxHoistVelocity(meters_per_second_t &maxHoistVelocity)
{
    maxHoistVelocity = (meters_per_second_t)m_data.maxHoistVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxLowerVelocity(meters_per_second_t &maxLowerVelocity)
{
    maxLowerVelocity = (meters_per_second_t)m_data.maxLowerVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxHoistPosition(meter_t &maxHoistPosition)
{
    maxHoistPosition = (meter_t)m_data.maxHoistPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxLowerPosition(meter_t &maxLowerPosition)
{
    maxLowerPosition = (meter_t)m_data.maxLowerPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetTargetVelocity(meters_per_second_t &targetVelocity)
{
    targetVelocity = (meters_per_second_t)m_data.targetVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetTargetPosition(meter_t &targetPosition)
{
    targetPosition = (meter_t)m_data.targetPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
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
            m_pOnDataAvailable(data);
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
