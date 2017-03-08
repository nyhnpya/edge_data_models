#include "drilling_calibration_state_subscriber.h"

CDrillingCalibrationStateSubscriber::CDrillingCalibrationStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CDrillingCalibrationStateSubscriber::~CDrillingCalibrationStateSubscriber()
{
}

bool CDrillingCalibrationStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
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

void CDrillingCalibrationStateSubscriber::DataAvailable(const CalibrationHoisting::DrillingCalibrationState &data,
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
        m_data.minWobProportional = data.minWobProportional;
        m_data.maxWobProportional = data.maxWobProportional;
        m_data.minWobIntegral = data.minWobIntegral;
        m_data.maxWobIntegral = data.maxWobIntegral;
        m_data.minDifferentialPressureProportional = data.minDifferentialPressureProportional;
        m_data.maxDifferentialPressureProportional = data.maxDifferentialPressureProportional;
        m_data.minDifferentialPressureIntegral = data.minDifferentialPressureIntegral;
        m_data.maxDifferentialPressureIntegral = data.maxDifferentialPressureIntegral;
        m_data.minTorqueProportional = data.minTorqueProportional;
        m_data.maxTorqueProportional = data.maxTorqueProportional;
        m_data.minTorqueIntegral = data.minTorqueIntegral;
        m_data.maxTorqueIntegral = data.maxTorqueIntegral;
        m_data.ropMode = data.ropMode;
        m_data.wobMode = data.wobMode;
        m_data.differentialPressureMode = data.differentialPressureMode;
        m_data.torqueMode = data.torqueMode;

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
