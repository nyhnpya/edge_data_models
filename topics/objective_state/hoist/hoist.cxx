

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

#include <new>

namespace plc {
    namespace process {

        /* ========================================================================= */
        const char *HoistRequestTYPENAME = "plc::process::HoistRequest";

        DDS_TypeCode* HoistRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member HoistRequest_g_tc_members[2]=
            {

                {
                    (char *)"targetVelocity",/* Member name */
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
                    (char *)"targetPosition",/* Member name */
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
                }
            };

            static DDS_TypeCode HoistRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::HoistRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    2, /* Number of members */
                    HoistRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for HoistRequest*/

            if (is_initialized) {
                return &HoistRequest_g_tc;
            }

            HoistRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HoistRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &HoistRequest_g_tc;
        }

        RTIBool HoistRequest_initialize(
            HoistRequest* sample) {
            return plc::process::HoistRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool HoistRequest_initialize_ex(
            HoistRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::HoistRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool HoistRequest_initialize_w_params(
            HoistRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
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

        void HoistRequest_finalize(
            HoistRequest* sample)
        {

            plc::process::HoistRequest_finalize_ex(sample,RTI_TRUE);
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

            plc::process::HoistRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void HoistRequest_finalize_w_params(
            HoistRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

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

        }

        RTIBool HoistRequest_copy(
            HoistRequest* dst,
            const HoistRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
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

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
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

        #define T_initialize_w_params plc::process::HoistRequest_initialize_w_params

        #define T_finalize_w_params   plc::process::HoistRequest_finalize_w_params
        #define T_copy       plc::process::HoistRequest_copy

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
        const char *HoistStateTYPENAME = "plc::process::HoistState";

        DDS_TypeCode* HoistState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member HoistState_g_tc_members[11]=
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
                    (char *)"actualHookload",/* Member name */
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
                    (char *)"actualVelocity",/* Member name */
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
                    (char *)"actualPosition",/* Member name */
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
                    (char *)"maxHookload",/* Member name */
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
                    (char *)"plc::process::HoistState", /* Name */
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

            HoistState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

            HoistState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HoistState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

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
            return plc::process::HoistState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool HoistState_initialize_ex(
            HoistState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::HoistState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool HoistState_initialize_w_params(
            HoistState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!DataTypes::Status_initialize_w_params(&sample->status,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->actualHookload)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->actualVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->actualPosition)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->maxHookload)) {
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

            plc::process::HoistState_finalize_ex(sample,RTI_TRUE);
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

            plc::process::HoistState_finalize_w_params(
                sample,&deallocParams);
        }

        void HoistState_finalize_w_params(
            HoistState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

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

            DataTypes::Status_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
        }

        RTIBool HoistState_copy(
            HoistState* dst,
            const HoistState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Status_copy(
                    &dst->status,(const DataTypes::Status*)&src->status)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->actualHookload, &src->actualHookload)) { 
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
                    &dst->maxHookload, &src->maxHookload)) { 
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

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
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

        #define T_initialize_w_params plc::process::HoistState_initialize_w_params

        #define T_finalize_w_params   plc::process::HoistState_finalize_w_params
        #define T_copy       plc::process::HoistState_copy

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

