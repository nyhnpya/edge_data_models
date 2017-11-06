#ifndef __HOIST_STATE_SUBSCRIBER_H__ 
#define __HOIST_STATE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"
#undef pascal
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::length;
using namespace units::velocity;

class CHoistStateSubscriber : public TSubscriber< nec::process::HoistState >
{
 public:
    typedef std::function<void(const nec::process::HoistState &data)> OnDataAvailableEvent;

    CHoistStateSubscriber();
    ~CHoistStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetStatus(DataTypes::Status &status);
    bool GetActualVelocity(meters_per_second_t &actualVelocity);
    bool GetActualPosition(meter_t &actualPosition);
    bool GetMaxHoistVelocity(meters_per_second_t &maxHoistVelocity);
    bool GetMaxLowerVelocity(meters_per_second_t  &maxLowerVelocity);
    bool GetMaxHoistPosition(meter_t &maxHoistPosition);
    bool GetMaxLowerPosition(meter_t &maxLowerPosition);
    bool GetTargetVelocity(meters_per_second_t &targetVelocity);
    bool GetTargetPosition(meter_t &targetPosition);

 protected:
    ///Derived Methods
    void DataAvailable(const nec::process::HoistState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    nec::process::HoistState m_data;
    DDS::SampleInfo          m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent     m_pOnDataAvailable;
    OnDataDisposedEvent      m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __HOIST_STATE_SUBSCRIBER_H__ 
