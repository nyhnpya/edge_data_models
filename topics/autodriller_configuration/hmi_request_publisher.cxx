#include "hmi_request_publisher.h"

CHmiRequestPublisher::CHmiRequestPublisher()
{
}

CHmiRequestPublisher::~CHmiRequestPublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CHmiRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::control::HMI_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHmiRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        uuid.GenerateUuid();
        m_pDataInstance->id = DDS_String_dup(uuid.c_str());
        retVal = true;
    }

    return retVal;
}

bool CHmiRequestPublisher::PublishSample()
{
    return Publish();
}

void CHmiRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CHmiRequestPublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CHmiRequestPublisher::SetMode(int32_t mode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mode = mode;
    }
}

void CHmiRequestPublisher::SetModeController(double modeController)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modeController = modeController;
    }
}

void CHmiRequestPublisher::SetModelTwoDifferentialPressureRequestK(double modelTwoDifferentialPressureRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoDifferentialPressureRequestK = modelTwoDifferentialPressureRequestK;
    }
}

void CHmiRequestPublisher::SetModelTwoDifferentialPressureRequestTau(double modelTwoDifferentialPressureRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoDifferentialPressureRequestTau = modelTwoDifferentialPressureRequestTau;
    }
}

void CHmiRequestPublisher::SetModelTwoRateOfPenetrationRequestK(double modelTwoRateOfPenetrationRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoRateOfPenetrationRequestK = modelTwoRateOfPenetrationRequestK;
    }
}

void CHmiRequestPublisher::SetModelTwoRateOfPenetrationRequestTau(double modelTwoRateOfPenetrationRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoRateOfPenetrationRequestTau = modelTwoRateOfPenetrationRequestTau;
    }
}

void CHmiRequestPublisher::SetModelTwoTorqueRequestK(double modelTwoTorqueRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoTorqueRequestK = modelTwoTorqueRequestK;
    }
}

void CHmiRequestPublisher::SetModelTwoTorqueRequestTau(double modelTwoTorqueRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoTorqueRequestTau = modelTwoTorqueRequestTau;
    }
}

void CHmiRequestPublisher::SetModelTwoWeightOnBitRequestK(double modelTwoWeightOnBitRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoWeightOnBitRequestK = modelTwoWeightOnBitRequestK;
    }
}

void CHmiRequestPublisher::SetModelTwoWeightOnBitRequestTau(double modelTwoWeightOnBitRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelTwoWeightOnBitRequestTau = modelTwoWeightOnBitRequestTau;
    }
}

void CHmiRequestPublisher::SetStatus(int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CHmiRequestPublisher::SetTuningEnable(bool tuningEnable)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tuningEnable = tuningEnable;
    }
}

