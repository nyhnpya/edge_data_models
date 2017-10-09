#include "rotate_state_subscriber.h"

CRotateStateSubscriber::CRotateStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CRotateStateSubscriber::~CRotateStateSubscriber()
{
}

bool CRotateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetStatus(DataTypes::Status &status)
{
    status = m_data.status;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetActualRate(radians_per_second_t &actualRate)
{
    actualRate = (radians_per_second_t)m_data.actualRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetMinRate(radians_per_second_t &minRate)
{
    minRate = (radians_per_second_t)m_data.minRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetMaxRate(radians_per_second_t &maxRate)
{
    maxRate = (radians_per_second_t)m_data.maxRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetTargetRate(radians_per_second_t &targetRate)
{
    targetRate = (radians_per_second_t)m_data.targetRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::ROTATE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CRotateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CRotateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CRotateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CRotateStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CRotateStateSubscriber::DataAvailable(const nec::process::RotateState &data,
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

void CRotateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRotateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CRotateStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
