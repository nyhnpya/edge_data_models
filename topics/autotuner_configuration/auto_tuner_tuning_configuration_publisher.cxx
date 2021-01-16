#include "auto_tuner_tuning_configuration_publisher.h"

CAutoTunerTuningConfigurationPublisher::CAutoTunerTuningConfigurationPublisher()
{
}

CAutoTunerTuningConfigurationPublisher::~CAutoTunerTuningConfigurationPublisher()
{
}

bool CAutoTunerTuningConfigurationPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_CONFIGURATION,
                                    "EdgeBaseLibrary",
                                    "ConfigProfile");
}

bool CAutoTunerTuningConfigurationPublisher::PublishSample()
{
    return Publish();
}

void CAutoTunerTuningConfigurationPublisher::SetId(const std::string&id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CAutoTunerTuningConfigurationPublisher::SetFilter(const double filter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->filter = filter;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetD(const double d)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->d = d;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetF(const double f)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->f = f;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetEpsilon(const double epsilon)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilon = epsilon;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetEpsilonManual(const bool epsilonManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilonManual = epsilonManual;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetKcMin(const double kcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMin = kcMin;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetKcMax(const double kcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMax = kcMax;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetTiMin(const double tiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMin = tiMin;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetTiMax(const double tiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMax = tiMax;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetInitK(const double initK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initK = initK;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetInitTau(const double initTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initTau = initTau;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetInitPreFilter(const double initPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initPreFilter = initPreFilter;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetR1(const double r1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r1 = r1;
    }
}

void CAutoTunerTuningConfigurationPublisher::SetR2(const double r2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r2 = r2;
    }
}

