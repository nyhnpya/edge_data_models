#include "roptimizer_steady_state_publisher.h"

CRoptimizerSteadyStatePublisher::CRoptimizerSteadyStatePublisher()
{
}

CRoptimizerSteadyStatePublisher::~CRoptimizerSteadyStatePublisher()
{
}

bool CRoptimizerSteadyStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::ROPTIMIZER_STEADY_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRoptimizerSteadyStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CRoptimizerSteadyStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CRoptimizerSteadyStatePublisher::SetRpmSteadyState(bool rpmSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmSteadyState = rpmSteadyState;
    }
}

void CRoptimizerSteadyStatePublisher::SetRopSteadyState(bool ropSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropSteadyState = ropSteadyState;
    }
}

void CRoptimizerSteadyStatePublisher::SetWobSteadyState(bool wobSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobSteadyState = wobSteadyState;
    }
}

void CRoptimizerSteadyStatePublisher::SetTorqueSteadyState(bool torqueSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueSteadyState = torqueSteadyState;
    }
}

void CRoptimizerSteadyStatePublisher::SetBitWear(double bitWear)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitWear = bitWear;
    }
}

void CRoptimizerSteadyStatePublisher::SetMse(double mse)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mse = mse;
    }
}

void CRoptimizerSteadyStatePublisher::SetPower(double power)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->power = power;
    }
}

