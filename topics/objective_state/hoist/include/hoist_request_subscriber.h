#ifndef __HOIST_REQUEST_SUBSCRIBER_H__ 
#define __HOIST_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistRequestSubscriber : public TSubscriber< ProcessHoist::HoistRequest >
{
 public:
    typedef std::function<void(const ProcessHoist::HoistRequest &data)> onDataAvailableEvent;

    CHoistRequestSubscriber();
    ~CHoistRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(onDataAvailableEvent event);

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

 private:
    ProcessHoist::HoistRequest m_data;
    DDS::SampleInfo            m_sampleInfo;
    onDataAvailableEvent       m_pOnDataAvailable;
};

#endif // __HOIST_REQUEST_SUBSCRIBER_H__ 
