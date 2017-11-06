#ifndef __CIRCULATE_STATE_SUBSCRIBER_H__ 
#define __CIRCULATE_STATE_SUBSCRIBER_H__ 

#include <mutex>
#include "subscriber.h"
#include "circulate.h"
#include "circulateSupport.h"
#undef pascal
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::pressure;

class CCirculateStateSubscriber : public TSubscriber< nec::process::CirculateState>
{
public:
    typedef std::function<void(const nec::process::CirculateState &data)> OnDataAvailableEvent;

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
    bool GetActualStandpipePressure(pascal_t &actualStandpipePressure);
    bool GetMinFlowRate(double &minRateFlowRate);
    bool GetMaxFlowRate(double &maxRateFlowRate);
    bool GetMinStandpipePressure(pascal_t &minStandpipePressure);
    bool GetMaxStandpipePressure(pascal_t &maxStandpipePressure);
    bool GetTargetFlowRate(double &targetFlowRate);

protected:
    ///Derived Methods
    void DataAvailable(const nec::process::CirculateState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
    nec::process::CirculateState m_data;
    DDS::SampleInfo                    m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent               m_pOnDataAvailable;
    OnDataDisposedEvent                m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __CIRCULATE_STATE_SUBSCRIBER_H__ 
