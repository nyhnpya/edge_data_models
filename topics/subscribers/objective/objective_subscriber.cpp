#include <string.h>
#include "objective_subscriber.h"

CObjectiveStateSubscriber::CObjectiveStateSubscriber()
{
}

CObjectiveStateSubscriber::~CObjectiveStateSubscriber()
{
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

void CObjectiveStateSubscriber::DataAvailable(const Plan::ObjectiveState &data,
                                              const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.timestamp.sec = data.timestamp.sec;
        m_data.timestamp.nanosec = data.timestamp.nanosec;
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
    m_data.objective = DataTypes::None;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}
