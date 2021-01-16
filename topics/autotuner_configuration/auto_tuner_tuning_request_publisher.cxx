#include "auto_tuner_tuning_request_publisher.h"

CAutoTunerTuningRequestPublisher::CAutoTunerTuningRequestPublisher()
{
}

CAutoTunerTuningRequestPublisher::~CAutoTunerTuningRequestPublisher()
{
}

bool CAutoTunerTuningRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_REQUEST,
                                    "EdgeBaseLibrary",
                                    "ConfigProfile");
}

bool CAutoTunerTuningRequestPublisher::PublishSample()
{
    return Publish();
}

void CAutoTunerTuningRequestPublisher::SetId(const std::string&id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CAutoTunerTuningRequestPublisher::SetFilter(const double filter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->filter = filter;
    }
}

void CAutoTunerTuningRequestPublisher::SetD(const double d)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->d = d;
    }
}

void CAutoTunerTuningRequestPublisher::SetF(const double f)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->f = f;
    }
}

void CAutoTunerTuningRequestPublisher::SetEpsilon(const double epsilon)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilon = epsilon;
    }
}

void CAutoTunerTuningRequestPublisher::SetEpsilonManual(const bool epsilonManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilonManual = epsilonManual;
    }
}

void CAutoTunerTuningRequestPublisher::SetKcMin(const double kcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMin = kcMin;
    }
}

void CAutoTunerTuningRequestPublisher::SetKcMax(const double kcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMax = kcMax;
    }
}

void CAutoTunerTuningRequestPublisher::SetTiMin(const double tiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMin = tiMin;
    }
}

void CAutoTunerTuningRequestPublisher::SetTiMax(const double tiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMax = tiMax;
    }
}

void CAutoTunerTuningRequestPublisher::SetInitK(const double initK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initK = initK;
    }
}

void CAutoTunerTuningRequestPublisher::SetInitTau(const double initTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initTau = initTau;
    }
}

void CAutoTunerTuningRequestPublisher::SetInitPreFilter(const double initPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initPreFilter = initPreFilter;
    }
}

void CAutoTunerTuningRequestPublisher::SetR1(const double r1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r1 = r1;
    }
}

void CAutoTunerTuningRequestPublisher::SetR2(const double r2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r2 = r2;
    }
}

