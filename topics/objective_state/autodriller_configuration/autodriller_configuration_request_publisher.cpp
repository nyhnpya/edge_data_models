#include "dds_uuid.h"
#include "autodriller_configuration_request_publisher.h"

CAutoDrillerConfigurationRequestPublisher::CAutoDrillerConfigurationRequestPublisher()
{
}

CAutoDrillerConfigurationRequestPublisher::~CAutoDrillerConfigurationRequestPublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CAutoDrillerConfigurationRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
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
                              nec::control::HMI_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
