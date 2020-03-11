#include "hmi_state_publisher.h"

CHmiStatePublisher::CHmiStatePublisher()
{
}

CHmiStatePublisher::~CHmiStatePublisher()
{
}

bool CHmiStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::control::HMI_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHmiStatePublisher::Initialize()
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

void CHmiStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CHmiStatePublisher::SetMode(int32_t mode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mode = mode;
    }
}

void CHmiStatePublisher::SetModeController(int32_t modeController)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modeController = modeController;
    }
}

void CHmiStatePublisher::SetPipeInnerDiameter(double pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = pipeInnerDiameter;
    }
}

void CHmiStatePublisher::SetPipeOuterDiameter(double pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = pipeOuterDiameter;
    }
}

void CHmiStatePublisher::SetSlopeFilter(double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
}

void CHmiStatePublisher::SetTauMax(double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
}

void CHmiStatePublisher::SetTauMin(double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
}

void CHmiStatePublisher::SetTauMultiplier(double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
}

void CHmiStatePublisher::SetDifferentialPressureInitializeK(double differentialPressureInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializeK = differentialPressureInitializeK;
    }
}

void CHmiStatePublisher::SetDifferentialPressureInitializeTau(double differentialPressureInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializeTau = differentialPressureInitializeTau;
    }
}

void CHmiStatePublisher::SetDifferentialPressureInitializePreFilter(double differentialPressureInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializePreFilter = differentialPressureInitializePreFilter;
    }
}

void CHmiStatePublisher::SetDifferentialPressureR1(double differentialPressureR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureR1 = differentialPressureR1;
    }
}

void CHmiStatePublisher::SetDifferentialPressureR2(double differentialPressureR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureR2 = differentialPressureR2;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeK(double rateOfPenetrationInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeK = rateOfPenetrationInitializeK;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeTau(double rateOfPenetrationInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeTau = rateOfPenetrationInitializeTau;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializePreFilter(double rateOfPenetrationInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializePreFilter = rateOfPenetrationInitializePreFilter;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeR1(double rateOfPenetrationInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeR1 = rateOfPenetrationInitializeR1;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationInitializeR2(double rateOfPenetrationInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeR2 = rateOfPenetrationInitializeR2;
    }
}

void CHmiStatePublisher::SetTorqueInitializeK(double torqueInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeK = torqueInitializeK;
    }
}

void CHmiStatePublisher::SetTorqueInitializeTau(double torqueInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeTau = torqueInitializeTau;
    }
}

void CHmiStatePublisher::SetTorqueInitializePreFilter(double torqueInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializePreFilter = torqueInitializePreFilter;
    }
}

void CHmiStatePublisher::SetTorqueInitializeR1(double torqueInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeR1 = torqueInitializeR1;
    }
}

void CHmiStatePublisher::SetTorqueInitializeR2(double torqueInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeR2 = torqueInitializeR2;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeK(double weightOnBitInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeK = weightOnBitInitializeK;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeTau(double weightOnBitInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeTau = weightOnBitInitializeTau;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializePreFilter(double weightOnBitInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializePreFilter = weightOnBitInitializePreFilter;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeR1(double weightOnBitInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeR1 = weightOnBitInitializeR1;
    }
}

void CHmiStatePublisher::SetWeightOnBitInitializeR2(double weightOnBitInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeR2 = weightOnBitInitializeR2;
    }
}

void CHmiStatePublisher::SetDevMin(double devMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->devMin = devMin;
    }
}

void CHmiStatePublisher::SetIntervalMin(double intervalMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->intervalMin = intervalMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureFilter(double differentialPressureFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureFilter = differentialPressureFilter;
    }
}

void CHmiStatePublisher::SetDifferentialPressureKcMax(double differentialPressureKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKcMax = differentialPressureKcMax;
    }
}

void CHmiStatePublisher::SetDifferentialPressureKcMin(double differentialPressureKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKcMin = differentialPressureKcMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTdMax(double differentialPressureTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTdMax = differentialPressureTdMax;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTdMin(double differentialPressureTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTdMin = differentialPressureTdMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTiMax(double differentialPressureTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiMax = differentialPressureTiMax;
    }
}

void CHmiStatePublisher::SetDifferentialPressureTiMin(double differentialPressureTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiMin = differentialPressureTiMin;
    }
}

void CHmiStatePublisher::SetDifferentialPressureD(double differentialPressureD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureD = differentialPressureD;
    }
}

