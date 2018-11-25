#include "rotate_objective_subscriber.h"

CRotateObjectiveSubscriber::CRotateObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CRotateObjectiveSubscriber::~CRotateObjectiveSubscriber()
{
}

bool CRotateObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CRotateObjectiveSubscriber::GetId()
{
    return DDS_String_dup(m_data.id);
}

DataTypes::Time CRotateObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

radians_per_second_t CRotateObjectiveSubscriber::GetTargetRate()
{
    return (radians_per_second_t)m_data.targetRate;
}

bool CRotateObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::ROTATE_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CRotateObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CRotateObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CRotateObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CRotateObjectiveSubscriber::DataAvailable(const nec::process::RotateObjective &data,
                                               const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(sampleInfo);
        }
    }
}

void CRotateObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}

void CRotateObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
