#include "auto_ream_request_subscriber.h"

CAutoReamRequestSubscriber::CAutoReamRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CAutoReamRequestSubscriber::~CAutoReamRequestSubscriber()
{
}

bool CAutoReamRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamRequestSubscriber::GetPriority(DataTypes::Priority &priority)
{
    priority = m_data.priority;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamRequestSubscriber::GetTimeNeeded(DataTypes::Time &timeNeeded)
{
    timeNeeded = m_data.timeNeeded;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamRequestSubscriber::GetDuration(DataTypes::Time &duration)
{
    duration = m_data.duration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

void CAutoReamRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CAutoReamRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CAutoReamRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CAutoReamRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::AUTO_REAM_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoReamRequestSubscriber::DataAvailable(const nec::process::AutoReamRequest &data,
                                               const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(sampleInfo);
        }
    }
}

void CAutoReamRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoReamRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
