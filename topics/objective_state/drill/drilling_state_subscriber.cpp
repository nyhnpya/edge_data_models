#include "drilling_state_subscriber.h"

CDrillingStateSubscriber::CDrillingStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CDrillingStateSubscriber::~CDrillingStateSubscriber()
{
}

bool CDrillingStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopActual(double &ropActual)
{
    ropActual = m_data.ropActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobActual(double &wobActual)
{
    wobActual = m_data.wobActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureActual(double &differentialPressureActual)
{
    differentialPressureActual = m_data.differentialPressureActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueActual(double &torqueActual)
{
    torqueActual = m_data.torqueActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopLimit(double &ropLimit)
{
    ropLimit = m_data.ropLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobLimit(double &wobLimit)
{
    wobLimit = m_data.wobLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureLimit(double &differentialPressureLimit)
{
    differentialPressureLimit = m_data.differentialPressureLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueLimit(double &torqueLimit)
{
    torqueLimit = m_data.torqueLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopMode(bool &ropMode)
{
    ropMode = m_data.ropMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = m_data.wobMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = m_data.differentialPressureMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = m_data.torqueMode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetRopTarget(double &ropTarget)
{
    ropTarget = m_data.ropTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetWobTarget(double &wobTarget)
{
    wobTarget = m_data.wobTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetDifferentialPressureTarget(double &differentialPressureTarget)
{
    differentialPressureTarget = m_data.differentialPressureTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::GetTorqueTarget(double &torqueTarget)
{
    torqueTarget = m_data.torqueTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Hoisting::DRILLING_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillingStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillingStateSubscriber::DataAvailable(const Hoisting::DrillingState &data,
                                             const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.timestamp.sec = data.timestamp.sec;
        m_data.timestamp.nanosec = data.timestamp.nanosec;
        m_data.ropActual = data.ropActual;
        m_data.wobActual = data.wobActual;
        m_data.differentialPressureActual = data.differentialPressureActual;
        m_data.torqueActual = data.torqueActual;
        m_data.wobLimit = data.wobLimit;
        m_data.differentialPressureLimit = data.differentialPressureLimit;
        m_data.torqueLimit = data.torqueLimit;
        m_data.ropMode = data.ropMode;
        m_data.wobMode = data.wobMode;
        m_data.differentialPressureMode = data.differentialPressureMode;
        m_data.torqueMode = data.torqueMode;
        m_data.ropTarget = data.ropTarget;
        m_data.wobTarget = data.wobTarget;
        m_data.differentialPressureTarget = data.differentialPressureTarget;
        m_data.torqueTarget = data.torqueTarget;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CDrillingStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}
