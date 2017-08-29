#ifndef __PIPE_TALLY_STATE_PUBLISHER_H__
#define __PIPE_TALLY_STATE_PUBLISHER_H__

#include <mutex>
#include "publisher.h"
#include "base_data_types.h"
#include "pipe_tally.h"
#include "pipe_tallySupport.h"

class CPipeTallyStatePublisher : public TPublisher< nec::process::PipeTally>
{
public:
    /// @return singleton instance
    static CPipeTallyStatePublisher *Instance(void);
    static void Destroy(void);

    bool Create(int32_t domain);
    bool PublishSample();

    // Topic setters
    void SetSerialNumber(const char *serialNumber);
    void SetJointNumber(uint32_t jointNumber);
    void SetStandNumber(uint32_t standNumber);
    void SetWeight(double weight);
    void SetInnerDiameter(double innerDiameter);
    void SetOuterDiameter(double outerDiameter);
    void SetKellyDown(double kellyDown);
    void SetLength(double length);
    void SetPipeLength(double pipeLength);
    void SetStringLength(double stringLength);
    void SetDescription(const char *description);
    void SetPipeType(DataTypes::PipeType pipeType);

private:
    CPipeTallyStatePublisher();
    virtual ~CPipeTallyStatePublisher();

    static CPipeTallyStatePublisher *m_pInstance;
    static std::mutex               m_mutex;
};

#endif // __PIPE_TALLY_STATE_PUBLISHER_H__
