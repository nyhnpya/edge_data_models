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

DataTypes::Uuid CRotateStateSubscriber::GetId()
{
    return DDS_String_dup(m_data.id);
}

DataTypes::Status CRotateStateSubscriber::GetStatus()
{
    return m_data.status;
}

radians_per_second_t CRotateStateSubscriber::GetActualRate()
{
    return (radians_per_second_t)m_data.actualRate;
}

radians_per_second_t CRotateStateSubscriber::GetMinRate()
{
    return (radians_per_second_t)m_data.minRate;
}

radians_per_second_t CRotateStateSubscriber::GetMaxRate()
{
    return (radians_per_second_t)m_data.maxRate;
}

radians_per_second_t CRotateStateSubscriber::GetTargetRate()
{
    return (radians_per_second_t)m_data.targetRate;
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
            m_pOnDataAvailable();
        }
    }
}

void CRotateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRotateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CRotateStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
