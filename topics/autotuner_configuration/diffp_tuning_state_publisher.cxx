#include "diffp_tuning_state_publisher.h"

CDiffpTuningStatePublisher::CDiffpTuningStatePublisher()
{
}

CDiffpTuningStatePublisher::~CDiffpTuningStatePublisher()
{
}

bool CDiffpTuningStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::DIFFP_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDiffpTuningStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CDiffpTuningStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CDiffpTuningStatePublisher::SetDiffPFilter(double diffPFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPFilter = diffPFilter;
    }
}

void CDiffpTuningStatePublisher::SetDiffPD(double diffPD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPD = diffPD;
    }
}

void CDiffpTuningStatePublisher::SetDiffPF(double diffPF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPF = diffPF;
    }
}

void CDiffpTuningStatePublisher::SetDiffPEps(double diffPEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEps = diffPEps;
    }
}

void CDiffpTuningStatePublisher::SetDiffPEpsManual(bool diffPEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEpsManual = diffPEpsManual;
    }
}

void CDiffpTuningStatePublisher::SetDiffPKcMin(double diffPKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMin = diffPKcMin;
    }
}

void CDiffpTuningStatePublisher::SetDiffPKcMax(double diffPKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMax = diffPKcMax;
    }
}

void CDiffpTuningStatePublisher::SetDiffPTiMin(double diffPTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMin = diffPTiMin;
    }
}

void CDiffpTuningStatePublisher::SetDiffPTiMax(double diffPTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMax = diffPTiMax;
    }
}

void CDiffpTuningStatePublisher::SetDiffPInitK(double diffPInitK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPInitK = diffPInitK;
    }
}

void CDiffpTuningStatePublisher::SetDiffPInitTau(double diffPInitTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPInitTau = diffPInitTau;
    }
}

void CDiffpTuningStatePublisher::SetDiffPInitPreFilter(double diffPInitPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPInitPreFilter = diffPInitPreFilter;
    }
}

void CDiffpTuningStatePublisher::SetDiffPR1(double diffPR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPR1 = diffPR1;
    }
}

void CDiffpTuningStatePublisher::SetDiffPR2(double diffPR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPR2 = diffPR2;
    }
}

