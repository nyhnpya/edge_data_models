#include "autodriller_configuration_state_subscriber.h"

CAutoDrillerConfigurationStateSubscriber::CAutoDrillerConfigurationStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CAutoDrillerConfigurationStateSubscriber::~CAutoDrillerConfigurationStateSubscriber()
{
}

bool CAutoDrillerConfigurationStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWobProportional(double &wobProportional)
{
    wobProportional = m_data.wobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMinWobProportional(double &minWobProportional)
{
    minWobProportional = m_data.minWobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMaxWobProportional(double &maxWobProportional)
{
    maxWobProportional = m_data.maxWobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWobIntegral(double &wobIntegral)
{
    wobIntegral = m_data.wobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMinWobIntegral(double &minWobIntegral)
{
    minWobIntegral = m_data.minWobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMaxWobIntegral(double &maxWobIntegral)
{
    maxWobIntegral = m_data.maxWobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureProportional(double &differentialPressureProportional)
{
    differentialPressureProportional = m_data.differentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMinDifferentialPressureProportional(double &minDifferentialPressureProportional)
{
    minDifferentialPressureProportional = m_data.minDifferentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMaxDifferentialPressureProportional(double &maxDifferentialPressureProportional)
{
    maxDifferentialPressureProportional = m_data.maxDifferentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureIntegral(double &differentialPressureIntegral)
{
    differentialPressureIntegral = m_data.differentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMinDifferentialPressureIntegral(double &minDifferentialPressureIntegral)
{
    minDifferentialPressureIntegral = m_data.minDifferentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMaxDifferentialPressureIntegral(double &maxDifferentialPressureIntegral)
{
    maxDifferentialPressureIntegral = m_data.maxDifferentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueProportional(double &torqueProportional)
{
    torqueProportional = m_data.torqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMinTorqueProportional(double &minTorqueProportional)
{
    minTorqueProportional = m_data.minTorqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMaxTorqueProportional(double &maxTorqueProportional)
{
    maxTorqueProportional = m_data.maxTorqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueIntegral(double &torqueIntegral)
{
    torqueIntegral = m_data.torqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMinTorqueIntegral(double &minTorqueIntegral)
{
    minTorqueIntegral = m_data.minTorqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMaxTorqueIntegral(double &maxTorqueIntegral)
{
    maxTorqueIntegral = m_data.maxTorqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRopMode(bool &ropMode)
{
    ropMode = m_data.ropMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = m_data.wobMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = m_data.differentialPressureMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = m_data.torqueMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               CalibrationHoisting::AUTODRILLER_CONFIGURATION_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoDrillerConfigurationStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CAutoDrillerConfigurationStateSubscriber::DataAvailable(const AutoDrillerConfiguration::HmiState &data,
                                                             const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
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

void CAutoDrillerConfigurationStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;
}
