#include "hmi_request_publisher.h"

CHmiRequestPublisher::CHmiRequestPublisher()
{
}

CHmiRequestPublisher::~CHmiRequestPublisher()
{
}

bool CHmiRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::control::HMI_REQUEST,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
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

void CHmiRequestPublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CHmiRequestPublisher::SetMode(const int32_t mode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mode = mode;
    }
}

void CHmiRequestPublisher::SetModeController(const double modeController)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modeController = modeController;
    }
}

void CHmiRequestPublisher::SetDifferentialPressureRequestK(const double differentialPressureRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureRequestK = differentialPressureRequestK;
    }
}

void CHmiRequestPublisher::SetDifferentialPressureRequestTau(const double differentialPressureRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureRequestTau = differentialPressureRequestTau;
    }
}

void CHmiRequestPublisher::SetRateOfPenetrationRequestK(const double rateOfPenetrationRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationRequestK = rateOfPenetrationRequestK;
    }
}

void CHmiRequestPublisher::SetRateOfPenetrationRequestTau(const double rateOfPenetrationRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationRequestTau = rateOfPenetrationRequestTau;
    }
}

void CHmiRequestPublisher::SetTorqueRequestK(const double torqueRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueRequestK = torqueRequestK;
    }
}

void CHmiRequestPublisher::SetTorqueRequestTau(const double torqueRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueRequestTau = torqueRequestTau;
    }
}

void CHmiRequestPublisher::SetWeightOnBitRequestK(const double weightOnBitRequestK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitRequestK = weightOnBitRequestK;
    }
}

void CHmiRequestPublisher::SetWeightOnBitRequestTau(const double weightOnBitRequestTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitRequestTau = weightOnBitRequestTau;
    }
}

void CHmiRequestPublisher::SetStatus(const int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CHmiRequestPublisher::SetTuningEnable(const bool tuningEnable)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tuningEnable = tuningEnable;
    }
}

