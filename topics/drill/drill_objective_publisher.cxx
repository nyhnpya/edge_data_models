#include "drill_objective_publisher.h"

CDrillObjectivePublisher::CDrillObjectivePublisher()
{
}

CDrillObjectivePublisher::~CDrillObjectivePublisher()
{
}

bool CDrillObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::DRILL_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "DrillObjectiveProfile");
}

bool CDrillObjectivePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        uuid.GenerateUuid();
        m_pDataInstance->id = DDS_String_dup(uuid.c_str());
        retVal = true;
    }

    return retVal;
}

bool CDrillObjectivePublisher::PublishSample()
{
    return Publish();
}

void CDrillObjectivePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CDrillObjectivePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CDrillObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CDrillObjectivePublisher::SetRopTarget(const units::velocity::meters_per_second_t ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = units::unit_cast<double>(ropTarget);
    }
}

void CDrillObjectivePublisher::SetWobTarget(const units::force::newton_t wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = units::unit_cast<double>(wobTarget);
    }
}

void CDrillObjectivePublisher::SetDiffPressureTarget(const units::pressure::pascal_t diffPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureTarget = units::unit_cast<double>(diffPressureTarget);
    }
}

void CDrillObjectivePublisher::SetTorqueTarget(const units::torque::newton_meter_t torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = units::unit_cast<double>(torqueTarget);
    }
}

void CDrillObjectivePublisher::SetRopMode(bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
}

void CDrillObjectivePublisher::SetWobMode(bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
}

void CDrillObjectivePublisher::SetDiffPressureMode(bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
}

void CDrillObjectivePublisher::SetTorqueMode(bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
}

