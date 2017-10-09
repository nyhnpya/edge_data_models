#ifndef __CIRCULATE_REQUEST_SUBSCRIBER_H__ 
#define __CIRCULATE_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::pressure;

class CCirculateRequestSubscriber : public TSubscriber< nec::process::CirculateRequest >
{
 public:
    typedef std::function<void(const nec::process::CirculateRequest &data)> OnDataAvailableEvent;

    CCirculateRequestSubscriber();
    ~CCirculateRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetPriority(DataTypes::Priority &priority);
    bool GetTimeNeeded(DataTypes::Time &timeNeeded);
    bool GetDuration(DataTypes::Time &duration);
    bool GetTargetFlowRate(double &targetFlowRate);

 protected:
    void DataAvailable(const nec::process::CirculateRequest &data, 
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

private:
    nec::process::CirculateRequest m_data;
    DDS::SampleInfo                m_sampleInfo;
    DDS::LivelinessChangedStatus   m_livelinessStatus;
    OnDataAvailableEvent           m_pOnDataAvailable;
    OnDataDisposedEvent            m_pOnDataDisposed;
    OnLivelinessChangedEvent       m_pOnLivelinessChanged;
};

#endif // __CIRCULATE_REQUEST_SUBSCRIBER_H__ 
