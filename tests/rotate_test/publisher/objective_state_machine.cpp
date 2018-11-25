#include "plant_interface.h"
#include "objective_state_machine.h"
#include "dds_uuid.h"

CObjectiveStateMachine *CObjectiveStateMachine::m_pInstance = nullptr;
std::mutex CObjectiveStateMachine::m_instanceMutex;

CObjectiveStateMachine *CObjectiveStateMachine::Instance()
{
    m_instanceMutex.lock();
    {
        if (m_pInstance == nullptr)
        {
            m_pInstance = new CObjectiveStateMachine();
        }
    }
    m_instanceMutex.unlock();

    return m_pInstance;
}

void CObjectiveStateMachine::Destroy()
{
    m_instanceMutex.lock();
    {
        if (m_pInstance != nullptr)
        {
            delete m_pInstance;
            m_pInstance = nullptr;
        }
    }
    m_instanceMutex.unlock();
}

CObjectiveStateMachine::CObjectiveStateMachine()
{
}

CObjectiveStateMachine::~CObjectiveStateMachine()
{
    m_objectiveSubscriber.Destroy();
}

DataTypes::Uuid CObjectiveStateMachine::GetId()
{
    return m_objectiveSubscriber.GetId();
}

DataTypes::Objective CObjectiveStateMachine::GetObjective()
{
    return m_objectiveSubscriber.GetObjective();
}

void CObjectiveStateMachine::DataAvailable(const DDS::SampleInfo &sampleInfo)
{
    DataTypes::Objective objective = GetObjective();

    switch (objective)
    {
        case DataTypes::Drilling:
        {
            LOG_INFO("Rig state Drilling");
            break;
        }
        case DataTypes::Casing:
            LOG_INFO("Rig state Casing");
            break;
        case DataTypes::Tripping:
            LOG_INFO("Rig state Tripping");
            break;
        case DataTypes::CleaningHole:
            LOG_INFO("Rig state CleaningHole");
            break;
        case DataTypes::AutoReaming:
            LOG_INFO("Rig state AutoReaming");
            break;
        case DataTypes::None:
            LOG_INFO("Rig state Unknown");
            break;
    }
}

void CObjectiveStateMachine::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Data Disposed");

    if (sampleInfo.valid_data == DDS_BOOLEAN_FALSE)
    {
    }
}

bool CObjectiveStateMachine::Initialize(int32_t domain)
{
    bool retVal = false;

    LOG_INFO("Initializing objective state machine");

    if ((retVal = m_objectiveSubscriber.Create(domain)) == true)
    {
            m_objectiveSubscriber.OnDataAvailable([&](const DDS::SampleInfo &sampleInfo)
                                                  {
                                                      this->DataAvailable(sampleInfo);
                                                  });

            m_objectiveSubscriber.OnDataDisposed([&](const DDS::SampleInfo &sampleInfo)
                                                 {
                                                     this->DataDisposed(sampleInfo);
                                                 });
    }
    else
    {
        LOG_ERROR("Failed to initialize objectivey state machine");
    }

    return retVal;
}
