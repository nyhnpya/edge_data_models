#ifndef __WELLBORE_STATE_PUBLISHER_H__
#define __WELLBORE_STATE_PUBLISHER_H__

#include <mutex>
#include "publisher.h"
#include "base_data_types.h"
#include "wellbore.h"
#include "wellboreSupport.h"

class CWellboreStatePublisher : public TPublisher<nec::process::Wellbore>
{
public:
    CWellboreStatePublisher();
    virtual ~CWellboreStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetBitDepth(double bitDept);
    void SetHoleDepth(double holeDepth);

private:
};

#endif // __WELLBORE_STATE_PUBLISHER_H__
