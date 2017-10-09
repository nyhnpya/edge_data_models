#ifndef __WELLBORE_STATE_SUBSCRIBER_H__
#define __WELLBORE_STATE_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "base_data_types.h"
#include "wellbore.h"
#include "wellboreSupport.h"
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::length;

class CWellboreStateSubscriber : public TSubscriber< nec::process::WellboreState>
{
public:
    typedef std::function<void(const nec::process::WellboreState &data)> OnDataAvailableEvent;

    CWellboreStateSubscriber();
    virtual ~CWellboreStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    bool GetBitDepth(meter_t &bitDept);
    bool GetHoleDepth(meter_t &holeDepth);

protected:
    ///Derived Methods
    void DataAvailable(const nec::process::WellboreState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
    nec::process::WellboreState  m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __WELLBORE_STATE_SUBSCRIBER_H__
