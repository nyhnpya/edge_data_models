#include "dds_uuid.h"
#include "roptimizer_configuration_state_publisher.h"

using namespace CRoptimizerConfigurationStatePublisher;

CConfigurationStateStatePublisher::CConfigurationStateStatePublisher()
{
}

CConfigurationStateStatePublisher::~CConfigurationStateStatePublisher()
{
}

bool CConfigurationStateStatePublisher::Initialize()
{
    return true;
}

bool CConfigurationStateStatePublisher::PublishSample()
{
    return Publish();
}

bool CConfigurationStateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Shell::Hmi::RoptimizerConfiguration::ROPTIMIZER_STEADY_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}


void CConfigurationStateStatePublisher::SetRpmState(double state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmState = state;
    }
    else
    {
        LOG_ERROR("Failed to set rpm state because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetRopState(double state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropState = state;
    }
    else
    {
        LOG_ERROR("Failed to set rop state because of uninitialized sample");
    }
} 

void CConfigurationStateStatePublisher::SetWobState(double state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobState = state;
    }
    else
    {
        LOG_ERROR("Failed to set wob state because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetTorqueState(double state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueState = state;
    }
    else
    {
        LOG_ERROR("Failed to set torque state because of uninitialized sample");
    }
}

