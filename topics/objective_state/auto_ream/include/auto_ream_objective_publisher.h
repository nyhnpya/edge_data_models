#ifndef __AUTO_REAM_OBJECTIVE_PUBLISHER_H__
#define __AUTO_REAM_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"

class CAutoReamObjectivePublisher : public TPublisher< nec::process::AutoReamObjective >
{
 public:
    CAutoReamObjectivePublisher();
    ~CAutoReamObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // setters
    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
};

#endif // __AUTO_REAM_OBJECTIVE_PUBLISHER_H__
