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

bool CHoistStateSubscriber::GetActualVelocity(double &actualVelocity)
{
    actualVelocity = m_data.actualVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetActualPosition(double &actualPosition)
{
    actualPosition = m_data.actualPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxHoistVelocity(double &maxHoistVelocity)
{
    maxHoistVelocity = m_data.maxHoistVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxLowerVelocity(double &maxLowerVelocity)
{
    maxLowerVelocity = m_data.maxLowerVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxHoistPosition(double &maxHoistPosition)
{
    maxHoistPosition = m_data.maxHoistPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetMaxLowerPosition(double &maxLowerPosition)
{
    maxLowerPosition = m_data.maxLowerPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetTargetVelocity(double &targetVelocity)
{
    targetVelocity = m_data.targetVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::GetTargetPosition(double &targetPosition)
{
    targetPosition = m_data.targetPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessHoist::HOIST_STATE,
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

void CHoistStateSubscriber::DataAvailable(const ProcessHoist::HoistState &data,
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
