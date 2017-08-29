#include "dds_uuid.h"
#include "autodriller_configuration_state_publisher.h"

CAutoDrillerConfigurationStatePublisher::CAutoDrillerConfigurationStatePublisher()
{
}

CAutoDrillerConfigurationStatePublisher::~CAutoDrillerConfigurationStatePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CAutoDrillerConfigurationStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CAutoDrillerConfigurationStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
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

void CAutoDrillerConfigurationStatePublisher::SetMode(int32_t mode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mode = mode;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetModeController(int32_t modeController)
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

void CAutoDrillerConfigurationStatePublisher::SetModelReset(bool modelReset)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->modelReset = modelReset;
    }
    else
    {
        LOG_ERROR("Failed to set modelReset because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetPipeInnerDiameter(double pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = pipeInnerDiameter;
    }
    else
    {
        LOG_ERROR("Failed to set pipeInnerDiameter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetPipeOuterDiameter(double pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = pipeOuterDiameter;
    }
    else
    {
        LOG_ERROR("Failed to set pipeOuterDiameter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetSlopeFilter(double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
    else
    {
        LOG_ERROR("Failed to set slopeFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTauMax(double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
    else
    {
        LOG_ERROR("Failed to set tauMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTauMin(double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
    else
    {
        LOG_ERROR("Failed to set tauMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTauMultiplier(double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
    else
    {
        LOG_ERROR("Failed to set tauMultiplier because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureInitializeK(double differentialPressureInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializeK = differentialPressureInitializeK;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureInitializeK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureInitializeTau(double differentialPressureInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializeTau = differentialPressureInitializeTau;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureInitializeTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureInitializePreFilter(double differentialPressureInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureInitializePreFilter = differentialPressureInitializePreFilter;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureInitializePreFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureR1(double differentialPressureR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureR1 = differentialPressureR1;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureR1 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureR2(double differentialPressureR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureR2 = differentialPressureR2;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureR2 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationInitializeK(double rateOfPenetrationInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeK = rateOfPenetrationInitializeK;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationInitializeK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationInitializeTau(double rateOfPenetrationInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeTau = rateOfPenetrationInitializeTau;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationInitializeTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationInitializePreFilter(double rateOfPenetrationInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializePreFilter = rateOfPenetrationInitializePreFilter;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationInitializePreFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationInitializeR1(double rateOfPenetrationInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeR1 = rateOfPenetrationInitializeR1;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationInitializeR1 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationInitializeR2(double rateOfPenetrationInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationInitializeR2 = rateOfPenetrationInitializeR2;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationInitializeR2 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueInitializeK(double torqueInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeK = torqueInitializeK;
    }
    else
    {
        LOG_ERROR("Failed to set torqueInitializeK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueInitializeTau(double torqueInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeTau = torqueInitializeTau;
    }
    else
    {
        LOG_ERROR("Failed to set torqueInitializeTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueInitializePreFilter(double torqueInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializePreFilter = torqueInitializePreFilter;
    }
    else
    {
        LOG_ERROR("Failed to set torqueInitializePreFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueInitializeR1(double torqueInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeR1 = torqueInitializeR1;
    }
    else
    {
        LOG_ERROR("Failed to set torqueInitializeR1 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueInitializeR2(double torqueInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitializeR2 = torqueInitializeR2;
    }
    else
    {
        LOG_ERROR("Failed to set torqueInitializeR2 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitInitializeK(double weightOnBitInitializeK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeK = weightOnBitInitializeK;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitInitializeK because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitInitializeTau(double weightOnBitInitializeTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeTau = weightOnBitInitializeTau;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitInitializeTau because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitInitializePreFilter(double weightOnBitInitializePreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializePreFilter = weightOnBitInitializePreFilter;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitInitializePreFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitInitializeR1(double weightOnBitInitializeR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeR1 = weightOnBitInitializeR1;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitInitializeR1 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitInitializeR2(double weightOnBitInitializeR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitInitializeR2 = weightOnBitInitializeR2;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitInitializeR2 because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDevMin(double devMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->devMin = devMin;
    }
    else
    {
        LOG_ERROR("Failed to set devMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetIntervalMin(double intervalMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->intervalMin = intervalMin;
    }
    else
    {
        LOG_ERROR("Failed to set intervalMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureFilter(double differentialPressureFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureFilter = differentialPressureFilter;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureKcMax(double differentialPressureKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKcMax = differentialPressureKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureKcMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureKcMin(double differentialPressureKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureKcMin = differentialPressureKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureKcMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureTdMax(double differentialPressureTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTdMax = differentialPressureTdMax;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureTdMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureTdMin(double differentialPressureTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTdMin = differentialPressureTdMin;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureTdMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureTiMax(double differentialPressureTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiMax = differentialPressureTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureTiMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureTiMin(double differentialPressureTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureTiMin = differentialPressureTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureTiMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureD(double differentialPressureD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureD = differentialPressureD;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureD because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureEps(double differentialPressureEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureEps = differentialPressureEps;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureEps because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureEpsManual(bool differentialPressureEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureEpsManual = differentialPressureEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureEpsManual because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetDifferentialPressureF(double differentialPressureF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureF = differentialPressureF;
    }
    else
    {
        LOG_ERROR("Failed to set differentialPressureF because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationFilter(double rateOfPenetrationFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationFilter = rateOfPenetrationFilter;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationKcMax(double rateOfPenetrationKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKcMax = rateOfPenetrationKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationKcMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationKcMin(double rateOfPenetrationKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationKcMin = rateOfPenetrationKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationKcMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationTdMax(double rateOfPenetrationTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTdMax = rateOfPenetrationTdMax;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationTdMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationTdMin(double rateOfPenetrationTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTdMin = rateOfPenetrationTdMin;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationTdMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationTiMax(double rateOfPenetrationTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiMax = rateOfPenetrationTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationTiMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationTiMin(double rateOfPenetrationTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationTiMin = rateOfPenetrationTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationTiMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationD(double rateOfPenetrationD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationD = rateOfPenetrationD;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationD because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationEps(double rateOfPenetrationEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationEps = rateOfPenetrationEps;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationEps because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationEpsManual(bool rateOfPenetrationEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationEpsManual = rateOfPenetrationEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationEpsManual because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetRateOfPenetrationF(double rateOfPenetrationF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rateOfPenetrationF = rateOfPenetrationF;
    }
    else
    {
        LOG_ERROR("Failed to set rateOfPenetrationF because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitFilter(double weightOnBitFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitFilter = weightOnBitFilter;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitKcMax(double weightOnBitKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKcMax = weightOnBitKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitKcMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitKcMin(double weightOnBitKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitKcMin = weightOnBitKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitKcMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitTdMax(double weightOnBitTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTdMax = weightOnBitTdMax;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitTdMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitTdMin(double weightOnBitTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTdMin = weightOnBitTdMin;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitTdMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitTiMax(double weightOnBitTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiMax = weightOnBitTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitTiMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitTiMin(double weightOnBitTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitTiMin = weightOnBitTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitTiMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitD(double weightOnBitD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitD = weightOnBitD;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitD because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitEps(double weightOnBitEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitEps = weightOnBitEps;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitEps because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitEpsManual(bool weightOnBitEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitEpsManual = weightOnBitEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitEpsManual because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetWeightOnBitF(double weightOnBitF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weightOnBitF = weightOnBitF;
    }
    else
    {
        LOG_ERROR("Failed to set weightOnBitF because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueFilter(double torqueFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueFilter = torqueFilter;
    }
    else
    {
        LOG_ERROR("Failed to set torqueFilter because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueKcMax(double torqueKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMax = torqueKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set torqueKcMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueKcMin(double torqueKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMin = torqueKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set torqueKcMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueTdMax(double torqueTdMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTdMax = torqueTdMax;
    }
    else
    {
        LOG_ERROR("Failed to set torqueTdMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueTdMin(double torqueTdMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTdMin = torqueTdMin;
    }
    else
    {
        LOG_ERROR("Failed to set torqueTdMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueTiMax(double torqueTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMax = torqueTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set torqueTiMax because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueTiMin(double torqueTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMin = torqueTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set torqueTiMin because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueD(double torqueD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueD = torqueD;
    }
    else
    {
        LOG_ERROR("Failed to set torqueD because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueEps(double torqueEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEps = torqueEps;
    }
    else
    {
        LOG_ERROR("Failed to set torqueEps because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueEpsManual(bool torqueEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEpsManual = torqueEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set torqueEpsManual because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTorqueF(double torqueF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueF = torqueF;
    }
    else
    {
        LOG_ERROR("Failed to set torqueF because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetStatus(int32_t status)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->status = status;
    }
    else
    {
        LOG_ERROR("Failed to set status because of uninitialized sample");
    }
}

void CAutoDrillerConfigurationStatePublisher::SetTuningDisable(bool tuningDisable)
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

void CAutoDrillerConfigurationStatePublisher::SetTuningEnable(bool tuningEnable)
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

bool CAutoDrillerConfigurationStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CAutoDrillerConfigurationStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::control::HMI_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
