

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rotate.h"

namespace SafeRotationFunctions {

    /* ========================================================================= */
    const char *RotateRequestTYPENAME = "SafeRotationFunctions::RotateRequest";

    DDS_TypeCode* RotateRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member RotateRequest_g_tc_members[6]=
        {

            {
                (char *)"id",/* Member name */
                {
                    0,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_KEY_MEMBER , /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"objectiveId",/* Member name */
                {
                    1,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"priority",/* Member name */
                {
                    2,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"timeNeeded",/* Member name */
                {
                    3,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"estimatedDuration",/* Member name */
                {
                    4,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"targetRate",/* Member name */
                {
                    5,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode RotateRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"SafeRotationFunctions::RotateRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                6, /* Number of members */
                RotateRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for RotateRequest*/

        if (is_initialized) {
            return &RotateRequest_g_tc;
        }

        RotateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        RotateRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        RotateRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

        RotateRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        RotateRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        RotateRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &RotateRequest_g_tc;
    }

    RTIBool RotateRequest_initialize(
        RotateRequest* sample) {
        return SafeRotationFunctions::RotateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool RotateRequest_initialize_ex(
        RotateRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return SafeRotationFunctions::RotateRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool RotateRequest_initialize_w_params(
        RotateRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Uuid_initialize_w_params(&sample->objectiveId,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Priority_initialize_w_params(&sample->priority,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Time_initialize_w_params(&sample->timeNeeded,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->targetRate)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void RotateRequest_finalize(
        RotateRequest* sample)
    {

        SafeRotationFunctions::RotateRequest_finalize_ex(sample,RTI_TRUE);
    }

    void RotateRequest_finalize_ex(
        RotateRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        SafeRotationFunctions::RotateRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void RotateRequest_finalize_w_params(
        RotateRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

        DataTypes::Priority_finalize_w_params(&sample->priority,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->timeNeeded,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

    }

    void RotateRequest_finalize_optional_members(
        RotateRequest* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

        DataTypes::Uuid_finalize_optional_members(&sample->id, deallocParams->delete_pointers);
        DataTypes::Uuid_finalize_optional_members(&sample->objectiveId, deallocParams->delete_pointers);
        DataTypes::Priority_finalize_optional_members(&sample->priority, deallocParams->delete_pointers);
        DataTypes::Time_finalize_optional_members(&sample->timeNeeded, deallocParams->delete_pointers);
        DataTypes::Time_finalize_optional_members(&sample->estimatedDuration, deallocParams->delete_pointers);
    }

    RTIBool RotateRequest_copy(
        RotateRequest* dst,
        const RotateRequest* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Uuid_copy(
            &dst->objectiveId, &src->objectiveId)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Priority_copy(
            &dst->priority, &src->priority)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Time_copy(
            &dst->timeNeeded, &src->timeNeeded)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Time_copy(
            &dst->estimatedDuration, &src->estimatedDuration)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->targetRate, &src->targetRate)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'RotateRequest' sequence class.
    */
    #define T RotateRequest
    #define TSeq RotateRequestSeq
    #define T_initialize_w_params SafeRotationFunctions::RotateRequest_initialize_w_params
    #define T_finalize_w_params   SafeRotationFunctions::RotateRequest_finalize_w_params
    #define T_copy       SafeRotationFunctions::RotateRequest_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params
    #undef T_initialize_w_params
    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *RotateObjectiveTYPENAME = "SafeRotationFunctions::RotateObjective";

    DDS_TypeCode* RotateObjective_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member RotateObjective_g_tc_members[4]=
        {

            {
                (char *)"id",/* Member name */
                {
                    0,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_KEY_MEMBER , /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"objectiveId",/* Member name */
                {
                    1,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"estimatedDuration",/* Member name */
                {
                    2,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"targetRate",/* Member name */
                {
                    3,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode RotateObjective_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"SafeRotationFunctions::RotateObjective", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                4, /* Number of members */
                RotateObjective_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for RotateObjective*/

        if (is_initialized) {
            return &RotateObjective_g_tc;
        }

        RotateObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        RotateObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        RotateObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        RotateObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &RotateObjective_g_tc;
    }

    RTIBool RotateObjective_initialize(
        RotateObjective* sample) {
        return SafeRotationFunctions::RotateObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool RotateObjective_initialize_ex(
        RotateObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return SafeRotationFunctions::RotateObjective_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool RotateObjective_initialize_w_params(
        RotateObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Uuid_initialize_w_params(&sample->objectiveId,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->targetRate)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void RotateObjective_finalize(
        RotateObjective* sample)
    {

        SafeRotationFunctions::RotateObjective_finalize_ex(sample,RTI_TRUE);
    }

    void RotateObjective_finalize_ex(
        RotateObjective* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        SafeRotationFunctions::RotateObjective_finalize_w_params(
            sample,&deallocParams);
    }

    void RotateObjective_finalize_w_params(
        RotateObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

    }

    void RotateObjective_finalize_optional_members(
        RotateObjective* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

        DataTypes::Uuid_finalize_optional_members(&sample->id, deallocParams->delete_pointers);
        DataTypes::Uuid_finalize_optional_members(&sample->objectiveId, deallocParams->delete_pointers);
        DataTypes::Time_finalize_optional_members(&sample->estimatedDuration, deallocParams->delete_pointers);
    }

    RTIBool RotateObjective_copy(
        RotateObjective* dst,
        const RotateObjective* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Uuid_copy(
            &dst->objectiveId, &src->objectiveId)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Time_copy(
            &dst->estimatedDuration, &src->estimatedDuration)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->targetRate, &src->targetRate)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'RotateObjective' sequence class.
    */
    #define T RotateObjective
    #define TSeq RotateObjectiveSeq
    #define T_initialize_w_params SafeRotationFunctions::RotateObjective_initialize_w_params
    #define T_finalize_w_params   SafeRotationFunctions::RotateObjective_finalize_w_params
    #define T_copy       SafeRotationFunctions::RotateObjective_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params
    #undef T_initialize_w_params
    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *RotateStateTYPENAME = "SafeRotationFunctions::RotateState";

    DDS_TypeCode* RotateState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member RotateState_g_tc_members[8]=
        {

            {
                (char *)"id",/* Member name */
                {
                    0,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_KEY_MEMBER , /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"objectiveId",/* Member name */
                {
                    1,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"timestamp",/* Member name */
                {
                    2,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"status",/* Member name */
                {
                    3,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"actualRate",/* Member name */
                {
                    4,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"minRate",/* Member name */
                {
                    5,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"maxRate",/* Member name */
                {
                    6,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"targetRate",/* Member name */
                {
                    7,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode RotateState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"SafeRotationFunctions::RotateState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                8, /* Number of members */
                RotateState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for RotateState*/

        if (is_initialized) {
            return &RotateState_g_tc;
        }

        RotateState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        RotateState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        RotateState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        RotateState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

        RotateState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        RotateState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        RotateState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        RotateState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &RotateState_g_tc;
    }

    RTIBool RotateState_initialize(
        RotateState* sample) {
        return SafeRotationFunctions::RotateState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool RotateState_initialize_ex(
        RotateState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return SafeRotationFunctions::RotateState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool RotateState_initialize_w_params(
        RotateState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Uuid_initialize_w_params(&sample->objectiveId,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Status_initialize_w_params(&sample->status,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->actualRate)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->minRate)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->maxRate)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->targetRate)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void RotateState_finalize(
        RotateState* sample)
    {

        SafeRotationFunctions::RotateState_finalize_ex(sample,RTI_TRUE);
    }

    void RotateState_finalize_ex(
        RotateState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        SafeRotationFunctions::RotateState_finalize_w_params(
            sample,&deallocParams);
    }

    void RotateState_finalize_w_params(
        RotateState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

    }

    void RotateState_finalize_optional_members(
        RotateState* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

        DataTypes::Uuid_finalize_optional_members(&sample->id, deallocParams->delete_pointers);
        DataTypes::Uuid_finalize_optional_members(&sample->objectiveId, deallocParams->delete_pointers);
        DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        DataTypes::Status_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
    }

    RTIBool RotateState_copy(
        RotateState* dst,
        const RotateState* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Uuid_copy(
            &dst->objectiveId, &src->objectiveId)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Time_copy(
            &dst->timestamp, &src->timestamp)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Status_copy(
            &dst->status, &src->status)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->actualRate, &src->actualRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minRate, &src->minRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxRate, &src->maxRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->targetRate, &src->targetRate)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'RotateState' sequence class.
    */
    #define T RotateState
    #define TSeq RotateStateSeq
    #define T_initialize_w_params SafeRotationFunctions::RotateState_initialize_w_params
    #define T_finalize_w_params   SafeRotationFunctions::RotateState_finalize_w_params
    #define T_copy       SafeRotationFunctions::RotateState_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params
    #undef T_initialize_w_params
    #undef TSeq
    #undef T
} /* namespace SafeRotationFunctions  */

