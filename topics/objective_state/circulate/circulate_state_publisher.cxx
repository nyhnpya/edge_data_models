#include "dds_uuid.h"
#include "circulate_state_publisher.h"

CCirculateStatePublisher::CCirculateStatePublisher()
{
}

CCirculateStatePublisher::~CCirculateStatePublisher()
{
}

bool CCirculateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::CIRCULATE_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
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

void CCirculateStatePublisher::SetActualFlowRate(double actualFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualFlowRate = actualFlowRate;
    }
}

void CCirculateStatePublisher::SetActualStandpipePressure(double actualStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualStandpipePressure = actualStandpipePressure;
    }
}

void CCirculateStatePublisher::SetMinFlowRate(double minFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minFlowRate = minFlowRate;
    }
}

void CCirculateStatePublisher::SetMaxFlowRate(double maxFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxFlowRate = maxFlowRate;
    }
}

void CCirculateStatePublisher::SetMinStandpipePressure(double minStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minStandpipePressure = minStandpipePressure;
    }
}

void CCirculateStatePublisher::SetMaxStandpipePressure(double maxStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxStandpipePressure = maxStandpipePressure;
    }
}

void CCirculateStatePublisher::SetTargetFlowRate(double targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = targetFlowRate;
    }
}

