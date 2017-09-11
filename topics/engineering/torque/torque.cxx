

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from torque.idl using "rtiddsgen".
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

#include "torque.h"

#include <new>

namespace nec {
    namespace control {

        /* ========================================================================= */
        const char *TorqueRequestTYPENAME = "nec::control::TorqueRequest";

        DDS_TypeCode* TorqueRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member TorqueRequest_g_tc_members[5]=
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
                    (char *)"target",/* Member name */
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

            static DDS_TypeCode TorqueRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::TorqueRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    5, /* Number of members */
                    TorqueRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for TorqueRequest*/

            if (is_initialized) {
                return &TorqueRequest_g_tc;
            }

            TorqueRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            TorqueRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

            TorqueRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            TorqueRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            TorqueRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &TorqueRequest_g_tc;
        }

        RTIBool TorqueRequest_initialize(
            TorqueRequest* sample) {
            return nec::control::TorqueRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool TorqueRequest_initialize_ex(
            TorqueRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::TorqueRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool TorqueRequest_initialize_w_params(
            TorqueRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            if (!RTICdrType_initDouble(&sample->target)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void TorqueRequest_finalize(
            TorqueRequest* sample)
        {

            nec::control::TorqueRequest_finalize_ex(sample,RTI_TRUE);
        }

        void TorqueRequest_finalize_ex(
            TorqueRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::TorqueRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void TorqueRequest_finalize_w_params(
            TorqueRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Priority_finalize_w_params(&sample->priority,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timeNeeded,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->duration,deallocParams);

        }

        void TorqueRequest_finalize_optional_members(
            TorqueRequest* sample, RTIBool deletePointers)
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

        RTIBool TorqueRequest_copy(
            TorqueRequest* dst,
            const TorqueRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Priority_copy(
                    &dst->priority,(const DataTypes::Priority*)&src->priority)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->timeNeeded,(const DataTypes::Time*)&src->timeNeeded)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->duration,(const DataTypes::Time*)&src->duration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->target, &src->target)) { 
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
        * Configure and implement 'TorqueRequest' sequence class.
        */
        #define T TorqueRequest
        #define TSeq TorqueRequestSeq

        #define T_initialize_w_params nec::control::TorqueRequest_initialize_w_params

        #define T_finalize_w_params   nec::control::TorqueRequest_finalize_w_params
        #define T_copy       nec::control::TorqueRequest_copy

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
        const char *TorqueObjectiveTYPENAME = "nec::control::TorqueObjective";

        DDS_TypeCode* TorqueObjective_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member TorqueObjective_g_tc_members[3]=
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
                    (char *)"limit",/* Member name */
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

            static DDS_TypeCode TorqueObjective_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::TorqueObjective", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    TorqueObjective_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for TorqueObjective*/

            if (is_initialized) {
                return &TorqueObjective_g_tc;
            }

            TorqueObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            TorqueObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            TorqueObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &TorqueObjective_g_tc;
        }

        RTIBool TorqueObjective_initialize(
            TorqueObjective* sample) {
            return nec::control::TorqueObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool TorqueObjective_initialize_ex(
            TorqueObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::TorqueObjective_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool TorqueObjective_initialize_w_params(
            TorqueObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->limit)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void TorqueObjective_finalize(
            TorqueObjective* sample)
        {

            nec::control::TorqueObjective_finalize_ex(sample,RTI_TRUE);
        }

        void TorqueObjective_finalize_ex(
            TorqueObjective* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::TorqueObjective_finalize_w_params(
                sample,&deallocParams);
        }

        void TorqueObjective_finalize_w_params(
            TorqueObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

        }

        void TorqueObjective_finalize_optional_members(
            TorqueObjective* sample, RTIBool deletePointers)
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

        RTIBool TorqueObjective_copy(
            TorqueObjective* dst,
            const TorqueObjective* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->estimatedDuration,(const DataTypes::Time*)&src->estimatedDuration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->limit, &src->limit)) { 
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
        * Configure and implement 'TorqueObjective' sequence class.
        */
        #define T TorqueObjective
        #define TSeq TorqueObjectiveSeq

        #define T_initialize_w_params nec::control::TorqueObjective_initialize_w_params

        #define T_finalize_w_params   nec::control::TorqueObjective_finalize_w_params
        #define T_copy       nec::control::TorqueObjective_copy

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
        const char *TorqueStateTYPENAME = "nec::control::TorqueState";

        DDS_TypeCode* TorqueState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member TorqueState_g_tc_members[6]=
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
                    (char *)"actual",/* Member name */
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
                    (char *)"minForce",/* Member name */
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
                    (char *)"maxForce",/* Member name */
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
                    (char *)"limit",/* Member name */
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

            static DDS_TypeCode TorqueState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::TorqueState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    6, /* Number of members */
                    TorqueState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for TorqueState*/

            if (is_initialized) {
                return &TorqueState_g_tc;
            }

            TorqueState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            TorqueState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

            TorqueState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            TorqueState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            TorqueState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            TorqueState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &TorqueState_g_tc;
        }

        RTIBool TorqueState_initialize(
            TorqueState* sample) {
            return nec::control::TorqueState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool TorqueState_initialize_ex(
            TorqueState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::TorqueState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool TorqueState_initialize_w_params(
            TorqueState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if (!DataTypes::Status_initialize_w_params(&sample->status,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->actual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->minForce)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->maxForce)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->limit)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void TorqueState_finalize(
            TorqueState* sample)
        {

            nec::control::TorqueState_finalize_ex(sample,RTI_TRUE);
        }

        void TorqueState_finalize_ex(
            TorqueState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::TorqueState_finalize_w_params(
                sample,&deallocParams);
        }

        void TorqueState_finalize_w_params(
            TorqueState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

        }

        void TorqueState_finalize_optional_members(
            TorqueState* sample, RTIBool deletePointers)
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
        }

        RTIBool TorqueState_copy(
            TorqueState* dst,
            const TorqueState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Status_copy(
                    &dst->status,(const DataTypes::Status*)&src->status)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->actual, &src->actual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minForce, &src->minForce)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxForce, &src->maxForce)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->limit, &src->limit)) { 
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
        * Configure and implement 'TorqueState' sequence class.
        */
        #define T TorqueState
        #define TSeq TorqueStateSeq

        #define T_initialize_w_params nec::control::TorqueState_initialize_w_params

        #define T_finalize_w_params   nec::control::TorqueState_finalize_w_params
        #define T_copy       nec::control::TorqueState_copy

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
    } /* namespace control  */
} /* namespace nec  */

