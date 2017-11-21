#ifndef __DRILLING_STATE_SUBSCRIBER_H__
#define __DRILLING_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "drilling.h"
#include "drillingSupport.h"
#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::length;
using namespace units::velocity;
using namespace units::force;
using namespace units::torque;
using namespace units::pressure;

class CDrillingStateSubscriber : public TSubscriber< nec::process::DrillingState >
{
 public:
    typedef std::function<void(const nec::process::DrillingState &data)> OnDataAvailableEvent;

    CDrillingStateSubscriber();
    ~CDrillingStateSubscriber();

        // Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetTimestamp(DataTypes::Time &timestamp);
    bool GetRopActual(meters_per_second_t &ropActual);
    bool GetWobActual(newton_t &wobActual);
    bool GetDifferentialPressureActual(pascal_t &differentialPressureActual);
    bool GetTorqueActual(newton_meter_t &torqueActual);
    bool GetRopLimit(meters_per_second_t &ropLimit);
    bool GetWobLimit(newton_t &wobLimit);
    bool GetDifferentialPressureLimit(pascal_t &differentialPressureLimit);
    bool GetTorqueLimit(newton_meter_t &torqueLimit);
    bool GetRopMode(bool &ropMode);
    bool GetWobMode(bool &wobMode);
    bool GetDifferentialPressureMode(bool &differentialPressureMode);
    bool GetTorqueMode(bool &torqueMode);
    bool GetRopTarget(meters_per_second_t &ropTarget);
    bool GetWobTarget(newton_t &wobTarget);
    bool GetDifferentialPressureTarget(pascal_t &differentialPressureTarget);
    bool GetTorqueTarget(newton_meter_t &torqueTarget);

    // Topic status
    bool ValidData();
    bool ValidSubscription();

 protected:
    void DataAvailable(const nec::process::DrillingState &data,
		       const DDS::SampleInfo &sampleInfo);
    
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    bool                         m_subscriptionMatched;
    nec::process::DrillingState      m_data;
    DDS::SampleInfo              m_sampleInfo;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __DRILLING_STATE_SUBSCRIBER_H__
