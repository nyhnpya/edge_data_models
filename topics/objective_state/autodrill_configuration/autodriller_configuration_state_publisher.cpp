#include "autodriller_configuration_state_publisher.h"

CAutoDrillerConfigurationStatePublisher::CAutoDrillerConfigurationStatePublisher()
{
}

CAutoDrillerConfigurationStatePublisher::~CAutoDrillerConfigurationStatePublisher()
{
}

void CAutoDrillerConfigurationStatePublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance->id, id, 16);
    }
    else
    {
        LOG_ERROR("Failed to set id because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
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

void CAutoDrillerConfigurationStatePublisher::SetWobProportional(const double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWobIntegral(const double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureProportional(const double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureIntegral(const double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueProportional(const double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueIntegral(const double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMinWobProportional(const double minWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobProportional = minWobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMaxWobProportional(const double maxWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobProportional = maxWobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMinWobIntegral(const double minWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobIntegral = minWobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMaxWobIntegral(const double maxWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobIntegral = maxWobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMinDifferentialPressureProportional(const double minDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureProportional = minDifferentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMaxDifferentialPressureProportional(const double maxDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureProportional = maxDifferentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMinDifferentialPressureIntegral(const double minDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureIntegral = minDifferentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMaxDifferentialPressureIntegral(const double maxDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureIntegral = maxDifferentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMinTorqueProportional(const double minTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueProportional = minTorqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMaxTorqueProportional(const double maxTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueProportional = maxTorqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMinTorqueIntegral(const double minTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueIntegral = minTorqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetMaxTorqueIntegral(const double maxTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueIntegral = maxTorqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRopMode(const bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
    else
    {
        LOG_ERROR("Failed to set rop mode because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWobMode(const bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
    else
    {
        LOG_ERROR("Failed to set wob mode because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureMode(const bool differentialPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureMode = differentialPressureMode;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure mode because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueMode(const bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
    else
    {
        LOG_ERROR("Failed to set torque mode because of uninitialized sample");
    }
}

bool CAutoDrillerConfigurationStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CAutoDrillerConfigurationStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              AutoDrillerConfiguration::HMI_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
