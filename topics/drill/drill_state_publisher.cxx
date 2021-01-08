#include "drill_state_publisher.h"

CDrillStatePublisher::CDrillStatePublisher()
{
}

CDrillStatePublisher::~CDrillStatePublisher()
{
}

bool CDrillStatePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::DRILL_STATE,
                                    "EdgeBaseLibrary",
                                    "DrillStateProfile");
}

bool CDrillStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
        m_pDataInstance->timestamp.sec = currentTime.sec;
        m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    }

    return Publish();
}

void CDrillStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CDrillStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CDrillStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CDrillStatePublisher::SetRopActual(const units::velocity::meters_per_second_t ropActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropActual = units::unit_cast<double>(ropActual);
    }
}

void CDrillStatePublisher::SetWobActual(const units::force::newton_t wobActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobActual = units::unit_cast<double>(wobActual);
    }
}

void CDrillStatePublisher::SetDiffPressureActual(const units::pressure::pascal_t diffPressureActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureActual = units::unit_cast<double>(diffPressureActual);
    }
}

void CDrillStatePublisher::SetTorqueActual(const units::torque::newton_meter_t torqueActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueActual = units::unit_cast<double>(torqueActual);
    }
}

void CDrillStatePublisher::SetRopLimit(const units::velocity::meters_per_second_t ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = units::unit_cast<double>(ropLimit);
    }
}

void CDrillStatePublisher::SetWobLimit(const units::force::newton_t wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = units::unit_cast<double>(wobLimit);
    }
}

void CDrillStatePublisher::SetDiffPressureLimit(const units::pressure::pascal_t diffPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureLimit = units::unit_cast<double>(diffPressureLimit);
    }
}

void CDrillStatePublisher::SetTorqueLimit(const units::torque::newton_meter_t torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = units::unit_cast<double>(torqueLimit);
    }
}

void CDrillStatePublisher::SetRopMode(const bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
}

void CDrillStatePublisher::SetWobMode(const bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
}

void CDrillStatePublisher::SetDiffPressureMode(const bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
}

void CDrillStatePublisher::SetTorqueMode(const bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
}

void CDrillStatePublisher::SetRopTarget(const units::velocity::meters_per_second_t ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = units::unit_cast<double>(ropTarget);
    }
}

void CDrillStatePublisher::SetWobTarget(const units::force::newton_t wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = units::unit_cast<double>(wobTarget);
    }
}

void CDrillStatePublisher::SetDiffPressureTarget(const units::pressure::pascal_t diffPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureTarget = units::unit_cast<double>(diffPressureTarget);
    }
}

void CDrillStatePublisher::SetTorqueTarget(const units::torque::newton_meter_t torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = units::unit_cast<double>(torqueTarget);
    }
}

void CDrillStatePublisher::SetBitOnBottom(const bool bitOnBottom)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitOnBottom = bitOnBottom;
    }
}

