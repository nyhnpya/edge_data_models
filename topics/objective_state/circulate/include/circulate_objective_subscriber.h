#ifndef __CIRCULATE_OBJECTIVE_SUBSCRIBER_H__ 
#define __CIRCULATE_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"

class CCirculateObjectiveSubscriber : public TSubscriber< SafeCirculateFunctions::CirculateObjective >
{
 public:
    typedef std::function<void(const SafeCirculateFunctions::CirculateObjective &data)> OnDataAvailableEvent;

    CCirculateObjectiveSubscriber();
    ~CCirculateObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetEstimatedDuration(DataTypes::Time &estimatedDuration);
    bool GetTargetFlowRate(double &targetFlowRate);

 protected:
    void DataAvailable(const SafeCirculateFunctions::CirculateObjective &data, 
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

private:
    SafeCirculateFunctions::CirculateObjective m_data;
    DDS::SampleInfo                        m_sampleInfo;
    DDS::LivelinessChangedStatus           m_livelinessStatus;
    OnDataAvailableEvent                   m_pOnDataAvailable;
    OnDataDisposedEvent                    m_pOnDataDisposed;
    OnLivelinessChangedEvent               m_pOnLivelinessChanged;
};

#endif // __CIRCULATE_OBJECTIVE_SUBSCRIBER_H__ 
