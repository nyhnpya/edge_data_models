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

bool CHoistObjectiveSubscriber::GetId(DataTypes::Uuid id)
{
    //    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

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

bool CHoistObjectiveSubscriber::GetTargetPosition(double targetPosition)
{
    targetPosition = m_data.targetPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               SafeHoistFunctions::HOIST_OBJECTIVE,
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

void CHoistObjectiveSubscriber::DataAvailable(const SafeHoistFunctions::HoistObjective &data,
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

void CHoistObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
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
