#include <string.h>
#include "pipe_tally_subscriber.h"

//----------------------------------------------
// Singleton Instance
//----------------------------------------------
CPipeTallyStateSubscriber *CPipeTallyStateSubscriber::m_pInstance = nullptr;
std::mutex CPipeTallyStateSubscriber::m_mutex;

CPipeTallyStateSubscriber *CPipeTallyStateSubscriber::Instance()
{
    m_mutex.lock();
    if (m_pInstance == nullptr)
    {
        m_pInstance = new CPipeTallyStateSubscriber();
    }
    m_mutex.unlock();

    return m_pInstance;
}

void CPipeTallyStateSubscriber::Destroy()
{
    m_mutex.lock();
    if (m_pInstance != nullptr)
    {
        delete m_pInstance;
        m_pInstance = nullptr;
    }
    m_mutex.unlock();
}

CPipeTallyStateSubscriber::CPipeTallyStateSubscriber()
{
}

CPipeTallyStateSubscriber::~CPipeTallyStateSubscriber()
{
}

bool CPipeTallyStateSubscriber::GetSerialNumber(const char *serialNumber)
{
    serialNumber = DDS_String_dup(m_data.serialNumber);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetJointNumber(uint32_t &jointNumber)
{
    jointNumber = m_data.jointNumber;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetStandNumber(uint32_t &standNumber)
{
    standNumber = m_data.standNumber;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetWeight(double &weight)
{
    weight = m_data.weight;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetInnerDiameter(double &innerDiameter)
{
    innerDiameter = m_data.innerDiameter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetOuterDiameter(double &outerDiameter)
{
    outerDiameter = m_data.outerDiameter;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetKellyDown(double &kellyDown)
{
    kellyDown = m_data.kellyDown;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetLength(double &length)
{
    length = m_data.length;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetPipeLength(double &pipeLength)
{
    pipeLength = m_data.pipeLength;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetStringLength(double &stringLength)
{
    stringLength = m_data.stringLength;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetDescription(const char *description)
{
    description = m_data.description;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::GetPipeType(DataTypes::PipeType &pipeType)
{
    pipeType = m_data.pipeType;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CPipeTallyStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               PipeHandling::PIPE_TALLY,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CPipeTallyStateSubscriber::OnDataAvailable(onDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CPipeTallyStateSubscriber::DataAvailable(const PipeHandling::PipeTally &data,
                                              const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.timestamp.sec = data.timestamp.sec;
        m_data.timestamp.nanosec = data.timestamp.nanosec;
        m_data.serialNumber = DDS_String_dup(data.serialNumber);
        m_data.jointNumber = data.jointNumber;
        m_data.standNumber = data.standNumber;
        m_data.weight = data.weight;
        m_data.innerDiameter = data.innerDiameter;
        m_data.outerDiameter = data.outerDiameter;
        m_data.kellyDown = data.kellyDown;
        m_data.length = data.length;
        m_data.pipeLength = data.pipeLength;
        m_data.stringLength = data.stringLength;
        m_data.description = DDS_String_dup(data.description);
        m_data.pipeType = data.pipeType;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CPipeTallyStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;
}
