#include "autodriller_configuration_request_subscriber.h"

CAutoDrillerConfigurationRequestSubscriber::CAutoDrillerConfigurationRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
}

CAutoDrillerConfigurationRequestSubscriber::~CAutoDrillerConfigurationRequestSubscriber()
{
}

bool CAutoDrillerConfigurationRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetMode(long &mode)
{
    mode = m_data.mode;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModeController(double &modeController)
{
    modeController = m_data.modeController;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoDifferentialPressureRequestK(double &modelTwoDifferentialPressureRequestK)
{
    modelTwoDifferentialPressureRequestK = m_data.modelTwoDifferentialPressureRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoDifferentialPressureRequestTau(double &modelTwoDifferentialPressureRequestTau)
{
    modelTwoDifferentialPressureRequestTau = m_data.modelTwoDifferentialPressureRequestTau;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoRateOfPenetrationRequestK(double &modelTwoRateOfPenetrationRequestK)
{
    modelTwoRateOfPenetrationRequestK = m_data.modelTwoRateOfPenetrationRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoRateOfPenetrationRequestTau(double &modelTwoRateOfPenetrationRequestTau)
{
    modelTwoRateOfPenetrationRequestTau = m_data.modelTwoRateOfPenetrationRequestTau;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoTorqueRequestK(double &modelTwoTorqueRequestK)
{
    modelTwoTorqueRequestK = m_data.modelTwoTorqueRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoTorqueRequestTau(double &modelTwoTorqueRequestTau)
{
    modelTwoTorqueRequestTau = m_data.modelTwoTorqueRequestTau;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoWeightOnBitRequestK(double &modelTwoWeightOnBitRequestK)
{
    modelTwoWeightOnBitRequestK = m_data.modelTwoWeightOnBitRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelTwoWeightOnBitRequestTau(double &modelTwoWeightOnBitRequestTau)
{
    modelTwoWeightOnBitRequestTau = m_data.modelTwoWeightOnBitRequestTau;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetStatus(long &status)
{
    status = m_data.status;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTuningEnable(bool &tuningEnable)
{
    tuningEnable = (m_data.tuningEnable == DDS_BOOLEAN_TRUE);
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}


void CAutoDrillerConfigurationRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CAutoDrillerConfigurationRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CAutoDrillerConfigurationRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CAutoDrillerConfigurationRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CAutoDrillerConfigurationRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::control::HMI_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoDrillerConfigurationRequestSubscriber::DataAvailable(const nec::control::HmiRequest &data,
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

void CAutoDrillerConfigurationRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoDrillerConfigurationRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CAutoDrillerConfigurationRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
