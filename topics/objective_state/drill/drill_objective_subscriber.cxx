#include "drill_objective_subscriber.h"

CDrillObjectiveSubscriber::CDrillObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillObjectiveSubscriber::~CDrillObjectiveSubscriber()
{
}

bool CDrillObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::DRILL_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CDrillObjectiveSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Uuid CDrillObjectiveSubscriber::GetObjectiveId()
{
    return m_data.objectiveId;
}

DataTypes::Time CDrillObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

units::velocity::meters_per_second_t CDrillObjectiveSubscriber::GetRopTarget()
{
    return units::velocity::meters_per_second_t(m_data.ropTarget);
}

units::force::newton_t CDrillObjectiveSubscriber::GetWobTarget()
{
    return units::force::newton_t(m_data.wobTarget);
}

units::pressure::pascal_t CDrillObjectiveSubscriber::GetDiffPressureTarget()
{
    return units::pressure::pascal_t(m_data.diffPressureTarget);
}

units::torque::newton_meter_t CDrillObjectiveSubscriber::GetTorqueTarget()
{
    return units::torque::newton_meter_t(m_data.torqueTarget);
}

bool CDrillObjectiveSubscriber::GetRopMode()
{
    return m_data.ropMode;
}

bool CDrillObjectiveSubscriber::GetWobMode()
{
    return m_data.wobMode;
}

bool CDrillObjectiveSubscriber::GetDiffPressureMode()
{
    return m_data.diffPressureMode;
}

bool CDrillObjectiveSubscriber::GetTorqueMode()
{
    return m_data.torqueMode;
}


void CDrillObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CDrillObjectiveSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CDrillObjectiveSubscriber::DataAvailable(const nec::process::DrillObjective &data,
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

void CDrillObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CDrillObjectiveSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
