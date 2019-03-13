#include "circulate_objective_subscriber.h"

CCirculateObjectiveSubscriber::CCirculateObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CCirculateObjectiveSubscriber::~CCirculateObjectiveSubscriber()
{
}

bool CCirculateObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CCirculateObjectiveSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Time CCirculateObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

double CCirculateObjectiveSubscriber::GetTargetFlowRate()
{
    return m_data.targetFlowRate;
}

bool CCirculateObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::CIRCULATE_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CCirculateObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CCirculateObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CCirculateObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CCirculateObjectiveSubscriber::DataAvailable(const nec::process::CirculateObjective &data,
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

void CCirculateObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}

void CCirculateObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
