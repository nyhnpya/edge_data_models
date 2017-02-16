

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling.idl using "rtiddsgen".
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

#include "drilling.h"

namespace Hoisting {

    /* ========================================================================= */
    const char *DrillingRequestTYPENAME = "Hoisting::DrillingRequest";

    DDS_TypeCode* DrillingRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DrillingRequest_g_tc_members[12]=
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
                (char *)"duration",/* Member name */
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
                (char *)"ropLimit",/* Member name */
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
                (char *)"wobLimit",/* Member name */
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
                (char *)"differentialPressureLimit",/* Member name */
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
                (char *)"torqueLimit",/* Member name */
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
                (char *)"ropMode",/* Member name */
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
                (char *)"wobMode",/* Member name */
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
                (char *)"differentialPressureMode",/* Member name */
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
            }, 
            {
                (char *)"torqueMode",/* Member name */
                {
                    11,/* Representation ID */          
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

        static DDS_TypeCode DrillingRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Hoisting::DrillingRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                12, /* Number of members */
                DrillingRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for DrillingRequest*/

        if (is_initialized) {
            return &DrillingRequest_g_tc;
        }

        DrillingRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        DrillingRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

        DrillingRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        DrillingRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        DrillingRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingRequest_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingRequest_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        is_initialized = RTI_TRUE;

        return &DrillingRequest_g_tc;
    }

    RTIBool DrillingRequest_initialize(
        DrillingRequest* sample) {
        return Hoisting::DrillingRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DrillingRequest_initialize_ex(
        DrillingRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Hoisting::DrillingRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DrillingRequest_initialize_w_params(
        DrillingRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
        if (!DataTypes::Time_initialize_w_params(&sample->duration,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->ropLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressureLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->ropMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->wobMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->differentialPressureMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->torqueMode)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void DrillingRequest_finalize(
        DrillingRequest* sample)
    {

        Hoisting::DrillingRequest_finalize_ex(sample,RTI_TRUE);
    }

    void DrillingRequest_finalize_ex(
        DrillingRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Hoisting::DrillingRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void DrillingRequest_finalize_w_params(
        DrillingRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Priority_finalize_w_params(&sample->priority,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->timeNeeded,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->duration,deallocParams);

    }

    void DrillingRequest_finalize_optional_members(
        DrillingRequest* sample, RTIBool deletePointers)
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
        DataTypes::Time_finalize_optional_members(&sample->duration, deallocParams->delete_pointers);
    }

    RTIBool DrillingRequest_copy(
        DrillingRequest* dst,
        const DrillingRequest* src)
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
            &dst->duration, &src->duration)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->ropLimit, &src->ropLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobLimit, &src->wobLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->differentialPressureLimit, &src->differentialPressureLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueLimit, &src->torqueLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->ropMode, &src->ropMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->wobMode, &src->wobMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->differentialPressureMode, &src->differentialPressureMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->torqueMode, &src->torqueMode)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'DrillingRequest' sequence class.
    */
    #define T DrillingRequest
    #define TSeq DrillingRequestSeq
    #define T_initialize_w_params Hoisting::DrillingRequest_initialize_w_params
    #define T_finalize_w_params   Hoisting::DrillingRequest_finalize_w_params
    #define T_copy       Hoisting::DrillingRequest_copy

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
    const char *DrillingObjectiveTYPENAME = "Hoisting::DrillingObjective";

    DDS_TypeCode* DrillingObjective_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DrillingObjective_g_tc_members[10]=
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
                (char *)"ropLimit",/* Member name */
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
                (char *)"wobLimit",/* Member name */
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
                (char *)"differentialPressureLimit",/* Member name */
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
                (char *)"torqueLimit",/* Member name */
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
                (char *)"ropMode",/* Member name */
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
                (char *)"wobMode",/* Member name */
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
                (char *)"differentialPressureMode",/* Member name */
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
                (char *)"torqueMode",/* Member name */
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

        static DDS_TypeCode DrillingObjective_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Hoisting::DrillingObjective", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                10, /* Number of members */
                DrillingObjective_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for DrillingObjective*/

        if (is_initialized) {
            return &DrillingObjective_g_tc;
        }

        DrillingObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        DrillingObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        DrillingObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingObjective_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingObjective_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingObjective_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingObjective_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingObjective_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingObjective_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        is_initialized = RTI_TRUE;

        return &DrillingObjective_g_tc;
    }

    RTIBool DrillingObjective_initialize(
        DrillingObjective* sample) {
        return Hoisting::DrillingObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DrillingObjective_initialize_ex(
        DrillingObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Hoisting::DrillingObjective_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DrillingObjective_initialize_w_params(
        DrillingObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        if (!RTICdrType_initDouble(&sample->ropLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressureLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->ropMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->wobMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->differentialPressureMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->torqueMode)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void DrillingObjective_finalize(
        DrillingObjective* sample)
    {

        Hoisting::DrillingObjective_finalize_ex(sample,RTI_TRUE);
    }

    void DrillingObjective_finalize_ex(
        DrillingObjective* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Hoisting::DrillingObjective_finalize_w_params(
            sample,&deallocParams);
    }

    void DrillingObjective_finalize_w_params(
        DrillingObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

    }

    void DrillingObjective_finalize_optional_members(
        DrillingObjective* sample, RTIBool deletePointers)
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

    RTIBool DrillingObjective_copy(
        DrillingObjective* dst,
        const DrillingObjective* src)
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
            &dst->ropLimit, &src->ropLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobLimit, &src->wobLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->differentialPressureLimit, &src->differentialPressureLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueLimit, &src->torqueLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->ropMode, &src->ropMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->wobMode, &src->wobMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->differentialPressureMode, &src->differentialPressureMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->torqueMode, &src->torqueMode)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'DrillingObjective' sequence class.
    */
    #define T DrillingObjective
    #define TSeq DrillingObjectiveSeq
    #define T_initialize_w_params Hoisting::DrillingObjective_initialize_w_params
    #define T_finalize_w_params   Hoisting::DrillingObjective_finalize_w_params
    #define T_copy       Hoisting::DrillingObjective_copy

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
    const char *DrillingStateTYPENAME = "Hoisting::DrillingState";

    DDS_TypeCode* DrillingState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DrillingState_g_tc_members[19]=
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
                (char *)"ropActual",/* Member name */
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
                (char *)"wobActual",/* Member name */
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
                (char *)"differentialPressureActual",/* Member name */
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
                (char *)"torqueActual",/* Member name */
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
                (char *)"ropLimit",/* Member name */
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
                (char *)"wobLimit",/* Member name */
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
                (char *)"differentialPressureLimit",/* Member name */
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
                (char *)"torqueLimit",/* Member name */
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
                (char *)"ropMode",/* Member name */
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
            }, 
            {
                (char *)"wobMode",/* Member name */
                {
                    11,/* Representation ID */          
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
                (char *)"differentialPressureMode",/* Member name */
                {
                    12,/* Representation ID */          
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
                (char *)"torqueMode",/* Member name */
                {
                    13,/* Representation ID */          
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
                (char *)"ropTarget",/* Member name */
                {
                    14,/* Representation ID */          
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
                (char *)"wobTarget",/* Member name */
                {
                    15,/* Representation ID */          
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
                (char *)"differentialPressureTarget",/* Member name */
                {
                    16,/* Representation ID */          
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
                (char *)"torqueTarget",/* Member name */
                {
                    17,/* Representation ID */          
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
                (char *)"bitOnBottom",/* Member name */
                {
                    18,/* Representation ID */          
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

        static DDS_TypeCode DrillingState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Hoisting::DrillingState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                19, /* Number of members */
                DrillingState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for DrillingState*/

        if (is_initialized) {
            return &DrillingState_g_tc;
        }

        DrillingState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        DrillingState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        DrillingState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DrillingState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DrillingState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        is_initialized = RTI_TRUE;

        return &DrillingState_g_tc;
    }

    RTIBool DrillingState_initialize(
        DrillingState* sample) {
        return Hoisting::DrillingState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DrillingState_initialize_ex(
        DrillingState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Hoisting::DrillingState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DrillingState_initialize_w_params(
        DrillingState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        if (!RTICdrType_initDouble(&sample->ropActual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobActual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressureActual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueActual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->ropLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressureLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueLimit)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->ropMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->wobMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->differentialPressureMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->torqueMode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->ropTarget)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobTarget)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressureTarget)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueTarget)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->bitOnBottom)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void DrillingState_finalize(
        DrillingState* sample)
    {

        Hoisting::DrillingState_finalize_ex(sample,RTI_TRUE);
    }

    void DrillingState_finalize_ex(
        DrillingState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Hoisting::DrillingState_finalize_w_params(
            sample,&deallocParams);
    }

    void DrillingState_finalize_w_params(
        DrillingState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

    }

    void DrillingState_finalize_optional_members(
        DrillingState* sample, RTIBool deletePointers)
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
    }

    RTIBool DrillingState_copy(
        DrillingState* dst,
        const DrillingState* src)
    {

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        if (!DataTypes::Time_copy(
            &dst->timestamp, &src->timestamp)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->ropActual, &src->ropActual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobActual, &src->wobActual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->differentialPressureActual, &src->differentialPressureActual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueActual, &src->torqueActual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->ropLimit, &src->ropLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobLimit, &src->wobLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->differentialPressureLimit, &src->differentialPressureLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueLimit, &src->torqueLimit)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->ropMode, &src->ropMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->wobMode, &src->wobMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->differentialPressureMode, &src->differentialPressureMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->torqueMode, &src->torqueMode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->ropTarget, &src->ropTarget)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobTarget, &src->wobTarget)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->differentialPressureTarget, &src->differentialPressureTarget)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueTarget, &src->torqueTarget)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->bitOnBottom, &src->bitOnBottom)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'DrillingState' sequence class.
    */
    #define T DrillingState
    #define TSeq DrillingStateSeq
    #define T_initialize_w_params Hoisting::DrillingState_initialize_w_params
    #define T_finalize_w_params   Hoisting::DrillingState_finalize_w_params
    #define T_copy       Hoisting::DrillingState_copy

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
} /* namespace Hoisting  */

