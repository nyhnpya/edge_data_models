#include "dds_uuid.h"
#include "drilling_limits_publisher.h"

CDrillingLimitsPublisher::CDrillingLimitsPublisher()
{
}

CDrillingLimitsPublisher::~CDrillingLimitsPublisher()
{
}

bool CDrillingLimitsPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillingLimitsPublisher::SetId(DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id);
    }
    else
    {
        LOG_ERROR("Failed to set objective id because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetStartDepth(meter_t depth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->startDepth = units::unit_cast<double>(depth);
    }
    else
    {
        LOG_ERROR("Failed to set rop min because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetEndDepth(meter_t depth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->startDepth = units::unit_cast<double>(depth);
    }
    else
    {
        LOG_ERROR("Failed to set rop min because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetRopMin(meters_per_second_t ropMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMin = units::unit_cast<double>(ropMin);
    }
    else
    {
        LOG_ERROR("Failed to set rop min because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetRopMax(meters_per_second_t ropMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMax = units::unit_cast<double>(ropMax);
    }
    else
    {
        LOG_ERROR("Failed to set rop max because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetWobMin(newton_t wobMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMin = units::unit_cast<double>(wobMin);
    }
    else
    {
        LOG_ERROR("Failed to set wob min because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetWobMax(newton_t wobMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMax = units::unit_cast<double>(wobMax);
    }
    else
    {
        LOG_ERROR("Failed to set wob max because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetDifferentialPressureMin(pascal_t diffPMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPMin = units::unit_cast<double>(diffPMin);
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure min because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetDifferentialPressureMax(pascal_t diffPMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPMax = units::unit_cast<double>(diffPMax);
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure max because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetTorqueMin(newton_meter_t torqueMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMin = units::unit_cast<double>(torqueMin);
    }
    else
    {
        LOG_ERROR("Failed to set torque min because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetTorqueMax(newton_meter_t torqueMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMax = units::unit_cast<double>(torqueMax);
    }
    else
    {
        LOG_ERROR("Failed to set torque max because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetRotateMin(radians_per_second_t rotateMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rotateMin = units::unit_cast<double>(rotateMin);
    }
    else
    {
        LOG_ERROR("Failed to set torque max because of uninitialized sample");
    }
}

void CDrillingLimitsPublisher::SetRotateMax(radians_per_second_t rotateMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rotateMax = units::unit_cast<double>(rotateMax);
    }
    else
    {
        LOG_ERROR("Failed to set torque max because of uninitialized sample");
    }
}

bool CDrillingLimitsPublisher::PublishSample()
{
    return Publish();
}

bool CDrillingLimitsPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              process::plan::DRILLING_LIMITS,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
