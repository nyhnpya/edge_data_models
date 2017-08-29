

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
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

#include "rotate_engineering.h"

namespace nec {
    namespace control {

        /* ========================================================================= */
        const char *RotateEngineeringRequestTYPENAME = "nec::control::RotateEngineeringRequest";

        DDS_TypeCode* RotateEngineeringRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RotateEngineeringRequest_g_tc_members[5]=
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

            static DDS_TypeCode RotateEngineeringRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::RotateEngineeringRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    5, /* Number of members */
                    RotateEngineeringRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for RotateEngineeringRequest*/

            if (is_initialized) {
                return &RotateEngineeringRequest_g_tc;
            }

            RotateEngineeringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            RotateEngineeringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

            RotateEngineeringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            RotateEngineeringRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            RotateEngineeringRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &RotateEngineeringRequest_g_tc;
        }

        RTIBool RotateEngineeringRequest_initialize(
            RotateEngineeringRequest* sample) {
            return nec::control::RotateEngineeringRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RotateEngineeringRequest_initialize_ex(
            RotateEngineeringRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::RotateEngineeringRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RotateEngineeringRequest_initialize_w_params(
            RotateEngineeringRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            if (!RTICdrType_initDouble(&sample->targetRate)) {
                return RTI_FALSE;
            }     

            return RTI_TRUE;
        }

        void RotateEngineeringRequest_finalize(
            RotateEngineeringRequest* sample)
        {

            nec::control::RotateEngineeringRequest_finalize_ex(sample,RTI_TRUE);
        }

        void RotateEngineeringRequest_finalize_ex(
            RotateEngineeringRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::RotateEngineeringRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void RotateEngineeringRequest_finalize_w_params(
            RotateEngineeringRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

        void RotateEngineeringRequest_finalize_optional_members(
            RotateEngineeringRequest* sample, RTIBool deletePointers)
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

        RTIBool RotateEngineeringRequest_copy(
            RotateEngineeringRequest* dst,
            const RotateEngineeringRequest* src)
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
        * Configure and implement 'RotateEngineeringRequest' sequence class.
        */
        #define T RotateEngineeringRequest
        #define TSeq RotateEngineeringRequestSeq
        #define T_initialize_w_params nec::control::RotateEngineeringRequest_initialize_w_params
        #define T_finalize_w_params   nec::control::RotateEngineeringRequest_finalize_w_params
        #define T_copy       nec::control::RotateEngineeringRequest_copy

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
        const char *RotateEngineeringObjectiveTYPENAME = "nec::control::RotateEngineeringObjective";

        DDS_TypeCode* RotateEngineeringObjective_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RotateEngineeringObjective_g_tc_members[4]=
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
                    (char *)"targetRate",/* Member name */
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
                    (char *)"targetTorque",/* Member name */
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

            static DDS_TypeCode RotateEngineeringObjective_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::RotateEngineeringObjective", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    4, /* Number of members */
                    RotateEngineeringObjective_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for RotateEngineeringObjective*/

            if (is_initialized) {
                return &RotateEngineeringObjective_g_tc;
            }

            RotateEngineeringObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            RotateEngineeringObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            RotateEngineeringObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            RotateEngineeringObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &RotateEngineeringObjective_g_tc;
        }

        RTIBool RotateEngineeringObjective_initialize(
            RotateEngineeringObjective* sample) {
            return nec::control::RotateEngineeringObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RotateEngineeringObjective_initialize_ex(
            RotateEngineeringObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::RotateEngineeringObjective_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RotateEngineeringObjective_initialize_w_params(
            RotateEngineeringObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            if (!RTICdrType_initDouble(&sample->targetRate)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->targetTorque)) {
                return RTI_FALSE;
            }     

            return RTI_TRUE;
        }

        void RotateEngineeringObjective_finalize(
            RotateEngineeringObjective* sample)
        {

            nec::control::RotateEngineeringObjective_finalize_ex(sample,RTI_TRUE);
        }

        void RotateEngineeringObjective_finalize_ex(
            RotateEngineeringObjective* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::RotateEngineeringObjective_finalize_w_params(
                sample,&deallocParams);
        }

        void RotateEngineeringObjective_finalize_w_params(
            RotateEngineeringObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }
            if (deallocParams) {} /* To avoid warnings */

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

        }

        void RotateEngineeringObjective_finalize_optional_members(
            RotateEngineeringObjective* sample, RTIBool deletePointers)
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

        RTIBool RotateEngineeringObjective_copy(
            RotateEngineeringObjective* dst,
            const RotateEngineeringObjective* src)
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
                &dst->targetRate, &src->targetRate)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->targetTorque, &src->targetTorque)) { 
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'RotateEngineeringObjective' sequence class.
        */
        #define T RotateEngineeringObjective
        #define TSeq RotateEngineeringObjectiveSeq
        #define T_initialize_w_params nec::control::RotateEngineeringObjective_initialize_w_params
        #define T_finalize_w_params   nec::control::RotateEngineeringObjective_finalize_w_params
        #define T_copy       nec::control::RotateEngineeringObjective_copy

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
        const char *RotateEngineeringStateTYPENAME = "nec::control::RotateEngineeringState";

        DDS_TypeCode* RotateEngineeringState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RotateEngineeringState_g_tc_members[10]=
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
                    (char *)"actualRate",/* Member name */
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
                    (char *)"actualTorque",/* Member name */
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
                    (char *)"minTorque",/* Member name */
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
                    (char *)"maxTorque",/* Member name */
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
                    (char *)"targetRate",/* Member name */
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

            static DDS_TypeCode RotateEngineeringState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::RotateEngineeringState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    10, /* Number of members */
                    RotateEngineeringState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for RotateEngineeringState*/

            if (is_initialized) {
                return &RotateEngineeringState_g_tc;
            }

            RotateEngineeringState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            RotateEngineeringState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

            RotateEngineeringState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            RotateEngineeringState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            RotateEngineeringState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            RotateEngineeringState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            RotateEngineeringState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            RotateEngineeringState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            RotateEngineeringState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            RotateEngineeringState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &RotateEngineeringState_g_tc;
        }

