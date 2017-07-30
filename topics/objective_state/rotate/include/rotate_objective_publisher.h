#ifndef __ROTATE_OBJECTIVE_PUBLISHER_H__ 
#define __ROTATE_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateObjectivePublisher : public TPublisher< SafeRotationFunctions::RotateObjective >
{
 public:
    CRotateObjectivePublisher();
    ~CRotateObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetTargetRate(double targetRate);
};

#endif // __ROTATE_OBJECTIVE_PUBLISHER_H__ 
