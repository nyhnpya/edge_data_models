#include "rotate_engineering_objective_publisher.h"

CRotateEngineeringObjectivePublisher::CRotateEngineeringObjectivePublisher()
{
}

CRotateEngineeringObjectivePublisher::~CRotateEngineeringObjectivePublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CRotateEngineeringObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::engineering::ROTATE_ENGINEERING_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateEngineeringObjectivePublisher::Initialize()
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

bool CRotateEngineeringObjectivePublisher::PublishSample()
{
    return Publish();
}

void CRotateEngineeringObjectivePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CRotateEngineeringObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CRotateEngineeringObjectivePublisher::SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

void CRotateEngineeringObjectivePublisher::SetTargetTorque(const units::torque::newton_meter_t targetTorque)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetTorque = units::unit_cast<double>(targetTorque);
    }
}

