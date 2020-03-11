#include "roptimizer_state_subscriber.h"

CRoptimizerStateSubscriber::CRoptimizerStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRoptimizerStateSubscriber::~CRoptimizerStateSubscriber()
{
}

bool CRoptimizerStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Process::ROPTIMIZER_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRoptimizerStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CRoptimizerStateSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CRoptimizerStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

units::length::meter_t CRoptimizerStateSubscriber::GetBitDepth()
{
    return units::length::meter_t(m_data.bitDepth);
}

units::length::meter_t CRoptimizerStateSubscriber::GetHoleDepth()
{
    return units::length::meter_t(m_data.holeDepth);
}

int32_t CRoptimizerStateSubscriber::GetSteadyStateWindow()
{
    return m_data.steadyStateWindow;
}

int32_t CRoptimizerStateSubscriber::GetSteadyStateMin()
{
    return m_data.steadyStateMin;
}

int32_t CRoptimizerStateSubscriber::GetRpmStepSize()
{
    return m_data.rpmStepSize;
}

int32_t CRoptimizerStateSubscriber::GetRopStepSize()
{
    return m_data.ropStepSize;
}

bool CRoptimizerStateSubscriber::GetRpmSteadyState()
{
    return m_data.rpmSteadyState;
}

bool CRoptimizerStateSubscriber::GetRopSteadyState()
{
    return m_data.ropSteadyState;
}

bool CRoptimizerStateSubscriber::GetWobSteadyState()
{
    return m_data.wobSteadyState;
}

bool CRoptimizerStateSubscriber::GetTorqueSteadyState()
{
    return m_data.torqueSteadyState;
}

bool CRoptimizerStateSubscriber::GetRopMode()
{
    return m_data.ropMode;
}

bool CRoptimizerStateSubscriber::GetWobMode()
{
    return m_data.wobMode;
}

bool CRoptimizerStateSubscriber::GetDiffpMode()
{
    return m_data.diffpMode;
}

bool CRoptimizerStateSubscriber::GetTorqueMode()
{
    return m_data.torqueMode;
}

units::angular_velocity::radians_per_second_t CRoptimizerStateSubscriber::GetTargetRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.targetRate);
}

units::angular_velocity::radians_per_second_t CRoptimizerStateSubscriber::GetActualRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.actualRate);
}

units::angular_velocity::radians_per_second_t CRoptimizerStateSubscriber::GetMinRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.minRate);
}

units::angular_velocity::radians_per_second_t CRoptimizerStateSubscriber::GetMaxRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.maxRate);
}

units::velocity::meters_per_second_t CRoptimizerStateSubscriber::GetRopTarget()
{
    return units::velocity::meters_per_second_t(m_data.ropTarget);
}

units::velocity::meters_per_second_t CRoptimizerStateSubscriber::GetRopActual()
{
    return units::velocity::meters_per_second_t(m_data.ropActual);
}

units::velocity::meters_per_second_t CRoptimizerStateSubscriber::GetRopMin()
{
    return units::velocity::meters_per_second_t(m_data.ropMin);
}

units::velocity::meters_per_second_t CRoptimizerStateSubscriber::GetRopMax()
{
    return units::velocity::meters_per_second_t(m_data.ropMax);
}

units::force::newton_t CRoptimizerStateSubscriber::GetWobTarget()
{
    return units::force::newton_t(m_data.wobTarget);
}

units::force::newton_t CRoptimizerStateSubscriber::GetWobActual()
{
    return units::force::newton_t(m_data.wobActual);
}

units::force::newton_t CRoptimizerStateSubscriber::GetWobMin()
{
    return units::force::newton_t(m_data.wobMin);
}

units::force::newton_t CRoptimizerStateSubscriber::GetWobMax()
{
    return units::force::newton_t(m_data.wobMax);
}

units::pressure::pascal_t CRoptimizerStateSubscriber::GetDiffpTarget()
{
    return units::pressure::pascal_t(m_data.diffpTarget);
}

units::pressure::pascal_t CRoptimizerStateSubscriber::GetDiffpActual()
{
    return units::pressure::pascal_t(m_data.diffpActual);
}

units::pressure::pascal_t CRoptimizerStateSubscriber::GetDiffpMin()
{
    return units::pressure::pascal_t(m_data.diffpMin);
}

units::pressure::pascal_t CRoptimizerStateSubscriber::GetDiffpMax()
{
    return units::pressure::pascal_t(m_data.diffpMax);
}

units::torque::newton_meter_t CRoptimizerStateSubscriber::GetTorqueTarget()
{
    return units::torque::newton_meter_t(m_data.torqueTarget);
}

units::torque::newton_meter_t CRoptimizerStateSubscriber::GetTorqueActual()
{
    return units::torque::newton_meter_t(m_data.torqueActual);
}

units::torque::newton_meter_t CRoptimizerStateSubscriber::GetTorqueMin()
{
    return units::torque::newton_meter_t(m_data.torqueMin);
}

units::torque::newton_meter_t CRoptimizerStateSubscriber::GetTorqueMax()
{
    return units::torque::newton_meter_t(m_data.torqueMax);
}

double CRoptimizerStateSubscriber::GetBitWear()
{
    return m_data.bitWear;
}

double CRoptimizerStateSubscriber::GetMse()
{
    return m_data.mse;
}

double CRoptimizerStateSubscriber::GetPower()
{
    return m_data.power;
}


void CRoptimizerStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRoptimizerStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRoptimizerStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CRoptimizerStateSubscriber::DataAvailable(const Shell::Process::RoptimizerState &data,
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

void CRoptimizerStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRoptimizerStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

