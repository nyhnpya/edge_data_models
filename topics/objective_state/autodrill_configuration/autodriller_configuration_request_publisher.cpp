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
