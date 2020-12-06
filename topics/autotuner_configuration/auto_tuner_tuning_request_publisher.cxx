#include "auto_tuner_tuning_request_publisher.h"

CAutoTunerTuningRequestPublisher::CAutoTunerTuningRequestPublisher()
{
}

CAutoTunerTuningRequestPublisher::~CAutoTunerTuningRequestPublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CAutoTunerTuningRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoTunerTuningRequestPublisher::Initialize()
{
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(m_id.c_str());
        retVal = true;
    }

    return retVal;
}

bool CAutoTunerTuningRequestPublisher::PublishSample()
{
    return Publish();
}

void CAutoTunerTuningRequestPublisher::SetId(const std::string &id)
{
    m_id = id;
}

void CAutoTunerTuningRequestPublisher::SetFilter(double filter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->filter = filter;
    }
}

void CAutoTunerTuningRequestPublisher::SetD(double d)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->d = d;
    }
}

void CAutoTunerTuningRequestPublisher::SetF(double f)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->f = f;
    }
}

void CAutoTunerTuningRequestPublisher::SetEpsilon(double epsilon)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilon = epsilon;
    }
}

void CAutoTunerTuningRequestPublisher::SetEpsilonManual(bool epsilonManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilonManual = epsilonManual;
    }
}

void CAutoTunerTuningRequestPublisher::SetKcMin(double kcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMin = kcMin;
    }
}

void CAutoTunerTuningRequestPublisher::SetKcMax(double kcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMax = kcMax;
    }
}

void CAutoTunerTuningRequestPublisher::SetTiMin(double tiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMin = tiMin;
    }
}

void CAutoTunerTuningRequestPublisher::SetTiMax(double tiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMax = tiMax;
    }
}

