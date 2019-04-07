#include "dds_uuid.h"
#include "circulate_engineering_state_publisher.h"

CCirculateEngineeringStatePublisher::CCirculateEngineeringStatePublisher()
{
}

CCirculateEngineeringStatePublisher::~CCirculateEngineeringStatePublisher()
{
}

bool CCirculateEngineeringStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CCirculateEngineeringStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CCirculateEngineeringStatePublisher::SetStatus(const DataTypes::Status status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CCirculateEngineeringStatePublisher::SetActualFlowRate(double actualFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualFlowRate = actualFlowRate;
    }
}

void CCirculateEngineeringStatePublisher::SetActualStandpipePressure(pascal_t actualStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualStandpipePressure = units::unit_cast<double>(actualStandpipePressure);
    }
}

void CCirculateEngineeringStatePublisher::SetMinFlowRate(double minFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minFlowRate = minFlowRate;
    }
}

void CCirculateEngineeringStatePublisher::SetMaxFlowRate(double maxFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxFlowRate = maxFlowRate;
    }
}

void CCirculateEngineeringStatePublisher::SetMinStandpipePressure(pascal_t minStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minStandpipePressure = units::unit_cast<double>(minStandpipePressure);
    }
}

void CCirculateEngineeringStatePublisher::SetMaxStandpipePressure(pascal_t maxStandpipePressure)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxStandpipePressure = units::unit_cast<double>(maxStandpipePressure);
    }
}

void CCirculateEngineeringStatePublisher::SetTargetFlowRate(double targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = targetFlowRate;
    }
}

bool CCirculateEngineeringStatePublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CCirculateEngineeringStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::CIRCULATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
