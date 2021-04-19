#include "model_state_publisher.h"

CModelStatePublisher::CModelStatePublisher()
{
}

CModelStatePublisher::~CModelStatePublisher()
{
}

bool CModelStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_STATE,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CModelStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CModelStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CModelStatePublisher::SetPipeInnerDiameter(const units::length::meter_t pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = units::unit_cast<double>(pipeInnerDiameter);
    }
}

void CModelStatePublisher::SetPipeOuterDiameter(const units::length::meter_t pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = units::unit_cast<double>(pipeOuterDiameter);
    }
}

void CModelStatePublisher::SetSlopeFilter(double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
}

void CModelStatePublisher::SetTauMax(double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
}

void CModelStatePublisher::SetTauMin(double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
}

void CModelStatePublisher::SetTauMultiplier(double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
}

void CModelStatePublisher::SetMaxDeviation(double maxDeviation)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDeviation = maxDeviation;
    }
}

void CModelStatePublisher::SetMinInterval(double minInterval)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minInterval = minInterval;
    }
}

void CModelStatePublisher::SetTunerEnabled(bool tunerEnabled)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tunerEnabled = tunerEnabled;
    }
}