        RTIBool RotateEngineeringState_initialize(
            RotateEngineeringState* sample) {
            return nec::control::RotateEngineeringState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RotateEngineeringState_initialize_ex(
            RotateEngineeringState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::RotateEngineeringState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RotateEngineeringState_initialize_w_params(
            RotateEngineeringState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            if (!RTICdrType_initDouble(&sample->actualRate)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->actualTorque)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->minRate)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->maxRate)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->minTorque)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->maxTorque)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->targetRate)) {
                return RTI_FALSE;
            }     

            return RTI_TRUE;
        }

        void RotateEngineeringState_finalize(
            RotateEngineeringState* sample)
        {

            nec::control::RotateEngineeringState_finalize_ex(sample,RTI_TRUE);
        }

        void RotateEngineeringState_finalize_ex(
            RotateEngineeringState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::RotateEngineeringState_finalize_w_params(
                sample,&deallocParams);
        }

        void RotateEngineeringState_finalize_w_params(
            RotateEngineeringState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }
            if (deallocParams) {} /* To avoid warnings */

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        }

        void RotateEngineeringState_finalize_optional_members(
            RotateEngineeringState* sample, RTIBool deletePointers)
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

        RTIBool RotateEngineeringState_copy(
            RotateEngineeringState* dst,
            const RotateEngineeringState* src)
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
                &dst->actualRate, &src->actualRate)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->actualTorque, &src->actualTorque)) { 
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
                &dst->minTorque, &src->minTorque)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->maxTorque, &src->maxTorque)) { 
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
        * Configure and implement 'RotateEngineeringState' sequence class.
        */
        #define T RotateEngineeringState
        #define TSeq RotateEngineeringStateSeq
        #define T_initialize_w_params nec::control::RotateEngineeringState_initialize_w_params
        #define T_finalize_w_params   nec::control::RotateEngineeringState_finalize_w_params
        #define T_copy       nec::control::RotateEngineeringState_copy

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

