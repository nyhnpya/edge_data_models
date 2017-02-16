

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate.idl using "rtiddsgen".
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

#include "circulate.h"

namespace ProcessCirculation {

    /* ========================================================================= */
    const char *CirculateRequestTYPENAME = "ProcessCirculation::CirculateRequest";

    DDS_TypeCode* CirculateRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member CirculateRequest_g_tc_members[5]=
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
                (char *)"priority",/* Member name */
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
                (char *)"timeNeeded",/* Member name */
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
                (char *)"estimatedDuration",/* Member name */
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
                (char *)"targetFlowRate",/* Member name */
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
            }
        };

        static DDS_TypeCode CirculateRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ProcessCirculation::CirculateRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                5, /* Number of members */
                CirculateRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for CirculateRequest*/

        if (is_initialized) {
            return &CirculateRequest_g_tc;
        }

        CirculateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        CirculateRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

        CirculateRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        CirculateRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        CirculateRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &CirculateRequest_g_tc;
    }

    RTIBool CirculateRequest_initialize(
        CirculateRequest* sample) {
        return ProcessCirculation::CirculateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool CirculateRequest_initialize_ex(
        CirculateRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ProcessCirculation::CirculateRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool CirculateRequest_initialize_w_params(
        CirculateRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
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

        if (!RTICdrType_initDouble(&sample->targetFlowRate)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void CirculateRequest_finalize(
        CirculateRequest* sample)
    {

        ProcessCirculation::CirculateRequest_finalize_ex(sample,RTI_TRUE);
    }

    void CirculateRequest_finalize_ex(
        CirculateRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ProcessCirculation::CirculateRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void CirculateRequest_finalize_w_params(
        CirculateRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Priority_finalize_w_params(&sample->priority,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->timeNeeded,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

    }

    void CirculateRequest_finalize_optional_members(
        CirculateRequest* sample, RTIBool deletePointers)
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
        DataTypes::Priority_finalize_optional_members(&sample->priority, deallocParams->delete_pointers);
        DataTypes::Time_finalize_optional_members(&sample->timeNeeded, deallocParams->delete_pointers);
        DataTypes::Time_finalize_optional_members(&sample->estimatedDuration, deallocParams->delete_pointers);
    }

    RTIBool CirculateRequest_copy(
        CirculateRequest* dst,
        const CirculateRequest* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
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
            &dst->targetFlowRate, &src->targetFlowRate)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'CirculateRequest' sequence class.
    */
    #define T CirculateRequest
    #define TSeq CirculateRequestSeq
    #define T_initialize_w_params ProcessCirculation::CirculateRequest_initialize_w_params
    #define T_finalize_w_params   ProcessCirculation::CirculateRequest_finalize_w_params
    #define T_copy       ProcessCirculation::CirculateRequest_copy

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
    const char *CirculateObjectiveTYPENAME = "ProcessCirculation::CirculateObjective";

    DDS_TypeCode* CirculateObjective_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member CirculateObjective_g_tc_members[3]=
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
                (char *)"estimatedDuration",/* Member name */
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
                (char *)"targetFlowRate",/* Member name */
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
            }
        };

        static DDS_TypeCode CirculateObjective_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ProcessCirculation::CirculateObjective", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                CirculateObjective_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for CirculateObjective*/

        if (is_initialized) {
            return &CirculateObjective_g_tc;
        }

        CirculateObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        CirculateObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        CirculateObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &CirculateObjective_g_tc;
    }

    RTIBool CirculateObjective_initialize(
        CirculateObjective* sample) {
        return ProcessCirculation::CirculateObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool CirculateObjective_initialize_ex(
        CirculateObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ProcessCirculation::CirculateObjective_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool CirculateObjective_initialize_w_params(
        CirculateObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->targetFlowRate)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void CirculateObjective_finalize(
        CirculateObjective* sample)
    {

        ProcessCirculation::CirculateObjective_finalize_ex(sample,RTI_TRUE);
    }

    void CirculateObjective_finalize_ex(
        CirculateObjective* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ProcessCirculation::CirculateObjective_finalize_w_params(
            sample,&deallocParams);
    }

    void CirculateObjective_finalize_w_params(
        CirculateObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

    }

    void CirculateObjective_finalize_optional_members(
        CirculateObjective* sample, RTIBool deletePointers)
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
        DataTypes::Time_finalize_optional_members(&sample->estimatedDuration, deallocParams->delete_pointers);
    }

    RTIBool CirculateObjective_copy(
        CirculateObjective* dst,
        const CirculateObjective* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Time_copy(
            &dst->estimatedDuration, &src->estimatedDuration)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->targetFlowRate, &src->targetFlowRate)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'CirculateObjective' sequence class.
    */
    #define T CirculateObjective
    #define TSeq CirculateObjectiveSeq
    #define T_initialize_w_params ProcessCirculation::CirculateObjective_initialize_w_params
    #define T_finalize_w_params   ProcessCirculation::CirculateObjective_finalize_w_params
    #define T_copy       ProcessCirculation::CirculateObjective_copy

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
    const char *CirculateStateTYPENAME = "ProcessCirculation::CirculateState";

    DDS_TypeCode* CirculateState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member CirculateState_g_tc_members[10]=
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
                (char *)"timestamp",/* Member name */
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
                (char *)"status",/* Member name */
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
                (char *)"actualFlowRate",/* Member name */
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
                (char *)"actualStandpipePressure",/* Member name */
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
                (char *)"minFlowRate",/* Member name */
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
                (char *)"maxFlowRate",/* Member name */
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
                (char *)"minStandpipePressure",/* Member name */
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
            }, 
            {
                (char *)"maxStandpipePressure",/* Member name */
                {
                    8,/* Representation ID */          
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
                (char *)"targetFlowRate",/* Member name */
                {
                    9,/* Representation ID */          
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

        static DDS_TypeCode CirculateState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ProcessCirculation::CirculateState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                10, /* Number of members */
                CirculateState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for CirculateState*/

        if (is_initialized) {
            return &CirculateState_g_tc;
        }

        CirculateState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        CirculateState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        CirculateState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

        CirculateState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        CirculateState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        CirculateState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        CirculateState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        CirculateState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        CirculateState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        CirculateState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &CirculateState_g_tc;
    }

    RTIBool CirculateState_initialize(
        CirculateState* sample) {
        return ProcessCirculation::CirculateState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool CirculateState_initialize_ex(
        CirculateState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ProcessCirculation::CirculateState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool CirculateState_initialize_w_params(
        CirculateState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
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

        if (!RTICdrType_initDouble(&sample->actualFlowRate)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->actualStandpipePressure)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->minFlowRate)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->maxFlowRate)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->minStandpipePressure)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->maxStandpipePressure)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->targetFlowRate)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void CirculateState_finalize(
        CirculateState* sample)
    {

        ProcessCirculation::CirculateState_finalize_ex(sample,RTI_TRUE);
    }

    void CirculateState_finalize_ex(
        CirculateState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ProcessCirculation::CirculateState_finalize_w_params(
            sample,&deallocParams);
    }

    void CirculateState_finalize_w_params(
        CirculateState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

    }

    void CirculateState_finalize_optional_members(
        CirculateState* sample, RTIBool deletePointers)
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
        DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        DataTypes::Status_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
    }

    RTIBool CirculateState_copy(
        CirculateState* dst,
        const CirculateState* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
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
            &dst->actualFlowRate, &src->actualFlowRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->actualStandpipePressure, &src->actualStandpipePressure)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minFlowRate, &src->minFlowRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxFlowRate, &src->maxFlowRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minStandpipePressure, &src->minStandpipePressure)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxStandpipePressure, &src->maxStandpipePressure)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->targetFlowRate, &src->targetFlowRate)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'CirculateState' sequence class.
    */
    #define T CirculateState
    #define TSeq CirculateStateSeq
    #define T_initialize_w_params ProcessCirculation::CirculateState_initialize_w_params
    #define T_finalize_w_params   ProcessCirculation::CirculateState_finalize_w_params
    #define T_copy       ProcessCirculation::CirculateState_copy

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
} /* namespace ProcessCirculation  */

