

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill_simulation.idl using "rtiddsgen".
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

#include "drill_simulation.h"

#include <new>

namespace Simulation {

    /* ========================================================================= */
    const char *AutoDrillerRequestTYPENAME = "Simulation::AutoDrillerRequest";

    DDS_TypeCode* AutoDrillerRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member AutoDrillerRequest_g_tc_members[10]=
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
                (char *)"hookload",/* Member name */
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

        static DDS_TypeCode AutoDrillerRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Simulation::AutoDrillerRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                10, /* Number of members */
                AutoDrillerRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for AutoDrillerRequest*/

        if (is_initialized) {
            return &AutoDrillerRequest_g_tc;
        }

        AutoDrillerRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        AutoDrillerRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        is_initialized = RTI_TRUE;

        return &AutoDrillerRequest_g_tc;
    }

    RTIBool AutoDrillerRequest_initialize(
        AutoDrillerRequest* sample) {
        return Simulation::AutoDrillerRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool AutoDrillerRequest_initialize_ex(
        AutoDrillerRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Simulation::AutoDrillerRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool AutoDrillerRequest_initialize_w_params(
        AutoDrillerRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->hookload)) {
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

    void AutoDrillerRequest_finalize(
        AutoDrillerRequest* sample)
    {

        Simulation::AutoDrillerRequest_finalize_ex(sample,RTI_TRUE);
    }

    void AutoDrillerRequest_finalize_ex(
        AutoDrillerRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Simulation::AutoDrillerRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void AutoDrillerRequest_finalize_w_params(
        AutoDrillerRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

    }

    void AutoDrillerRequest_finalize_optional_members(
        AutoDrillerRequest* sample, RTIBool deletePointers)
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
    }

    RTIBool AutoDrillerRequest_copy(
        AutoDrillerRequest* dst,
        const AutoDrillerRequest* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyDouble (
                &dst->hookload, &src->hookload)) { 
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

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'AutoDrillerRequest' sequence class.
    */
    #define T AutoDrillerRequest
    #define TSeq AutoDrillerRequestSeq

    #define T_initialize_w_params Simulation::AutoDrillerRequest_initialize_w_params

    #define T_finalize_w_params   Simulation::AutoDrillerRequest_finalize_w_params
    #define T_copy       Simulation::AutoDrillerRequest_copy

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
    const char *AutoDrillerObjectiveTYPENAME = "Simulation::AutoDrillerObjective";

    DDS_TypeCode* AutoDrillerObjective_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member AutoDrillerObjective_g_tc_members[10]=
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
                (char *)"hookload",/* Member name */
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

        static DDS_TypeCode AutoDrillerObjective_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Simulation::AutoDrillerObjective", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                10, /* Number of members */
                AutoDrillerObjective_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for AutoDrillerObjective*/

        if (is_initialized) {
            return &AutoDrillerObjective_g_tc;
        }

        AutoDrillerObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        AutoDrillerObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerObjective_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerObjective_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerObjective_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerObjective_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerObjective_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerObjective_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        is_initialized = RTI_TRUE;

        return &AutoDrillerObjective_g_tc;
    }

    RTIBool AutoDrillerObjective_initialize(
        AutoDrillerObjective* sample) {
        return Simulation::AutoDrillerObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool AutoDrillerObjective_initialize_ex(
        AutoDrillerObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Simulation::AutoDrillerObjective_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool AutoDrillerObjective_initialize_w_params(
        AutoDrillerObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->hookload)) {
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

    void AutoDrillerObjective_finalize(
        AutoDrillerObjective* sample)
    {

        Simulation::AutoDrillerObjective_finalize_ex(sample,RTI_TRUE);
    }

    void AutoDrillerObjective_finalize_ex(
        AutoDrillerObjective* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Simulation::AutoDrillerObjective_finalize_w_params(
            sample,&deallocParams);
    }

    void AutoDrillerObjective_finalize_w_params(
        AutoDrillerObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

    }

    void AutoDrillerObjective_finalize_optional_members(
        AutoDrillerObjective* sample, RTIBool deletePointers)
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
    }

    RTIBool AutoDrillerObjective_copy(
        AutoDrillerObjective* dst,
        const AutoDrillerObjective* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyDouble (
                &dst->hookload, &src->hookload)) { 
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

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'AutoDrillerObjective' sequence class.
    */
    #define T AutoDrillerObjective
    #define TSeq AutoDrillerObjectiveSeq

    #define T_initialize_w_params Simulation::AutoDrillerObjective_initialize_w_params

    #define T_finalize_w_params   Simulation::AutoDrillerObjective_finalize_w_params
    #define T_copy       Simulation::AutoDrillerObjective_copy

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
    const char *AutoDrillerStateTYPENAME = "Simulation::AutoDrillerState";

    DDS_TypeCode* AutoDrillerState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member AutoDrillerState_g_tc_members[18]=
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
                (char *)"hookloadActual",/* Member name */
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
            }
        };

        static DDS_TypeCode AutoDrillerState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Simulation::AutoDrillerState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                18, /* Number of members */
                AutoDrillerState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for AutoDrillerState*/

        if (is_initialized) {
            return &AutoDrillerState_g_tc;
        }

        AutoDrillerState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        AutoDrillerState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        AutoDrillerState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        AutoDrillerState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &AutoDrillerState_g_tc;
    }

    RTIBool AutoDrillerState_initialize(
        AutoDrillerState* sample) {
        return Simulation::AutoDrillerState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool AutoDrillerState_initialize_ex(
        AutoDrillerState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Simulation::AutoDrillerState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool AutoDrillerState_initialize_w_params(
        AutoDrillerState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!DataTypes::Uuid_initialize_w_params(&sample->id,
        allocParams)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initDouble(&sample->hookloadActual)) {
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

        return RTI_TRUE;
    }

    void AutoDrillerState_finalize(
        AutoDrillerState* sample)
    {

        Simulation::AutoDrillerState_finalize_ex(sample,RTI_TRUE);
    }

    void AutoDrillerState_finalize_ex(
        AutoDrillerState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Simulation::AutoDrillerState_finalize_w_params(
            sample,&deallocParams);
    }

    void AutoDrillerState_finalize_w_params(
        AutoDrillerState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

    }

    void AutoDrillerState_finalize_optional_members(
        AutoDrillerState* sample, RTIBool deletePointers)
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
    }

    RTIBool AutoDrillerState_copy(
        AutoDrillerState* dst,
        const AutoDrillerState* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyDouble (
                &dst->hookloadActual, &src->hookloadActual)) { 
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

            return RTI_TRUE;

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'AutoDrillerState' sequence class.
    */
    #define T AutoDrillerState
    #define TSeq AutoDrillerStateSeq

    #define T_initialize_w_params Simulation::AutoDrillerState_initialize_w_params

    #define T_finalize_w_params   Simulation::AutoDrillerState_finalize_w_params
    #define T_copy       Simulation::AutoDrillerState_copy

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
} /* namespace Simulation  */

