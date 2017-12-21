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

bool CDrillingStateSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopActual(meters_per_second_t &ropActual)
{
    ropActual = (meters_per_second_t)m_data.ropActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobActual(newton_t &wobActual)
{
    wobActual = (newton_t)m_data.wobActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureActual(pascal_t &differentialPressureActual)
{
    differentialPressureActual = (pascal_t)m_data.differentialPressureActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueActual(newton_meter_t &torqueActual)
{
    torqueActual = (newton_meter_t)m_data.torqueActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopLimit(meters_per_second_t &ropLimit)
{
    ropLimit = (meters_per_second_t)m_data.ropLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobLimit(newton_t &wobLimit)
{
    wobLimit = (newton_t)m_data.wobLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureLimit(pascal_t &differentialPressureLimit)
{
    differentialPressureLimit = (pascal_t)m_data.differentialPressureLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueLimit(newton_meter_t &torqueLimit)
{
    torqueLimit = (newton_meter_t)m_data.torqueLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopMode(bool &ropMode)
{
	ropMode = (m_data.ropMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = (m_data.wobMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = (m_data.torqueMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopTarget(meters_per_second_t &ropTarget)
{
  ropTarget = (meters_per_second_t)m_data.ropTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobTarget(newton_t &wobTarget)
{
    wobTarget = (newton_t)m_data.wobTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureTarget(pascal_t &differentialPressureTarget)
{
    differentialPressureTarget = (pascal_t)m_data.differentialPressureTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueTarget(newton_meter_t &torqueTarget)
{
    torqueTarget = (newton_meter_t)m_data.torqueTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
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
            m_pOnDataAvailable(data);
        }
    }
}

void CDrillingStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CDrillingStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
