#include "drill_objective_subscriber.h"

CDrillingObjectiveSubscriber::CDrillingObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CDrillingObjectiveSubscriber::~CDrillingObjectiveSubscriber()
{
}

bool CDrillingObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CDrillingObjectiveSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Time CDrillingObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

double CDrillingObjectiveSubscriber::GetRopLimit()
{
    return m_data.ropLimit;
}

double CDrillingObjectiveSubscriber::GetWobLimit()
{
    return m_data.wobLimit;
}

double CDrillingObjectiveSubscriber::GetDifferentialPressureLimit()
{
    return m_data.differentialPressureLimit;
}

double CDrillingObjectiveSubscriber::GetTorqueLimit()
{
    return m_data.torqueLimit;
}

bool CDrillingObjectiveSubscriber::GetRopMode()
{
    return (m_data.ropMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetWobMode()
{
    return (m_data.wobMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetDifferentialPressureMode()
{
    return (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetTorqueMode()
{
    return (m_data.torqueMode == DDS_BOOLEAN_TRUE);
}

void CDrillingObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillingObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillingObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CDrillingObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::DRILLING_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingObjectiveSubscriber::DataAvailable(const nec::process::DrillingObjective &data,
                                                 const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable();
        }
    }
}

void CDrillingObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
