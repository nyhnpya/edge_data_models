#include "rotate_state_subscriber.h"

CRotateStateSubscriber::CRotateStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CRotateStateSubscriber::~CRotateStateSubscriber()
{
}

bool CRotateStateSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetStatus(DataTypes::Status &status)
{
    status = m_data.status;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetActualRate(double &actualRate)
{
    actualRate = m_data.actualRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetMinRate(double &minRate)
{
    minRate = m_data.minRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetMaxRate(double &maxRate)
{
    maxRate = m_data.maxRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::GetTargetRate(double &targetRate)
{
    targetRate = m_data.targetRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRotateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessRotation::ROTATE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CRotateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CRotateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CRotateStateSubscriber::DataAvailable(const ProcessRotation::RotateState &data,
                                           const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CRotateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}
