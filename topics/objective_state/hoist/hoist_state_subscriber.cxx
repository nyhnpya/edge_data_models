#include "hoist_state_subscriber.h"

CHoistStateSubscriber::CHoistStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CHoistStateSubscriber::~CHoistStateSubscriber()
{
}

bool CHoistStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::HOIST_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHoistStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CHoistStateSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Uuid CHoistStateSubscriber::GetObjectiveId()
{
    return m_data.objectiveId;
}

DataTypes::Time CHoistStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

DataTypes::Status CHoistStateSubscriber::GetStatus()
{
    return m_data.status;
}

units::force::newton_t CHoistStateSubscriber::GetActualHookload()
{
    return units::force::newton_t(m_data.actualHookload);
}

units::velocity::meters_per_second_t CHoistStateSubscriber::GetActualVelocity()
{
    return units::velocity::meters_per_second_t(m_data.actualVelocity);
}

units::length::meter_t CHoistStateSubscriber::GetActualPosition()
{
    return units::length::meter_t(m_data.actualPosition);
}

units::force::newton_t CHoistStateSubscriber::GetMaxHookload()
{
    return units::force::newton_t(m_data.maxHookload);
}

units::velocity::meters_per_second_t CHoistStateSubscriber::GetMaxHoistVelocity()
{
    return units::velocity::meters_per_second_t(m_data.maxHoistVelocity);
}

units::velocity::meters_per_second_t CHoistStateSubscriber::GetMaxLowerVelocity()
{
    return units::velocity::meters_per_second_t(m_data.maxLowerVelocity);
}

units::length::meter_t CHoistStateSubscriber::GetMaxHoistPosition()
{
    return units::length::meter_t(m_data.maxHoistPosition);
}

units::length::meter_t CHoistStateSubscriber::GetMaxLowerPosition()
{
    return units::length::meter_t(m_data.maxLowerPosition);
}

units::velocity::meters_per_second_t CHoistStateSubscriber::GetTargetVelocity()
{
    return units::velocity::meters_per_second_t(m_data.targetVelocity);
}

units::length::meter_t CHoistStateSubscriber::GetTargetPosition()
{
    return units::length::meter_t(m_data.targetPosition);
}


void CHoistStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CHoistStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CHoistStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CHoistStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CHoistStateSubscriber::DataAvailable(const nec::process::HoistState &data,
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

void CHoistStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHoistStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CHoistStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
