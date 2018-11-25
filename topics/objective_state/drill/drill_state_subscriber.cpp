#include "drill_state_subscriber.h"

CDrillStateSubscriber::CDrillStateSubscriber() :
    m_subscriptionMatched(false),
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

bool CDrillStateSubscriber::ValidData()
{
	return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillStateSubscriber::ValidSubscription()
{
	return m_subscriptionMatched;
}

DataTypes::Uuid CDrillStateSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Time CDrillStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

meters_per_second_t CDrillStateSubscriber::GetRopActual()
{
    return (meters_per_second_t)m_data.ropActual;
}

newton_t CDrillStateSubscriber::GetWobActual()
{
    return (newton_t)m_data.wobActual;
}

pascal_t CDrillStateSubscriber::GetDiffPressureActual()
{
    return (pascal_t)m_data.diffPressureActual;
}

newton_meter_t CDrillStateSubscriber::GetTorqueActual()
{
    return (newton_meter_t)m_data.torqueActual;
}

meters_per_second_t CDrillStateSubscriber::GetRopLimit()
{
    return (meters_per_second_t)m_data.ropLimit;
}

newton_t CDrillStateSubscriber::GetWobLimit()
{
    return (newton_t)m_data.wobLimit;
}

pascal_t CDrillStateSubscriber::GetDiffPressureLimit()
{
    return (pascal_t)m_data.diffPressureLimit;
}

newton_meter_t CDrillStateSubscriber::GetTorqueLimit()
{
    return (newton_meter_t)m_data.torqueLimit;
}

bool CDrillStateSubscriber::GetRopMode()
{
	return (m_data.ropMode == DDS_BOOLEAN_TRUE);
}

bool CDrillStateSubscriber::GetWobMode()
{
    return (m_data.wobMode == DDS_BOOLEAN_TRUE);
}

bool CDrillStateSubscriber::GetDiffPressureMode()
{
    return (m_data.diffPressureMode == DDS_BOOLEAN_TRUE);
}

bool CDrillStateSubscriber::GetTorqueMode()
{
    return (m_data.torqueMode == DDS_BOOLEAN_TRUE);
}

meters_per_second_t CDrillStateSubscriber::GetRopTarget()
{
    return (meters_per_second_t)m_data.ropTarget;
}

newton_t CDrillStateSubscriber::GetWobTarget()
{
    return (newton_t)m_data.wobTarget;
}

pascal_t CDrillStateSubscriber::GetDiffPressureTarget()
{
    return (pascal_t)m_data.diffPressureTarget;
}

newton_meter_t CDrillStateSubscriber::GetTorqueTarget()
{
    return (newton_meter_t)m_data.torqueTarget;
}

bool CDrillStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::DRILL_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
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
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
