#include "roptimizer_configuration_publisher.h"

CRoptimizerConfigurationPublisher::CRoptimizerConfigurationPublisher()
{
}

CRoptimizerConfigurationPublisher::~CRoptimizerConfigurationPublisher()
{
}

bool CRoptimizerConfigurationPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::ROPTIMIZER_CONFIGURATION,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CRoptimizerConfigurationPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CRoptimizerConfigurationPublisher::PublishSample()
{
    return Publish();
}

void CRoptimizerConfigurationPublisher::SetSteadyStateWindow(int32_t steadyStateWindow)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateWindow = steadyStateWindow;
    }
}

void CRoptimizerConfigurationPublisher::SetSteadyStateMin(int32_t steadyStateMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateMin = steadyStateMin;
    }
}

void CRoptimizerConfigurationPublisher::SetRpmStepSize(int32_t rpmStepSize)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmStepSize = rpmStepSize;
    }
}

void CRoptimizerConfigurationPublisher::SetRopStepSize(int32_t ropStepSize)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropStepSize = ropStepSize;
    }
}

