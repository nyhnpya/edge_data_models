#include "torque_tuning_request_publisher.h"

CTorqueTuningRequestPublisher::CTorqueTuningRequestPublisher()
{
}

CTorqueTuningRequestPublisher::~CTorqueTuningRequestPublisher()
{
}

bool CTorqueTuningRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::TORQUE_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CTorqueTuningRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CTorqueTuningRequestPublisher::PublishSample()
{
    return Publish();
}

void CTorqueTuningRequestPublisher::SetTorqueFilter(double torqueFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueFilter = torqueFilter;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueD(double torqueD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueD = torqueD;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueF(double torqueF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueF = torqueF;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueEps(double torqueEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEps = torqueEps;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueEpsManual(bool torqueEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEpsManual = torqueEpsManual;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueKcMin(double torqueKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMin = torqueKcMin;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueKcMax(double torqueKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMax = torqueKcMax;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueTiMin(double torqueTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMin = torqueTiMin;
    }
}

void CTorqueTuningRequestPublisher::SetTorqueTiMax(double torqueTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMax = torqueTiMax;
    }
}

