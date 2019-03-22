/*
 *  Copyright (c) 2019 Ensign Energy Incorporated
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
#include "dds_uuid.h"
#include "plc_rotate_request_publisher.h"

CPlcRotateRequestPublisher::CPlcRotateRequestPublisher()
{
}

CPlcRotateRequestPublisher::~CPlcRotateRequestPublisher()
{
}

bool CPlcRotateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::ROTATE_REQUEST_TOPIC,
                       "EdgeBaseLibrary",
                       "PlcProfile");
}

bool CPlcRotateRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CPlcRotateRequestPublisher::PublishSample()
{
    return Publish();
}

void CPlcRotateRequestPublisher::SetTargetRate(double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

