#include "drill_state_topic_publisher.h"
#include "dds_uuid.h"

CDrillStateTopicPublisher::CDrillStateTopicPublisher()
{
}

CDrillStateTopicPublisher::~CDrillStateTopicPublisher()
{
}

bool CDrillStateTopicPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::DRILL_STATE_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillStateTopicPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CDrillStateTopicPublisher::PublishSample()
{
    return Publish();
}

void CDrillStateTopicPublisher::SetRopActual(double ropActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropActual = ropActual;
    }
}

void CDrillStateTopicPublisher::SetWobActual(double wobActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobActual = wobActual;
    }
}

void CDrillStateTopicPublisher::SetDiffPressureActual(double diffPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureActual = diffPressureActual;
    }
}

void CDrillStateTopicPublisher::SetTorqueActual(double torqueActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueActual = torqueActual;
    }
}

void CDrillStateTopicPublisher::SetRopMachineLimit(double ropMachineLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMachineLimit = ropMachineLimit;
    }
}

void CDrillStateTopicPublisher::SetWobMachineLimit(double wobMachineLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMachineLimit = wobMachineLimit;
    }
}

void CDrillStateTopicPublisher::SetDiffPressureMachineLimit(double diffPressureMachineLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMachineLimit = diffPressureMachineLimit;
    }
}

void CDrillStateTopicPublisher::SetTorqueMachineLimit(double torqueMachineLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMachineLimit = torqueMachineLimit;
    }
}

void CDrillStateTopicPublisher::SetRopMode(bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
}

void CDrillStateTopicPublisher::SetWobMode(bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
}

void CDrillStateTopicPublisher::SetDiffPressureMode(bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
}

void CDrillStateTopicPublisher::SetTorqueMode(bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
}

void CDrillStateTopicPublisher::SetRopLimit(double ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = ropLimit;
    }
}

void CDrillStateTopicPublisher::SetWobLimit(double wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = wobLimit;
    }
}

void CDrillStateTopicPublisher::SetDiffPressureLimit(double diffPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureLimit = diffPressureLimit;
    }
}

void CDrillStateTopicPublisher::SetTorqueLimit(double torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = torqueLimit;
    }
}

