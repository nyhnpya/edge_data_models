#include "autotuner_configuration_request_subscriber.h"

using namespace CAutoTunerConfigurationRequestSubscriber;

CModelStateRequestSubscriber::CModelStateRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CModelStateRequestSubscriber::~CModelStateRequestSubscriber()
{
}

bool CModelStateRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CModelStateRequestSubscriber::GetModelReset(bool &modelReset)
{
    modelReset = m_data.modelReset;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetPipeInnerDiameter(double &pipeInnerDiameter)
{
    pipeInnerDiameter = m_data.pipeInnerDiameter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetPipeOuterDiameter(double &pipeOuterDiameter)
{
    pipeOuterDiameter = m_data.pipeOuterDiameter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetSlopeFilter(double &slopeFilter)
{
    slopeFilter = m_data.slopeFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetTauMax(double &tauMax)
{
    tauMax = m_data.tauMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetTauMin(double &tauMin)
{
    tauMin = m_data.tauMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetTauMultiplier(double &tauMultiplier)
{
    tauMultiplier = m_data.tauMultiplier;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetMaxDeviation(double &maxDeviation)
{
    maxDeviation = m_data.maxDeviation;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CModelStateRequestSubscriber::GetMinInterval(double &minInterval)
{
    minInterval = m_data.minInterval;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

void CModelStateRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CModelStateRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CModelStateRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CModelStateRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CModelStateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               AutoTunerConfiguration::MODEL_STATE_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CModelStateRequestSubscriber::DataAvailable(const AutoTunerConfiguration::ModelStateRequest &data,
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

void CModelStateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CModelStateRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CModelStateRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

CWobTuningRequestSubscriber::CWobTuningRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CWobTuningRequestSubscriber::~CWobTuningRequestSubscriber()
{
}

bool CWobTuningRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CWobTuningRequestSubscriber::GetWobFilter(double &wobFilter)
{
    wobFilter = m_data.wobFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GetWobD(double &wobD)
{
    wobD = m_data.wobD;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GetWobF(double &wobF)
{
    wobF = m_data.wobF;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GetWobEps(double &wobEps)
{
    wobEps = m_data.wobEps;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GewobEpsManual(bool &wobEpsManual)
{
    wobEpsManual = m_data.wobEpsManual;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GetWobKcMin(double &wobKcMin)
{
    wobKcMin = m_data.wobKcMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GetWobKcMax(double &wobKcMax)
{
    wobKcMax = m_data.wobKcMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GetWobTiMin(double &wobTiMin)
{
    wobTiMin = m_data.wobTiMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CWobTuningRequestSubscriber::GetWobTiMax(double &wobTiMax)
{
    wobTiMax = m_data.wobTiMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

void CWobTuningRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CWobTuningRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CWobTuningRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CWobTuningRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CWobTuningRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               AutoTunerConfiguration::WOB_TUNING_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CWobTuningRequestSubscriber::DataAvailable(const AutoTunerConfiguration::WobTuningRequest &data,
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

void CWobTuningRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CWobTuningRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CWobTuningRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

CDiffpTuningRequestSubscriber::CDiffpTuningRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CDiffpTuningRequestSubscriber::~CDiffpTuningRequestSubscriber()
{
}

bool CDiffpTuningRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDiffpTuningRequestSubscriber::GetDiffpFilter(double &diffPFilter)
{
    diffPFilter = m_data.diffPFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GetDiffpD(double &diffPD)
{
    diffPD = m_data.diffPD;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GetDiffpF(double &diffPF)
{
    diffPF = m_data.diffPF;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GetDiffpEps(double &diffPEps)
{
    diffPEps = m_data.diffPEps;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GediffPEpsManual(bool &diffPEpsManual)
{
    diffPEpsManual = m_data.diffPEpsManual;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GetDiffpKcMin(double &diffPKcMin)
{
    diffPKcMin = m_data.diffPKcMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GetDiffpKcMax(double &diffPKcMax)
{
    diffPKcMax = m_data.diffPKcMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GetDiffpTiMin(double &diffPTiMin)
{
    diffPTiMin = m_data.diffPTiMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CDiffpTuningRequestSubscriber::GetDiffpTiMax(double &diffPTiMax)
{
    diffPTiMax = m_data.diffPTiMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

void CDiffpTuningRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDiffpTuningRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDiffpTuningRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CDiffpTuningRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CDiffpTuningRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               AutoTunerConfiguration::DIFFP_TUNING_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDiffpTuningRequestSubscriber::DataAvailable(const AutoTunerConfiguration::DiffpTuningRequest &data,
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

void CDiffpTuningRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDiffpTuningRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CDiffpTuningRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}


CTorqueTuningRequestSubscriber::CTorqueTuningRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CTorqueTuningRequestSubscriber::~CTorqueTuningRequestSubscriber()
{
}

bool CTorqueTuningRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CTorqueTuningRequestSubscriber::GetTorqueFilter(double &torqueFilter)
{
    torqueFilter = m_data.torqueFilter;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueD(double &torqueD)
{
    torqueD = m_data.torqueD;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueF(double &torqueF)
{
    torqueF = m_data.torqueF;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueEps(double &torqueEps)
{
    torqueEps = m_data.torqueEps;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueEpsManual(bool &torqueEpsManual)
{
    torqueEpsManual = m_data.torqueEpsManual;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueKcMin(double &torqueKcMin)
{
    torqueKcMin = m_data.torqueKcMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueKcMax(double &torqueKcMax)
{
    torqueKcMax = m_data.torqueKcMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueTiMin(double &torqueTiMin)
{
    torqueTiMin = m_data.torqueTiMin;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

bool CTorqueTuningRequestSubscriber::GetTorqueTiMax(double &torqueTiMax)
{
    torqueTiMax = m_data.torqueTiMax;
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
};

void CTorqueTuningRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CTorqueTuningRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CTorqueTuningRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CTorqueTuningRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CTorqueTuningRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               AutoTunerConfiguration::TORQUE_TUNING_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CTorqueTuningRequestSubscriber::DataAvailable(const AutoTunerConfiguration::TorqueTuningRequest &data,
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

void CTorqueTuningRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CTorqueTuningRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CTorqueTuningRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
