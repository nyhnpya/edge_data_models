#include "dds_uuid.h"
#include "autotuner_configuration_state_publisher.h"

using namespace CAutoTunerConfigurationStatePublisher;

CModelStateStatePublisher::CModelStateStatePublisher()
{
}

CModelStateStatePublisher::~CModelStateStatePublisher()
{
}

bool CModelStateStatePublisher::Initialize()
{
    return true;
}

void CModelStateStatePublisher::SetPipeInnerDiameter(meter_t pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = units::unit_cast<double>(pipeInnerDiameter);
    }
    else
    {
        LOG_ERROR("Failed to set pipe inner diameter because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetPipeOuterDiameter(meter_t pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = units::unit_cast<double>(pipeOuterDiameter);
    }
    else
    {
        LOG_ERROR("Failed to set pipe outer diameter because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetSlopeFilter(double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = slopeFilter;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetTauMin(double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = tauMin;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetTauMax(double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = tauMax;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetTauMultiplier(double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = tauMultiplier;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetMaxDeviation(double maxDeviation)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDeviation = maxDeviation;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetMinInterval(double minInterval)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minInterval = minInterval;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CModelStateStatePublisher::SetTunerEnabled(bool tunerEnabled)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tunerEnabled = tunerEnabled;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

bool CModelStateStatePublisher::PublishSample()
{
    return Publish();
}

bool CModelStateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}


CWobTuningStatePublisher::CWobTuningStatePublisher()
{
}

CWobTuningStatePublisher::~CWobTuningStatePublisher()
{
}

void CWobTuningStatePublisher::SetWobFilter(double wobFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobFilter = wobFilter;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobD(double wobD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobD = wobD;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobF(double wobF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobF = wobF;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobEps(double wobEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEps = wobEps;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobEpsManual(bool wobEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEpsManual = wobEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}
void CWobTuningStatePublisher::SetWobKcMin(double wobKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMin = wobKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobKcMax(double wobKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMax = wobKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobTiMin(double wobTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMin = wobTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobTiMax(double wobTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMax = wobTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobInitK(double wobInitK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobInitK = wobInitK;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobInitTau(double wobInitTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobInitTau = wobInitTau;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobInitPreFilter(double wobInitPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobInitPreFilter = wobInitPreFilter;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobR1(double wobR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobR1 = wobR1;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CWobTuningStatePublisher::SetWobR2(double wobR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobR2 = wobR2;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

bool CWobTuningStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Shell::Hmi::AutoTunerConfiguration::WOB_TUNING_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}

bool CWobTuningStatePublisher::Initialize()
{
    return true;
}

bool CWobTuningStatePublisher::PublishSample()
{
    return Publish();
}

CDiffpTuningStatePublisher::CDiffpTuningStatePublisher()
{
}

CDiffpTuningStatePublisher::~CDiffpTuningStatePublisher()
{
}

void CDiffpTuningStatePublisher::SetDiffpFilter(double diffPFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPFilter = diffPFilter;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpD(double diffPD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPD = diffPD;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpF(double diffPF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPF = diffPF;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpEps(double diffPEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEps = diffPEps;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpEpsManual(bool diffPEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEpsManual = diffPEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}
void CDiffpTuningStatePublisher::SetDiffpKcMin(double diffPKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMin = diffPKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpKcMax(double diffPKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMax = diffPKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpTiMin(double diffPTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMin = diffPTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpTiMax(double diffPTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMax = diffPTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpInitK(double diffpInitK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpInitK = diffpInitK;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpInitTau(double diffpInitTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpInitTau = diffpInitTau;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpInitPreFilter(double diffpInitPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpInitPreFilter = diffpInitPreFilter;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpR1(double diffpR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpR1 = diffpR1;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CDiffpTuningStatePublisher::SetDiffpR2(double diffpR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffpR2 = diffpR2;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

bool CDiffpTuningStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Shell::Hmi::AutoTunerConfiguration::DIFFP_TUNING_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}

bool CDiffpTuningStatePublisher::Initialize()
{
    return true;
}

bool CDiffpTuningStatePublisher::PublishSample()
{
    return Publish();
}

CTorqueTuningStatePublisher::CTorqueTuningStatePublisher()
{
}

CTorqueTuningStatePublisher::~CTorqueTuningStatePublisher()
{
}

void CTorqueTuningStatePublisher::SetTorqueFilter(double torqueFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueFilter = torqueFilter;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueD(double torqueD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueD = torqueD;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueF(double torqueF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueF = torqueF;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueEps(double torqueEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEps = torqueEps;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueEpsManual(bool torqueEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEpsManual = torqueEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}
void CTorqueTuningStatePublisher::SetTorqueKcMin(double torqueKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMin = torqueKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueKcMax(double torqueKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMax = torqueKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueTiMin(double torqueTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMin = torqueTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueTiMax(double torqueTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMax = torqueTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueInitK(double torqueInitK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitK = torqueInitK;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueInitTau(double torqueInitTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitTau = torqueInitTau;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueInitPreFilter(double torqueInitPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueInitPreFilter = torqueInitPreFilter;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueR1(double torqueR1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueR1 = torqueR1;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

void CTorqueTuningStatePublisher::SetTorqueR2(double torqueR2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueR2 = torqueR2;
    }
    else
    {
        LOG_ERROR("Failed to set mode because of uninitialized sample");
    }
}

bool CTorqueTuningStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Shell::Hmi::AutoTunerConfiguration::TORQUE_TUNING_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}

bool CTorqueTuningStatePublisher::Initialize()
{
    return true;
}

bool CTorqueTuningStatePublisher::PublishSample()
{
    return Publish();
}
