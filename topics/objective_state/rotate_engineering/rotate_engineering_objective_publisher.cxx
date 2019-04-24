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
#include "rotate_engineering_objective_publisher.h"

CRotateEngineeringObjectivePublisher::CRotateEngineeringObjectivePublisher()
{
}

CRotateEngineeringObjectivePublisher::~CRotateEngineeringObjectivePublisher()
{
}

bool CRotateEngineeringObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::engineering::ROTATE_ENGINEERING_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateEngineeringObjectivePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        uuid.GenerateUuid();
        m_pDataInstance->id = DDS_String_dup(uuid.c_str());
        retVal = true;
    }

    return retVal;
}

bool CRotateEngineeringObjectivePublisher::PublishSample()
{
    return Publish();
}

void CRotateEngineeringObjectivePublisher::SetId(DataTypes::Uuid &id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id);
    }
}

void CRotateEngineeringObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CRotateEngineeringObjectivePublisher::SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

void CRotateEngineeringObjectivePublisher::SetTargetTorque(const units::torque::newton_meter_t targetTorque)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetTorque = units::unit_cast<double>(targetTorque);
    }
}

