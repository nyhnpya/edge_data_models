#ifndef __HOIST_REQUEST_SUBSCRIBER_H__ 
#define __HOIST_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistRequestSubscriber : public TSubscriber< ProcessHoist::HoistRequest >
{
 public:
    typedef std::function<void(const ProcessHoist::HoistRequest &data)> OnDataAvailableEvent;

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
    bool GetTargetVelocity(double &targetVelocity);
    bool GetTargetDestination(double &targetDestination);

 protected:
    ///Derived Methods
    void DataAvailable(const ProcessHoist::HoistRequest &data, 
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    ProcessHoist::HoistRequest   m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __HOIST_REQUEST_SUBSCRIBER_H__ 
