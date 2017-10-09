#ifndef __ROTATE_STATE_PUBLISHER_H__ 
#define __ROTATE_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::angular_velocity;

class CRotateStatePublisher : public TPublisher< nec::process::RotateState >
{
 public:
    CRotateStatePublisher();
    ~CRotateStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetStatus(const DataTypes::Status status);
    void SetActualRate(radians_per_second_t actualRate);
    void SetMinRate(radians_per_second_t minRate);
    void SetMaxRate(radians_per_second_t maxRate);
    void SetTargetRate(radians_per_second_t targetRate);
};

#endif // __ROTATE_STATE_PUBLISHER_H__ 
