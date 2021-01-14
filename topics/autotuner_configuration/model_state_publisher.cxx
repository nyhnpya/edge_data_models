#include "model_state_publisher.h"

CModelStatePublisher::CModelStatePublisher()
{
}

CModelStatePublisher::~CModelStatePublisher()
{
}

bool CModelStatePublisher::Create(const std::string &publisher)
{
    return TDataWriter::Create(publisher,
                                    Shell::Hmi::AutoTunerConfiguration::MODEL_STATE,
                                    "EdgeBaseLibrary",
                                    "ConfigProfile");
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

void CModelStatePublisher::SetSlopeFilter(const double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
}

void CModelStatePublisher::SetTauMax(const double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
}

void CModelStatePublisher::SetTauMin(const double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
}

void CModelStatePublisher::SetTauMultiplier(const double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
}

void CModelStatePublisher::SetMaxDeviation(const double maxDeviation)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDeviation = maxDeviation;
    }
}

void CModelStatePublisher::SetMinInterval(const double minInterval)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minInterval = minInterval;
    }
}

void CModelStatePublisher::SetTunerEnabled(const bool tunerEnabled)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tunerEnabled = tunerEnabled;
    }
}

