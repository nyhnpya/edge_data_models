#include "auto_ream_objective_subscriber.h"

CAutoReamObjectiveSubscriber::CAutoReamObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CAutoReamObjectiveSubscriber::~CAutoReamObjectiveSubscriber()
{
}

bool CAutoReamObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamObjectiveSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoReamObjectiveSubscriber::GetEstimatedDuration(DataTypes::Time &estimatedDuration)
{
    estimatedDuration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

void CAutoReamObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CAutoReamObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CAutoReamObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CAutoReamObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::AUTO_REAM_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoReamObjectiveSubscriber::DataAvailable(const nec::process::AutoReamObjective &data,
                                                 const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CAutoReamObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoReamObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
