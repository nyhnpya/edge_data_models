#include "hmi_state_publisher.h"

CHmiStatePublisher::CHmiStatePublisher()
{
}

CHmiStatePublisher::~CHmiStatePublisher()
{
}

bool CHmiStatePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::control::HMI_STATE,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
}

bool CHmiStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
        m_pDataInstance->timestamp.sec = currentTime.sec;
        m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    }

    return Publish();
}

void CHmiStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CHmiStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CHmiStatePublisher::SetMode(const int32_t mode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mode = mode;
    }
}

void CHmiStatePublisher::SetModeController(const int32_t modeController)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modeController = modeController;
    }
}

void CHmiStatePublisher::SetPipeInnerDiameter(const double pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = pipeInnerDiameter;
    }
}

void CHmiStatePublisher::SetPipeOuterDiameter(const double pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = pipeOuterDiameter;
    }
}

void CHmiStatePublisher::SetSlopeFilter(const double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
}

void CHmiStatePublisher::SetTauMax(const double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
}

void CHmiStatePublisher::SetTauMin(const double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
}

void CHmiStatePublisher::SetTauMultiplier(const double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
}

void CHmiStatePublisher::SetDifferentialPressureInitializeK(const double differentialPressureInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializeK = differentialPressureInitializeK;
    }
}

void CHmiStatePublisher::SetDifferentialPressureInitializeTau(const double differentialPressureInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializeTau = differentialPressureInitializeTau;
    }
}

void CHmiStatePublisher::SetDifferentialPressureInitializePreFilter(const double differentialPressureInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializePreFilter = differentialPressureInitializePreFilter;
    }
}

void CHmiStatePublisher::SetDifferentialPressureR1(const double differentialPressureR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureR1 = differentialPressureR1;
    }
}

void CHmiStatePublisher::SetDifferentialPressureR2(const double differentialPressureR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureR2 = differentialPressureR2;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeK(const double rateOfPenetrationInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeK = rateOfPenetrationInitializeK;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeTau(const double rateOfPenetrationInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeTau = rateOfPenetrationInitializeTau;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializePreFilter(const double rateOfPenetrationInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializePreFilter = rateOfPenetrationInitializePreFilter;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeR1(const double rateOfPenetrationInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeR1 = rateOfPenetrationInitializeR1;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeR2(const double rateOfPenetrationInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeR2 = rateOfPenetrationInitializeR2;
    }
}

void CHmiStatePublisher::SetTorqueInitializeK(const double torqueInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeK = torqueInitializeK;
    }
}

void CHmiStatePublisher::SetTorqueInitializeTau(const double torqueInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeTau = torqueInitializeTau;
    }
}

void CHmiStatePublisher::SetTorqueInitializePreFilter(const double torqueInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializePreFilter = torqueInitializePreFilter;
    }
}

void CHmiStatePublisher::SetTorqueInitializeR1(const double torqueInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeR1 = torqueInitializeR1;
    }
}

