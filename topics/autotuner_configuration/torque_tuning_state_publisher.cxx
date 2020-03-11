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

void CTorqueTuningStatePublisher::SetTorqueFilter(double torqueFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueFilter = torqueFilter;
    }
}

void CTorqueTuningStatePublisher::SetTorqueD(double torqueD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueD = torqueD;
    }
}

void CTorqueTuningStatePublisher::SetTorqueF(double torqueF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueF = torqueF;
    }
}

void CTorqueTuningStatePublisher::SetTorqueEps(double torqueEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEps = torqueEps;
    }
}

void CTorqueTuningStatePublisher::SetTorqueEpsManual(bool torqueEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEpsManual = torqueEpsManual;
    }
}

void CTorqueTuningStatePublisher::SetTorqueKcMin(double torqueKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMin = torqueKcMin;
    }
}

void CTorqueTuningStatePublisher::SetTorqueKcMax(double torqueKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMax = torqueKcMax;
    }
}

void CTorqueTuningStatePublisher::SetTorqueTiMin(double torqueTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMin = torqueTiMin;
    }
}

void CTorqueTuningStatePublisher::SetTorqueTiMax(double torqueTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMax = torqueTiMax;
    }
}

void CTorqueTuningStatePublisher::SetTorqueInitK(double torqueInitK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitK = torqueInitK;
    }
}

void CTorqueTuningStatePublisher::SetTorqueInitTau(double torqueInitTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitTau = torqueInitTau;
    }
}

void CTorqueTuningStatePublisher::SetTorqueInitPreFilter(double torqueInitPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitPreFilter = torqueInitPreFilter;
    }
}

void CTorqueTuningStatePublisher::SetTorqueR1(double torqueR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueR1 = torqueR1;
    }
}

void CTorqueTuningStatePublisher::SetTorqueR2(double torqueR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueR2 = torqueR2;
    }
}

