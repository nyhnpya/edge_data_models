#include "drill_request_subscriber.h"

CDrillRequestSubscriber::CDrillRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CDrillRequestSubscriber::~CDrillRequestSubscriber()
{
}

bool CDrillRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CDrillRequestSubscriber::GetId()
{
    return m_data.id;
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

meters_per_second_t CDrillRequestSubscriber::GetRopLimit()
{
    return (meters_per_second_t)m_data.ropLimit;
}

newton_t CDrillRequestSubscriber::GetWobLimit()
{
    return (newton_t)m_data.wobLimit;
}

pascal_t CDrillRequestSubscriber::GetDifferentialPressureLimit()
{
    return (pascal_t)m_data.differentialPressureLimit;
}

newton_meter_t CDrillRequestSubscriber::GetTorqueLimit()
{
    return (newton_meter_t)m_data.torqueLimit;
}

bool CDrillRequestSubscriber::GetRopMode()
{
    return (m_data.ropMode == DDS_BOOLEAN_TRUE);
}

bool CDrillRequestSubscriber::GetWobMode()
{
    return (m_data.wobMode == DDS_BOOLEAN_TRUE);
}

bool CDrillRequestSubscriber::GetDifferentialPressureMode()
{
    return (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);
}

bool CDrillRequestSubscriber::GetTorqueMode()
{
    return (m_data.torqueMode == DDS_BOOLEAN_TRUE);
}

void CDrillRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CDrillRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CDrillRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::DRILLING_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillRequestSubscriber::DataAvailable(const nec::process::DrillingRequest &data,
                                               const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data.id = DDS_String_dup(data.id);
        m_data.ropLimit = data.ropLimit;
        m_data.wobLimit = data.wobLimit;
        m_data.differentialPressureLimit = data.differentialPressureLimit;
        m_data.torqueLimit = data.torqueLimit;
        m_data.ropMode = data.ropMode;
        m_data.wobMode = data.wobMode;
        m_data.differentialPressureMode = data.differentialPressureMode;
        m_data.torqueMode = data.torqueMode;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable();
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
