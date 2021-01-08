#include "hmi_request_subscriber.h"

CHmiRequestSubscriber::CHmiRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CHmiRequestSubscriber::~CHmiRequestSubscriber()
{
}

bool CHmiRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::control::HMI_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHmiRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CHmiRequestSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

DataTypes::Time CHmiRequestSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

int32_t CHmiRequestSubscriber::GetMode()
{
    return m_data.mode;
}

double CHmiRequestSubscriber::GetModeController()
{
    return m_data.modeController;
}

double CHmiRequestSubscriber::GetDifferentialPressureRequestK()
{
    return m_data.differentialPressureRequestK;
}

double CHmiRequestSubscriber::GetDifferentialPressureRequestTau()
{
    return m_data.differentialPressureRequestTau;
}

double CHmiRequestSubscriber::GetRateOfPenetrationRequestK()
{
    return m_data.rateOfPenetrationRequestK;
}

double CHmiRequestSubscriber::GetRateOfPenetrationRequestTau()
{
    return m_data.rateOfPenetrationRequestTau;
}

double CHmiRequestSubscriber::GetTorqueRequestK()
{
    return m_data.torqueRequestK;
}

double CHmiRequestSubscriber::GetTorqueRequestTau()
{
    return m_data.torqueRequestTau;
}

double CHmiRequestSubscriber::GetWeightOnBitRequestK()
{
    return m_data.weightOnBitRequestK;
}

double CHmiRequestSubscriber::GetWeightOnBitRequestTau()
{
    return m_data.weightOnBitRequestTau;
}

int32_t CHmiRequestSubscriber::GetStatus()
{
    return m_data.status;
}

bool CHmiRequestSubscriber::GetTuningEnable()
{
    return m_data.tuningEnable;
}


void CHmiRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CHmiRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CHmiRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CHmiRequestSubscriber::DataAvailable(const nec::control::HmiRequest &data,
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

void CHmiRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHmiRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

