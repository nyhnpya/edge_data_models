

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from hoist.idl using "rtiddsgen".
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

#include "hoist.h"

namespace ProcessHoist {

    /* ========================================================================= */
    const char *HoistRequestTYPENAME = "ProcessHoist::HoistRequest";

    DDS_TypeCode* HoistRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member HoistRequest_g_tc_members[6]=
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
                (char *)"targetVelocity",/* Member name */
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
                (char *)"targetDestination",/* Member name */
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

        static DDS_TypeCode HoistRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ProcessHoist::HoistRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                6, /* Number of members */
                HoistRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for HoistRequest*/

        if (is_initialized) {
            return &HoistRequest_g_tc;
        }

        HoistRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        HoistRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

        HoistRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        HoistRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        HoistRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &HoistRequest_g_tc;
    }

    RTIBool HoistRequest_initialize(
        HoistRequest* sample) {
        return ProcessHoist::HoistRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool HoistRequest_initialize_ex(
        HoistRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ProcessHoist::HoistRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool HoistRequest_initialize_w_params(
        HoistRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        if (!RTICdrType_initDouble(&sample->targetVelocity)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->targetDestination)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void HoistRequest_finalize(
        HoistRequest* sample)
    {

        ProcessHoist::HoistRequest_finalize_ex(sample,RTI_TRUE);
    }

    void HoistRequest_finalize_ex(
        HoistRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ProcessHoist::HoistRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void HoistRequest_finalize_w_params(
        HoistRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

    void HoistRequest_finalize_optional_members(
        HoistRequest* sample, RTIBool deletePointers)
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

    RTIBool HoistRequest_copy(
        HoistRequest* dst,
        const HoistRequest* src)
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
            &dst->targetVelocity, &src->targetVelocity)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->targetDestination, &src->targetDestination)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'HoistRequest' sequence class.
    */
    #define T HoistRequest
    #define TSeq HoistRequestSeq
    #define T_initialize_w_params ProcessHoist::HoistRequest_initialize_w_params
    #define T_finalize_w_params   ProcessHoist::HoistRequest_finalize_w_params
    #define T_copy       ProcessHoist::HoistRequest_copy

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
    const char *HoistObjectiveTYPENAME = "ProcessHoist::HoistObjective";

    DDS_TypeCode* HoistObjective_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member HoistObjective_g_tc_members[4]=
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
                (char *)"targetVelocity",/* Member name */
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
                (char *)"targetDestination",/* Member name */
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

        static DDS_TypeCode HoistObjective_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ProcessHoist::HoistObjective", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                4, /* Number of members */
                HoistObjective_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for HoistObjective*/

        if (is_initialized) {
            return &HoistObjective_g_tc;
        }

        HoistObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        HoistObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        HoistObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &HoistObjective_g_tc;
    }

    RTIBool HoistObjective_initialize(
        HoistObjective* sample) {
        return ProcessHoist::HoistObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool HoistObjective_initialize_ex(
        HoistObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ProcessHoist::HoistObjective_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool HoistObjective_initialize_w_params(
        HoistObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        if (!RTICdrType_initDouble(&sample->targetVelocity)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->targetDestination)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void HoistObjective_finalize(
        HoistObjective* sample)
    {

        ProcessHoist::HoistObjective_finalize_ex(sample,RTI_TRUE);
    }

    void HoistObjective_finalize_ex(
        HoistObjective* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ProcessHoist::HoistObjective_finalize_w_params(
            sample,&deallocParams);
    }

    void HoistObjective_finalize_w_params(
        HoistObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

    }

    void HoistObjective_finalize_optional_members(
        HoistObjective* sample, RTIBool deletePointers)
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

    RTIBool HoistObjective_copy(
        HoistObjective* dst,
        const HoistObjective* src)
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
            &dst->targetVelocity, &src->targetVelocity)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->targetDestination, &src->targetDestination)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'HoistObjective' sequence class.
    */
    #define T HoistObjective
    #define TSeq HoistObjectiveSeq
    #define T_initialize_w_params ProcessHoist::HoistObjective_initialize_w_params
    #define T_finalize_w_params   ProcessHoist::HoistObjective_finalize_w_params
    #define T_copy       ProcessHoist::HoistObjective_copy

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
    const char *HoistStateTYPENAME = "ProcessHoist::HoistState";

    DDS_TypeCode* HoistState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member HoistState_g_tc_members[11]=
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
                (char *)"status",/* Member name */
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
                (char *)"actualVelocity",/* Member name */
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
                (char *)"actualPosition",/* Member name */
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
                (char *)"maxHoistVelocity",/* Member name */
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
                (char *)"maxLowerVelocity",/* Member name */
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
                (char *)"maxHoistPosition",/* Member name */
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
                (char *)"maxLowerPosition",/* Member name */
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
                (char *)"targetVelocity",/* Member name */
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
            }, 
            {
                (char *)"targetPosition",/* Member name */
                {
                    10,/* Representation ID */          
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

        static DDS_TypeCode HoistState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ProcessHoist::HoistState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                11, /* Number of members */
                HoistState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for HoistState*/

        if (is_initialized) {
            return &HoistState_g_tc;
        }

        HoistState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        HoistState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

        HoistState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        HoistState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HoistState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &HoistState_g_tc;
    }

    RTIBool HoistState_initialize(
        HoistState* sample) {
        return ProcessHoist::HoistState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool HoistState_initialize_ex(
        HoistState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ProcessHoist::HoistState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool HoistState_initialize_w_params(
        HoistState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Status_initialize_w_params(&sample->status,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->actualVelocity)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->actualPosition)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->maxHoistVelocity)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->maxLowerVelocity)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->maxHoistPosition)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->maxLowerPosition)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->targetVelocity)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->targetPosition)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void HoistState_finalize(
        HoistState* sample)
    {

        ProcessHoist::HoistState_finalize_ex(sample,RTI_TRUE);
    }

    void HoistState_finalize_ex(
        HoistState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ProcessHoist::HoistState_finalize_w_params(
            sample,&deallocParams);
    }

    void HoistState_finalize_w_params(
        HoistState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

    }

    void HoistState_finalize_optional_members(
        HoistState* sample, RTIBool deletePointers)
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
        DataTypes::Status_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
        DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
    }

    RTIBool HoistState_copy(
        HoistState* dst,
        const HoistState* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Status_copy(
            &dst->status, &src->status)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Time_copy(
            &dst->timestamp, &src->timestamp)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->actualVelocity, &src->actualVelocity)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->actualPosition, &src->actualPosition)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxHoistVelocity, &src->maxHoistVelocity)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxLowerVelocity, &src->maxLowerVelocity)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxHoistPosition, &src->maxHoistPosition)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxLowerPosition, &src->maxLowerPosition)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->targetVelocity, &src->targetVelocity)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->targetPosition, &src->targetPosition)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'HoistState' sequence class.
    */
    #define T HoistState
    #define TSeq HoistStateSeq
    #define T_initialize_w_params ProcessHoist::HoistState_initialize_w_params
    #define T_finalize_w_params   ProcessHoist::HoistState_finalize_w_params
    #define T_copy       ProcessHoist::HoistState_copy

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
} /* namespace ProcessHoist  */

