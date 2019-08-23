#include "auto_ream_state_subscriber.h"

CAutoReamStateSubscriber::CAutoReamStateSubscriber() :
    m_subscriptionMatched(false),
    m_pOnDataAvailable(nullptr),
	m_pOnDataDisposed(nullptr),
	m_pOnLivelinessChanged(nullptr),
	m_pOnSubscriptionMatched(nullptr)
{
	memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CAutoReamStateSubscriber::~CAutoReamStateSubscriber()
{
}

bool CAutoReamStateSubscriber::ValidData()
{
	return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::ValidSubscription()
{
	return m_subscriptionMatched;
}

bool CAutoReamStateSubscriber::GetId(DataTypes::Uuid &id)
{
    id = DDS_String_dup(m_data.id);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetHookloadActual(newton_t &hookloadActual)
{
    hookloadActual = (newton_t)m_data.hookloadActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetHoleDepthActual(meter_t &holeDepthActual)
{
    holeDepthActual = (meter_t)m_data.holeDepthActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetDeltaPressureActual(pascal_t &differentialPressureActual)
{
    differentialPressureActual = (pascal_t)m_data.differentialPressureActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetWeightOnBitActual(newton_t &weightOnBitActual)
{
    weightOnBitActual = (newton_t)m_data.weightOnBitActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetStandpipePressureActual(pascal_t &standpipePressureActual)
{
    standpipePressureActual = (pascal_t)m_data.standpipePressureActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetBlockSpeedActual(meters_per_second_t &blockSpeedActual)
{
    blockSpeedActual = (meters_per_second_t)m_data.blockSpeedActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetQuillPositionActual(meter_t &quillPositionActual)
{
    quillPositionActual = (meter_t)m_data.quillPositionActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetQuillRateActual(radians_per_second_t &quillRateActual)
{
    quillRateActual = (radians_per_second_t)m_data.quillRateActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::AUTO_REAM_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoReamStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CAutoReamStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CAutoReamStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CAutoReamStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CAutoReamStateSubscriber::DataAvailable(const nec::process::AutoReamState &data,
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

void CAutoReamStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoReamStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CAutoReamStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
