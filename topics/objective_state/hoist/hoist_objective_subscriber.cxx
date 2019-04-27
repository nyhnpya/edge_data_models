#include "hoist_objective_subscriber.h"

CHoistObjectiveSubscriber::CHoistObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CHoistObjectiveSubscriber::~CHoistObjectiveSubscriber()
{
}

bool CHoistObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::HOIST_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHoistObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CHoistObjectiveSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Uuid CHoistObjectiveSubscriber::GetObjectiveId()
{
    return m_data.objectiveId;
}

DataTypes::Time CHoistObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

units::velocity::meters_per_second_t CHoistObjectiveSubscriber::GetTargetVelocity()
{
    return units::velocity::meters_per_second_t(m_data.targetVelocity);
}

units::length::meter_t CHoistObjectiveSubscriber::GetTargetPosition()
{
    return units::length::meter_t(m_data.targetPosition);
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


void CHoistObjectiveSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
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
            m_pOnDataAvailable(sampleInfo);
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

void CHoistObjectiveSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}