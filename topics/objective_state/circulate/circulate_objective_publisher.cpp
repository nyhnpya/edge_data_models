#include "dds_uuid.h"
#include "circulate_objective_publisher.h"

CCirculateObjectivePublisher::CCirculateObjectivePublisher()
{
}

CCirculateObjectivePublisher::~CCirculateObjectivePublisher()
{
}

bool CCirculateObjectivePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    uuid.ExportUuid(m_pDataInstance->id);

    return true;
}

void CCirculateObjectivePublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
    }
}

void CCirculateObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CCirculateObjectivePublisher::SetTargetFlowRate(double targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = targetFlowRate;
    }
}

bool CCirculateObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CCirculateObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              ProcessCirculation::CIRCULATE_OBJECTIVE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
