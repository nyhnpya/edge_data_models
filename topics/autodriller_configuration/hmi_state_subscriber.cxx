#include "hmi_state_subscriber.h"

CHmiStateSubscriber::CHmiStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CHmiStateSubscriber::~CHmiStateSubscriber()
{
}

bool CHmiStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::control::HMI_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CHmiStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CHmiStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

DataTypes::Time CHmiStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

int32_t CHmiStateSubscriber::GetMode()
{
    return m_data.mode;
}

int32_t CHmiStateSubscriber::GetModeController()
{
    return m_data.modeController;
}

double CHmiStateSubscriber::GetPipeInnerDiameter()
{
    return m_data.pipeInnerDiameter;
}

double CHmiStateSubscriber::GetPipeOuterDiameter()
{
    return m_data.pipeOuterDiameter;
}

double CHmiStateSubscriber::GetSlopeFilter()
{
    return m_data.slopeFilter;
}

double CHmiStateSubscriber::GetTauMax()
{
    return m_data.tauMax;
}

double CHmiStateSubscriber::GetTauMin()
{
    return m_data.tauMin;
}

double CHmiStateSubscriber::GetTauMultiplier()
{
    return m_data.tauMultiplier;
}

double CHmiStateSubscriber::GetDifferentialPressureInitializeK()
{
    return m_data.differentialPressureInitializeK;
}

double CHmiStateSubscriber::GetDifferentialPressureInitializeTau()
{
    return m_data.differentialPressureInitializeTau;
}

double CHmiStateSubscriber::GetDifferentialPressureInitializePreFilter()
{
    return m_data.differentialPressureInitializePreFilter;
}

double CHmiStateSubscriber::GetDifferentialPressureR1()
{
    return m_data.differentialPressureR1;
}

double CHmiStateSubscriber::GetDifferentialPressureR2()
{
    return m_data.differentialPressureR2;
}

double CHmiStateSubscriber::GetRateOfPenetrationInitializeK()
{
    return m_data.rateOfPenetrationInitializeK;
}

double CHmiStateSubscriber::GetRateOfPenetrationInitializeTau()
{
    return m_data.rateOfPenetrationInitializeTau;
}

double CHmiStateSubscriber::GetRateOfPenetrationInitializePreFilter()
{
    return m_data.rateOfPenetrationInitializePreFilter;
}

double CHmiStateSubscriber::GetRateOfPenetrationInitializeR1()
{
    return m_data.rateOfPenetrationInitializeR1;
}

double CHmiStateSubscriber::GetRateOfPenetrationInitializeR2()
{
    return m_data.rateOfPenetrationInitializeR2;
}

double CHmiStateSubscriber::GetTorqueInitializeK()
{
    return m_data.torqueInitializeK;
}

double CHmiStateSubscriber::GetTorqueInitializeTau()
{
    return m_data.torqueInitializeTau;
}

double CHmiStateSubscriber::GetTorqueInitializePreFilter()
{
    return m_data.torqueInitializePreFilter;
}

double CHmiStateSubscriber::GetTorqueInitializeR1()
{
    return m_data.torqueInitializeR1;
}

double CHmiStateSubscriber::GetTorqueInitializeR2()
{
    return m_data.torqueInitializeR2;
}

double CHmiStateSubscriber::GetWeightOnBitInitializeK()
{
    return m_data.weightOnBitInitializeK;
}

double CHmiStateSubscriber::GetWeightOnBitInitializeTau()
{
    return m_data.weightOnBitInitializeTau;
}

double CHmiStateSubscriber::GetWeightOnBitInitializePreFilter()
{
    return m_data.weightOnBitInitializePreFilter;
}

double CHmiStateSubscriber::GetWeightOnBitInitializeR1()
{
    return m_data.weightOnBitInitializeR1;
}

double CHmiStateSubscriber::GetWeightOnBitInitializeR2()
{
    return m_data.weightOnBitInitializeR2;
}

double CHmiStateSubscriber::GetDevMin()
{
    return m_data.devMin;
}

double CHmiStateSubscriber::GetIntervalMin()
{
    return m_data.intervalMin;
}

double CHmiStateSubscriber::GetDifferentialPressureFilter()
{
    return m_data.differentialPressureFilter;
}

double CHmiStateSubscriber::GetDifferentialPressureKcMax()
{
    return m_data.differentialPressureKcMax;
}

double CHmiStateSubscriber::GetDifferentialPressureKcMin()
{
    return m_data.differentialPressureKcMin;
}

double CHmiStateSubscriber::GetDifferentialPressureTdMax()
{
    return m_data.differentialPressureTdMax;
}

double CHmiStateSubscriber::GetDifferentialPressureTdMin()
{
    return m_data.differentialPressureTdMin;
}

double CHmiStateSubscriber::GetDifferentialPressureTiMax()
{
    return m_data.differentialPressureTiMax;
}

double CHmiStateSubscriber::GetDifferentialPressureTiMin()
{
    return m_data.differentialPressureTiMin;
}

