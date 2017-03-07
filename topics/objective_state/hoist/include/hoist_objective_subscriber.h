#ifndef __HOIST_OBJECTIVE_SUBSCRIBER_H__ 
#define __HOIST_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistObjectiveSubscriber : public TSubscriber< ProcessHoist::HoistObjective >
{
 public:
    typedef std::function<void(const ProcessHoist::HoistObjective &data)> OnDataAvailableEvent;

    CHoistObjectiveSubscriber();
    ~CHoistObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);

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
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
};

#endif // __HOIST_OBJECTIVE_SUBSCRIBER_H__ 
