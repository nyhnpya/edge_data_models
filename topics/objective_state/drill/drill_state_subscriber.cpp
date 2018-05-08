#include "drill_state_subscriber.h"

CDrillingStateSubscriber::CDrillingStateSubscriber() :
    m_subscriptionMatched(false),
    m_pOnDataAvailable(nullptr),
	m_pOnDataDisposed(nullptr),
	m_pOnLivelinessChanged(nullptr),
	m_pOnSubscriptionMatched(nullptr)
{
	memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillingStateSubscriber::~CDrillingStateSubscriber()
{
}

bool CDrillingStateSubscriber::ValidData()
{
	return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::ValidSubscription()
{
	return m_subscriptionMatched;
}

DataTypes::Uuid CDrillingStateSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Time CDrillingStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

meters_per_second_t CDrillingStateSubscriber::GetRopActual()
{
    return (meters_per_second_t)m_data.ropActual;
}

newton_t CDrillingStateSubscriber::GetWobActual()
{
    return (newton_t)m_data.wobActual;
}

pascal_t CDrillingStateSubscriber::GetDifferentialPressureActual()
{
    return (pascal_t)m_data.differentialPressureActual;
}

newton_meter_t CDrillingStateSubscriber::GetTorqueActual()
{
    return (newton_meter_t)m_data.torqueActual;
}

meters_per_second_t CDrillingStateSubscriber::GetRopLimit()
{
    return (meters_per_second_t)m_data.ropLimit;
}

newton_t CDrillingStateSubscriber::GetWobLimit()
{
    return (newton_t)m_data.wobLimit;
}

pascal_t CDrillingStateSubscriber::GetDifferentialPressureLimit()
{
    return (pascal_t)m_data.differentialPressureLimit;
}

newton_meter_t CDrillingStateSubscriber::GetTorqueLimit()
{
    return (newton_meter_t)m_data.torqueLimit;
}

bool CDrillingStateSubscriber::GetRopMode()
{
	return (m_data.ropMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobMode()
{
    return (m_data.wobMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureMode()
{
    return (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueMode()
{
    return (m_data.torqueMode == DDS_BOOLEAN_TRUE);
}

meters_per_second_t CDrillingStateSubscriber::GetRopTarget()
{
    return (meters_per_second_t)m_data.ropTarget;
}

newton_t CDrillingStateSubscriber::GetWobTarget()
{
    return (newton_t)m_data.wobTarget;
}

pascal_t CDrillingStateSubscriber::GetDifferentialPressureTarget()
{
    return (pascal_t)m_data.differentialPressureTarget;
}

newton_meter_t CDrillingStateSubscriber::GetTorqueTarget()
{
    return (newton_meter_t)m_data.torqueTarget;
}

bool CDrillingStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::DRILLING_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillingStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillingStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CDrillingStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CDrillingStateSubscriber::DataAvailable(const nec::process::DrillingState &data,
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

void CDrillingStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CDrillingStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
