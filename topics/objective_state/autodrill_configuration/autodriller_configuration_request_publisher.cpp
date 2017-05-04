#include "dds_uuid.h"
#include "autodriller_configuration_request_publisher.h"

CAutoDrillerConfigurationRequestPublisher::CAutoDrillerConfigurationRequestPublisher()
{
}

CAutoDrillerConfigurationRequestPublisher::~CAutoDrillerConfigurationRequestPublisher()
{
}

bool CAutoDrillerConfigurationRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    uuid.ExportUuid(m_pDataInstance->id);

    return true;
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

void CAutoDrillerConfigurationRequestPublisher::SetMode(long mode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mode = (int32_t)mode;
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
