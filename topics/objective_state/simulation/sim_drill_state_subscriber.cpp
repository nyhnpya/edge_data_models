#include "sim_drill_state_subscriber.h"

CSimDrillStateSubscriber::CSimDrillStateSubscriber() :
    m_subscriptionMatched(false),
    m_pOnDataAvailable(nullptr),
	m_pOnDataDisposed(nullptr),
	m_pOnLivelinessChanged(nullptr),
	m_pOnSubscriptionMatched(nullptr)
{
	memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CSimDrillStateSubscriber::~CSimDrillStateSubscriber()
{
}

bool CSimDrillStateSubscriber::ValidData()
{
	return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::ValidSubscription()
{
	return m_subscriptionMatched;
}

bool CSimDrillStateSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetRopActual(double &ropActual)
{
    ropActual = m_data.ropActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetWobActual(double &wobActual)
{
    wobActual = m_data.wobActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetDifferentialPressureActual(double &differentialPressureActual)
{
    differentialPressureActual = m_data.differentialPressureActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetTorqueActual(double &torqueActual)
{
    torqueActual = m_data.torqueActual;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetRopLimit(double &ropLimit)
{
    ropLimit = m_data.ropLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetWobLimit(double &wobLimit)
{
    wobLimit = m_data.wobLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetDifferentialPressureLimit(double &differentialPressureLimit)
{
    differentialPressureLimit = m_data.differentialPressureLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetTorqueLimit(double &torqueLimit)
{
    torqueLimit = m_data.torqueLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetRopMode(bool &ropMode)
{
	ropMode = (m_data.ropMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = (m_data.wobMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = (m_data.torqueMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetRopTarget(double &ropTarget)
{
    ropTarget = m_data.ropTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetWobTarget(double &wobTarget)
{
    wobTarget = m_data.wobTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetDifferentialPressureTarget(double &differentialPressureTarget)
{
    differentialPressureTarget = m_data.differentialPressureTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::GetTorqueTarget(double &torqueTarget)
{
    torqueTarget = m_data.torqueTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Simulation::SIM_AUTODRILLER_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CSimDrillStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CSimDrillStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CSimDrillStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CSimDrillStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CSimDrillStateSubscriber::DataAvailable(const Simulation::AutoDrillerState &data,
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

void CSimDrillStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CSimDrillStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CSimDrillStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
	m_subscriptionMatched = (status.current_count > 0) ? true : false;

	if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
