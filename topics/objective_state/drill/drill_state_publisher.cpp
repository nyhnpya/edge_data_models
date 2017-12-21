#include "dds_uuid.h"
#include "drill_state_publisher.h"

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

void CDrillingStatePublisher::SetObjectiveId(DataTypes::Uuid pObjectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(pObjectiveId);
    }
    else
    {
        LOG_ERROR("Failed to set objective id because of uninitialized sample");
    }
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

void CDrillingStatePublisher::SetRopActual(const meters_per_second_t ropActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropActual = units::unit_cast<double>(ropActual);
    }
    else
    {
        LOG_ERROR("Failed to set rop actual because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetWobActual(const newton_t wobActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobActual = units::unit_cast<double>(wobActual);
    }
    else
    {
        LOG_ERROR("Failed to set wob actual because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetDifferentialPressureActual(const pascal_t differentialPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureActual = units::unit_cast<double>(differentialPressureActual);
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure actual because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetTorqueActual(const newton_meter_t torqueActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueActual = units::unit_cast<double>(torqueActual);
    }
    else
    {
        LOG_ERROR("Failed to set torque actual because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetRopLimit(const meters_per_second_t ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = units::unit_cast<double>(ropLimit);
    }
    else
    {
        LOG_ERROR("Failed to set rop limit because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetWobLimit(const newton_t wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = units::unit_cast<double>(wobLimit);
    }
    else
    {
        LOG_ERROR("Failed to set wob limit because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetDifferentialPressureLimit(const pascal_t differentialPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureLimit = units::unit_cast<double>(differentialPressureLimit);
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure limit because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetTorqueLimit(const newton_meter_t torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = units::unit_cast<double>(torqueLimit);
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

void CDrillingStatePublisher::SetRopTarget(const meters_per_second_t ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = units::unit_cast<double>(ropTarget);
    }
    else
    {
        LOG_ERROR("Failed to set rop target because of uninitialized sample");
    }
}
     
void CDrillingStatePublisher::SetWobTarget(const newton_t wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = units::unit_cast<double>(wobTarget);
    }
    else
    {
        LOG_ERROR("Failed to set wob target because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetDifferentialPressureTarget(const pascal_t differentialPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTarget = units::unit_cast<double>(differentialPressureTarget);
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure target because of uninitialized sample");
    }
}

void CDrillingStatePublisher::SetTorqueTarget(const newton_meter_t torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = units::unit_cast<double>(torqueTarget);
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
                              nec::process::DRILLING_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
