#include <string.h>
#include "objective_subscriber.h"

CObjectiveStateSubscriber::CObjectiveStateSubscriber() :
    m_subscriptionMatched(false),
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
}

CObjectiveStateSubscriber::~CObjectiveStateSubscriber()
{
    if (m_data.id != nullptr)
    {
        DDS_String_free(m_data.id);
    }

    if (m_data.parentId == nullptr)
    {
        DDS_String_free(m_data.parentId);
    }
}

bool CObjectiveStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CObjectiveStateSubscriber::ValidSubscription()
{
	return m_subscriptionMatched;
}

bool CObjectiveStateSubscriber::GetId(DataTypes::Uuid id)
{
    id = m_data.id;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CObjectiveStateSubscriber::GetParentId(DataTypes::Uuid parentId)
{
    parentId = m_data.parentId;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CObjectiveStateSubscriber::GetObjective(DataTypes::Objective &objective)
{
    objective = m_data.objective;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CObjectiveStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Plan::OBJECTIVE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CObjectiveStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CObjectiveStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CObjectiveStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CObjectiveStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CObjectiveStateSubscriber::DataAvailable(const Plan::ObjectiveState &data,
                                              const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        if (m_data.id != nullptr)
        {
            DDS_String_free(m_data.id);
        }

        m_data.id = DDS_String_dup(data.id);

        if (m_data.parentId == nullptr)
        {
            DDS_String_free(m_data.parentId);
        }

        m_data.parentId = DDS_String_dup(data.parentId);
        m_data.timestamp = data.timestamp;
        m_data.objective = data.objective;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CObjectiveStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CObjectiveStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CObjectiveStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
	m_subscriptionMatched = (status.current_count > 0) ? true : false;
	
	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
