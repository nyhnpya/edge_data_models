#ifndef __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 
#define __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"

class CCirculateObjectivePublisher : public TPublisher< ProcessCirculation::CirculateObjective >
{
 public:
    CCirculateObjectivePublisher();
    ~CCirculateObjectivePublisher();

    bool Create(int32_t domain);
    bool PublishSample();

    void SetId(const DataTypes::Uuid id);
    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetTargetFlowRate(DDS_Double targetFlowRate);
};

#endif // __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 
