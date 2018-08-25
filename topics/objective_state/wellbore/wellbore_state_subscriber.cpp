#include <string.h>
#include "wellbore_state_subscriber.h"

CWellboreStateSubscriber::CWellboreStateSubscriber()
{
}

CWellboreStateSubscriber::~CWellboreStateSubscriber()
{
}

bool CWellboreStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CWellboreStateSubscriber::GetId()
{
    return m_data.id;
}

meter_t CWellboreStateSubscriber::GetBitDepth()
{
    return meter_t(m_data.bitDepth);
}


meter_t CWellboreStateSubscriber::GetHoleDepth()
{
    return meter_t(m_data.holeDepth);
}

bool CWellboreStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::WELLBORE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CWellboreStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CWellboreStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CWellboreStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CWellboreStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CWellboreStateSubscriber::DataAvailable(const nec::process::WellboreState &data,
                                             const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;
        m_data.timestamp.sec = sampleInfo.source_timestamp.sec;
        m_data.timestamp.nanosec = sampleInfo.source_timestamp.nanosec;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CWellboreStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CWellboreStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CWellboreStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
