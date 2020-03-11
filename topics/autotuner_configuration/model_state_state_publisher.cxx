#include "model_state_state_publisher.h"

CModelStateStatePublisher::CModelStateStatePublisher()
{
}

CModelStateStatePublisher::~CModelStateStatePublisher()
{
}

bool CModelStateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CModelStateStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CModelStateStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CModelStateStatePublisher::SetPipeInnerDiameter(const units::length::meter_t pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = units::unit_cast<double>(pipeInnerDiameter);
    }
}

void CModelStateStatePublisher::SetPipeOuterDiameter(const units::length::meter_t pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = units::unit_cast<double>(pipeOuterDiameter);
    }
}

void CModelStateStatePublisher::SetSlopeFilter(double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
}

void CModelStateStatePublisher::SetTauMax(double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
}

void CModelStateStatePublisher::SetTauMin(double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
}

void CModelStateStatePublisher::SetTauMultiplier(double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
}

void CModelStateStatePublisher::SetMaxDeviation(double maxDeviation)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDeviation = maxDeviation;
    }
}

void CModelStateStatePublisher::SetMinInterval(double minInterval)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minInterval = minInterval;
    }
}

void CModelStateStatePublisher::SetTunerEnabled(bool tunerEnabled)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tunerEnabled = tunerEnabled;
    }
}

