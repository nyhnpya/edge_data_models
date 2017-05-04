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
    uuid.ExportUuid(m_pDataInstance->id);

    return true;
}

void CCirculateStatePublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
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
                              ProcessCirculation::CIRCULATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
