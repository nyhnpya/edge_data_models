#include "drilling_objective_subscriber.h"

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

bool CDrillingObjectiveSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetEstimatedDuration(DataTypes::Time &estimatedDuration)
{
    estimatedDuration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetRopLimit(double &ropLimit)
{
    ropLimit = m_data.ropLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetWobLimit(double &wobLimit)
{
    wobLimit = m_data.wobLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetDifferentialPressureLimit(double &differentialPressureLimit)
{
    differentialPressureLimit = m_data.differentialPressureLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetTorqueLimit(double &torqueLimit)
{
    torqueLimit = m_data.torqueLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetRopMode(bool &ropMode)
{
    ropMode = (m_data.ropMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = (m_data.wobMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = (m_data.torqueMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
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
                               Hoisting::DRILLING_OBJECTIVE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingObjectiveSubscriber::DataAvailable(const Hoisting::DrillingObjective &data,
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
