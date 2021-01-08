#include "circulate_objective_publisher.h"

CCirculateObjectivePublisher::CCirculateObjectivePublisher()
{
}

CCirculateObjectivePublisher::~CCirculateObjectivePublisher()
{
}

bool CCirculateObjectivePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::CIRCULATE_OBJECTIVE,
                                    "EdgeBaseLibrary",
                                    "CirculateObjectiveProfile");
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

void CCirculateObjectivePublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
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

