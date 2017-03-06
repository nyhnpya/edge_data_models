#include "autodriller_configuration_request_publisher.h"

CAutoDrillerConfigurationRequestPublisher::CAutoDrillerConfigurationRequestPublisher()
{
}

CAutoDrillerConfigurationRequestPublisher::~CAutoDrillerConfigurationRequestPublisher()
{
}

void CAutoDrillerConfigurationRequestPublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance->id, id, 16);
    }
    else
    {
        LOG_ERROR("Failed to set id on uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp.sec = timestamp.sec;
        m_pDataInstance->timestamp.nanosec = timestamp.nanosec;
    }
    else
    {
        LOG_ERROR("Failed to set timestamp because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetDifferentialPressureKpCalculated(double differentialPressureKpCalculated)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKpCalculated = differentialPressureKpCalculated;
    }
    else
    {
        LOG_ERROR("Faile to set differentialPressureKpCalculated because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetDifferentialPressureKpCurrent(double differentialPressureKpCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKpCurrent = differentialPressureKpCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureKpCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetDifferentialPressureTiCalculated(double differentialPressureTiCalculated)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiCalculated = differentialPressureTiCalculated;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureTiCalculated because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetDifferentialPressureTiCurrent(double differentialPressureTiCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiCurrent = differentialPressureTiCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureTiCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetRateOfPenetrationKpCalculated(double rateOfPenetrationKpCalculated)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKpCalculated = rateOfPenetrationKpCalculated;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationKpCalculated because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetRateOfPenetrationKpCurrent(double rateOfPenetrationKpCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKpCurrent = rateOfPenetrationKpCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationKpCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetRateOfPenetrationTiCalcualted(double rateOfPenetrationTiCalcualted)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiCalcualted = rateOfPenetrationTiCalcualted;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationTiCalcualted because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetRateOfPenetrationTiCurrent(double rateOfPenetrationTiCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiCurrent = rateOfPenetrationTiCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationTiCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTorqueKpCalculated(double torqueKpCalculated)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKpCalculated = torqueKpCalculated;
    }
    else
    {
        LOG_ERROR("Failed to set torqueKpCalculated because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTorqueKpCurrent(double torqueKpCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKpCurrent = torqueKpCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set torqueKpCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTorqueTiCalculated(double torqueTiCalculated)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiCalculated = torqueTiCalculated;
    }
    else
    {
        LOG_ERROR("Failed to set torqueTiCalculated because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetToqueTiCurrent(double toqueTiCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->toqueTiCurrent = toqueTiCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set toqueTiCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetWeightOnBitKpCalculated(double weightOnBitKpCalculated)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKpCalculated = weightOnBitKpCalculated;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitKpCalculated because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetWeightOnBitKpCurrent(double weightOnBitKpCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKpCurrent = weightOnBitKpCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitKpCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetWeightOnBitTiCalculated(double weightOnBitTiCalculated)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiCalculated = weightOnBitTiCalculated;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitTiCalculated because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetWeightOnBitTiCurrent(double weightOnBitTiCurrent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiCurrent = weightOnBitTiCurrent;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitTiCurrent because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetMode(long mode)
{
    if (m_pDataInstance != nullptr)
    {
        //        m_pDataInstance->mode = mode;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModeController(double modeController)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modeController = modeController;
    }
    else
    {
        LOG_ERROR("Failed to set modeController because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetOnDataAvailable(double onDataAvailable)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->onDataAvailable = onDataAvailable;
    }
    else
    {
        LOG_ERROR("Failed to set onDataAvailable because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetOnLivelinessLost(double onLivelinessLost)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->onLivelinessLost = onLivelinessLost;
    }
    else
    {
        LOG_ERROR("Failed to set onLivelinessLost because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneDifferentialPressureRequestK(double modelOneDifferentialPressureRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneDifferentialPressureRequestK = modelOneDifferentialPressureRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneDifferentialPressureRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneDifferentialPressureRequestTau(double modelOneDifferentialPressureRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneDifferentialPressureRequestTau = modelOneDifferentialPressureRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneDifferentialPressureRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneRateOfPenetrationRequestK(double modelOneRateOfPenetrationRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneRateOfPenetrationRequestK = modelOneRateOfPenetrationRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneRateOfPenetrationRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneRateOfPenetrationRequestTau(double modelOneRateOfPenetrationRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneRateOfPenetrationRequestTau = modelOneRateOfPenetrationRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneRateOfPenetrationRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneTorqueRequestK(double modelOneTorqueRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneTorqueRequestK = modelOneTorqueRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneTorqueRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneTorqueRequestTau(double modelOneTorqueRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneTorqueRequestTau = modelOneTorqueRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneTorqueRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneWeightOnBitRequestK(double modelOneWeightOnBitRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneWeightOnBitRequestK = modelOneWeightOnBitRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneWeightOnBitRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelOneWeightOnBitRequestTau(double modelOneWeightOnBitRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelOneWeightOnBitRequestTau = modelOneWeightOnBitRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelOneWeightOnBitRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoDifferentialPressureRequestK(double modelTwoDifferentialPressureRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoDifferentialPressureRequestK = modelTwoDifferentialPressureRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoDifferentialPressureRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoDifferentialPressureRequestTau(double modelTwoDifferentialPressureRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoDifferentialPressureRequestTau = modelTwoDifferentialPressureRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoDifferentialPressureRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoRateOfPenetrationRequestK(double modelTwoRateOfPenetrationRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoRateOfPenetrationRequestK = modelTwoRateOfPenetrationRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoRateOfPenetrationRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoRateOfPenetrationRequestTau(double modelTwoRateOfPenetrationRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoRateOfPenetrationRequestTau = modelTwoRateOfPenetrationRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoRateOfPenetrationRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoTorqueRequestK(double modelTwoTorqueRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoTorqueRequestK = modelTwoTorqueRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoTorqueRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoTorqueRequestTau(double modelTwoTorqueRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoTorqueRequestTau = modelTwoTorqueRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoTorqueRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoWeightOnBitRequestK(double modelTwoWeightOnBitRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoWeightOnBitRequestK = modelTwoWeightOnBitRequestK;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoWeightOnBitRequestK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetModelTwoWeightOnBitRequestTau(double modelTwoWeightOnBitRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoWeightOnBitRequestTau = modelTwoWeightOnBitRequestTau;
    }
    else
    {
        LOG_ERROR("Failed to set modelTwoWeightOnBitRequestTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetStatus(long status)
{
    if (m_pDataInstance != nullptr)
    {
        //        m_pDataInstance->status = status;
    }
    else
    {
        LOG_ERROR("Failed to set status because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTuningDisable(bool tuningDisable)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tuningDisable = tuningDisable;
    }
    else
    {
        LOG_ERROR("Failed to set tuningDisable because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationRequestPublisher::SetTuningEnable(bool tuningEnable)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tuningEnable = tuningEnable;
    }
    else
    {
        LOG_ERROR("Failed to set tuningEnable because of uninitialized sample");
    }
}

bool CAutoDrillerConfigurationRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CAutoDrillerConfigurationRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              AutoDrillerConfiguration::HMI_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
