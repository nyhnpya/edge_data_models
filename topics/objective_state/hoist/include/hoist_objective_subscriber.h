#ifndef __HOIST_OBJECTIVE_SUBSCRIBER_H__ 
#define __HOIST_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistObjectiveSubscriber : public TSubscriber< ProcessHoist::HoistObjective >
{
 public:
    typedef std::function<void(const ProcessHoist::HoistObjective &data)> onDataAvailableEvent;

    CHoistObjectiveSubscriber();
    ~CHoistObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(onDataAvailableEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid id);
    bool GetEstimatedDuration(DataTypes::Time estimatedDuration);
    bool GetTargetVelocity(double targetVelocity);
    bool GetTargetDestination(double targetDestination);

 protected:
    ///Derived Methods
    void DataAvailable(const ProcessHoist::HoistObjective &data,
                       const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

 private:
    ProcessHoist::HoistObjective m_data;
    DDS::SampleInfo              m_sampleInfo;
    onDataAvailableEvent         m_pOnDataAvailable;
};

#endif // __HOIST_OBJECTIVE_SUBSCRIBER_H__ 
