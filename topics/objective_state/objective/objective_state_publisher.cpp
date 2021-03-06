#include "dds_uuid.h"
#include "objective_state_publisher.h"

CObjectiveStatePublisher::CObjectiveStatePublisher()
{
}

CObjectiveStatePublisher::~CObjectiveStatePublisher()
{
    if (m_pDataInstance != nullptr)
    {
        DDS_String_free(m_pDataInstance->id);
    }
}

bool CObjectiveStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
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

bool CObjectiveStatePublisher::PublishSample()
{
    bool       retVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    retVal = Publish();

    return retVal;
}

bool CObjectiveStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              process::plan::OBJECTIVE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
