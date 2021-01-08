#include "rotate_engineering_objective_publisher.h"

CRotateEngineeringObjectivePublisher::CRotateEngineeringObjectivePublisher()
{
}

CRotateEngineeringObjectivePublisher::~CRotateEngineeringObjectivePublisher()
{
}

bool CRotateEngineeringObjectivePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::engineering::ROTATE_ENGINEERING_OBJECTIVE,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
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

void CRotateEngineeringObjectivePublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
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

