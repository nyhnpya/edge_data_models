#include "roptimizer_configuration_request_publisher.h"

using namespace CRoptimizerConfigurationRequestPublisher;

CConfigurationStateRequestPublisher::CConfigurationStateRequestPublisher()
{
}

CConfigurationStateRequestPublisher::~CConfigurationStateRequestPublisher()
{
}

void CConfigurationStateRequestPublisher::SetSteadyStateWindow(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateWindow = value;
    }
    else
    {
        LOG_ERROR("Failed to set rop state because of uninitialized sample");
    }
}

void CConfigurationStateRequestPublisher::SetSteadyStateMin(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateMin = value;;
    }
    else
    {
        LOG_ERROR("Failed to set rop state because of uninitialized sample");
    }
}

void CConfigurationStateRequestPublisher::SetRpmStepSize(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmStepSize = value;;
    }
    else
    {
        LOG_ERROR("Failed to set rop state because of uninitialized sample");
    }
}

void CConfigurationStateRequestPublisher::SetRopStepSize(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropStepSize = value;;
    }
    else
    {
        LOG_ERROR("Failed to set rop state because of uninitialized sample");
    }
}

bool CConfigurationStateRequestPublisher::Initialize()
{
    return true;
}

bool CConfigurationStateRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    bRetVal = Publish();

    return bRetVal;
}

bool CConfigurationStateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Shell::Hmi::RoptimizerConfiguration::ROPTIMIZER_CONFIGURATION_REQUEST,
                              "EdgeBaseLibrary",
                              "ConfigProfile");
}

