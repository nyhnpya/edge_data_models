

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill.idl using "rtiddsgen".
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

#include "drill.h"

#include <new>

namespace plc {
    namespace process {

        /* ========================================================================= */
        const char *DrillRequestTYPENAME = "plc::process::DrillRequest";

        DDS_TypeCode* DrillRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillRequest_g_tc_members[8]=
            {

                {
                    (char *)"ropLimit",/* Member name */
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
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"wobLimit",/* Member name */
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
                    (char *)"diffPressureLimit",/* Member name */
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
                    (char *)"torqueLimit",/* Member name */
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
                    (char *)"ropMode",/* Member name */
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
                    (char *)"wobMode",/* Member name */
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
                    (char *)"diffPressureMode",/* Member name */
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
                    (char *)"torqueMode",/* Member name */
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

            static DDS_TypeCode DrillRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::DrillRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    8, /* Number of members */
                    DrillRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for DrillRequest*/

            if (is_initialized) {
                return &DrillRequest_g_tc;
            }

            DrillRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            DrillRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            DrillRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            DrillRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            is_initialized = RTI_TRUE;

            return &DrillRequest_g_tc;
        }

        RTIBool DrillRequest_initialize(
            DrillRequest* sample) {
            return plc::process::DrillRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillRequest_initialize_ex(
            DrillRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::DrillRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillRequest_initialize_w_params(
            DrillRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->ropLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->wobLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->diffPressureLimit)) {
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

            if (!RTICdrType_initBoolean(&sample->diffPressureMode)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initBoolean(&sample->torqueMode)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void DrillRequest_finalize(
            DrillRequest* sample)
        {

            plc::process::DrillRequest_finalize_ex(sample,RTI_TRUE);
        }

        void DrillRequest_finalize_ex(
            DrillRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::DrillRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillRequest_finalize_w_params(
            DrillRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void DrillRequest_finalize_optional_members(
            DrillRequest* sample, RTIBool deletePointers)
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

        }

        RTIBool DrillRequest_copy(
            DrillRequest* dst,
            const DrillRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
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
                    &dst->diffPressureLimit, &src->diffPressureLimit)) { 
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
                    &dst->diffPressureMode, &src->diffPressureMode)) { 
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
        * Configure and implement 'DrillRequest' sequence class.
        */
        #define T DrillRequest
        #define TSeq DrillRequestSeq

        #define T_initialize_w_params plc::process::DrillRequest_initialize_w_params

        #define T_finalize_w_params   plc::process::DrillRequest_finalize_w_params
        #define T_copy       plc::process::DrillRequest_copy

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
        const char *DrillStateTYPENAME = "plc::process::DrillState";

        DDS_TypeCode* DrillState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillState_g_tc_members[16]=
            {

                {
                    (char *)"ropActual",/* Member name */
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
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"wobActual",/* Member name */
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
                    (char *)"diffPressureActual",/* Member name */
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
                    (char *)"torqueActual",/* Member name */
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
                    (char *)"ropMachineLimit",/* Member name */
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
                    (char *)"wobMachineLimit",/* Member name */
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
                    (char *)"diffPressureMachineLimit",/* Member name */
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
                    (char *)"torqueMachineLimit",/* Member name */
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
                    (char *)"diffPressureMode",/* Member name */
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
                }, 
                {
                    (char *)"ropLimit",/* Member name */
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
                    (char *)"wobLimit",/* Member name */
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
                    (char *)"diffPressureLimit",/* Member name */
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
                    (char *)"torqueLimit",/* Member name */
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
                }
            };

            static DDS_TypeCode DrillState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::DrillState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    16, /* Number of members */
                    DrillState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for DrillState*/

            if (is_initialized) {
                return &DrillState_g_tc;
            }

            DrillState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            DrillState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            DrillState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            DrillState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            DrillState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &DrillState_g_tc;
        }

        RTIBool DrillState_initialize(
            DrillState* sample) {
            return plc::process::DrillState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillState_initialize_ex(
            DrillState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::DrillState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillState_initialize_w_params(
            DrillState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->ropActual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->wobActual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->diffPressureActual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->torqueActual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->ropMachineLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->wobMachineLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->diffPressureMachineLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->torqueMachineLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initBoolean(&sample->ropMode)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initBoolean(&sample->wobMode)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initBoolean(&sample->diffPressureMode)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initBoolean(&sample->torqueMode)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->ropLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->wobLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->diffPressureLimit)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->torqueLimit)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void DrillState_finalize(
            DrillState* sample)
        {

            plc::process::DrillState_finalize_ex(sample,RTI_TRUE);
        }

        void DrillState_finalize_ex(
            DrillState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::DrillState_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillState_finalize_w_params(
            DrillState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void DrillState_finalize_optional_members(
            DrillState* sample, RTIBool deletePointers)
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

        }

        RTIBool DrillState_copy(
            DrillState* dst,
            const DrillState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
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
                    &dst->diffPressureActual, &src->diffPressureActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueActual, &src->torqueActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ropMachineLimit, &src->ropMachineLimit)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobMachineLimit, &src->wobMachineLimit)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPressureMachineLimit, &src->diffPressureMachineLimit)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueMachineLimit, &src->torqueMachineLimit)) { 
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
                    &dst->diffPressureMode, &src->diffPressureMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->torqueMode, &src->torqueMode)) { 
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
                    &dst->diffPressureLimit, &src->diffPressureLimit)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueLimit, &src->torqueLimit)) { 
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
        * Configure and implement 'DrillState' sequence class.
        */
        #define T DrillState
        #define TSeq DrillStateSeq

        #define T_initialize_w_params plc::process::DrillState_initialize_w_params

        #define T_finalize_w_params   plc::process::DrillState_finalize_w_params
        #define T_copy       plc::process::DrillState_copy

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
    } /* namespace process  */
} /* namespace plc  */

