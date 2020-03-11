#include "model_state_request_publisher.h"

CModelStateRequestPublisher::CModelStateRequestPublisher()
{
}

CModelStateRequestPublisher::~CModelStateRequestPublisher()
{
}

bool CModelStateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CModelStateRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CModelStateRequestPublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CModelStateRequestPublisher::SetModelReset(bool modelReset)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelReset = modelReset;
    }
}

void CModelStateRequestPublisher::SetPipeInnerDiameter(const units::length::meter_t pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = units::unit_cast<double>(pipeInnerDiameter);
    }
}

void CModelStateRequestPublisher::SetPipeOuterDiameter(const units::length::meter_t pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = units::unit_cast<double>(pipeOuterDiameter);
    }
}

void CModelStateRequestPublisher::SetSlopeFilter(double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
}

void CModelStateRequestPublisher::SetTauMax(double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
}

void CModelStateRequestPublisher::SetTauMin(double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
}

void CModelStateRequestPublisher::SetTauMultiplier(double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
}

void CModelStateRequestPublisher::SetMaxDeviation(double maxDeviation)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDeviation = maxDeviation;
    }
}

void CModelStateRequestPublisher::SetMinInterval(double minInterval)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minInterval = minInterval;
    }
}

