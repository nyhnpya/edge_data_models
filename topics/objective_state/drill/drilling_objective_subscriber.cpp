#include "drilling_objective_subscriber.h"

CDrillingObjectiveSubscriber::CDrillingObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CDrillingObjectiveSubscriber::~CDrillingObjectiveSubscriber()
{
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
    ropMode = m_data.ropMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = m_data.wobMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = m_data.differentialPressureMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingObjectiveSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = m_data.torqueMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

void CDrillingObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
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

    if (sampleInfo.valid_data == true)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.estimatedDuration = data.estimatedDuration;
        m_data.ropLimit = data.ropLimit;
        m_data.wobLimit = data.wobLimit;
        m_data.differentialPressureLimit = data.differentialPressureLimit;
        m_data.torqueLimit = data.torqueLimit;
        m_data.ropMode = data.ropMode;
        m_data.wobMode = data.wobMode;
        m_data.differentialPressureMode = data.differentialPressureMode;
        m_data.torqueMode = data.torqueMode;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}
