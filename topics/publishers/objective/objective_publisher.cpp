#include "objective_publisher.h"

CObjectiveStatePublisher::CObjectiveStatePublisher()
{
}

CObjectiveStatePublisher::~CObjectiveStatePublisher()
{
}

void CObjectiveStatePublisher::SetObjective(DataTypes::Objective objective)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objective = objective;
    }
    else
    {
        LOG_ERROR("Failed to set bit depth on uninitialized sample");
    }
}

bool CObjectiveStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CObjectiveStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Plan::OBJECTIVE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
