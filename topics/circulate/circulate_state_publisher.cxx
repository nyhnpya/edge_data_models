#include "circulate_state_publisher.h"

CCirculateStatePublisher::CCirculateStatePublisher()
{
}

CCirculateStatePublisher::~CCirculateStatePublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CCirculateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::CIRCULATE_STATE,
                       "EdgeBaseLibrary",
                       "CirculateStateProfile");
}

bool CCirculateStatePublisher::Initialize()
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

bool CCirculateStatePublisher::PublishSample()
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

void CCirculateStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CCirculateStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CCirculateStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CCirculateStatePublisher::SetStatus(DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CCirculateStatePublisher::SetActualFlowRate(const units::volume_velocity::cubic_meters_per_second_t actualFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualFlowRate = units::unit_cast<double>(actualFlowRate);
    }
}

void CCirculateStatePublisher::SetActualStandpipePressure(const units::pressure::pascal_t actualStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualStandpipePressure = units::unit_cast<double>(actualStandpipePressure);
    }
}

void CCirculateStatePublisher::SetMinFlowRate(const units::volume_velocity::cubic_meters_per_second_t minFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minFlowRate = units::unit_cast<double>(minFlowRate);
    }
}

void CCirculateStatePublisher::SetMaxFlowRate(const units::volume_velocity::cubic_meters_per_second_t maxFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxFlowRate = units::unit_cast<double>(maxFlowRate);
    }
}

void CCirculateStatePublisher::SetMinStandpipePressure(const units::pressure::pascal_t minStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minStandpipePressure = units::unit_cast<double>(minStandpipePressure);
    }
}

void CCirculateStatePublisher::SetMaxStandpipePressure(const units::pressure::pascal_t maxStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxStandpipePressure = units::unit_cast<double>(maxStandpipePressure);
    }
}

void CCirculateStatePublisher::SetTargetFlowRate(const units::volume_velocity::cubic_meters_per_second_t targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = units::unit_cast<double>(targetFlowRate);
    }
}

