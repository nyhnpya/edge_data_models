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

bool CRotateObjectiveSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateObjectiveSubscriber::GetEstimatedDuration(DataTypes::Time &estimatedDuration)
{
    estimatedDuration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateObjectiveSubscriber::GetTargetRate(double &targetRate)
{
    targetRate = m_data.targetRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessRotation::ROTATE_OBJECTIVE,
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

void CRotateObjectiveSubscriber::DataAvailable(const ProcessRotation::RotateObjective &data,
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
