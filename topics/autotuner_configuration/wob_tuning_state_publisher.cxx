#include "wob_tuning_state_publisher.h"

CWobTuningStatePublisher::CWobTuningStatePublisher()
{
}

CWobTuningStatePublisher::~CWobTuningStatePublisher()
{
}

bool CWobTuningStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::WOB_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CWobTuningStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CWobTuningStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CWobTuningStatePublisher::SetWobFilter(double wobFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobFilter = wobFilter;
    }
}

void CWobTuningStatePublisher::SetWobD(double wobD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobD = wobD;
    }
}

void CWobTuningStatePublisher::SetWobF(double wobF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobF = wobF;
    }
}

void CWobTuningStatePublisher::SetWobEps(double wobEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEps = wobEps;
    }
}

void CWobTuningStatePublisher::SetWobEpsManual(bool wobEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEpsManual = wobEpsManual;
    }
}

void CWobTuningStatePublisher::SetWobKcMin(double wobKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMin = wobKcMin;
    }
}

void CWobTuningStatePublisher::SetWobKcMax(double wobKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMax = wobKcMax;
    }
}

void CWobTuningStatePublisher::SetWobTiMin(double wobTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMin = wobTiMin;
    }
}

void CWobTuningStatePublisher::SetWobTiMax(double wobTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMax = wobTiMax;
    }
}

void CWobTuningStatePublisher::SetWobInitK(double wobInitK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobInitK = wobInitK;
    }
}

void CWobTuningStatePublisher::SetWobInitTau(double wobInitTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobInitTau = wobInitTau;
    }
}

void CWobTuningStatePublisher::SetWobInitPreFilter(double wobInitPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobInitPreFilter = wobInitPreFilter;
    }
}

void CWobTuningStatePublisher::SetWobR1(double wobR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobR1 = wobR1;
    }
}

void CWobTuningStatePublisher::SetWobR2(double wobR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobR2 = wobR2;
    }
}

