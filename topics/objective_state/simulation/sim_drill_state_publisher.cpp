#include "dds_uuid.h"
#include "sim_drill_state_publisher.h"

CSimDrillStatePublisher::CSimDrillStatePublisher()
{
}

CSimDrillStatePublisher::~CSimDrillStatePublisher()
{
}

bool CSimDrillStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    uuid.ExportUuid(m_pDataInstance->id);

    return true;
}

void CSimDrillStatePublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance->id, id, 16);
    }
    else
    {
        LOG_ERROR("Failed to set id because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetHookloadActual(const double hookload)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->hookloadActual = hookload;
    }
    else
    {
        LOG_ERROR("Failed to set rop actual because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetRopActual(const double ropActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropActual = ropActual;
    }
    else
    {
        LOG_ERROR("Failed to set rop actual because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetWobActual(const double wobActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobActual = wobActual;
    }
    else
    {
        LOG_ERROR("Failed to set wob actual because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetDifferentialPressureActual(const double differentialPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureActual = differentialPressureActual;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure actual because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetTorqueActual(const double torqueActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueActual = torqueActual;
    }
    else
    {
        LOG_ERROR("Failed to set torque actual because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetRopLimit(const double ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = ropLimit;
    }
    else
    {
        LOG_ERROR("Failed to set rop limit because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetWobLimit(const double wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = wobLimit;
    }
    else
    {
        LOG_ERROR("Failed to set wob limit because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetDifferentialPressureLimit(const double differentialPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureLimit = differentialPressureLimit;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure limit because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetTorqueLimit(const double torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = torqueLimit;
    }
    else
    {
        LOG_ERROR("Failed to set torque limit because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetRopMode(const bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
    else
    {
        LOG_ERROR("Failed to set rop mode because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetWobMode(const bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
    else
    {
        LOG_ERROR("Failed to set wob mode because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetDifferentialPressureMode(const bool differentialPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureMode = differentialPressureMode;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure mode because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetTorqueMode(const bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
    else
    {
        LOG_ERROR("Failed to set torque mode because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetRopTarget(const double ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = ropTarget;
    }
    else
    {
        LOG_ERROR("Failed to set rop target because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetWobTarget(const double wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = wobTarget;
    }
    else
    {
        LOG_ERROR("Failed to set wob target because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetDifferentialPressureTarget(const double differentialPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTarget = differentialPressureTarget;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure target because of uninitialized sample");
    }
}

void CSimDrillStatePublisher::SetTorqueTarget(const double torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = torqueTarget;
    }
    else
    {
        LOG_ERROR("Failed to set torque target because of uninitialized sample");
    }
}

bool CSimDrillStatePublisher::PublishSample()
{
    bool bRetVal = false;

    bRetVal = Publish();

    return bRetVal;
}

bool CSimDrillStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Simulation::SIM_AUTODRILLER_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
