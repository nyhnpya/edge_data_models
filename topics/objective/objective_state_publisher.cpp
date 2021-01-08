#include "objective_state_publisher.h"

CObjectiveStatePublisher::CObjectiveStatePublisher()
{
}

CObjectiveStatePublisher::~CObjectiveStatePublisher()
{
}

bool CObjectiveStatePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    process::plan::OBJECTIVE_STATE,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
}

bool CObjectiveStatePublisher::PublishSample()
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

void CObjectiveStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

DataTypes::Uuid CObjectiveStatePublisher::GetId()
{
    DataTypes::Uuid uuid;

    if (m_pDataInstance != nullptr)
    {
        uuid = DDS_String_dup(m_pDataInstance->id);
    }

    return DDS_String_dup(uuid);
}

void CObjectiveStatePublisher::SetObjective(DataTypes::Objective objective)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objective = objective;
    }
    else
    {
        LOG_ERROR("Failed to set objective on uninitialized sample");
    }
}
