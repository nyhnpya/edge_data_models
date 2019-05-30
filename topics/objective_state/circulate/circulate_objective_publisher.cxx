#include "circulate_objective_publisher.h"

CCirculateObjectivePublisher::CCirculateObjectivePublisher()
{
}

CCirculateObjectivePublisher::~CCirculateObjectivePublisher()
{
}

bool CCirculateObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::CIRCULATE_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "ObjectiveProfile");
}

bool CCirculateObjectivePublisher::Initialize()
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

bool CCirculateObjectivePublisher::PublishSample()
{
    return Publish();
}

void CCirculateObjectivePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CCirculateObjectivePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CCirculateObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CCirculateObjectivePublisher::SetTargetFlowRate(const units::volume_velocity::cubic_meters_per_second_t targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = units::unit_cast<double>(targetFlowRate);
    }
}

