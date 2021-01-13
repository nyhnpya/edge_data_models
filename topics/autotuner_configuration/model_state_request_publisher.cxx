#include "model_state_request_publisher.h"

CModelStateRequestPublisher::CModelStateRequestPublisher()
{
}

CModelStateRequestPublisher::~CModelStateRequestPublisher()
{
}

bool CModelStateRequestPublisher::Create(const std::string &publisher)
{
    return TDataWriter::Create(publisher,
                                    Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_REQUEST,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
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

void CModelStateRequestPublisher::SetModelReset(const bool modelReset)
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

void CModelStateRequestPublisher::SetSlopeFilter(const double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
}

void CModelStateRequestPublisher::SetTauMax(const double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
}

void CModelStateRequestPublisher::SetTauMin(const double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
}

void CModelStateRequestPublisher::SetTauMultiplier(const double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
}

void CModelStateRequestPublisher::SetMaxDeviation(const double maxDeviation)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDeviation = maxDeviation;
    }
}

void CModelStateRequestPublisher::SetMinInterval(const double minInterval)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minInterval = minInterval;
    }
}

