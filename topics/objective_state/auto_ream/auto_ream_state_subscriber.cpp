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
    //    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetHookloadActual(double &hookloadActual)
{
    hookloadActual = m_data.hookloadActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetHoleDepthActual(double &holeDepthActual)
{
    holeDepthActual = m_data.holeDepthActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetDeltaPressureActual(double &differentialPressureActual)
{
    differentialPressureActual = m_data.differentialPressureActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetWeightOnBitActual(double &weightOnBitActual)
{
    weightOnBitActual = m_data.weightOnBitActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetStandpipePressureActual(double &standpipePressureActual)
{
    standpipePressureActual = m_data.standpipePressureActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetBlockSpeedActual(double &blockSpeedActual)
{
    blockSpeedActual = m_data.blockSpeedActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetQuillPositionActual(double &quillPositionActual)
{
    quillPositionActual = m_data.quillPositionActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamStateSubscriber::GetQuillRateActual(double &quillRateActual)
{
    quillRateActual = m_data.quillRateActual;

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
            m_pOnDataAvailable(data);
        }
    }
}

void CAutoReamStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoReamStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CAutoReamStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
