#include "autodriller_configuration_state_subscriber.h"

CAutoDrillerConfigurationStateSubscriber::CAutoDrillerConfigurationStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CAutoDrillerConfigurationStateSubscriber::~CAutoDrillerConfigurationStateSubscriber()
{
}

bool CAutoDrillerConfigurationStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTimestamp(DataTypes::Time &timestamp)
{
    timestamp.sec = m_data.timestamp.sec;
    timestamp.nanosec = m_data.timestamp.nanosec;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetMode(int32_t &mode)
{
    mode = m_data.mode;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetModeController(int32_t &modeController)
{
    modeController = m_data.modeController;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetModelReset(bool &modelReset)
{
    modelReset = (m_data.modelReset == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetSlopeFilter(double &slopeFilter)
{
    slopeFilter = m_data.slopeFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTauMax(double &tauMax)
{
    tauMax = m_data.tauMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTauMin(double &tauMin)
{
    tauMin = m_data.tauMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTauMultiplier(double &tauMultiplier)
{
    tauMultiplier = m_data.tauMultiplier;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetPipeInnerDiameter(double &pipeInnerDiameter)
{
    pipeInnerDiameter = m_data.pipeInnerDiameter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetPipeOuterDiameter(double &pipeOuterDiameter)
{
    pipeOuterDiameter = m_data.pipeOuterDiameter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureInitializeK(double &differentialPressureInitializeK)
{
    differentialPressureInitializeK = m_data.differentialPressureInitializeK;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureInitializeTau(double &differentialPressureInitializeTau)
{
    differentialPressureInitializeTau = m_data.differentialPressureInitializeTau;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureInitializePreFilter(double &differentialPressureInitializePreFilter)
{
    differentialPressureInitializePreFilter = m_data.differentialPressureInitializePreFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureR1(double &differentialPressureR1)
{
    differentialPressureR1 = m_data.differentialPressureR1;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureR2(double &differentialPressureR2)
{
    differentialPressureR2 = m_data.differentialPressureR2;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationInitializeK(double &rateOfPenetrationInitializeK)
{
    rateOfPenetrationInitializeK = m_data.rateOfPenetrationInitializeK;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationInitializeTau(double &rateOfPenetrationInitializeTau)
{
    rateOfPenetrationInitializeTau = m_data.rateOfPenetrationInitializeTau;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationInitializePreFilter(double &rateOfPenetrationInitializePreFilter)
{
    rateOfPenetrationInitializePreFilter = m_data.rateOfPenetrationInitializePreFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationInitializeR1(double &rateOfPenetrationInitializeR1)
{
    rateOfPenetrationInitializeR1 = m_data.rateOfPenetrationInitializeR1;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationInitializeR2(double &rateOfPenetrationInitializeR2)
{
    rateOfPenetrationInitializeR2 = m_data.rateOfPenetrationInitializeR2;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueInitializeK(double &torqueInitializeK)
{
    torqueInitializeK = m_data.torqueInitializeK;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueInitializeTau(double &torqueInitializeTau)
{
    torqueInitializeTau = m_data.torqueInitializeTau;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueInitializePreFilter(double &torqueInitializePreFilter)
{
    torqueInitializePreFilter = m_data.torqueInitializePreFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueInitializeR1(double &torqueInitializeR1)
{
    torqueInitializeR1 = m_data.torqueInitializeR1;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueInitializeR2(double &torqueInitializeR2)
{
    torqueInitializeR2 = m_data.torqueInitializeR2;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitInitializeK(double &weightOnBitInitializeK)
{
    weightOnBitInitializeK = m_data.weightOnBitInitializeK;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitInitializeTau(double &weightOnBitInitializeTau)
{
    weightOnBitInitializeTau = m_data.weightOnBitInitializeTau;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitInitializePreFilter(double &weightOnBitInitializePreFilter)
{
    weightOnBitInitializePreFilter = m_data.weightOnBitInitializePreFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitInitializeR1(double &weightOnBitInitializeR1)
{
    weightOnBitInitializeR1 = m_data.weightOnBitInitializeR1;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitInitializeR2(double &weightOnBitInitializeR2)
{
    weightOnBitInitializeR2 = m_data.weightOnBitInitializeR2;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDevMin(double &devMin)
{
    devMin = m_data.devMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetIntervalMin(double &intervalMin)
{
    intervalMin = m_data.intervalMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureFilter(double &differentialPressureFilter)
{
    differentialPressureFilter = m_data.differentialPressureFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureKcMax(double &differentialPressureKcMax)
{
    differentialPressureKcMax = m_data.differentialPressureKcMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureKcMin(double &differentialPressureKcMin)
{
    differentialPressureKcMin = m_data.differentialPressureKcMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureTdMax(double &differentialPressureTdMax)
{
    differentialPressureTdMax = m_data.differentialPressureTdMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureTdMin(double &differentialPressureTdMin)
{
    differentialPressureTdMin = m_data.differentialPressureTdMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureTiMax(double &differentialPressureTiMax)
{
    differentialPressureTiMax = m_data.differentialPressureTiMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureTiMin(double &differentialPressureTiMin)
{
    differentialPressureTiMin = m_data.differentialPressureTiMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureD(double &differentialPressureD)
{
    differentialPressureD = m_data.differentialPressureD;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureEps(double &differentialPressureEps)
{
    differentialPressureEps = m_data.differentialPressureEps;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureEpsManual(bool &differentialPressureEpsManual)
{
    differentialPressureEpsManual = (m_data.differentialPressureEpsManual == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetDifferentialPressureF(double &differentialPressureF)
{
    differentialPressureF = m_data.differentialPressureF;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationFilter(double &rateOfPenetrationFilter)
{
    rateOfPenetrationFilter = m_data.rateOfPenetrationFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationKcMax(double &rateOfPenetrationKcMax)
{
    rateOfPenetrationKcMax = m_data.rateOfPenetrationKcMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationKcMin(double &rateOfPenetrationKcMin)
{
    rateOfPenetrationKcMin = m_data.rateOfPenetrationKcMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationTdMax(double &rateOfPenetrationTdMax)
{
    rateOfPenetrationTdMax = m_data.rateOfPenetrationTdMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationTdMin(double &rateOfPenetrationTdMin)
{
    rateOfPenetrationTdMin = m_data.rateOfPenetrationTdMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationTiMax(double &rateOfPenetrationTiMax)
{
    rateOfPenetrationTiMax = m_data.rateOfPenetrationTiMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationTiMin(double &rateOfPenetrationTiMin)
{
    rateOfPenetrationTiMin = m_data.rateOfPenetrationTiMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationD(double &rateOfPenetrationD)
{
    rateOfPenetrationD = m_data.rateOfPenetrationD;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationEps(double &rateOfPenetrationEps)
{
    rateOfPenetrationEps = m_data.rateOfPenetrationEps;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationEpsManual(bool &rateOfPenetrationEpsManual)
{
    rateOfPenetrationEpsManual = (m_data.rateOfPenetrationEpsManual == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetRateOfPenetrationF(double &rateOfPenetrationF)
{
    rateOfPenetrationF = m_data.rateOfPenetrationF;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitFilter(double &weightOnBitFilter)
{
    weightOnBitFilter = m_data.weightOnBitFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitKcMax(double &weightOnBitKcMax)
{
    weightOnBitKcMax = m_data.weightOnBitKcMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitKcMin(double &weightOnBitKcMin)
{
    weightOnBitKcMin = m_data.weightOnBitKcMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitTdMax(double &weightOnBitTdMax)
{
    weightOnBitTdMax = m_data.weightOnBitTdMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitTdMin(double &weightOnBitTdMin)
{
    weightOnBitTdMin = m_data.weightOnBitTdMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitTiMax(double &weightOnBitTiMax)
{
    weightOnBitTiMax = m_data.weightOnBitTiMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitTiMin(double &weightOnBitTiMin)
{
    weightOnBitTiMin = m_data.weightOnBitTiMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitD(double &weightOnBitD)
{
    weightOnBitD = m_data.weightOnBitD;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitEps(double &weightOnBitEps)
{
    weightOnBitEps = m_data.weightOnBitEps;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitEpsManual(bool &weightOnBitEpsManual)
{
	weightOnBitEpsManual = (m_data.weightOnBitEpsManual == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetWeightOnBitF(double &weightOnBitF)
{
    weightOnBitF = m_data.weightOnBitF;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueFilter(double &torqueFilter)
{
    torqueFilter = m_data.torqueFilter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueKcMax(double &torqueKcMax)
{
    torqueKcMax = m_data.torqueKcMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueKcMin(double &torqueKcMin)
{
    torqueKcMin = m_data.torqueKcMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueTdMax(double &torqueTdMax)
{
    torqueTdMax = m_data.torqueTdMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueTdMin(double &torqueTdMin)
{
    torqueTdMin = m_data.torqueTdMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueTiMax(double &torqueTiMax)
{
    torqueTiMax = m_data.torqueTiMax;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueTiMin(double &torqueTiMin)
{
    torqueTiMin = m_data.torqueTiMin;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueD(double &torqueD)
{
    torqueD = m_data.torqueD;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueEps(double &torqueEps)
{
    torqueEps = m_data.torqueEps;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueEpsManual(bool &torqueEpsManual)
{
    torqueEpsManual = (m_data.torqueEpsManual == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTorqueF(double &torqueF)
{
    torqueF = m_data.torqueF;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetStatus(int32_t &status)
{
    status = m_data.status;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTuningDisable(bool &tuningDisable)
{
    tuningDisable = (m_data.tuningDisable == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CAutoDrillerConfigurationStateSubscriber::GetTuningEnable(bool &tuningEnable)
{
    tuningEnable = (m_data.tuningEnable == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}


bool CAutoDrillerConfigurationStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               AutoDrillerConfiguration::HMI_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CAutoDrillerConfigurationStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CAutoDrillerConfigurationStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CAutoDrillerConfigurationStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CAutoDrillerConfigurationStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CAutoDrillerConfigurationStateSubscriber::DataAvailable(const AutoDrillerConfiguration::HmiState &data,
                                                             const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.timestamp.sec = data.timestamp.sec;
        m_data.timestamp.nanosec = data.timestamp.nanosec;
        m_data.mode = data.mode;
        m_data.modeController = data.modeController;
        m_data.modelReset = data.modelReset;
        m_data.pipeInnerDiameter = data.pipeInnerDiameter;
        m_data.pipeOuterDiameter = data.pipeOuterDiameter;
        m_data.slopeFilter = data.slopeFilter;
        m_data.tauMax = data.tauMax;
        m_data.tauMin = data.tauMin;
        m_data.tauMultiplier = data.tauMultiplier;
        m_data.differentialPressureInitializeK = data.differentialPressureInitializeK;
        m_data.differentialPressureInitializeTau = data.differentialPressureInitializeTau;
        m_data.differentialPressureInitializePreFilter = data.differentialPressureInitializePreFilter;
        m_data.differentialPressureR1 = data.differentialPressureR1;
        m_data.differentialPressureR2 = data.differentialPressureR2;
        m_data.rateOfPenetrationInitializeK = data.rateOfPenetrationInitializeK;
        m_data.rateOfPenetrationInitializeTau = data.rateOfPenetrationInitializeTau;
        m_data.rateOfPenetrationInitializePreFilter = data.rateOfPenetrationInitializePreFilter;
        m_data.rateOfPenetrationInitializeR1 = data.rateOfPenetrationInitializeR1;
        m_data.rateOfPenetrationInitializeR2 = data.rateOfPenetrationInitializeR2;
        m_data.torqueInitializeK = data.torqueInitializeK;
        m_data.torqueInitializeTau = data.torqueInitializeTau;
        m_data.torqueInitializePreFilter = data.torqueInitializePreFilter;
        m_data.torqueInitializeR1 = data.torqueInitializeR1;
        m_data.torqueInitializeR2 = data.torqueInitializeR2;
        m_data.weightOnBitInitializeK = data.weightOnBitInitializeK;
        m_data.weightOnBitInitializeTau = data.weightOnBitInitializeTau;
        m_data.weightOnBitInitializePreFilter = data.weightOnBitInitializePreFilter;
        m_data.weightOnBitInitializeR1 = data.weightOnBitInitializeR1;
        m_data.weightOnBitInitializeR2 = data.weightOnBitInitializeR2;
        m_data.devMin = data.devMin;
        m_data.intervalMin = data.intervalMin;
        m_data.differentialPressureFilter = data.differentialPressureFilter;
        m_data.differentialPressureKcMax = data.differentialPressureKcMax;
        m_data.differentialPressureKcMin = data.differentialPressureKcMin;
        m_data.differentialPressureTdMax = data.differentialPressureTdMax;
        m_data.differentialPressureTdMin = data.differentialPressureTdMin;
        m_data.differentialPressureTiMax = data.differentialPressureTiMax;
        m_data.differentialPressureTiMin = data.differentialPressureTiMin;
        m_data.differentialPressureD = data.differentialPressureD;
        m_data.differentialPressureEps = data.differentialPressureEps;
        m_data.differentialPressureEpsManual = data.differentialPressureEpsManual;
        m_data.differentialPressureF = data.differentialPressureF;
        m_data.rateOfPenetrationFilter = data.rateOfPenetrationFilter;
        m_data.rateOfPenetrationKcMax = data.rateOfPenetrationKcMax;
        m_data.rateOfPenetrationKcMin = data.rateOfPenetrationKcMin;
        m_data.rateOfPenetrationTdMax = data.rateOfPenetrationTdMax;
        m_data.rateOfPenetrationTdMin = data.rateOfPenetrationTdMin;
        m_data.rateOfPenetrationTiMax = data.rateOfPenetrationTiMax;
        m_data.rateOfPenetrationTiMin = data.rateOfPenetrationTiMin;
        m_data.rateOfPenetrationD = data.rateOfPenetrationD;
        m_data.rateOfPenetrationEps = data.rateOfPenetrationEps;
        m_data.rateOfPenetrationEpsManual = data.rateOfPenetrationEpsManual;
        m_data.rateOfPenetrationF = data.rateOfPenetrationF;
        m_data.weightOnBitFilter = data.weightOnBitFilter;
        m_data.weightOnBitKcMax = data.weightOnBitKcMax;
        m_data.weightOnBitKcMin = data.weightOnBitKcMin;
        m_data.weightOnBitTdMax = data.weightOnBitTdMax;
        m_data.weightOnBitTdMin = data.weightOnBitTdMin;
        m_data.weightOnBitTiMax = data.weightOnBitTiMax;
        m_data.weightOnBitTiMin = data.weightOnBitTiMin;
        m_data.weightOnBitD = data.weightOnBitD;
        m_data.weightOnBitEps = data.weightOnBitEps;
        m_data.weightOnBitEpsManual = data.weightOnBitEpsManual;
        m_data.weightOnBitF = data.weightOnBitF;
        m_data.torqueFilter = data.torqueFilter;
        m_data.torqueKcMax = data.torqueKcMax;
        m_data.torqueKcMin = data.torqueKcMin;
        m_data.torqueTdMax = data.torqueTdMax;
        m_data.torqueTdMin = data.torqueTdMin;
        m_data.torqueTiMax = data.torqueTiMax;
        m_data.torqueTiMin = data.torqueTiMin;
        m_data.torqueD = data.torqueD;
        m_data.torqueEps = data.torqueEps;
        m_data.torqueEpsManual = data.torqueEpsManual;
        m_data.torqueF = data.torqueF;
        m_data.status = data.status;
        m_data.tuningDisable = data.tuningDisable;
        m_data.tuningEnable = data.tuningEnable;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CAutoDrillerConfigurationStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoDrillerConfigurationStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CAutoDrillerConfigurationStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
