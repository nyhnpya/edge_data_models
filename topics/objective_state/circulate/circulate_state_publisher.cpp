#include "dds_uuid.h"
#include "circulate_state_publisher.h"

CCirculateStatePublisher::CCirculateStatePublisher()
{
}

CCirculateStatePublisher::~CCirculateStatePublisher()
{
}

bool CCirculateStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CCirculateStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CCirculateStatePublisher::SetStatus(const DataTypes::Status status)
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

void CCirculateStatePublisher::SetActualStandpipePressure(pascal_t actualStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualStandpipePressure = units::unit_cast<double>(actualStandpipePressure);
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

void CCirculateStatePublisher::SetMinStandpipePressure(pascal_t minStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minStandpipePressure = units::unit_cast<double>(minStandpipePressure);
    }
}

void CCirculateStatePublisher::SetMaxStandpipePressure(pascal_t maxStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxStandpipePressure = units::unit_cast<double>(maxStandpipePressure);
    }
}

void CCirculateStatePublisher::SetTargetFlowRate(double targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = targetFlowRate;
    }
}

bool CCirculateStatePublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CCirculateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::CIRCULATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
