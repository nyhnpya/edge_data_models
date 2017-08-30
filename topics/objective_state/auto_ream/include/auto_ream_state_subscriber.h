#ifndef __AUTO_REAM_STATE_SUBSCRIBER_H__
#define __AUTO_REAM_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"

class CAutoReamStateSubscriber : public TSubscriber< nec::process::AutoReamState >
{
 public:
    typedef std::function<void(const nec::process::AutoReamState &data)> OnDataAvailableEvent;

    CAutoReamStateSubscriber();
    ~CAutoReamStateSubscriber();

	// Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetTimestamp(DataTypes::Time &timestamp);
    bool GetHookloadActual(double &hookloadActual);
    bool GetHoleDepthActual(double &holeDepthActual);
    bool GetDeltaPressureActual(double &deltaPressureActual);
    bool GetWeightOnBitActual(double &weightOnBitActual);
    bool GetStandpipePressureActual(double &standpipePressureActual);
    bool GetBlockSpeedActual(double &blockSpeedActual);
    bool GetQuillPositionActual(double &quillPositionActual);
    bool GetQuillRateActual(double &quillRateActual);

	// Topic status
	bool ValidData();
	bool ValidSubscription();

 protected:
    void DataAvailable(const nec::process::AutoReamState &data,
               const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
	 bool                         m_subscriptionMatched;
	 nec::process::AutoReamState      m_data;
    DDS::SampleInfo              m_sampleInfo;
	OnDataAvailableEvent         m_pOnDataAvailable;
	OnDataDisposedEvent          m_pOnDataDisposed;
	OnLivelinessChangedEvent     m_pOnLivelinessChanged;
	OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __AUTO_REAM_STATE_SUBSCRIBER_H__
