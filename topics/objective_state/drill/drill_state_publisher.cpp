#include "dds_uuid.h"
#include "drill_state_publisher.h"

CDrillStatePublisher::CDrillStatePublisher()
{
}

CDrillStatePublisher::~CDrillStatePublisher()
{
}

bool CDrillStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
    else
    {
        LOG_ERROR("Failed to set objective id because of uninitialized sample");
    }
}

void CDrillStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
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

void CDrillStatePublisher::SetRopActual(const meters_per_second_t ropActual)
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

void CDrillStatePublisher::SetWobActual(const newton_t wobActual)
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

void CDrillStatePublisher::SetDiffPressureActual(const pascal_t diffPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureActual = units::unit_cast<double>(diffPressureActual);
    }
    else
    {
        LOG_ERROR("Failed to set diff pressure actual because of uninitialized sample");
    }
}

void CDrillStatePublisher::SetTorqueActual(const newton_meter_t torqueActual)
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

void CDrillStatePublisher::SetRopLimit(const meters_per_second_t ropLimit)
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

void CDrillStatePublisher::SetWobLimit(const newton_t wobLimit)
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

void CDrillStatePublisher::SetDiffPressureLimit(const pascal_t diffPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureLimit = units::unit_cast<double>(diffPressureLimit);
    }
    else
    {
        LOG_ERROR("Failed to set diff pressure limit because of uninitialized sample");
    }
}

void CDrillStatePublisher::SetTorqueLimit(const newton_meter_t torqueLimit)
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

void CDrillStatePublisher::SetRopMode(const bool ropMode)
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

void CDrillStatePublisher::SetWobMode(const bool wobMode)
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

void CDrillStatePublisher::SetDiffPressureMode(const bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
    else
    {
        LOG_ERROR("Failed to set diff pressure mode because of uninitialized sample");
    }
}

void CDrillStatePublisher::SetTorqueMode(const bool torqueMode)
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

void CDrillStatePublisher::SetRopTarget(const meters_per_second_t ropTarget)
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
     
void CDrillStatePublisher::SetWobTarget(const newton_t wobTarget)
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

void CDrillStatePublisher::SetDiffPressureTarget(const pascal_t diffPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureTarget = units::unit_cast<double>(diffPressureTarget);
    }
    else
    {
        LOG_ERROR("Failed to set diff pressure target because of uninitialized sample");
    }
}

void CDrillStatePublisher::SetTorqueTarget(const newton_meter_t torqueTarget)
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

void CDrillStatePublisher::SetBitOnBottom(const bool bitOnBottom)
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

bool CDrillStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CDrillStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::DRILL_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
