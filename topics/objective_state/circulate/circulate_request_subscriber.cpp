#include "circulate_request_subscriber.h"

CCirculateRequestSubscriber::CCirculateRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CCirculateRequestSubscriber::~CCirculateRequestSubscriber()
{
}

bool CCirculateRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateRequestSubscriber::GetPriority(DataTypes::Priority &priority)
{
    priority = m_data.priority;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateRequestSubscriber::GetTimeNeeded(DataTypes::Time &timeNeeded)
{
    timeNeeded = m_data.timeNeeded;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateRequestSubscriber::GetDuration(DataTypes::Time &duration)
{
    duration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateRequestSubscriber::GetTargetFlowRate(double &targetFlowRate)
{
    targetFlowRate = m_data.targetFlowRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessCirculation::CIRCULATE_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CCirculateRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CCirculateRequestSubscriber::DataAvailable(const ProcessCirculation::CirculateRequest &data,
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

void CCirculateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}
