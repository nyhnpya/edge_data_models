#include "rotate_request_subscriber.h"

CRotateRequestSubscriber::CRotateRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CRotateRequestSubscriber::~CRotateRequestSubscriber()
{
}

bool CRotateRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateRequestSubscriber::GetPriority(DataTypes::Priority &priority)
{
    priority = m_data.priority;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateRequestSubscriber::GetTimeNeeded(DataTypes::Time &timeNeeded)
{
    timeNeeded = m_data.timeNeeded;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateRequestSubscriber::GetDuration(DataTypes::Time &duration)
{
    duration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateRequestSubscriber::GetTargetRate(double &targetRate)
{
    targetRate = m_data.targetRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessRotation::ROTATE_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CRotateRequestSubscriber::OnDataAvailable(onDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CRotateRequestSubscriber::DataAvailable(const ProcessRotation::RotateRequest &data,
                                           const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CRotateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}
