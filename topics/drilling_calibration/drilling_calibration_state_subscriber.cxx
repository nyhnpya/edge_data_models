#include "drilling_calibration_state_subscriber.h"

CDrillingCalibrationStateSubscriber::CDrillingCalibrationStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillingCalibrationStateSubscriber::~CDrillingCalibrationStateSubscriber()
{
}

bool CDrillingCalibrationStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::control::DRILLING_CALIBRATION_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillingCalibrationStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CDrillingCalibrationStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

DataTypes::Time CDrillingCalibrationStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

double CDrillingCalibrationStateSubscriber::GetWobProportional()
{
    return m_data.wobProportional;
}

double CDrillingCalibrationStateSubscriber::GetWobIntegral()
{
    return m_data.wobIntegral;
}

double CDrillingCalibrationStateSubscriber::GetDifferentialPressureProportional()
{
    return m_data.differentialPressureProportional;
}

double CDrillingCalibrationStateSubscriber::GetDifferentialPressureIntegral()
{
    return m_data.differentialPressureIntegral;
}

double CDrillingCalibrationStateSubscriber::GetTorqueProportional()
{
    return m_data.torqueProportional;
}

double CDrillingCalibrationStateSubscriber::GetTorqueIntegral()
{
    return m_data.torqueIntegral;
}

double CDrillingCalibrationStateSubscriber::GetMinWobProportional()
{
    return m_data.minWobProportional;
}

double CDrillingCalibrationStateSubscriber::GetMaxWobProportional()
{
    return m_data.maxWobProportional;
}

double CDrillingCalibrationStateSubscriber::GetMinWobIntegral()
{
    return m_data.minWobIntegral;
}

double CDrillingCalibrationStateSubscriber::GetMaxWobIntegral()
{
    return m_data.maxWobIntegral;
}

double CDrillingCalibrationStateSubscriber::GetMinDifferentialPressureProportional()
{
    return m_data.minDifferentialPressureProportional;
}

double CDrillingCalibrationStateSubscriber::GetMaxDifferentialPressureProportional()
{
    return m_data.maxDifferentialPressureProportional;
}

double CDrillingCalibrationStateSubscriber::GetMinDifferentialPressureIntegral()
{
    return m_data.minDifferentialPressureIntegral;
}

double CDrillingCalibrationStateSubscriber::GetMaxDifferentialPressureIntegral()
{
    return m_data.maxDifferentialPressureIntegral;
}

double CDrillingCalibrationStateSubscriber::GetMinTorqueProportional()
{
    return m_data.minTorqueProportional;
}

double CDrillingCalibrationStateSubscriber::GetMaxTorqueProportional()
{
    return m_data.maxTorqueProportional;
}

double CDrillingCalibrationStateSubscriber::GetMinTorqueIntegral()
{
    return m_data.minTorqueIntegral;
}

double CDrillingCalibrationStateSubscriber::GetMaxTorqueIntegral()
{
    return m_data.maxTorqueIntegral;
}


void CDrillingCalibrationStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillingCalibrationStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillingCalibrationStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CDrillingCalibrationStateSubscriber::DataAvailable(const nec::control::DrillingCalibrationState &data,
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

void CDrillingCalibrationStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingCalibrationStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

