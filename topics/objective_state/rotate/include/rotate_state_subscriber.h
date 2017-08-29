#ifndef __ROTATE_STATE_SUBSCRIBER_H__
#define __ROTATE_STATE_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateStateSubscriber : public TSubscriber< nec::process::RotateState>
{
public:
    typedef std::function<void(const nec::process::RotateState &data)> OnDataAvailableEvent;

    CRotateStateSubscriber();
    virtual ~CRotateStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetStatus(DataTypes::Status &status);
    bool GetActualRate(double &actualRate);
    bool GetMinRate(double &minRate);
    bool GetMaxRate(double &maxRate);
    bool GetTargetRate(double &targetRate);

protected:
    ///Derived Methods
    void DataAvailable(const nec::process::RotateState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
    nec::process::RotateState    m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __ROTATE_STATE_SUBSCRIBER_H__
