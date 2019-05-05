#include "rotate_engineering_request_publisher.h"
#include "dds_uuid.h"

CRotateEngineeringRequestPublisher::CRotateEngineeringRequestPublisher()
{
}

CRotateEngineeringRequestPublisher::~CRotateEngineeringRequestPublisher()
{
}

bool CRotateEngineeringRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::engineering::ROTATE_ENGINEERING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateEngineeringRequestPublisher::Initialize()
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

void CRotateEngineeringRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CRotateEngineeringRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CRotateEngineeringRequestPublisher::SetDuration(DataTypes::Time duration)
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

