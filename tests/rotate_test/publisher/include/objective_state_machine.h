#ifndef __OBJECTIVE_STATE_MACHINE_H__
#define __OBJECTIVE_STATE_MACHINE_H__

#include <mutex>
#include "objective_state_subscriber.h"

class CObjectiveStateMachine 
{
 public:
    virtual ~CObjectiveStateMachine();

    static CObjectiveStateMachine *Instance();
    static void Destroy();

    virtual bool Initialize(int32_t domain);
    DataTypes::Uuid GetId();
    DataTypes::Objective GetObjective();

 private:
    CObjectiveStateSubscriber m_objectiveSubscriber;
    std::mutex                m_dataMutex;

    void DataAvailable(const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    
    // Singleton management
    CObjectiveStateMachine();

    static std::mutex              m_instanceMutex;
    static CObjectiveStateMachine *m_pInstance;
};

#endif //__OBJECTIVE_STATE_MACHINE_H__
