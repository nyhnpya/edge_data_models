#ifndef __CIRCULATE_REQUEST_SUBSCRIBER_H__ 
#define __CIRCULATE_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"

class CCirculateRequestSubscriber : public TSubscriber< ProcessCirculation::CirculateRequest >
{
 public:
    typedef std::function<void(const ProcessCirculation::CirculateRequest &data)> OnDataAvailableEvent;

    CCirculateRequestSubscriber();
    ~CCirculateRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetPriority(DataTypes::Priority &priority);
    bool GetTimeNeeded(DataTypes::Time &timeNeeded);
    bool GetDuration(DataTypes::Time &duration);
    bool GetTargetFlowRate(double &targetFlowRate);

 protected:
    void DataAvailable(const ProcessCirculation::CirculateRequest &data, 
                       const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

private:
    ProcessCirculation::CirculateRequest m_data;
    DDS::SampleInfo                      m_sampleInfo;
    OnDataAvailableEvent                 m_pOnDataAvailable;
    OnDataDisposedEvent                  m_pOnDataDisposed;
};

#endif // __CIRCULATE_REQUEST_SUBSCRIBER_H__ 
