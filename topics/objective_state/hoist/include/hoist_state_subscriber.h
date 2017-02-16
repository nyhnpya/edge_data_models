#ifndef __HOIST_STATE_SUBSCRIBER_H__ 
#define __HOIST_STATE_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistStateSubscriber : public TSubscriber< ProcessHoist::HoistState >
{
 public:
    typedef std::function<void(const ProcessHoist::HoistState &data)> onDataAvailableEvent;

    CHoistStateSubscriber();
    ~CHoistStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(onDataAvailableEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetStatus(DataTypes::Status &status);
    bool GetActualVelocity(double &actualVelocity);
    bool GetActualPosition(double &actualPosition);
    bool GetMaxHoistVelocity(double &maxHoistVelocity);
    bool GetMaxLowerVelocity(double &maxLowerVelocity);
    bool GetMaxHoistPosition(double &maxHoistPosition);
    bool GetMaxLowerPosition(double &maxLowerPosition);
    bool GetTargetVelocity(double &targetVelocity);
    bool GetTargetPosition(double &targetPosition);

 protected:
    ///Derived Methods
    void DataAvailable(const ProcessHoist::HoistState &data,
                       const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

 private:
    ProcessHoist::HoistState m_data;
    DDS::SampleInfo          m_sampleInfo;
    onDataAvailableEvent     m_pOnDataAvailable;
};

#endif // __HOIST_STATE_SUBSCRIBER_H__ 
