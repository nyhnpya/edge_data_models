#ifndef __HOIST_OBJECTIVE_SUBSCRIBER_H__ 
#define __HOIST_OBJECTIVE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::velocity;

class CHoistObjectiveSubscriber : public TSubscriber< nec::process::HoistObjective >
{
 public:
    typedef std::function<void(const nec::process::HoistObjective &data)> OnDataAvailableEvent;

    CHoistObjectiveSubscriber();
    ~CHoistObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid id);
    bool GetEstimatedDuration(DataTypes::Time &estimatedDuration);
    bool GetTargetVelocity(meters_per_second_t &targetVelocity);
    bool GetTargetPosition(meter_t &targetPosition);

 protected:
    ///Derived Methods
    void DataAvailable(const nec::process::HoistObjective &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::process::HoistObjective m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __HOIST_OBJECTIVE_SUBSCRIBER_H__ 
