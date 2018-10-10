#include "autotuner_configuration_request_publisher.h"

using namespace CAutoTunerConfigurationRequestPublisher;

CModelStateRequestPublisher::CModelStateRequestPublisher()
{
}

CModelStateRequestPublisher::~CModelStateRequestPublisher()
{
}

bool CModelStateRequestPublisher::Initialize()
{
    return true;
}

void CModelStateRequestPublisher::SetPipeInnerDiameter(meter_t pipeInnerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeInnerDiameter = units::unit_cast<double>(pipeInnerDiameter);
    }
    else
    {
        LOG_ERROR("Failed to set pipeInnerDiameter because of uninitialized sample");
    }
}

void CModelStateRequestPublisher::SetPipeOuterDiameter(meter_t pipeOuterDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeOuterDiameter = units::unit_cast<double>(pipeOuterDiameter);
    }
    else
    {
        LOG_ERROR("Failed to set pipeOuterDiameter because of uninitialized sample");
    }
}

void CModelStateRequestPublisher::SetSlopeFilter(double slopeFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->slopeFilter = (int32_t)slopeFilter;
    }
    else
    {
        LOG_ERROR("Failed to set slopeFilter because of uninitialized sample");
    }
}

void CModelStateRequestPublisher::SetTauMax(double tauMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMax = (int32_t)tauMax;
    }
    else
    {
        LOG_ERROR("Failed to set tauMax because of uninitialized sample");
    }
}

void CModelStateRequestPublisher::SetTauMin(double tauMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMin = (int32_t)tauMin;
    }
    else
    {
        LOG_ERROR("Failed to set tauMin because of uninitialized sample");
    }
}

void CModelStateRequestPublisher::SetTauMultiplier(double tauMultiplier)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tauMultiplier = (int32_t)tauMultiplier;
    }
    else
    {
        LOG_ERROR("Failed to set tauMultiplier because of uninitialized sample");
    }
}

void CModelStateRequestPublisher::SetMaxDeviation(double maxDeviation)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDeviation = (int32_t)maxDeviation;
    }
    else
    {
        LOG_ERROR("Failed to set maxDeviation because of uninitialized sample");
    }
}

void CModelStateRequestPublisher::SetMinInterval(double minInterval)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minInterval = (int32_t)minInterval;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

bool CModelStateRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    bRetVal = Publish();

    return bRetVal;
}

bool CModelStateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              AutoTunerConfiguration::MODEL_STATE_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}

CWobTuningRequestPublisher::CWobTuningRequestPublisher()
{
}

CWobTuningRequestPublisher::~CWobTuningRequestPublisher()
{
}

bool CWobTuningRequestPublisher::Initialize()
{
    return true;
}

void CWobTuningRequestPublisher::SetWobFilter(double wobFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobFilter = wobFilter;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobD(double wobD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobD = wobD;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobF(double wobF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobF = wobF;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobEps(double wobEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEps = wobEps;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobEpsManual(bool wobEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobEpsManual = wobEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobKcMin(double wobKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMin = wobKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobKcMax(double wobKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobKcMax = wobKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobTiMin(double wobTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMin = wobTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CWobTuningRequestPublisher::SetWobTiMax(double wobTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTiMax = wobTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}


bool CWobTuningRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    bRetVal = Publish();

    return bRetVal;
}

bool CWobTuningRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              AutoTunerConfiguration::WOB_TUNING_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}

CDiffpTuningRequestPublisher::CDiffpTuningRequestPublisher()
{
}

CDiffpTuningRequestPublisher::~CDiffpTuningRequestPublisher()
{
}

bool CDiffpTuningRequestPublisher::Initialize()
{
    return true;
}

void CDiffpTuningRequestPublisher::SetDiffpFilter(double diffPFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPFilter = diffPFilter;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpD(double diffPD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPD = diffPD;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpF(double diffPF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPF = diffPF;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpEps(double diffPEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEps = diffPEps;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpEpsManual(bool diffPEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPEpsManual = diffPEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpKcMin(double diffPKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMin = diffPKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpKcMax(double diffPKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPKcMax = diffPKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpTiMin(double diffPTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMin = diffPTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CDiffpTuningRequestPublisher::SetDiffpTiMax(double diffPTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPTiMax = diffPTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}


bool CDiffpTuningRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    bRetVal = Publish();

    return bRetVal;
}

bool CDiffpTuningRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              AutoTunerConfiguration::DIFFP_TUNING_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}

CTorqueTuningRequestPublisher::CTorqueTuningRequestPublisher()
{
}

CTorqueTuningRequestPublisher::~CTorqueTuningRequestPublisher()
{
}

bool CTorqueTuningRequestPublisher::Initialize()
{
    return true;
}

void CTorqueTuningRequestPublisher::SetTorqueFilter(double torqueFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueFilter = torqueFilter;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueD(double torqueD)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueD = torqueD;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueF(double torqueF)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueF = torqueF;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueEps(double torqueEps)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEps = torqueEps;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueEpsManual(bool torqueEpsManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueEpsManual = torqueEpsManual;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueKcMin(double torqueKcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMin = torqueKcMin;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueKcMax(double torqueKcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueKcMax = torqueKcMax;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueTiMin(double torqueTiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMin = torqueTiMin;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}

void CTorqueTuningRequestPublisher::SetTorqueTiMax(double torqueTiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTiMax = torqueTiMax;
    }
    else
    {
        LOG_ERROR("Failed to set minInterval because of uninitialized sample");
    }
}


bool CTorqueTuningRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    bRetVal = Publish();

    return bRetVal;
}

bool CTorqueTuningRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              AutoTunerConfiguration::TORQUE_TUNING_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
