#include "drilling_request_publisher.h"

CDrillingRequestPublisher::CDrillingRequestPublisher()
{
}

CDrillingRequestPublisher::~CDrillingRequestPublisher()
{
}

void CDrillingRequestPublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance->id, id, 16);
    }
    else
    {
        LOG_ERROR("Failed to set id on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CDrillingRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CDrillingRequestPublisher::SetDuration(DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->duration = duration;
    }
}

void CDrillingRequestPublisher::SetRopLimit(const double ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = ropLimit;
    }
    else
    {
        LOG_ERROR("Failed to set rop limit on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetWobLimit(const double wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = wobLimit;
    }
    else
    {
        LOG_ERROR("Failed to set wob limit on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetDifferentialPressureLimit(const double differentialPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureLimit = differentialPressureLimit;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure limit on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetTorqueLimit(const double torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = torqueLimit;
    }
    else
    {
        LOG_ERROR("Failed to set torque limit on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetRopMode(const bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
    else
    {
        LOG_ERROR("Failed to set rop mode on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetWobMode(const bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
    else
    {
        LOG_ERROR("Failed to set wob mode on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetDifferentialPressureMode(const bool differentialPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureMode = differentialPressureMode;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure mode on uninitialized sample");
    }
}

void CDrillingRequestPublisher::SetTorqueMode(const bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
    else
    {
        LOG_ERROR("Failed to set torque mode on uninitialized sample");
    }
}

bool CDrillingRequestPublisher::PublishSample()
{
    return Publish();
}

bool CDrillingRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Hoisting::DRILLING_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
