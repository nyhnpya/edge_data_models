#include "autodriller_configuration_request_subscriber.h"

CAutoDrillerConfigurationRequestSubscriber::CAutoDrillerConfigurationRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
}

CAutoDrillerConfigurationRequestSubscriber::~CAutoDrillerConfigurationRequestSubscriber()
{
}

bool CAutoDrillerConfigurationRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetDifferentialPressureKpCalculated(double &differentialPressureKpCalculated)
{
    differentialPressureKpCalculated = m_data.differentialPressureKpCalculated;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetDifferentialPressureKpCurrent(double &differentialPressureKpCurrent)
{
    differentialPressureKpCurrent = m_data.differentialPressureKpCurrent;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetDifferentialPressureTiCalculated(double &differentialPressureTiCalculated)
{
    differentialPressureTiCalculated = m_data.differentialPressureTiCalculated;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetDifferentialPressureTiCurrent(double &differentialPressureTiCurrent)
{
    differentialPressureTiCurrent = m_data.differentialPressureTiCurrent;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetRateOfPenetrationKpCalculated(double &rateOfPenetrationKpCalculated)
{
    rateOfPenetrationKpCalculated = m_data.rateOfPenetrationKpCalculated;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetRateOfPenetrationKpCurrent(double &rateOfPenetrationKpCurrent)
{
    rateOfPenetrationKpCurrent = m_data.rateOfPenetrationKpCurrent;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetRateOfPenetrationTiCalcualted(double &rateOfPenetrationTiCalcualted)
{
    rateOfPenetrationTiCalcualted = m_data.rateOfPenetrationTiCalcualted;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetRateOfPenetrationTiCurrent(double &rateOfPenetrationTiCurrent)
{
    rateOfPenetrationTiCurrent = m_data.rateOfPenetrationTiCurrent;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTorqueKpCalculated(double &torqueKpCalculated)
{
    torqueKpCalculated = m_data.torqueKpCalculated;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTorqueKpCurrent(double &torqueKpCurrent)
{
    torqueKpCurrent = m_data.torqueKpCurrent;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTorqueTiCalculated(double &torqueTiCalculated)
{
    torqueTiCalculated = m_data.torqueTiCalculated;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetToqueTiCurrent(double &toqueTiCurrent)
{
    toqueTiCurrent = m_data.toqueTiCurrent;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetWeightOnBitKpCalculated(double &weightOnBitKpCalculated)
{
    weightOnBitKpCalculated = m_data.weightOnBitKpCalculated;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetWeightOnBitKpCurrent(double &weightOnBitKpCurrent)
{
    weightOnBitKpCurrent = m_data.weightOnBitKpCurrent;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetWeightOnBitTiCalculated(double &weightOnBitTiCalculated)
{
    weightOnBitTiCalculated = m_data.weightOnBitTiCalculated;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetWeightOnBitTiCurrent(double &weightOnBitTiCurrent)
{
    weightOnBitTiCurrent = m_data.weightOnBitTiCurrent;
    
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

bool CAutoDrillerConfigurationRequestSubscriber::GetOnLivelinessLost(double &onLivelinessLost)
{
    onLivelinessLost = m_data.onLivelinessLost;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneDifferentialPressureRequestK(double &modelOneDifferentialPressureRequestK)
{
    modelOneDifferentialPressureRequestK = m_data.modelOneDifferentialPressureRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneDifferentialPressureRequestTau(double &modelOneDifferentialPressureRequestTau)
{
    modelOneDifferentialPressureRequestTau = m_data.modelOneDifferentialPressureRequestTau;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneRateOfPenetrationRequestK(double &modelOneRateOfPenetrationRequestK)
{
    modelOneRateOfPenetrationRequestK = m_data.modelOneRateOfPenetrationRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneRateOfPenetrationRequestTau(double &modelOneRateOfPenetrationRequestTau)
{
    modelOneRateOfPenetrationRequestTau = m_data.modelOneRateOfPenetrationRequestTau;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneTorqueRequestK(double &modelOneTorqueRequestK)
{
    modelOneTorqueRequestK = m_data.modelOneTorqueRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneTorqueRequestTau(double &modelOneTorqueRequestTau)
{
    modelOneTorqueRequestTau = m_data.modelOneTorqueRequestTau;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneWeightOnBitRequestK(double &modelOneWeightOnBitRequestK)
{
    modelOneWeightOnBitRequestK = m_data.modelOneWeightOnBitRequestK;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetModelOneWeightOnBitRequestTau(double &modelOneWeightOnBitRequestTau)
{
    modelOneWeightOnBitRequestTau = m_data.modelOneWeightOnBitRequestTau;
    
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

bool CAutoDrillerConfigurationRequestSubscriber::GetTuningDisable(bool &tuningDisable)
{
    tuningDisable = m_data.tuningDisable;
    
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationRequestSubscriber::GetTuningEnable(bool &tuningEnable)
{
    tuningEnable = m_data.tuningEnable;
    
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

bool CAutoDrillerConfigurationRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               AutoDrillerConfiguration::HMI_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoDrillerConfigurationRequestSubscriber::DataAvailable(const AutoDrillerConfiguration::HmiRequest &data,
                                                               const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.timestamp.sec = data.timestamp.sec;
        m_data.timestamp.nanosec = data.timestamp.nanosec;
        m_data.differentialPressureKpCalculated = data.differentialPressureKpCalculated;
        m_data.differentialPressureKpCurrent = data.differentialPressureKpCurrent;
        m_data.differentialPressureTiCalculated = data.differentialPressureTiCalculated;
        m_data.differentialPressureTiCurrent = data.differentialPressureTiCurrent;
        m_data.rateOfPenetrationKpCalculated = data.rateOfPenetrationKpCalculated;
        m_data.rateOfPenetrationKpCurrent = data.rateOfPenetrationKpCurrent;
        m_data.rateOfPenetrationTiCalcualted = data.rateOfPenetrationTiCalcualted;
        m_data.rateOfPenetrationTiCurrent = data.rateOfPenetrationTiCurrent;
        m_data.torqueKpCalculated = data.torqueKpCalculated;
        m_data.torqueKpCurrent = data.torqueKpCurrent;
        m_data.torqueTiCalculated = data.torqueTiCalculated;
        m_data.toqueTiCurrent = data.toqueTiCurrent;
        m_data.weightOnBitKpCalculated = data.weightOnBitKpCalculated;
        m_data.weightOnBitKpCurrent = data.weightOnBitKpCurrent;
        m_data.weightOnBitTiCalculated = data.weightOnBitTiCalculated;
        m_data.weightOnBitTiCurrent = data.weightOnBitTiCurrent;
        m_data.mode = data.mode;
        m_data.modeController = data.modeController;
        m_data.onDataAvailable = data.onDataAvailable;
        m_data.onLivelinessLost = data.onLivelinessLost;
        m_data.modelOneDifferentialPressureRequestK = data.modelOneDifferentialPressureRequestK;
        m_data.modelOneDifferentialPressureRequestTau = data.modelOneDifferentialPressureRequestTau;
        m_data.modelOneRateOfPenetrationRequestK = data.modelOneRateOfPenetrationRequestK;
        m_data.modelOneRateOfPenetrationRequestTau = data.modelOneRateOfPenetrationRequestTau;
        m_data.modelOneTorqueRequestK = data.modelOneTorqueRequestK;
        m_data.modelOneTorqueRequestTau = data.modelOneTorqueRequestTau;
        m_data.modelOneWeightOnBitRequestK = data.modelOneWeightOnBitRequestK;
        m_data.modelOneWeightOnBitRequestTau = data.modelOneWeightOnBitRequestTau;
        m_data.modelTwoDifferentialPressureRequestK = data.modelTwoDifferentialPressureRequestK;
        m_data.modelTwoDifferentialPressureRequestTau = data.modelTwoDifferentialPressureRequestTau;
        m_data.modelTwoRateOfPenetrationRequestK = data.modelTwoRateOfPenetrationRequestK;
        m_data.modelTwoRateOfPenetrationRequestTau = data.modelTwoRateOfPenetrationRequestTau;
        m_data.modelTwoTorqueRequestK = data.modelTwoTorqueRequestK;
        m_data.modelTwoTorqueRequestTau = data.modelTwoTorqueRequestTau;
        m_data.modelTwoWeightOnBitRequestK = data.modelTwoWeightOnBitRequestK;
        m_data.modelTwoWeightOnBitRequestTau = data.modelTwoWeightOnBitRequestTau;
        m_data.status = data.status;
        m_data.tuningDisable = data.tuningDisable;
        m_data.tuningEnable = data.tuningEnable;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CAutoDrillerConfigurationRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
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
