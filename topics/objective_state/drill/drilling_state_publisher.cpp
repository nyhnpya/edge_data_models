#include "dds_uuid.h"
#include "drilling_state_publisher.h"

CDrillingStatePublisher::CDrillingStatePublisher()
{
}

CDrillingStatePublisher::~CDrillingStatePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CDrillingStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillingStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp.sec = timestamp.sec;
        m_pDataInstance->timestamp.nanosec = timestamp.nanosec;
    }
    else
    {
        LOG_ERROR("Failed to set timestamp because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetRopActual(const double ropActual)
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

void CDrillingStatePublisher::SetWobActual(const double wobActual)
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

void CDrillingStatePublisher::SetDifferentialPressureActual(const double differentialPressureActual)
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

void CDrillingStatePublisher::SetTorqueActual(const double torqueActual)
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

void CDrillingStatePublisher::SetRopLimit(const double ropLimit)
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

void CDrillingStatePublisher::SetWobLimit(const double wobLimit)
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

void CDrillingStatePublisher::SetDifferentialPressureLimit(const double differentialPressureLimit)
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

void CDrillingStatePublisher::SetTorqueLimit(const double torqueLimit)
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

void CDrillingStatePublisher::SetRopMode(const bool ropMode)
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

void CDrillingStatePublisher::SetWobMode(const bool wobMode)
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

void CDrillingStatePublisher::SetDifferentialPressureMode(const bool differentialPressureMode)
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

void CDrillingStatePublisher::SetTorqueMode(const bool torqueMode)
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

void CDrillingStatePublisher::SetRopTarget(const double ropTarget)
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

void CDrillingStatePublisher::SetWobTarget(const double wobTarget)
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

void CDrillingStatePublisher::SetDifferentialPressureTarget(const double differentialPressureTarget)
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

void CDrillingStatePublisher::SetTorqueTarget(const double torqueTarget)
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

void CDrillingStatePublisher::SetBitOnBottom(const bool bitOnBottom)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitOnBottom = bitOnBottom;
    }
    else
    {
        LOG_ERROR("Failed to set bit on bottom because of uninitialized sample");
    }
}

bool CDrillingStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CDrillingStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Hoisting::DRILLING_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
