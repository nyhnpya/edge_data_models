#include "drill_state_subscriber.h"

CDrillStateSubscriber::CDrillStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillStateSubscriber::~CDrillStateSubscriber()
{
}

bool CDrillStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::DRILL_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CDrillStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CDrillStateSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CDrillStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

units::velocity::meters_per_second_t CDrillStateSubscriber::GetRopActual()
{
    return units::velocity::meters_per_second_t(m_data.ropActual);
}

units::force::newton_t CDrillStateSubscriber::GetWobActual()
{
    return units::force::newton_t(m_data.wobActual);
}

units::pressure::pascal_t CDrillStateSubscriber::GetDiffPressureActual()
{
    return units::pressure::pascal_t(m_data.diffPressureActual);
}

units::torque::newton_meter_t CDrillStateSubscriber::GetTorqueActual()
{
    return units::torque::newton_meter_t(m_data.torqueActual);
}

units::velocity::meters_per_second_t CDrillStateSubscriber::GetRopLimit()
{
    return units::velocity::meters_per_second_t(m_data.ropLimit);
}

units::force::newton_t CDrillStateSubscriber::GetWobLimit()
{
    return units::force::newton_t(m_data.wobLimit);
}

units::pressure::pascal_t CDrillStateSubscriber::GetDiffPressureLimit()
{
    return units::pressure::pascal_t(m_data.diffPressureLimit);
}

units::torque::newton_meter_t CDrillStateSubscriber::GetTorqueLimit()
{
    return units::torque::newton_meter_t(m_data.torqueLimit);
}

bool CDrillStateSubscriber::GetRopMode()
{
    return m_data.ropMode;
}

bool CDrillStateSubscriber::GetWobMode()
{
    return m_data.wobMode;
}

bool CDrillStateSubscriber::GetDiffPressureMode()
{
    return m_data.diffPressureMode;
}

bool CDrillStateSubscriber::GetTorqueMode()
{
    return m_data.torqueMode;
}

units::velocity::meters_per_second_t CDrillStateSubscriber::GetRopTarget()
{
    return units::velocity::meters_per_second_t(m_data.ropTarget);
}

units::force::newton_t CDrillStateSubscriber::GetWobTarget()
{
    return units::force::newton_t(m_data.wobTarget);
}

units::pressure::pascal_t CDrillStateSubscriber::GetDiffPressureTarget()
{
    return units::pressure::pascal_t(m_data.diffPressureTarget);
}

units::torque::newton_meter_t CDrillStateSubscriber::GetTorqueTarget()
{
    return units::torque::newton_meter_t(m_data.torqueTarget);
}

bool CDrillStateSubscriber::GetBitOnBottom()
{
    return m_data.bitOnBottom;
}


void CDrillStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CDrillStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CDrillStateSubscriber::DataAvailable(const nec::process::DrillState &data,
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

void CDrillStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CDrillStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
