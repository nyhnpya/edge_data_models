#ifndef __SIM_AUTODRILLER_STATE_SUBSCRIBER_H__
#define __SIM_AUTODRILLER_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drill_simulation.h"
#include "drill_simulationSupport.h"

class CSimDrillStateSubscriber : public TSubscriber< Simulation::AutoDrillerState >
{
 public:
    typedef std::function<void(const Simulation::AutoDrillerState &data)> OnDataAvailableEvent;

    CSimDrillStateSubscriber();
    ~CSimDrillStateSubscriber();

	// Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetRopActual(double &ropActual);
    bool GetWobActual(double &wobActual);
    bool GetDifferentialPressureActual(double &differentialPressureActual);
    bool GetTorqueActual(double &torqueActual);
    bool GetRopLimit(double &ropLimit);
    bool GetWobLimit(double &wobLimit);
    bool GetDifferentialPressureLimit(double &differentialPressureLimit);
    bool GetTorqueLimit(double &torqueLimit);
    bool GetRopMode(bool &ropMode);
    bool GetWobMode(bool &wobMode);
    bool GetDifferentialPressureMode(bool &differentialPressureMode);
    bool GetTorqueMode(bool &torqueMode);
    bool GetRopTarget(double &ropTarget);
    bool GetWobTarget(double &wobTarget);
    bool GetDifferentialPressureTarget(double &differentialPressureTarget);
    bool GetTorqueTarget(double &torqueTarget);

	// Topic status
	bool ValidData();
	bool ValidSubscription();

 protected:
    void DataAvailable(const Simulation::AutoDrillerState &data,
               const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
	 bool                         m_subscriptionMatched;
	 Simulation::AutoDrillerState m_data;
    DDS::SampleInfo               m_sampleInfo;
	OnDataAvailableEvent          m_pOnDataAvailable;
	OnDataDisposedEvent           m_pOnDataDisposed;
	OnLivelinessChangedEvent      m_pOnLivelinessChanged;
	OnSubscriptionMatchedEvent    m_pOnSubscriptionMatched;
};

#endif // __SIM_AUTODRILLER_STATE_SUBSCRIBER_H__