void CHmiStatePublisher::SetTorqueInitializeR2(const double torqueInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeR2 = torqueInitializeR2;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeK(const double weightOnBitInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeK = weightOnBitInitializeK;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeTau(const double weightOnBitInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeTau = weightOnBitInitializeTau;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializePreFilter(const double weightOnBitInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializePreFilter = weightOnBitInitializePreFilter;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeR1(const double weightOnBitInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeR1 = weightOnBitInitializeR1;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeR2(const double weightOnBitInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeR2 = weightOnBitInitializeR2;
    }
}

void CHmiStatePublisher::SetDevMin(const double devMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->devMin = devMin;
    }
}

void CHmiStatePublisher::SetIntervalMin(const double intervalMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->intervalMin = intervalMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureFilter(const double differentialPressureFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureFilter = differentialPressureFilter;
    }
}

void CHmiStatePublisher::SetDifferentialPressureKcMax(const double differentialPressureKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKcMax = differentialPressureKcMax;
    }
}

void CHmiStatePublisher::SetDifferentialPressureKcMin(const double differentialPressureKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKcMin = differentialPressureKcMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTdMax(const double differentialPressureTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTdMax = differentialPressureTdMax;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTdMin(const double differentialPressureTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTdMin = differentialPressureTdMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTiMax(const double differentialPressureTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiMax = differentialPressureTiMax;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTiMin(const double differentialPressureTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiMin = differentialPressureTiMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureD(const double differentialPressureD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureD = differentialPressureD;
    }
}

void CHmiStatePublisher::SetDifferentialPressureEps(const double differentialPressureEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureEps = differentialPressureEps;
    }
}

void CHmiStatePublisher::SetDifferentialPressureEpsManual(const bool differentialPressureEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureEpsManual = differentialPressureEpsManual;
    }
}

void CHmiStatePublisher::SetDifferentialPressureF(const double differentialPressureF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureF = differentialPressureF;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationFilter(const double rateOfPenetrationFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationFilter = rateOfPenetrationFilter;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationKcMax(const double rateOfPenetrationKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKcMax = rateOfPenetrationKcMax;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationKcMin(const double rateOfPenetrationKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKcMin = rateOfPenetrationKcMin;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTdMax(const double rateOfPenetrationTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTdMax = rateOfPenetrationTdMax;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTdMin(const double rateOfPenetrationTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTdMin = rateOfPenetrationTdMin;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTiMax(const double rateOfPenetrationTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiMax = rateOfPenetrationTiMax;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTiMin(const double rateOfPenetrationTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiMin = rateOfPenetrationTiMin;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationD(const double rateOfPenetrationD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationD = rateOfPenetrationD;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationEps(const double rateOfPenetrationEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationEps = rateOfPenetrationEps;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationEpsManual(const bool rateOfPenetrationEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationEpsManual = rateOfPenetrationEpsManual;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationF(const double rateOfPenetrationF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationF = rateOfPenetrationF;
    }
}

void CHmiStatePublisher::SetWeightOnBitFilter(const double weightOnBitFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitFilter = weightOnBitFilter;
    }
}

void CHmiStatePublisher::SetWeightOnBitKcMax(const double weightOnBitKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKcMax = weightOnBitKcMax;
    }
}

void CHmiStatePublisher::SetWeightOnBitKcMin(const double weightOnBitKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKcMin = weightOnBitKcMin;
    }
}

void CHmiStatePublisher::SetWeightOnBitTdMax(const double weightOnBitTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTdMax = weightOnBitTdMax;
    }
}

void CHmiStatePublisher::SetWeightOnBitTdMin(const double weightOnBitTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTdMin = weightOnBitTdMin;
    }
}

void CHmiStatePublisher::SetWeightOnBitTiMax(const double weightOnBitTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiMax = weightOnBitTiMax;
    }
}

void CHmiStatePublisher::SetWeightOnBitTiMin(const double weightOnBitTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiMin = weightOnBitTiMin;
    }
}

void CHmiStatePublisher::SetWeightOnBitD(const double weightOnBitD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitD = weightOnBitD;
    }
}

void CHmiStatePublisher::SetWeightOnBitEps(const double weightOnBitEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitEps = weightOnBitEps;
    }
}

void CHmiStatePublisher::SetWeightOnBitEpsManual(const bool weightOnBitEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitEpsManual = weightOnBitEpsManual;
    }
}

void CHmiStatePublisher::SetWeightOnBitF(const double weightOnBitF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitF = weightOnBitF;
    }
}

void CHmiStatePublisher::SetTorqueFilter(const double torqueFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueFilter = torqueFilter;
    }
}

void CHmiStatePublisher::SetTorqueKcMax(const double torqueKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMax = torqueKcMax;
    }
}

void CHmiStatePublisher::SetTorqueKcMin(const double torqueKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMin = torqueKcMin;
    }
}

void CHmiStatePublisher::SetTorqueTdMax(const double torqueTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTdMax = torqueTdMax;
    }
}

void CHmiStatePublisher::SetTorqueTdMin(const double torqueTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTdMin = torqueTdMin;
    }
}

void CHmiStatePublisher::SetTorqueTiMax(const double torqueTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMax = torqueTiMax;
    }
}

void CHmiStatePublisher::SetTorqueTiMin(const double torqueTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMin = torqueTiMin;
    }
}

void CHmiStatePublisher::SetTorqueD(const double torqueD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueD = torqueD;
    }
}

void CHmiStatePublisher::SetTorqueEps(const double torqueEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEps = torqueEps;
    }
}

void CHmiStatePublisher::SetTorqueEpsManual(const bool torqueEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEpsManual = torqueEpsManual;
    }
}

void CHmiStatePublisher::SetTorqueF(const double torqueF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueF = torqueF;
    }
}

void CHmiStatePublisher::SetStatus(const int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CHmiStatePublisher::SetTuningEnabled(const bool tuningEnabled)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tuningEnabled = tuningEnabled;
    }
}

