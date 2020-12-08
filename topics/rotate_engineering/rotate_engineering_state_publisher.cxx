#include "rotate_engineering_state_publisher.h"

CRotateEngineeringStatePublisher::CRotateEngineeringStatePublisher()
{
}

CRotateEngineeringStatePublisher::~CRotateEngineeringStatePublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CRotateEngineeringStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::engineering::ROTATE_ENGINEERING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateEngineeringStatePublisher::Initialize()
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

bool CRotateEngineeringStatePublisher::PublishSample()
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

void CRotateEngineeringStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CRotateEngineeringStatePublisher::SetStatus(DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CRotateEngineeringStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CRotateEngineeringStatePublisher::SetState(nec::engineering::State state)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->state = state;
    }
}

void CRotateEngineeringStatePublisher::SetMode(nec::engineering::Mode mode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mode = mode;
    }
}

void CRotateEngineeringStatePublisher::SetActualVelocity(const units::angular_velocity::radians_per_second_t actualVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualVelocity = units::unit_cast<double>(actualVelocity);
    }
}

void CRotateEngineeringStatePublisher::SetActualTorque(const units::torque::newton_meter_t actualTorque)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualTorque = units::unit_cast<double>(actualTorque);
    }
}

void CRotateEngineeringStatePublisher::SetActualPosition(const units::angle::radian_t actualPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualPosition = units::unit_cast<double>(actualPosition);
    }
}

void CRotateEngineeringStatePublisher::SetActualPower(double actualPower)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualPower = actualPower;
    }
}

void CRotateEngineeringStatePublisher::SetMinVelocity(const units::angular_velocity::radians_per_second_t minVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minVelocity = units::unit_cast<double>(minVelocity);
    }
}

void CRotateEngineeringStatePublisher::SetMaxVelocity(const units::angular_velocity::radians_per_second_t maxVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxVelocity = units::unit_cast<double>(maxVelocity);
    }
}

void CRotateEngineeringStatePublisher::SetMinTorque(const units::torque::newton_meter_t minTorque)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorque = units::unit_cast<double>(minTorque);
    }
}

void CRotateEngineeringStatePublisher::SetMaxTorque(const units::torque::newton_meter_t maxTorque)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorque = units::unit_cast<double>(maxTorque);
    }
}

void CRotateEngineeringStatePublisher::SetMinPosition(const units::angle::radian_t minPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minPosition = units::unit_cast<double>(minPosition);
    }
}

void CRotateEngineeringStatePublisher::SetMaxPosition(const units::angle::radian_t maxPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxPosition = units::unit_cast<double>(maxPosition);
    }
}

void CRotateEngineeringStatePublisher::SetTargetVelocity(const units::angular_velocity::radians_per_second_t targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = units::unit_cast<double>(targetVelocity);
    }
}

void CRotateEngineeringStatePublisher::SetTargetTorque(const units::torque::newton_meter_t targetTorque)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetTorque = units::unit_cast<double>(targetTorque);
    }
}

void CRotateEngineeringStatePublisher::SetTargetPosition(const units::angle::radian_t targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = units::unit_cast<double>(targetPosition);
    }
}

