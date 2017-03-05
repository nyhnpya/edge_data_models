#include "autodriller_configuration_request_subscriber.h"

CAutoDrillerConfigurationRequestSubscriber::CAutoDrillerConfigurationRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
}

CAutoDrillerConfigurationRequestSubscriber::~CAutoDrillerConfigurationRequestSubscriber()
{
}

bool CAutoDrillerConfigurationRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetWobProportional(double &wobProportional)
{
    wobProportional = m_data.wobProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetWobIntegral(double &wobIntegral)
{
    wobIntegral = m_data.wobIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetDifferentialPressureProportional(double &differentialPressureProportional)
{
    differentialPressureProportional = m_data.differentialPressureProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetDifferentialPressureIntegral(double &differentialPressureIntegral)
{
    differentialPressureIntegral = m_data.differentialPressureIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTorqueProportional(double &torqueProportional)
{
    torqueProportional = m_data.torqueProportional;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTorqueIntegral(double &torqueIntegral)
{
    torqueIntegral = m_data.torqueIntegral;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

void CAutoDrillerConfigurationRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CAutoDrillerConfigurationRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

bool CAutoDrillerConfigurationRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               CalibrationHoisting::HMI_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoDrillerConfigurationRequestSubscriber::DataAvailable(const AutoDrillerConfiguration::HmiRequest &data,
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

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CAutoDrillerConfigurationRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;
}

void CAutoDrillerConfigurationRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
