#ifndef __OBJECTIVE_STATE_PUBLISHER_H__
#define __OBJECTIVE_STATE_PUBLISHER_H__

#include <mutex>
#include "publisher.h"
#include "base_data_types.h"
#include "objective.h"
#include "objectiveSupport.h"

class CObjectiveStatePublisher : public TPublisher< process::plan::ObjectiveState>
{
public:
    CObjectiveStatePublisher();
    virtual ~CObjectiveStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetObjective(DataTypes::Objective objective);
};

#endif // __OBJECTIVE_STATE_PUBLISHER_H__
