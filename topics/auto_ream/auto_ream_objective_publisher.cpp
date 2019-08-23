#include "dds_uuid.h"
#include "auto_ream_objective_publisher.h"

CAutoReamObjectivePublisher::CAutoReamObjectivePublisher()
{
}

CAutoReamObjectivePublisher::~CAutoReamObjectivePublisher()
{
}

bool CAutoReamObjectivePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CAutoReamObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

bool CAutoReamObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CAutoReamObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::AUTO_REAM_OBJECTIVE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
