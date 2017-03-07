#include "circulate_state_subscriber.h"

CCirculateStateSubscriber::CCirculateStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CCirculateStateSubscriber::~CCirculateStateSubscriber()
{
}

bool CCirculateStateSubscriber::GetId(DataTypes::Uuid &id)
{
    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetStatus(DataTypes::Status &status)
{
    status = m_data.status;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetActualFlowRate(double &actualFlowRate)
{
    actualFlowRate = m_data.actualFlowRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetActualStandpipePressure(double &actualStandpipePressure)
{
    actualStandpipePressure = m_data.actualStandpipePressure;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetMinFlowRate(double &minFlowRate)
{
    minFlowRate = m_data.minFlowRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetMaxFlowRate(double &maxFlowRate)
{
    maxFlowRate = m_data.maxFlowRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetMinStandpipePressure(double &minStandpipePressure)
{
    minStandpipePressure = m_data.minStandpipePressure;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetMaxStandpipePressure(double &maxStandpipePressure)
{
    maxStandpipePressure = m_data.maxStandpipePressure;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::GetTargetFlowRate(double &targetFlowRate)
{
    targetFlowRate = m_data.targetFlowRate;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               ProcessCirculation::CIRCULATE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CCirculateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CCirculateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CCirculateStateSubscriber::DataAvailable(const ProcessCirculation::CirculateState &data,
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

void CCirculateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}
