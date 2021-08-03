#include "torque_tuning_state_publisher.h"

CTorqueTuningStatePublisher::CTorqueTuningStatePublisher()
{
}

CTorqueTuningStatePublisher::~CTorqueTuningStatePublisher()
{
}

bool CTorqueTuningStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::TORQUE_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CTorqueTuningStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CTorqueTuningStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CTorqueTuningStatePublisher::SetFilter(double filter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->filter = filter;
    }
}

void CTorqueTuningStatePublisher::SetD(double d)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->d = d;
    }
}

void CTorqueTuningStatePublisher::SetF(double f)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->f = f;
    }
}

void CTorqueTuningStatePublisher::SetEpsilon(double epsilon)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilon = epsilon;
    }
}

void CTorqueTuningStatePublisher::SetEpsilonManual(bool epsilonManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilonManual = epsilonManual;
    }
}

void CTorqueTuningStatePublisher::SetKcMin(double kcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMin = kcMin;
    }
}

void CTorqueTuningStatePublisher::SetKcMax(double kcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMax = kcMax;
    }
}

void CTorqueTuningStatePublisher::SetTiMin(double tiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMin = tiMin;
    }
}

void CTorqueTuningStatePublisher::SetTiMax(double tiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMax = tiMax;
    }
}

void CTorqueTuningStatePublisher::SetInitK(double initK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initK = initK;
    }
}

void CTorqueTuningStatePublisher::SetInitTau(double initTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initTau = initTau;
    }
}

void CTorqueTuningStatePublisher::SetInitPreFilter(double initPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initPreFilter = initPreFilter;
    }
}

void CTorqueTuningStatePublisher::SetR1(double r1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r1 = r1;
    }
}

void CTorqueTuningStatePublisher::SetR2(double r2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r2 = r2;
    }
}

