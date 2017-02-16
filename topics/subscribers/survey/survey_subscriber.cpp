#include "survey_subscriber.h"

//----------------------------------------------
// Singleton Instance
//----------------------------------------------
CSurveySubscriber *CSurveySubscriber::m_pInstance = nullptr;
std::mutex CSurveySubscriber::m_mutex;

CSurveySubscriber *CSurveySubscriber::Instance()
{
    m_mutex.lock();
    if (m_pInstance == nullptr)
    {
        m_pInstance = new CSurveySubscriber();
    }
    m_mutex.unlock();

    return m_pInstance;
}

void CSurveySubscriber::Destroy()
{
    m_mutex.lock();
    if (m_pInstance != nullptr)
    {
        delete m_pInstance;
        m_pInstance = nullptr;
    }
    m_mutex.unlock();
}

CSurveySubscriber::CSurveySubscriber()
{
}

CSurveySubscriber::~CSurveySubscriber()
{
}

bool CSurveySubscriber::GetMeasuredDepth(double &measuredDepth)
{
    measuredDepth = m_data.measuredDepth;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetInclination(double &inclination)
{
    inclination = m_data.inclination;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetAzimuth(double &azimuth)
{
    azimuth = m_data.azimuth;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetTotalVerticalDepth(double &totalVerticalDepth)
{
    totalVerticalDepth = m_data.totalVerticalDepth;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetDogLeg(double &dogLeg)
{
    dogLeg = m_data.dogLeg;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetVerticalSection(double &verticalSection)
{
    verticalSection = m_data.verticalSection;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetEastWest(double &eastWest)
{
    eastWest = m_data.eastWest;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetNorthSouth(double &northSouth)
{
    northSouth = m_data.northSouth;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetCL(double &cl)
{
    cl = m_data.cl;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetCA(double &ca)
{
    ca = m_data.ca;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetCD(double &cd)
{
    cd = m_data.cd;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetTurnRate(double &turnRate)
{
    turnRate = m_data.turnRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetBuildRate(double &buildRate)
{
    buildRate = m_data.buildRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetTopOfTarget(double &topOfTarget)
{
    topOfTarget = m_data.topOfTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetBottomOfTarget(double &bottomOfTarget)
{
    bottomOfTarget = m_data.bottomOfTarget;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetDip(double &dip)
{
    dip = m_data.dip;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::GetFault(double &fault)
{
    fault = m_data.fault;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CSurveySubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile",
                               Downhole::SURVEY_STATE);
}

void CSurveySubscriber::DataAvailable(const Downhole::SurveyState &data,
                                      const DDS::SampleInfo &sampleInfo)
{
    m_data = data;
    m_sampleInfo = sampleInfo;
}

void CSurveySubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}
