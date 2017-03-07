#ifndef __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 
#define __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateObjectiveSubscriber : public TSubscriber< ProcessRotation::RotateObjective >
{
 public:
    typedef std::function<void(const ProcessRotation::RotateObjective &data)> OnDataAvailableEvent;

    CRotateObjectiveSubscriber();
    ~CRotateObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetEstimatedDuration(DataTypes::Time &estimatedDuration);
    bool GetTargetRate(double &targetRate);

 protected:
    void DataAvailable(const ProcessRotation::RotateObjective &data, 
                       const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

 private:
    ProcessRotation::RotateObjective m_data;
    DDS::SampleInfo                  m_sampleInfo;
    OnDataAvailableEvent             m_pOnDataAvailable;
    OnDataDisposedEvent              m_pOnDataDisposed;
};

#endif // __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 