void CHmiStatePublisher::SetDifferentialPressureEps(double differentialPressureEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureEps = differentialPressureEps;
    }
}

void CHmiStatePublisher::SetDifferentialPressureEpsManual(bool differentialPressureEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureEpsManual = differentialPressureEpsManual;
    }
}

void CHmiStatePublisher::SetDifferentialPressureF(double differentialPressureF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureF = differentialPressureF;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationFilter(double rateOfPenetrationFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationFilter = rateOfPenetrationFilter;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationKcMax(double rateOfPenetrationKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKcMax = rateOfPenetrationKcMax;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationKcMin(double rateOfPenetrationKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKcMin = rateOfPenetrationKcMin;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTdMax(double rateOfPenetrationTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTdMax = rateOfPenetrationTdMax;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTdMin(double rateOfPenetrationTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTdMin = rateOfPenetrationTdMin;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTiMax(double rateOfPenetrationTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiMax = rateOfPenetrationTiMax;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationTiMin(double rateOfPenetrationTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiMin = rateOfPenetrationTiMin;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationD(double rateOfPenetrationD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationD = rateOfPenetrationD;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationEps(double rateOfPenetrationEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationEps = rateOfPenetrationEps;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationEpsManual(bool rateOfPenetrationEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationEpsManual = rateOfPenetrationEpsManual;
    }
}

void CHmiStatePublisher::SetRateOfPenetrationF(double rateOfPenetrationF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationF = rateOfPenetrationF;
    }
}

void CHmiStatePublisher::SetWeightOnBitFilter(double weightOnBitFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitFilter = weightOnBitFilter;
    }
}

void CHmiStatePublisher::SetWeightOnBitKcMax(double weightOnBitKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKcMax = weightOnBitKcMax;
    }
}

void CHmiStatePublisher::SetWeightOnBitKcMin(double weightOnBitKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKcMin = weightOnBitKcMin;
    }
}

void CHmiStatePublisher::SetWeightOnBitTdMax(double weightOnBitTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTdMax = weightOnBitTdMax;
    }
}

void CHmiStatePublisher::SetWeightOnBitTdMin(double weightOnBitTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTdMin = weightOnBitTdMin;
    }
}

void CHmiStatePublisher::SetWeightOnBitTiMax(double weightOnBitTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiMax = weightOnBitTiMax;
    }
}

void CHmiStatePublisher::SetWeightOnBitTiMin(double weightOnBitTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiMin = weightOnBitTiMin;
    }
}

void CHmiStatePublisher::SetWeightOnBitD(double weightOnBitD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitD = weightOnBitD;
    }
}

void CHmiStatePublisher::SetWeightOnBitEps(double weightOnBitEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitEps = weightOnBitEps;
    }
}

void CHmiStatePublisher::SetWeightOnBitEpsManual(bool weightOnBitEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitEpsManual = weightOnBitEpsManual;
    }
}

void CHmiStatePublisher::SetWeightOnBitF(double weightOnBitF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitF = weightOnBitF;
    }
}

void CHmiStatePublisher::SetTorqueFilter(double torqueFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueFilter = torqueFilter;
    }
}

void CHmiStatePublisher::SetTorqueKcMax(double torqueKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMax = torqueKcMax;
    }
}

void CHmiStatePublisher::SetTorqueKcMin(double torqueKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMin = torqueKcMin;
    }
}

void CHmiStatePublisher::SetTorqueTdMax(double torqueTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTdMax = torqueTdMax;
    }
}

void CHmiStatePublisher::SetTorqueTdMin(double torqueTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTdMin = torqueTdMin;
    }
}

void CHmiStatePublisher::SetTorqueTiMax(double torqueTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMax = torqueTiMax;
    }
}

void CHmiStatePublisher::SetTorqueTiMin(double torqueTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMin = torqueTiMin;
    }
}

void CHmiStatePublisher::SetTorqueD(double torqueD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueD = torqueD;
    }
}

void CHmiStatePublisher::SetTorqueEps(double torqueEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEps = torqueEps;
    }
}

void CHmiStatePublisher::SetTorqueEpsManual(bool torqueEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEpsManual = torqueEpsManual;
    }
}

void CHmiStatePublisher::SetTorqueF(double torqueF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueF = torqueF;
    }
}

void CHmiStatePublisher::SetStatus(int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
}

void CHmiStatePublisher::SetTuningEnabled(bool tuningEnabled)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tuningEnabled = tuningEnabled;
    }
}

