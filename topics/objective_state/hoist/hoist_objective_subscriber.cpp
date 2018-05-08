#include "hoist_objective_subscriber.h"

CHoistObjectiveSubscriber::CHoistObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CHoistObjectiveSubscriber::~CHoistObjectiveSubscriber()
{
}

bool CHoistObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CHoistObjectiveSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Time CHoistObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

meters_per_second_t CHoistObjectiveSubscriber::GetTargetVelocity()
{
    return (meters_per_second_t)m_data.targetVelocity;
}

meter_t CHoistObjectiveSubscriber::GetTargetPosition()
{
    return (meter_t)m_data.targetPosition;
}

bool CHoistObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::HOIST_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CHoistObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CHoistObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CHoistObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CHoistObjectiveSubscriber::DataAvailable(const nec::process::HoistObjective &data,
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

void CHoistObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHoistObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
