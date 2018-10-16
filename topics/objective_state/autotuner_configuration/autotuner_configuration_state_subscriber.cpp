#include "autotuner_configuration_state_subscriber.h"

using namespace CAutoTunerConfigurationStateSubscriber;

CModelStateStateSubscriber::CModelStateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CModelStateStateSubscriber::~CModelStateStateSubscriber()
{
}

bool CModelStateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

meter_t CModelStateStateSubscriber::GetPipeInnerDiameter()
{
    return meter_t(inch_t(m_data.pipeInnerDiameter));
};

meter_t CModelStateStateSubscriber::GetPipeOuterDiameter()
{
    return meter_t(inch_t(m_data.pipeOuterDiameter));
};

bool CModelStateStateSubscriber::GetSlopeFilter(double &slopeFilter)
{
    slopeFilter = m_data.slopeFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateStateSubscriber::GetTauMax(double &tauMax)
{
    tauMax = m_data.tauMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateStateSubscriber::GetTauMin(double &tauMin)
{
    tauMin = m_data.tauMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateStateSubscriber::GetTauMultiplier(double &tauMultiplier)
{
    tauMultiplier = m_data.tauMultiplier;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateStateSubscriber::GetMaxDeviation(double &maxDeviation)
{
    maxDeviation = m_data.maxDeviation;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateStateSubscriber::GetMinInterval(double &minInterval)
{
    minInterval = m_data.minInterval;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateStateSubscriber::GetTunerEnabled(bool &tunerEnabled)
{
    tunerEnabled = m_data.tunerEnabled;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

void CModelStateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CModelStateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CModelStateStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CModelStateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CModelStateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CModelStateStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::ModelStateState &data,
                                                 const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CModelStateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CModelStateStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CModelStateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}


CWobTuningStateSubscriber::CWobTuningStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CWobTuningStateSubscriber::~CWobTuningStateSubscriber()
{
}

bool CWobTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CWobTuningStateSubscriber::GetWobFilter(double &wobFilter)
{
    wobFilter = m_data.wobFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobD(double &wobD)
{
    wobD = m_data.wobD;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobF(double &wobF)
{
    wobF = m_data.wobF;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobEps(double &wobEps)
{
    wobEps = m_data.wobEps;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobManual(bool &wobEpsManual)
{
    wobEpsManual = m_data.wobEpsManual;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobKcMin(double &wobKcMin)
{
    wobKcMin = m_data.wobKcMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobKcMax(double &wobKcMax)
{
    wobKcMax = m_data.wobKcMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobTiMin(double &wobTiMin)
{
    wobTiMin = m_data.wobTiMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobTiMax(double &wobTiMax)
{
    wobTiMax = m_data.wobTiMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobInitK(double &wobInitK)
{
    wobInitK = m_data.wobInitK;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobInitTau(double &wobInitTau)
{
    wobInitTau = m_data.wobInitTau;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobInitPreFilter(double &wobInitPreFilter)
{
    wobInitPreFilter = m_data.wobInitPreFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobR1(double &wobR1)
{
    wobR1 = m_data.wobR1;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningStateSubscriber::GetWobR2(double &wobR2)
{
    wobR2 = m_data.wobR2;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

void CWobTuningStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CWobTuningStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CWobTuningStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CWobTuningStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CWobTuningStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Shell::Hmi::AutoTunerConfiguration::WOB_TUNING_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CWobTuningStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::WobTuningState &data,
                                                 const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CWobTuningStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CWobTuningStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CWobTuningStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}


CDiffpTuningStateSubscriber::CDiffpTuningStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CDiffpTuningStateSubscriber::~CDiffpTuningStateSubscriber()
{
}

bool CDiffpTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDiffpTuningStateSubscriber::GetDiffpFilter(double &diffPFilter)
{
    diffPFilter = m_data.diffPFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpD(double &diffPD)
{
    diffPD = m_data.diffPD;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpF(double &diffPF)
{
    diffPF = m_data.diffPF;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpEps(double &diffPEps)
{
    diffPEps = m_data.diffPEps;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpManual(bool &diffPEpsManual)
{
    diffPEpsManual = m_data.diffPEpsManual;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpKcMin(double &diffPKcMin)
{
    diffPKcMin = m_data.diffPKcMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpKcMax(double &diffPKcMax)
{
    diffPKcMax = m_data.diffPKcMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpTiMin(double &diffPTiMin)
{
    diffPTiMin = m_data.diffPTiMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpTiMax(double &diffPTiMax)
{
    diffPTiMax = m_data.diffPTiMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpInitK(double diffpInitK)
{
    diffpInitK = m_data.diffpInitK;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpInitTau(double diffpInitTau)
{
    diffpInitTau = m_data.diffpInitTau;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpInitPreFilter(double diffpInitPreFilter)
{
    diffpInitPreFilter = m_data.diffpInitPreFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpR1(double diffpR1)
{
    diffpR1 = m_data.diffpR1;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningStateSubscriber::GetDiffpR2(double diffpR2)
{
    diffpR2 = m_data.diffpR2;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};


void CDiffpTuningStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDiffpTuningStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDiffpTuningStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CDiffpTuningStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CDiffpTuningStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Shell::Hmi::AutoTunerConfiguration::DIFFP_TUNING_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDiffpTuningStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::DiffpTuningState &data,
                                                 const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CDiffpTuningStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDiffpTuningStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CDiffpTuningStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}


CTorqueTuningStateSubscriber::CTorqueTuningStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CTorqueTuningStateSubscriber::~CTorqueTuningStateSubscriber()
{
}

bool CTorqueTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CTorqueTuningStateSubscriber::GetTorqueFilter(double &torqueFilter)
{
    torqueFilter = m_data.torqueFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueD(double &torqueD)
{
    torqueD = m_data.torqueD;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueF(double &torqueF)
{
    torqueF = m_data.torqueF;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueEps(double &torqueEps)
{
    torqueEps = m_data.torqueEps;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueManual(bool &torqueEpsManual)
{
    torqueEpsManual = m_data.torqueEpsManual;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueKcMin(double &torqueKcMin)
{
    torqueKcMin = m_data.torqueKcMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueKcMax(double &torqueKcMax)
{
    torqueKcMax = m_data.torqueKcMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueTiMin(double &torqueTiMin)
{
    torqueTiMin = m_data.torqueTiMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueTiMax(double &torqueTiMax)
{
    torqueTiMax = m_data.torqueTiMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueInitK(double torqueInitK)
{
    torqueInitK = m_data.torqueInitK;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueInitTau(double torqueInitTau)
{
    torqueInitTau = m_data.torqueInitTau;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueInitPreFilter(double torqueInitPreFilter)
{
    torqueInitPreFilter = m_data.torqueInitPreFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueR1(double torqueR1)
{
    torqueR1 = m_data.torqueR1;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningStateSubscriber::GetTorqueR2(double torqueR2)
{
    torqueR2 = m_data.torqueR2;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};


void CTorqueTuningStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CTorqueTuningStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CTorqueTuningStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CTorqueTuningStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CTorqueTuningStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Shell::Hmi::AutoTunerConfiguration::TORQUE_TUNING_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CTorqueTuningStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::TorqueTuningState &data,
                                                 const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CTorqueTuningStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CTorqueTuningStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CTorqueTuningStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
