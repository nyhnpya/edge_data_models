#include "drill_objective_subscriber.h"

CDrillObjectiveSubscriber::CDrillObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CDrillObjectiveSubscriber::~CDrillObjectiveSubscriber()
{
}

bool CDrillObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CDrillObjectiveSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Time CDrillObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

double CDrillObjectiveSubscriber::GetRopLimit()
{
    return m_data.ropLimit;
}

double CDrillObjectiveSubscriber::GetWobLimit()
{
    return m_data.wobLimit;
}

double CDrillObjectiveSubscriber::GetDifferentialPressureLimit()
{
    return m_data.differentialPressureLimit;
}

double CDrillObjectiveSubscriber::GetTorqueLimit()
{
    return m_data.torqueLimit;
}

bool CDrillObjectiveSubscriber::GetRopMode()
{
    return (m_data.ropMode == DDS_BOOLEAN_TRUE);
}

bool CDrillObjectiveSubscriber::GetWobMode()
{
    return (m_data.wobMode == DDS_BOOLEAN_TRUE);
}

bool CDrillObjectiveSubscriber::GetDifferentialPressureMode()
{
    return (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);
}

bool CDrillObjectiveSubscriber::GetTorqueMode()
{
    return (m_data.torqueMode == DDS_BOOLEAN_TRUE);
}

void CDrillObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CDrillObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::DRILLING_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillObjectiveSubscriber::DataAvailable(const nec::process::DrillingObjective &data,
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

void CDrillObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
