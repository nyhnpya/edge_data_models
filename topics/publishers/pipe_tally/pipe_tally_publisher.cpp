#include "dds_uuid.h"
#include "pipe_tally_publisher.h"

//----------------------------------------------
// Singleton Instance
//----------------------------------------------
CPipeTallyStatePublisher *CPipeTallyStatePublisher::m_pInstance = nullptr;
std::mutex CPipeTallyStatePublisher::m_mutex;

CPipeTallyStatePublisher *CPipeTallyStatePublisher::Instance()
{
    m_mutex.lock();
    if (m_pInstance == nullptr)
    {
        m_pInstance = new CPipeTallyStatePublisher();
    }
    m_mutex.unlock();

    return m_pInstance;
}

void CPipeTallyStatePublisher::Destroy()
{
    m_mutex.lock();
    if (m_pInstance != nullptr)
    {
        delete m_pInstance;
        m_pInstance = nullptr;
    }
    m_mutex.unlock();
}

CPipeTallyStatePublisher::CPipeTallyStatePublisher()
{
}

CPipeTallyStatePublisher::~CPipeTallyStatePublisher()
{
}

void CPipeTallyStatePublisher::SetSerialNumber(const char *serialNumber)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->serialNumber = DDS_String_dup(serialNumber);
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetJointNumber(uint32_t jointNumber)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->jointNumber = jointNumber;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetStandNumber(uint32_t standNumber)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->standNumber = standNumber;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetWeight(double weight)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->weight = weight;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetInnerDiameter(double innerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->innerDiameter = innerDiameter;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetOuterDiameter(double outerDiameter)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->outerDiameter = outerDiameter;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetKellyDown(double kellyDown)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->kellyDown = kellyDown;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetLength(double length)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->length = length;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetPipeLength(double pipeLength)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeLength = pipeLength;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetStringLength(double stringLength)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->stringLength = stringLength;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetDescription(const char *description)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->description = DDS_String_dup(description);
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

void CPipeTallyStatePublisher::SetPipeType(DataTypes::PipeType pipeType)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pipeType = pipeType;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

bool CPipeTallyStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CPipeTallyStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              PipeHandling::PIPE_TALLY,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
