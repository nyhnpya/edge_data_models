#include "drilling_calibration_state_subscriber.h"

CDrillingCalibrationStateSubscriber::CDrillingCalibrationStateSubscriber() :
    m_subscriptionMatched(false),
    m_pOnDataAvailable(nullptr),
	m_pOnDataDisposed(nullptr),
	m_pOnLivelinessChanged(nullptr),
	m_pOnSubscriptionMatched(nullptr)
{
	memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillingCalibrationStateSubscriber::~CDrillingCalibrationStateSubscriber()
{
}

bool CDrillingCalibrationStateSubscriber::ValidData()
{
	return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::ValidSubscription()
{
	return m_subscriptionMatched;
}

bool CDrillingCalibrationStateSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetWobProportional(double &wobProportional)
{
    wobProportional = m_data.wobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMinWobProportional(double &minWobProportional)
{
    minWobProportional = m_data.minWobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMaxWobProportional(double &maxWobProportional)
{
    maxWobProportional = m_data.maxWobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetWobIntegral(double &wobIntegral)
{
    wobIntegral = m_data.wobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMinWobIntegral(double &minWobIntegral)
{
    minWobIntegral = m_data.minWobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMaxWobIntegral(double &maxWobIntegral)
{
    maxWobIntegral = m_data.maxWobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetDifferentialPressureProportional(double &differentialPressureProportional)
{
    differentialPressureProportional = m_data.differentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMinDifferentialPressureProportional(double &minDifferentialPressureProportional)
{
    minDifferentialPressureProportional = m_data.minDifferentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMaxDifferentialPressureProportional(double &maxDifferentialPressureProportional)
{
    maxDifferentialPressureProportional = m_data.maxDifferentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetDifferentialPressureIntegral(double &differentialPressureIntegral)
{
    differentialPressureIntegral = m_data.differentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMinDifferentialPressureIntegral(double &minDifferentialPressureIntegral)
{
    minDifferentialPressureIntegral = m_data.minDifferentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMaxDifferentialPressureIntegral(double &maxDifferentialPressureIntegral)
{
    maxDifferentialPressureIntegral = m_data.maxDifferentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetTorqueProportional(double &torqueProportional)
{
    torqueProportional = m_data.torqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMinTorqueProportional(double &minTorqueProportional)
{
    minTorqueProportional = m_data.minTorqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMaxTorqueProportional(double &maxTorqueProportional)
{
    maxTorqueProportional = m_data.maxTorqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetTorqueIntegral(double &torqueIntegral)
{
    torqueIntegral = m_data.torqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMinTorqueIntegral(double &minTorqueIntegral)
{
    minTorqueIntegral = m_data.minTorqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetMaxTorqueIntegral(double &maxTorqueIntegral)
{
    maxTorqueIntegral = m_data.maxTorqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetRopMode(bool &ropMode)
{
    ropMode = (m_data.ropMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = (m_data.wobMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = (m_data.torqueMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               CalibrationHoisting::DRILLING_CALIBRATION_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingCalibrationStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillingCalibrationStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillingCalibrationStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CDrillingCalibrationStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CDrillingCalibrationStateSubscriber::DataAvailable(const CalibrationHoisting::DrillingCalibrationState &data,
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

void CDrillingCalibrationStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingCalibrationStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CDrillingCalibrationStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
