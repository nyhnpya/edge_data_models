#include "drilling_calibration_request_subscriber.h"

CDrillingCalibrationRequestSubscriber::CDrillingCalibrationRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
}

CDrillingCalibrationRequestSubscriber::~CDrillingCalibrationRequestSubscriber()
{
}

bool CDrillingCalibrationRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetWobProportional(double &wobProportional)
{
    wobProportional = m_data.wobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetWobIntegral(double &wobIntegral)
{
    wobIntegral = m_data.wobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetDifferentialPressureProportional(double &differentialPressureProportional)
{
    differentialPressureProportional = m_data.differentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetDifferentialPressureIntegral(double &differentialPressureIntegral)
{
    differentialPressureIntegral = m_data.differentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetTorqueProportional(double &torqueProportional)
{
    torqueProportional = m_data.torqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingCalibrationRequestSubscriber::GetTorqueIntegral(double &torqueIntegral)
{
    torqueIntegral = m_data.torqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

void CDrillingCalibrationRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillingCalibrationRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillingCalibrationRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CDrillingCalibrationRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CDrillingCalibrationRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               CalibrationHoisting::DRILLING_CALIBRATION_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingCalibrationRequestSubscriber::DataAvailable(const CalibrationHoisting::DrillingCalibrationRequest &data,
                                                          const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.timestamp.sec = data.timestamp.sec;
        m_data.timestamp.nanosec = data.timestamp.nanosec;
        m_data.wobProportional = data.wobProportional;
        m_data.wobIntegral = data.wobIntegral;
        m_data.differentialPressureProportional = data.differentialPressureProportional;
        m_data.differentialPressureIntegral = data.differentialPressureIntegral;
        m_data.torqueProportional = data.torqueProportional;
        m_data.torqueIntegral = data.torqueIntegral;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CDrillingCalibrationRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingCalibrationRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CDrillingCalibrationRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
