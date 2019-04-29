#include "drill_request_subscriber.h"

CDrillRequestSubscriber::CDrillRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillRequestSubscriber::~CDrillRequestSubscriber()
{
}

bool CDrillRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::DRILL_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CDrillRequestSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Uuid CDrillRequestSubscriber::GetObjectiveId()
{
    return m_data.objectiveId;
}

DataTypes::Priority CDrillRequestSubscriber::GetPriority()
{
    return m_data.priority;
}

DataTypes::Time CDrillRequestSubscriber::GetTimeNeeded()
{
    return m_data.timeNeeded;
}

DataTypes::Time CDrillRequestSubscriber::GetDuration()
{
    return m_data.duration;
}

units::velocity::meters_per_second_t CDrillRequestSubscriber::GetRopTarget()
{
    return units::velocity::meters_per_second_t(m_data.ropTarget);
}

units::force::newton_t CDrillRequestSubscriber::GetWobTarget()
{
    return units::force::newton_t(m_data.wobTarget);
}

units::pressure::pascal_t CDrillRequestSubscriber::GetDiffPressureTarget()
{
    return units::pressure::pascal_t(m_data.diffPressureTarget);
}

units::torque::newton_meter_t CDrillRequestSubscriber::GetTorqueTarget()
{
    return units::torque::newton_meter_t(m_data.torqueTarget);
}

bool CDrillRequestSubscriber::GetRopMode()
{
    return m_data.ropMode;
}

bool CDrillRequestSubscriber::GetWobMode()
{
    return m_data.wobMode;
}

bool CDrillRequestSubscriber::GetDiffPressureMode()
{
    return m_data.diffPressureMode;
}

bool CDrillRequestSubscriber::GetTorqueMode()
{
    return m_data.torqueMode;
}


void CDrillRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CDrillRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CDrillRequestSubscriber::DataAvailable(const nec::process::DrillRequest &data,
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

void CDrillRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CDrillRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
