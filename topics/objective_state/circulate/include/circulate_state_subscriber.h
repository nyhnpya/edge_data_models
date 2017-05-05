#ifndef __CIRCULATE_STATE_SUBSCRIBER_H__ 
#define __CIRCULATE_STATE_SUBSCRIBER_H__ 

#include <mutex>
#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"

class CCirculateStateSubscriber : public TSubscriber< ProcessCirculation::CirculateState>
{
public:
    typedef std::function<void(const ProcessCirculation::CirculateState &data)> OnDataAvailableEvent;

    CCirculateStateSubscriber();
    virtual ~CCirculateStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetStatus(DataTypes::Status &status);
    bool GetActualFlowRate(double &actualFlowRate);
    bool GetActualStandpipePressure(double &actualStandpipePressure);
    bool GetMinFlowRate(double &minRateFlowRate);
    bool GetMaxFlowRate(double &maxRateFlowRate);
    bool GetMinStandpipePressure(double &minStandpipePressure);
    bool GetMaxStandpipePressure(double &maxStandpipePressure);
    bool GetTargetFlowRate(double &targetFlowRate);

protected:
    ///Derived Methods
    void DataAvailable(const ProcessCirculation::CirculateState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
    ProcessCirculation::CirculateState m_data;
    DDS::SampleInfo                    m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent               m_pOnDataAvailable;
    OnDataDisposedEvent                m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __CIRCULATE_STATE_SUBSCRIBER_H__ 
