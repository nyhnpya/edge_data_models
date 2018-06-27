#include "drilling_limits_subscriber.h"

CDrillingLimitsSubscriber::CDrillingLimitsSubscriber() :
    m_subscriptionMatched(false),
    m_pOnDataAvailable(nullptr),
	m_pOnDataDisposed(nullptr),
	m_pOnLivelinessChanged(nullptr),
	m_pOnSubscriptionMatched(nullptr)
{
	memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillingLimitsSubscriber::~CDrillingLimitsSubscriber()
{
}

bool CDrillingLimitsSubscriber::ValidData()
{
	return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingLimitsSubscriber::ValidSubscription()
{
	return m_subscriptionMatched;
}

DataTypes::Uuid CDrillingLimitsSubscriber::GetId()
{
    return m_data.id;
}

meter_t CDrillingLimitsSubscriber::GetStartDepth()
{
    return (meter_t)m_data.startDepth;
}

meter_t CDrillingLimitsSubscriber::GetEndDepth()
{
    return (meter_t)m_data.endDepth;
}

meters_per_second_t CDrillingLimitsSubscriber::GetRopMin()
{
    return (meters_per_second_t)m_data.ropMin;
}

meters_per_second_t CDrillingLimitsSubscriber::GetRopMax()
{
    return (meters_per_second_t)m_data.ropMax;
}

newton_t CDrillingLimitsSubscriber::GetWobMin()
{
    return (newton_t)m_data.wobMin;
}

newton_t CDrillingLimitsSubscriber::GetWobMax()
{
    return (newton_t)m_data.wobMax;
}

pascal_t CDrillingLimitsSubscriber::GetDifferentialPressureMin()
{
    return (pascal_t)m_data.diffPMin;
}

pascal_t CDrillingLimitsSubscriber::GetDifferentialPressureMax()
{
    return (pascal_t)m_data.diffPMax;
}

newton_meter_t CDrillingLimitsSubscriber::GetTorqueMin()
{
    return (newton_meter_t)m_data.torqueMin;
}

newton_meter_t CDrillingLimitsSubscriber::GetTorqueMax()
{
    return (newton_meter_t)m_data.torqueMax;
}

radians_per_second_t CDrillingLimitsSubscriber::GetRotateMin()
{
    return (radians_per_second_t)m_data.rotateMin;
}

radians_per_second_t CDrillingLimitsSubscriber::GetRotateMax()
{
    return (radians_per_second_t)m_data.rotateMax;
}

bool CDrillingLimitsSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               process::plan::DRILLING_LIMITS,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingLimitsSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillingLimitsSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillingLimitsSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CDrillingLimitsSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CDrillingLimitsSubscriber::DataAvailable(const process::plan::DrillingLimits &data,
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

void CDrillingLimitsSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingLimitsSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CDrillingLimitsSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