double CHmiStateSubscriber::GetDifferentialPressureD()
{
    return m_data.differentialPressureD;
}

double CHmiStateSubscriber::GetDifferentialPressureEps()
{
    return m_data.differentialPressureEps;
}

bool CHmiStateSubscriber::GetDifferentialPressureEpsManual()
{
    return m_data.differentialPressureEpsManual;
}

double CHmiStateSubscriber::GetDifferentialPressureF()
{
    return m_data.differentialPressureF;
}

double CHmiStateSubscriber::GetRateOfPenetrationFilter()
{
    return m_data.rateOfPenetrationFilter;
}

double CHmiStateSubscriber::GetRateOfPenetrationKcMax()
{
    return m_data.rateOfPenetrationKcMax;
}

double CHmiStateSubscriber::GetRateOfPenetrationKcMin()
{
    return m_data.rateOfPenetrationKcMin;
}

double CHmiStateSubscriber::GetRateOfPenetrationTdMax()
{
    return m_data.rateOfPenetrationTdMax;
}

double CHmiStateSubscriber::GetRateOfPenetrationTdMin()
{
    return m_data.rateOfPenetrationTdMin;
}

double CHmiStateSubscriber::GetRateOfPenetrationTiMax()
{
    return m_data.rateOfPenetrationTiMax;
}

double CHmiStateSubscriber::GetRateOfPenetrationTiMin()
{
    return m_data.rateOfPenetrationTiMin;
}

double CHmiStateSubscriber::GetRateOfPenetrationD()
{
    return m_data.rateOfPenetrationD;
}

double CHmiStateSubscriber::GetRateOfPenetrationEps()
{
    return m_data.rateOfPenetrationEps;
}

bool CHmiStateSubscriber::GetRateOfPenetrationEpsManual()
{
    return m_data.rateOfPenetrationEpsManual;
}

double CHmiStateSubscriber::GetRateOfPenetrationF()
{
    return m_data.rateOfPenetrationF;
}

double CHmiStateSubscriber::GetWeightOnBitFilter()
{
    return m_data.weightOnBitFilter;
}

double CHmiStateSubscriber::GetWeightOnBitKcMax()
{
    return m_data.weightOnBitKcMax;
}

double CHmiStateSubscriber::GetWeightOnBitKcMin()
{
    return m_data.weightOnBitKcMin;
}

double CHmiStateSubscriber::GetWeightOnBitTdMax()
{
    return m_data.weightOnBitTdMax;
}

double CHmiStateSubscriber::GetWeightOnBitTdMin()
{
    return m_data.weightOnBitTdMin;
}

double CHmiStateSubscriber::GetWeightOnBitTiMax()
{
    return m_data.weightOnBitTiMax;
}

double CHmiStateSubscriber::GetWeightOnBitTiMin()
{
    return m_data.weightOnBitTiMin;
}

double CHmiStateSubscriber::GetWeightOnBitD()
{
    return m_data.weightOnBitD;
}

double CHmiStateSubscriber::GetWeightOnBitEps()
{
    return m_data.weightOnBitEps;
}

bool CHmiStateSubscriber::GetWeightOnBitEpsManual()
{
    return m_data.weightOnBitEpsManual;
}

double CHmiStateSubscriber::GetWeightOnBitF()
{
    return m_data.weightOnBitF;
}

double CHmiStateSubscriber::GetTorqueFilter()
{
    return m_data.torqueFilter;
}

double CHmiStateSubscriber::GetTorqueKcMax()
{
    return m_data.torqueKcMax;
}

double CHmiStateSubscriber::GetTorqueKcMin()
{
    return m_data.torqueKcMin;
}

double CHmiStateSubscriber::GetTorqueTdMax()
{
    return m_data.torqueTdMax;
}

double CHmiStateSubscriber::GetTorqueTdMin()
{
    return m_data.torqueTdMin;
}

double CHmiStateSubscriber::GetTorqueTiMax()
{
    return m_data.torqueTiMax;
}

double CHmiStateSubscriber::GetTorqueTiMin()
{
    return m_data.torqueTiMin;
}

double CHmiStateSubscriber::GetTorqueD()
{
    return m_data.torqueD;
}

double CHmiStateSubscriber::GetTorqueEps()
{
    return m_data.torqueEps;
}

bool CHmiStateSubscriber::GetTorqueEpsManual()
{
    return m_data.torqueEpsManual;
}

double CHmiStateSubscriber::GetTorqueF()
{
    return m_data.torqueF;
}

int32_t CHmiStateSubscriber::GetStatus()
{
    return m_data.status;
}

bool CHmiStateSubscriber::GetTuningEnabled()
{
    return m_data.tuningEnabled;
}


void CHmiStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CHmiStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CHmiStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CHmiStateSubscriber::DataAvailable(const nec::control::HmiState &data,
                          const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;
    
        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(sampleInfo);
        }
    
    }
}

void CHmiStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHmiStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

