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
                       "ConfigProfile");
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

void CWobTuningStatePublisher::SetFilter(double filter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->filter = filter;
    }
}

void CWobTuningStatePublisher::SetD(double d)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->d = d;
    }
}

void CWobTuningStatePublisher::SetF(double f)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->f = f;
    }
}

void CWobTuningStatePublisher::SetEpsilon(double epsilon)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilon = epsilon;
    }
}

void CWobTuningStatePublisher::SetEpsilonManual(bool epsilonManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilonManual = epsilonManual;
    }
}

void CWobTuningStatePublisher::SetKcMin(double kcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMin = kcMin;
    }
}

void CWobTuningStatePublisher::SetKcMax(double kcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMax = kcMax;
    }
}

void CWobTuningStatePublisher::SetTiMin(double tiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMin = tiMin;
    }
}

void CWobTuningStatePublisher::SetTiMax(double tiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMax = tiMax;
    }
}

void CWobTuningStatePublisher::SetInitK(double initK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initK = initK;
    }
}

void CWobTuningStatePublisher::SetInitTau(double initTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initTau = initTau;
    }
}

void CWobTuningStatePublisher::SetInitPreFilter(double initPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initPreFilter = initPreFilter;
    }
}

void CWobTuningStatePublisher::SetR1(double r1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r1 = r1;
    }
}

void CWobTuningStatePublisher::SetR2(double r2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r2 = r2;
    }
}

