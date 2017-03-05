#include "autodriller_configuration_request_publisher.h"

CAutoDrillerConfigurationRequestPublisher::CAutoDrillerConfigurationRequestPublisher()
{
}

CAutoDrillerConfigurationRequestPublisher::~CAutoDrillerConfigurationRequestPublisher()
{
}

void CAutoDrillerConfigurationRequestPublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance->id, id, 16);
    }
    else
    {
        LOG_ERROR("Failed to set id on uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp.sec = timestamp.sec;
        m_pDataInstance->timestamp.nanosec = timestamp.nanosec;
    }
    else
    {
        LOG_ERROR("Failed to set timestamp because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetWobProportional(const double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional on uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetWobIntegral(const double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral on uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetDifferentialPressureProportional(const double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional on uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetDifferentialPressureIntegral(const double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral on uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTorqueProportional(const double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional on uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTorqueIntegral(const double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral on uninitialized sample");
    }
}

bool CAutoDrillerConfigurationRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CAutoDrillerConfigurationRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              AutoDrillerConfiguration::HMI_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
