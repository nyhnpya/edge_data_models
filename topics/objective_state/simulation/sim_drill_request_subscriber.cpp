#include "sim_drill_request_subscriber.h"

CSimDrillRequestSubscriber::CSimDrillRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CSimDrillRequestSubscriber::~CSimDrillRequestSubscriber()
{
}

bool CSimDrillRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetRopLimit(double &ropLimit)
{
    ropLimit = m_data.ropLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetWobLimit(double &wobLimit)
{
    wobLimit = m_data.wobLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetDifferentialPressureLimit(double &differentialPressureLimit)
{
    differentialPressureLimit = m_data.differentialPressureLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetTorqueLimit(double &torqueLimit)
{
    torqueLimit = m_data.torqueLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetRopMode(bool &ropMode)
{
    ropMode = (m_data.ropMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = (m_data.wobMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSimDrillRequestSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = (m_data.torqueMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

void CSimDrillRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CSimDrillRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CSimDrillRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CSimDrillRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Simulation::SIM_AUTODRILLER_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CSimDrillRequestSubscriber::DataAvailable(const Simulation::AutoDrillerRequest &data,
                                               const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data.id = DDS_String_dup(data.id);
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

void CSimDrillRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CSimDrillRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
