#include "diffp_tuning_request_publisher.h"

CDiffpTuningRequestPublisher::CDiffpTuningRequestPublisher()
{
}

CDiffpTuningRequestPublisher::~CDiffpTuningRequestPublisher()
{
}

bool CDiffpTuningRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::DIFFP_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDiffpTuningRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CDiffpTuningRequestPublisher::PublishSample()
{
    return Publish();
}

void CDiffpTuningRequestPublisher::SetDiffPFilter(double diffPFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPFilter = diffPFilter;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPD(double diffPD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPD = diffPD;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPF(double diffPF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPF = diffPF;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPEps(double diffPEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEps = diffPEps;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPEpsManual(bool diffPEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEpsManual = diffPEpsManual;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPKcMin(double diffPKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMin = diffPKcMin;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPKcMax(double diffPKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMax = diffPKcMax;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPTiMin(double diffPTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMin = diffPTiMin;
    }
}

void CDiffpTuningRequestPublisher::SetDiffPTiMax(double diffPTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMax = diffPTiMax;
    }
}

