

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_rotate.idl using "rtiddsgen".
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

#include "plc_rotate.h"

#include <new>

namespace plc {
    namespace process {

        /* ========================================================================= */
        const char *PlcRotateRequestTYPENAME = "plc::process::PlcRotateRequest";

        DDS_TypeCode* PlcRotateRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member PlcRotateRequest_g_tc_members[1]=
            {

                {
                    (char *)"targetRate",/* Member name */
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
                }
            };

            static DDS_TypeCode PlcRotateRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcRotateRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    1, /* Number of members */
                    PlcRotateRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for PlcRotateRequest*/

            if (is_initialized) {
                return &PlcRotateRequest_g_tc;
            }

            PlcRotateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &PlcRotateRequest_g_tc;
        }

        RTIBool PlcRotateRequest_initialize(
            PlcRotateRequest* sample) {
            return plc::process::PlcRotateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool PlcRotateRequest_initialize_ex(
            PlcRotateRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::PlcRotateRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PlcRotateRequest_initialize_w_params(
            PlcRotateRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->targetRate)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void PlcRotateRequest_finalize(
            PlcRotateRequest* sample)
        {

            plc::process::PlcRotateRequest_finalize_ex(sample,RTI_TRUE);
        }

        void PlcRotateRequest_finalize_ex(
            PlcRotateRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::PlcRotateRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void PlcRotateRequest_finalize_w_params(
            PlcRotateRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void PlcRotateRequest_finalize_optional_members(
            PlcRotateRequest* sample, RTIBool deletePointers)
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

        RTIBool PlcRotateRequest_copy(
            PlcRotateRequest* dst,
            const PlcRotateRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyDouble (
                    &dst->targetRate, &src->targetRate)) { 
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
        * Configure and implement 'PlcRotateRequest' sequence class.
        */
        #define T PlcRotateRequest
        #define TSeq PlcRotateRequestSeq

        #define T_initialize_w_params plc::process::PlcRotateRequest_initialize_w_params

        #define T_finalize_w_params   plc::process::PlcRotateRequest_finalize_w_params
        #define T_copy       plc::process::PlcRotateRequest_copy

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
        const char *PlcRotateStateTYPENAME = "plc::process::PlcRotateState";

        DDS_TypeCode* PlcRotateState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member PlcRotateState_g_tc_members[5]=
            {

                {
                    (char *)"status",/* Member name */
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
                    (char *)"actualRate",/* Member name */
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
                    (char *)"minRate",/* Member name */
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
                    (char *)"maxRate",/* Member name */
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
                    (char *)"targetRate",/* Member name */
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

            static DDS_TypeCode PlcRotateState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcRotateState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    5, /* Number of members */
                    PlcRotateState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for PlcRotateState*/

            if (is_initialized) {
                return &PlcRotateState_g_tc;
            }

            PlcRotateState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            PlcRotateState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PlcRotateState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PlcRotateState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PlcRotateState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &PlcRotateState_g_tc;
        }

        RTIBool PlcRotateState_initialize(
            PlcRotateState* sample) {
            return plc::process::PlcRotateState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool PlcRotateState_initialize_ex(
            PlcRotateState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::PlcRotateState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PlcRotateState_initialize_w_params(
            PlcRotateState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initLong(&sample->status)) {
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

        void PlcRotateState_finalize(
            PlcRotateState* sample)
        {

            plc::process::PlcRotateState_finalize_ex(sample,RTI_TRUE);
        }

        void PlcRotateState_finalize_ex(
            PlcRotateState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::PlcRotateState_finalize_w_params(
                sample,&deallocParams);
        }

        void PlcRotateState_finalize_w_params(
            PlcRotateState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void PlcRotateState_finalize_optional_members(
            PlcRotateState* sample, RTIBool deletePointers)
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

        RTIBool PlcRotateState_copy(
            PlcRotateState* dst,
            const PlcRotateState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyLong (
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

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'PlcRotateState' sequence class.
        */
        #define T PlcRotateState
        #define TSeq PlcRotateStateSeq

        #define T_initialize_w_params plc::process::PlcRotateState_initialize_w_params

        #define T_finalize_w_params   plc::process::PlcRotateState_finalize_w_params
        #define T_copy       plc::process::PlcRotateState_copy

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

