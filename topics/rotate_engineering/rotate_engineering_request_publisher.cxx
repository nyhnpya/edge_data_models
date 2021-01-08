#include "rotate_engineering_request_publisher.h"

CRotateEngineeringRequestPublisher::CRotateEngineeringRequestPublisher()
{
}

CRotateEngineeringRequestPublisher::~CRotateEngineeringRequestPublisher()
{
}

bool CRotateEngineeringRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::engineering::ROTATE_ENGINEERING_REQUEST,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
}

bool CRotateEngineeringRequestPublisher::PublishSample()
{
    return Publish();
}

void CRotateEngineeringRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CRotateEngineeringRequestPublisher::SetPriority(const DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CRotateEngineeringRequestPublisher::SetTimeNeeded(const DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CRotateEngineeringRequestPublisher::SetDuration(const DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->duration = duration;
    }
}

void CRotateEngineeringRequestPublisher::SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

void CRotateEngineeringRequestPublisher::SetTorque(const units::torque::newton_meter_t torque)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torque = units::unit_cast<double>(torque);
    }
}

