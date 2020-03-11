#include "wob_tuning_request_publisher.h"

CWobTuningRequestPublisher::CWobTuningRequestPublisher()
{
}

CWobTuningRequestPublisher::~CWobTuningRequestPublisher()
{
}

bool CWobTuningRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::WOB_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CWobTuningRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CWobTuningRequestPublisher::PublishSample()
{
    return Publish();
}

void CWobTuningRequestPublisher::SetWobFilter(double wobFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobFilter = wobFilter;
    }
}

void CWobTuningRequestPublisher::SetWobD(double wobD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobD = wobD;
    }
}

void CWobTuningRequestPublisher::SetWobF(double wobF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobF = wobF;
    }
}

void CWobTuningRequestPublisher::SetWobEps(double wobEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEps = wobEps;
    }
}

void CWobTuningRequestPublisher::SetWobEpsManual(bool wobEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEpsManual = wobEpsManual;
    }
}

void CWobTuningRequestPublisher::SetWobKcMin(double wobKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMin = wobKcMin;
    }
}

void CWobTuningRequestPublisher::SetWobKcMax(double wobKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMax = wobKcMax;
    }
}

void CWobTuningRequestPublisher::SetWobTiMin(double wobTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMin = wobTiMin;
    }
}

void CWobTuningRequestPublisher::SetWobTiMax(double wobTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMax = wobTiMax;
    }
}

