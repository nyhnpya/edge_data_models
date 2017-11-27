#ifndef __ROTATE_OBJECTIVE_PUBLISHER_H__ 
#define __ROTATE_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::angular_velocity;

class CRotateObjectivePublisher : public TPublisher< nec::process::RotateObjective >
{
 public:
    CRotateObjectivePublisher();
    ~CRotateObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetTargetRate(radians_per_second_t targetRate);
};

#endif // __ROTATE_OBJECTIVE_PUBLISHER_H__ 
