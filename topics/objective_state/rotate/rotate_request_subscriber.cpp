#include "rotate_request_subscriber.h"

CRotateRequestSubscriber::CRotateRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CRotateRequestSubscriber::~CRotateRequestSubscriber()
{
}

bool CRotateRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CRotateRequestSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Priority CRotateRequestSubscriber::GetPriority()
{
    return m_data.priority;
}

DataTypes::Time CRotateRequestSubscriber::GetTimeNeeded()
{
    return m_data.timeNeeded;
}

DataTypes::Time CRotateRequestSubscriber::GetDuration()
{
    return m_data.estimatedDuration;
}

radians_per_second_t CRotateRequestSubscriber::GetTargetRate()
{
    return (radians_per_second_t)m_data.targetRate;
}

bool CRotateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::ROTATE_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CRotateRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CRotateRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CRotateRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CRotateRequestSubscriber::DataAvailable(const nec::process::RotateRequest &data,
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

void CRotateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}

void CRotateRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
