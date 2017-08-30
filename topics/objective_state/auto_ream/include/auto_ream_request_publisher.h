#ifndef __AUTO_REAM_REQUEST_PUBLISHER_H__
#define __AUTO_REAM_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"

class CAutoReamRequestPublisher : public TPublisher< nec::process::AutoReamRequest >
{
 public:
    CAutoReamRequestPublisher();
    ~CAutoReamRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
};

#endif // __AUTO_REAM_REQUEST_PUBLISHER_H__
