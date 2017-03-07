#ifndef __ROTATE_STATE_SUBSCRIBER_H__
#define __ROTATE_STATE_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateStateSubscriber : public TSubscriber< ProcessRotation::RotateState>
{
public:
    typedef std::function<void(const ProcessRotation::RotateState &data)> OnDataAvailableEvent;

    CRotateStateSubscriber();
    virtual ~CRotateStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetStatus(DataTypes::Status &status);
    bool GetActualRate(double &actualRate);
    bool GetMinRate(double &minRate);
    bool GetMaxRate(double &maxRate);
    bool GetTargetRate(double &targetRate);

protected:
    ///Derived Methods
    void DataAvailable(const ProcessRotation::RotateState &data,
                       const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

private:
    ProcessRotation::RotateState m_data;
    DDS::SampleInfo              m_sampleInfo;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
}; 

#endif // __ROTATE_STATE_SUBSCRIBER_H__
