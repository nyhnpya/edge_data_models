#include "drilling_calibration_request_subscriber.h"

CDrillingCalibrationRequestSubscriber::CDrillingCalibrationRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillingCalibrationRequestSubscriber::~CDrillingCalibrationRequestSubscriber()
{
}

bool CDrillingCalibrationRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::control::DRILLING_CALIBRATION_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillingCalibrationRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CDrillingCalibrationRequestSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

DataTypes::Time CDrillingCalibrationRequestSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

double CDrillingCalibrationRequestSubscriber::GetWobProportional()
{
    return m_data.wobProportional;
}

double CDrillingCalibrationRequestSubscriber::GetWobIntegral()
{
    return m_data.wobIntegral;
}

double CDrillingCalibrationRequestSubscriber::GetDifferentialPressureProportional()
{
    return m_data.differentialPressureProportional;
}

double CDrillingCalibrationRequestSubscriber::GetDifferentialPressureIntegral()
{
    return m_data.differentialPressureIntegral;
}

double CDrillingCalibrationRequestSubscriber::GetTorqueProportional()
{
    return m_data.torqueProportional;
}

double CDrillingCalibrationRequestSubscriber::GetTorqueIntegral()
{
    return m_data.torqueIntegral;
}


void CDrillingCalibrationRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillingCalibrationRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillingCalibrationRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CDrillingCalibrationRequestSubscriber::DataAvailable(const nec::control::DrillingCalibrationRequest &data,
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

void CDrillingCalibrationRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingCalibrationRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

