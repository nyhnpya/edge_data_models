#ifndef __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 
#define __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateObjectiveSubscriber : public TSubscriber< SafeRotationFunctions::RotateObjective >
{
 public:
    typedef std::function<void(const SafeRotationFunctions::RotateObjective &data)> OnDataAvailableEvent;

    CRotateObjectiveSubscriber();
    ~CRotateObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetEstimatedDuration(DataTypes::Time &estimatedDuration);
    bool GetTargetRate(double &targetRate);

 protected:
    void DataAvailable(const SafeRotationFunctions::RotateObjective &data, 
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    SafeRotationFunctions::RotateObjective m_data;
    DDS::SampleInfo                  m_sampleInfo;
    DDS::LivelinessChangedStatus     m_livelinessStatus;
    OnDataAvailableEvent             m_pOnDataAvailable;
    OnDataDisposedEvent              m_pOnDataDisposed;
    OnLivelinessChangedEvent         m_pOnLivelinessChanged;
};

#endif // __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 
