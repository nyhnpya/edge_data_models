#include "wellbore_state_publisher.h"

CWellboreStatePublisher::CWellboreStatePublisher()
{
}

CWellboreStatePublisher::~CWellboreStatePublisher()
{
}

bool CWellboreStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::WELLBORE_STATE,
                       "EdgeBaseLibrary",
                       "WellboreStateProfile");
}

bool CWellboreStatePublisher::Initialize()
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

bool CWellboreStatePublisher::PublishSample()
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

void CWellboreStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CWellboreStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CWellboreStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CWellboreStatePublisher::SetHoleDepth(const units::length::meter_t holeDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->holeDepth = units::unit_cast<double>(holeDepth);
    }
}

void CWellboreStatePublisher::SetBitDepth(const units::length::meter_t bitDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitDepth = units::unit_cast<double>(bitDepth);
    }
}

