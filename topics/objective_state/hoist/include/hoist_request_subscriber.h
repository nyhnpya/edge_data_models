#ifndef __HOIST_REQUEST_SUBSCRIBER_H__ 
#define __HOIST_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"
#undef pascal
#include "units.h"

using namespace units;
//using namespace units::literals;
using namespace units::length;
using namespace units::velocity;

class CHoistRequestSubscriber : public TSubscriber< nec::process::HoistRequest >
{
 public:
    typedef std::function<void(const nec::process::HoistRequest &data)> OnDataAvailableEvent;

    CHoistRequestSubscriber();
    ~CHoistRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters
    bool GetId(DataTypes::Uuid &id);
    bool GetPriority(DataTypes::Priority &priority);
    bool GetTimeNeeded(DataTypes::Time &timeNeeded);
    bool GetDuration(DataTypes::Time &duration);
    bool GetTargetVelocity(meters_per_second_t &targetVelocity);
    bool GetTargetPosition(meter_t &targetPosition);

 protected:
    ///Derived Methods
    void DataAvailable(const nec::process::HoistRequest &data, 
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::process::HoistRequest   m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __HOIST_REQUEST_SUBSCRIBER_H__ 
