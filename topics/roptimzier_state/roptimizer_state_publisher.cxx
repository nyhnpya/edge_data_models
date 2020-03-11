#include "roptimizer_state_publisher.h"

CRoptimizerStatePublisher::CRoptimizerStatePublisher()
{
}

CRoptimizerStatePublisher::~CRoptimizerStatePublisher()
{
}

bool CRoptimizerStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       Shell::Process::ROPTIMIZER_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRoptimizerStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CRoptimizerStatePublisher::PublishSample()
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

void CRoptimizerStatePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CRoptimizerStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CRoptimizerStatePublisher::SetBitDepth(const units::length::meter_t bitDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitDepth = units::unit_cast<double>(bitDepth);
    }
}

void CRoptimizerStatePublisher::SetHoleDepth(const units::length::meter_t holeDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->holeDepth = units::unit_cast<double>(holeDepth);
    }
}

void CRoptimizerStatePublisher::SetSteadyStateWindow(int32_t steadyStateWindow)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateWindow = steadyStateWindow;
    }
}

void CRoptimizerStatePublisher::SetSteadyStateMin(int32_t steadyStateMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->steadyStateMin = steadyStateMin;
    }
}

void CRoptimizerStatePublisher::SetRpmStepSize(int32_t rpmStepSize)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmStepSize = rpmStepSize;
    }
}

void CRoptimizerStatePublisher::SetRopStepSize(int32_t ropStepSize)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropStepSize = ropStepSize;
    }
}

void CRoptimizerStatePublisher::SetRpmSteadyState(bool rpmSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rpmSteadyState = rpmSteadyState;
    }
}

void CRoptimizerStatePublisher::SetRopSteadyState(bool ropSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropSteadyState = ropSteadyState;
    }
}

void CRoptimizerStatePublisher::SetWobSteadyState(bool wobSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobSteadyState = wobSteadyState;
    }
}

void CRoptimizerStatePublisher::SetTorqueSteadyState(bool torqueSteadyState)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueSteadyState = torqueSteadyState;
    }
}

void CRoptimizerStatePublisher::SetRopMode(bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
}

void CRoptimizerStatePublisher::SetWobMode(bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
}

void CRoptimizerStatePublisher::SetDiffpMode(bool diffpMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpMode = diffpMode;
    }
}

void CRoptimizerStatePublisher::SetTorqueMode(bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
}

void CRoptimizerStatePublisher::SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

void CRoptimizerStatePublisher::SetActualRate(const units::angular_velocity::radians_per_second_t actualRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->actualRate = units::unit_cast<double>(actualRate);
    }
}

void CRoptimizerStatePublisher::SetMinRate(const units::angular_velocity::radians_per_second_t minRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minRate = units::unit_cast<double>(minRate);
    }
}

void CRoptimizerStatePublisher::SetMaxRate(const units::angular_velocity::radians_per_second_t maxRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxRate = units::unit_cast<double>(maxRate);
    }
}

void CRoptimizerStatePublisher::SetRopTarget(const units::velocity::meters_per_second_t ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = units::unit_cast<double>(ropTarget);
    }
}

void CRoptimizerStatePublisher::SetRopActual(const units::velocity::meters_per_second_t ropActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropActual = units::unit_cast<double>(ropActual);
    }
}

void CRoptimizerStatePublisher::SetRopMin(const units::velocity::meters_per_second_t ropMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMin = units::unit_cast<double>(ropMin);
    }
}

void CRoptimizerStatePublisher::SetRopMax(const units::velocity::meters_per_second_t ropMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMax = units::unit_cast<double>(ropMax);
    }
}

void CRoptimizerStatePublisher::SetWobTarget(const units::force::newton_t wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = units::unit_cast<double>(wobTarget);
    }
}

void CRoptimizerStatePublisher::SetWobActual(const units::force::newton_t wobActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobActual = units::unit_cast<double>(wobActual);
    }
}

void CRoptimizerStatePublisher::SetWobMin(const units::force::newton_t wobMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMin = units::unit_cast<double>(wobMin);
    }
}

void CRoptimizerStatePublisher::SetWobMax(const units::force::newton_t wobMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMax = units::unit_cast<double>(wobMax);
    }
}

void CRoptimizerStatePublisher::SetDiffpTarget(const units::pressure::pascal_t diffpTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpTarget = units::unit_cast<double>(diffpTarget);
    }
}

void CRoptimizerStatePublisher::SetDiffpActual(const units::pressure::pascal_t diffpActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpActual = units::unit_cast<double>(diffpActual);
    }
}

void CRoptimizerStatePublisher::SetDiffpMin(const units::pressure::pascal_t diffpMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpMin = units::unit_cast<double>(diffpMin);
    }
}

void CRoptimizerStatePublisher::SetDiffpMax(const units::pressure::pascal_t diffpMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpMax = units::unit_cast<double>(diffpMax);
    }
}

void CRoptimizerStatePublisher::SetTorqueTarget(const units::torque::newton_meter_t torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = units::unit_cast<double>(torqueTarget);
    }
}

void CRoptimizerStatePublisher::SetTorqueActual(const units::torque::newton_meter_t torqueActual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueActual = units::unit_cast<double>(torqueActual);
    }
}

void CRoptimizerStatePublisher::SetTorqueMin(const units::torque::newton_meter_t torqueMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMin = units::unit_cast<double>(torqueMin);
    }
}

void CRoptimizerStatePublisher::SetTorqueMax(const units::torque::newton_meter_t torqueMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMax = units::unit_cast<double>(torqueMax);
    }
}

void CRoptimizerStatePublisher::SetBitWear(double bitWear)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitWear = bitWear;
    }
}

void CRoptimizerStatePublisher::SetMse(double mse)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->mse = mse;
    }
}

void CRoptimizerStatePublisher::SetPower(double power)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->power = power;
    }
}

