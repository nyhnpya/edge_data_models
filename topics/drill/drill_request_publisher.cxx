#include "drill_request_publisher.h"

CDrillRequestPublisher::CDrillRequestPublisher()
{
}

CDrillRequestPublisher::~CDrillRequestPublisher()
{
}

bool CDrillRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::DRILL_REQUEST,
                                    "EdgeBaseLibrary",
                                    "DrillRequestProfile");
}

bool CDrillRequestPublisher::PublishSample()
{
    return Publish();
}

void CDrillRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CDrillRequestPublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CDrillRequestPublisher::SetPriority(const DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CDrillRequestPublisher::SetTimeNeeded(const DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CDrillRequestPublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CDrillRequestPublisher::SetRopTarget(const units::velocity::meters_per_second_t ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = units::unit_cast<double>(ropTarget);
    }
}

void CDrillRequestPublisher::SetWobTarget(const units::force::newton_t wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = units::unit_cast<double>(wobTarget);
    }
}

void CDrillRequestPublisher::SetDiffPressureTarget(const units::pressure::pascal_t diffPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureTarget = units::unit_cast<double>(diffPressureTarget);
    }
}

void CDrillRequestPublisher::SetTorqueTarget(const units::torque::newton_meter_t torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = units::unit_cast<double>(torqueTarget);
    }
}

void CDrillRequestPublisher::SetRopMode(const bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
}

void CDrillRequestPublisher::SetWobMode(const bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
}

void CDrillRequestPublisher::SetDiffPressureMode(const bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
}

void CDrillRequestPublisher::SetTorqueMode(const bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
}

