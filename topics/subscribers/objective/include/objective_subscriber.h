#ifndef __OBJECTIVE_STATE_SUBSCRIBER_H__
#define __OBJECTIVE_STATE_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "base_data_types.h"
#include "objective.h"
#include "objectiveSupport.h"

class CObjectiveStateSubscriber : public TSubscriber< Plan::ObjectiveState>
{
public:
    typedef std::function<void(const Plan::ObjectiveState &data)> OnDataAvailableEvent;

    CObjectiveStateSubscriber();
    virtual ~CObjectiveStateSubscriber();

	// Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    bool GetObjective(DataTypes::Objective &objective);
	
	// Topic status
	bool ValidData();
	bool ValidSubscription();

protected:
    ///Derived Methods
    void DataAvailable(const Plan::ObjectiveState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
	bool                         m_subscriptionMatched;
    Plan::ObjectiveState         m_data;
    DDS::SampleInfo              m_sampleInfo;
    OnDataAvailableEvent         m_pOnDataAvailable;
	OnDataDisposedEvent          m_pOnDataDisposed;
	OnLivelinessChangedEvent     m_pOnLivelinessChanged;
	OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __OBJECTIVE_STATE_SUBSCRIBER_H__
