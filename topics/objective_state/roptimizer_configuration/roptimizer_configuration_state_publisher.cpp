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


void CConfigurationStateStatePublisher::SetRpmSteadyState(bool state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmSteadyState = state;
    }
    else
    {
        LOG_ERROR("Failed to set rpm state because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetRopSteadyState(bool state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropSteadyState = state;
    }
    else
    {
        LOG_ERROR("Failed to set rop state because of uninitialized sample");
    }
} 

void CConfigurationStateStatePublisher::SetWobSteadyState(bool state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobSteadyState = state;
    }
    else
    {
        LOG_ERROR("Failed to set wob state because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetTorqueSteadyState(bool state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueSteadyState = state;
    }
    else
    {
        LOG_ERROR("Failed to set torque state because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetSteadyStateWindow(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateWindow = value;
    }
    else
    {
        LOG_ERROR("Failed to set steady state windows because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetSteadyStateMin(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateMin = value;
    }
    else
    {
        LOG_ERROR("Failed to set stead state min because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetRpmStepSize(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmStepSize = value;
    }
    else
    {
        LOG_ERROR("Failed to set rpm step size because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetRopStepSize(int32_t value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropStepSize = value;
    }
    else
    {
        LOG_ERROR("Failed to set rop step size because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetBitWear(double value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitWear = value;
    }
    else
    {
        LOG_ERROR("Failed to set bit wear because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetMSE(double value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mse = value;
    }
    else
    {
        LOG_ERROR("Failed to set MSE because of uninitialized sample");
    }
}

void CConfigurationStateStatePublisher::SetPower(double value)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->power = value;
    }
    else
    {
        LOG_ERROR("Failed to set Power because of uninitialized sample");
    }
}

