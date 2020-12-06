#include "auto_tuner_tuning_state_publisher.h"

CAutoTunerTuningStatePublisher::CAutoTunerTuningStatePublisher()
{
}

CAutoTunerTuningStatePublisher::~CAutoTunerTuningStatePublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CAutoTunerTuningStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoTunerTuningStatePublisher::Initialize()
{
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(m_id.c_str());
        retVal = true;
    }

    return retVal;
}

bool CAutoTunerTuningStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CAutoTunerTuningStatePublisher::SetId(const std::string &id)
{
    m_id = id;
}

void CAutoTunerTuningStatePublisher::SetFilter(double filter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->filter = filter;
    }
}

void CAutoTunerTuningStatePublisher::SetD(double d)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->d = d;
    }
}

void CAutoTunerTuningStatePublisher::SetF(double f)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->f = f;
    }
}

void CAutoTunerTuningStatePublisher::SetEpsilon(double epsilon)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilon = epsilon;
    }
}

void CAutoTunerTuningStatePublisher::SetEpsilonManual(bool epsilonManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilonManual = epsilonManual;
    }
}

void CAutoTunerTuningStatePublisher::SetKcMin(double kcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMin = kcMin;
    }
}

void CAutoTunerTuningStatePublisher::SetKcMax(double kcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMax = kcMax;
    }
}

void CAutoTunerTuningStatePublisher::SetTiMin(double tiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMin = tiMin;
    }
}

void CAutoTunerTuningStatePublisher::SetTiMax(double tiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMax = tiMax;
    }
}

void CAutoTunerTuningStatePublisher::SetInitK(double initK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initK = initK;
    }
}

void CAutoTunerTuningStatePublisher::SetInitTau(double initTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initTau = initTau;
    }
}

void CAutoTunerTuningStatePublisher::SetInitPreFilter(double initPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initPreFilter = initPreFilter;
    }
}

void CAutoTunerTuningStatePublisher::SetR1(double r1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r1 = r1;
    }
}

void CAutoTunerTuningStatePublisher::SetR2(double r2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r2 = r2;
    }
}

