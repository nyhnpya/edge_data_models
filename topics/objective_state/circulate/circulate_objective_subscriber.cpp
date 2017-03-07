#include "circulate_objective_subscriber.h"

CCirculateObjectiveSubscriber::CCirculateObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CCirculateObjectiveSubscriber::~CCirculateObjectiveSubscriber()
{
}

bool CCirculateObjectiveSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateObjectiveSubscriber::GetEstimatedDuration(DataTypes::Time &estimatedDuration)
{
    estimatedDuration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateObjectiveSubscriber::GetTargetFlowRate(double &targetFlowRate)
{
    targetFlowRate = m_data.targetFlowRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessCirculation::CIRCULATE_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CCirculateObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CCirculateObjectiveSubscriber::DataAvailable(const ProcessCirculation::CirculateObjective &data,
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

void CCirculateObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}
