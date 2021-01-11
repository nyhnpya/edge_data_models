#include "auto_tuner_tuning_state_publisher.h"

CAutoTunerTuningStatePublisher::CAutoTunerTuningStatePublisher()
{
}

CAutoTunerTuningStatePublisher::~CAutoTunerTuningStatePublisher()
{
}

bool CAutoTunerTuningStatePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_STATE,
                                    "EdgeBaseLibrary",
                                    "ConfigProfile");
}

bool CAutoTunerTuningStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
    }

    return Publish();
}

void CAutoTunerTuningStatePublisher::SetId(const std::string&id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CAutoTunerTuningStatePublisher::SetFilter(const double filter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->filter = filter;
    }
}

void CAutoTunerTuningStatePublisher::SetD(const double d)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->d = d;
    }
}

void CAutoTunerTuningStatePublisher::SetF(const double f)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->f = f;
    }
}

void CAutoTunerTuningStatePublisher::SetEpsilon(const double epsilon)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilon = epsilon;
    }
}

void CAutoTunerTuningStatePublisher::SetEpsilonManual(const bool epsilonManual)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->epsilonManual = epsilonManual;
    }
}

void CAutoTunerTuningStatePublisher::SetKcMin(const double kcMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMin = kcMin;
    }
}

void CAutoTunerTuningStatePublisher::SetKcMax(const double kcMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kcMax = kcMax;
    }
}

void CAutoTunerTuningStatePublisher::SetTiMin(const double tiMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMin = tiMin;
    }
}

void CAutoTunerTuningStatePublisher::SetTiMax(const double tiMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->tiMax = tiMax;
    }
}

void CAutoTunerTuningStatePublisher::SetInitK(const double initK)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initK = initK;
    }
}

void CAutoTunerTuningStatePublisher::SetInitTau(const double initTau)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initTau = initTau;
    }
}

void CAutoTunerTuningStatePublisher::SetInitPreFilter(const double initPreFilter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->initPreFilter = initPreFilter;
    }
}

void CAutoTunerTuningStatePublisher::SetR1(const double r1)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r1 = r1;
    }
}

void CAutoTunerTuningStatePublisher::SetR2(const double r2)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->r2 = r2;
    }
}

