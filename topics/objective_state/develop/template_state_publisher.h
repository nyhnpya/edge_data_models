/*
 *  Copyright (c) 2018 Ensign Energy Incorporated
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Ensign Energy Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Ensign Energy Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Ensign Energy Incorporated.
 */
#ifndef __TEMPLATE_STATE_PUBLISHER_H__ 
#define __TEMPLATE_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "template.h"
#include "templateSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;

class CTemplateStatePublisher : public TPublisher< nec::process::TemplateState >
{
 public:
    CTemplateStatePublisher();
    ~CTemplateStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();
};

#endif // __TEMPLATE_STATE_PUBLISHER_H__ 
