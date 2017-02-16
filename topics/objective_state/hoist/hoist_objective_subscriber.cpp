#include "hoist_objective_subscriber.h"

CHoistObjectiveSubscriber::CHoistObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CHoistObjectiveSubscriber::~CHoistObjectiveSubscriber()
{
}

bool CHoistObjectiveSubscriber::GetId(DataTypes::Uuid id)
{
    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistObjectiveSubscriber::GetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    estimatedDuration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistObjectiveSubscriber::GetTargetVelocity(double targetVelocity)
{
    targetVelocity = m_data.targetVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistObjectiveSubscriber::GetTargetDestination(double targetDestination)
{
    targetDestination = m_data.targetDestination;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessHoist::HOIST_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CHoistObjectiveSubscriber::OnDataAvailable(onDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CHoistObjectiveSubscriber::DataAvailable(const ProcessHoist::HoistObjective &data,
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

void CHoistObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}
