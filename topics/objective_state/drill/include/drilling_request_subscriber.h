#ifndef __DRILLING_REQUEST_SUBSCRIBER_H__
#define __DRILLING_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drilling.h"
#include "drillingSupport.h"

class CDrillingRequestSubscriber : public TSubscriber< nec::process::DrillingRequest >
{
 public:
    typedef std::function<void(const nec::process::DrillingRequest &data)> OnDataAvailableEvent;

    CDrillingRequestSubscriber();
    ~CDrillingRequestSubscriber();

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
    bool GetRopLimit(double &ropLimit);
    bool GetWobLimit(double &wobLimit);
    bool GetDifferentialPressureLimit(double &differentialPressureLimit);
    bool GetTorqueLimit(double &torqueLimit);
    bool GetRopMode(bool &ropMode);
    bool GetWobMode(bool &wobMode);
    bool GetDifferentialPressureMode(bool &differentialPressureMode);
    bool GetTorqueMode(bool &torqueMode);

 protected:
    void DataAvailable(const nec::process::DrillingRequest &data,
               const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::process::DrillingRequest m_data;
    DDS::SampleInfo           m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent      m_pOnDataAvailable;
    OnDataDisposedEvent       m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __DRILLING_REQUEST_SUBSCRIBER_H__
