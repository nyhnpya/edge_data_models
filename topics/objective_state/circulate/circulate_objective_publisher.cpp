#include "dds_uuid.h"
#include "circulate_objective_publisher.h"

CCirculateObjectivePublisher::CCirculateObjectivePublisher()
{
}

CCirculateObjectivePublisher::~CCirculateObjectivePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CCirculateObjectivePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
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
