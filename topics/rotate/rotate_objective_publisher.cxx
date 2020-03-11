#include "rotate_objective_publisher.h"

CRotateObjectivePublisher::CRotateObjectivePublisher()
{
}

CRotateObjectivePublisher::~CRotateObjectivePublisher()
{
}

bool CRotateObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::ROTATE_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateObjectivePublisher::Initialize()
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

bool CRotateObjectivePublisher::PublishSample()
{
    return Publish();
}

void CRotateObjectivePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CRotateObjectivePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CRotateObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CRotateObjectivePublisher::SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

