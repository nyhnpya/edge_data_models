#ifndef __WELLBORE_STATE_PUBLISHER_H__
#define __WELLBORE_STATE_PUBLISHER_H__

#include <mutex>
#include "publisher.h"
#include "base_data_types.h"
#include "wellbore.h"
#include "wellboreSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;

class CWellboreStatePublisher : public TPublisher<nec::process::WellboreState>
{
public:
    CWellboreStatePublisher();
    virtual ~CWellboreStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetBitDepth(meter_t bitDept);
    void SetHoleDepth(meter_t holeDepth);

private:
};

#endif // __WELLBORE_STATE_PUBLISHER_H__
