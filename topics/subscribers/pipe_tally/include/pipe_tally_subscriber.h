#ifndef __PIPE_TALLY_STATE_SUBSCRIBER_H__
#define __PIPE_TALLY_STATE_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "base_data_types.h"
#include "pipe_tally.h"
#include "pipe_tallySupport.h"

class CPipeTallyStateSubscriber : public TSubscriber< PipeHandling::PipeTally>
{
public:
    typedef std::function<void(const PipeHandling::PipeTally &data)> OnDataAvailableEvent;

    /// @return singleton instance
    static CPipeTallyStateSubscriber *Instance(void);
    static void Destroy(void);

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // Topic getters
    bool GetSerialNumber(const char *serialNumber);
    bool GetJointNumber(uint32_t &jointNumber);
    bool GetStandNumber(uint32_t &standNumber);
    bool GetWeight(double &weight);
    bool GetInnerDiameter(double &innerDiameter);
    bool GetOuterDiameter(double &outerDiameter);
    bool GetKellyDown(double &kellyDown);
    bool GetLength(double &length);
    bool GetPipeLength(double &pipeLength);
    bool GetStringLength(double &stringLength);
    bool GetDescription(const char *description);
    bool GetPipeType(DataTypes::PipeType &pipeType);

protected:
    ///Derived Methods
    void OnDataAvailable(const PipeHandling::PipeTally &data,
                         const DDS::SampleInfo &sampleInfo);
    void OnDataDisposed(const DDS::SampleInfo &sampleInfo);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

private:
    CPipeTallyStateSubscriber();
    virtual ~CPipeTallyStateSubscriber();

    PipeHandling::PipeTally      m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;

    static CPipeTallyStateSubscriber *m_pInstance;
    static std::mutex                 m_mutex;
};

#endif // __PIPE_TALLY_STATE_SUBSCRIBER_H__
