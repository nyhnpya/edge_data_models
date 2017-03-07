#ifndef __CIRCULATE_OBJECTIVE_SUBSCRIBER_H__ 
#define __CIRCULATE_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"

class CCirculateObjectiveSubscriber : public TSubscriber< ProcessCirculation::CirculateObjective >
{
 public:
    typedef std::function<void(const ProcessCirculation::CirculateObjective &data)> OnDataAvailableEvent;

    CCirculateObjectiveSubscriber();
    ~CCirculateObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetEstimatedDuration(DataTypes::Time &estimatedDuration);
    bool GetTargetFlowRate(double &targetFlowRate);

 protected:
    void DataAvailable(const ProcessCirculation::CirculateObjective &data, 
                       const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

private:
    ProcessCirculation::CirculateObjective m_data;
    DDS::SampleInfo                        m_sampleInfo;
    OnDataAvailableEvent                   m_pOnDataAvailable;
    OnDataDisposedEvent                    m_pOnDataDisposed;
};

#endif // __CIRCULATE_OBJECTIVE_SUBSCRIBER_H__ 
