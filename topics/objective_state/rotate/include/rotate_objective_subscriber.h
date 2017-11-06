#ifndef __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 
#define __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"
#undef pascal
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::angular_velocity;

class CRotateObjectiveSubscriber : public TSubscriber< nec::process::RotateObjective >
{
 public:
    typedef std::function<void(const nec::process::RotateObjective &data)> OnDataAvailableEvent;

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
    bool GetTargetRate(radians_per_second_t &targetRate);

 protected:
    void DataAvailable(const nec::process::RotateObjective &data, 
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::process::RotateObjective  m_data;
    DDS::SampleInfo                m_sampleInfo;
    DDS::LivelinessChangedStatus   m_livelinessStatus;
    OnDataAvailableEvent           m_pOnDataAvailable;
    OnDataDisposedEvent            m_pOnDataDisposed;
    OnLivelinessChangedEvent       m_pOnLivelinessChanged;
};

#endif // __ROTATE_OBJECTIVE_SUBSCRIBER_H__ 
