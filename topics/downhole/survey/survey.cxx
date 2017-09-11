

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from survey.idl using "rtiddsgen".
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

#include "survey.h"

#include <new>

namespace nec {
    namespace process {

        /* ========================================================================= */
        const char *SurveyRequestTYPENAME = "nec::process::SurveyRequest";

        DDS_TypeCode* SurveyRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member SurveyRequest_g_tc_members[6]=
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
                    (char *)"surveyQuality",/* Member name */
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

            static DDS_TypeCode SurveyRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::SurveyRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    6, /* Number of members */
                    SurveyRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for SurveyRequest*/

            if (is_initialized) {
                return &SurveyRequest_g_tc;
            }

            SurveyRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            SurveyRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            SurveyRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

            SurveyRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            SurveyRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            SurveyRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)DataTypes::SurveyQuality_get_typecode();

            is_initialized = RTI_TRUE;

            return &SurveyRequest_g_tc;
        }

        RTIBool SurveyRequest_initialize(
            SurveyRequest* sample) {
            return nec::process::SurveyRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool SurveyRequest_initialize_ex(
            SurveyRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::SurveyRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool SurveyRequest_initialize_w_params(
            SurveyRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if (!DataTypes::SurveyQuality_initialize_w_params(&sample->surveyQuality,
            allocParams)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        void SurveyRequest_finalize(
            SurveyRequest* sample)
        {

            nec::process::SurveyRequest_finalize_ex(sample,RTI_TRUE);
        }

        void SurveyRequest_finalize_ex(
            SurveyRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::SurveyRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void SurveyRequest_finalize_w_params(
            SurveyRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

            DataTypes::Priority_finalize_w_params(&sample->priority,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timeNeeded,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

            DataTypes::SurveyQuality_finalize_w_params(&sample->surveyQuality,deallocParams);

        }

        void SurveyRequest_finalize_optional_members(
            SurveyRequest* sample, RTIBool deletePointers)
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
            DataTypes::SurveyQuality_finalize_optional_members(&sample->surveyQuality, deallocParams->delete_pointers);
        }

        RTIBool SurveyRequest_copy(
            SurveyRequest* dst,
            const SurveyRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Uuid_copy(
                    &dst->objectiveId,(const DataTypes::Uuid*)&src->objectiveId)) {
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
                    &dst->estimatedDuration,(const DataTypes::Time*)&src->estimatedDuration)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::SurveyQuality_copy(
                    &dst->surveyQuality,(const DataTypes::SurveyQuality*)&src->surveyQuality)) {
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
        * Configure and implement 'SurveyRequest' sequence class.
        */
        #define T SurveyRequest
        #define TSeq SurveyRequestSeq

        #define T_initialize_w_params nec::process::SurveyRequest_initialize_w_params

        #define T_finalize_w_params   nec::process::SurveyRequest_finalize_w_params
        #define T_copy       nec::process::SurveyRequest_copy

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
        const char *SurveyObjectiveTYPENAME = "nec::process::SurveyObjective";

        DDS_TypeCode* SurveyObjective_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member SurveyObjective_g_tc_members[4]=
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
                    (char *)"requestedSurveyQuality",/* Member name */
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

            static DDS_TypeCode SurveyObjective_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::SurveyObjective", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    4, /* Number of members */
                    SurveyObjective_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for SurveyObjective*/

            if (is_initialized) {
                return &SurveyObjective_g_tc;
            }

            SurveyObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            SurveyObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            SurveyObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            SurveyObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::SurveyQuality_get_typecode();

            is_initialized = RTI_TRUE;

            return &SurveyObjective_g_tc;
        }

        RTIBool SurveyObjective_initialize(
            SurveyObjective* sample) {
            return nec::process::SurveyObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool SurveyObjective_initialize_ex(
            SurveyObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::SurveyObjective_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool SurveyObjective_initialize_w_params(
            SurveyObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if (!DataTypes::Uuid_initialize_w_params(&sample->objectiveId,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::SurveyQuality_initialize_w_params(&sample->requestedSurveyQuality,
            allocParams)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        void SurveyObjective_finalize(
            SurveyObjective* sample)
        {

            nec::process::SurveyObjective_finalize_ex(sample,RTI_TRUE);
        }

        void SurveyObjective_finalize_ex(
            SurveyObjective* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::SurveyObjective_finalize_w_params(
                sample,&deallocParams);
        }

        void SurveyObjective_finalize_w_params(
            SurveyObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

            DataTypes::SurveyQuality_finalize_w_params(&sample->requestedSurveyQuality,deallocParams);

        }

        void SurveyObjective_finalize_optional_members(
            SurveyObjective* sample, RTIBool deletePointers)
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
            DataTypes::SurveyQuality_finalize_optional_members(&sample->requestedSurveyQuality, deallocParams->delete_pointers);
        }

        RTIBool SurveyObjective_copy(
            SurveyObjective* dst,
            const SurveyObjective* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Uuid_copy(
                    &dst->objectiveId,(const DataTypes::Uuid*)&src->objectiveId)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->estimatedDuration,(const DataTypes::Time*)&src->estimatedDuration)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::SurveyQuality_copy(
                    &dst->requestedSurveyQuality,(const DataTypes::SurveyQuality*)&src->requestedSurveyQuality)) {
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
        * Configure and implement 'SurveyObjective' sequence class.
        */
        #define T SurveyObjective
        #define TSeq SurveyObjectiveSeq

        #define T_initialize_w_params nec::process::SurveyObjective_initialize_w_params

        #define T_finalize_w_params   nec::process::SurveyObjective_finalize_w_params
        #define T_copy       nec::process::SurveyObjective_copy

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
        const char *SurveyStateTYPENAME = "nec::process::SurveyState";

        DDS_TypeCode* SurveyState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member SurveyState_g_tc_members[25]=
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
                    (char *)"acutalSurveyQuality",/* Member name */
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
                    (char *)"measuredDepth",/* Member name */
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
                    (char *)"inclination",/* Member name */
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
                    (char *)"azimuth",/* Member name */
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
                    (char *)"totalVerticalDepth",/* Member name */
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
                    (char *)"dogLeg",/* Member name */
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
                    (char *)"verticalSection",/* Member name */
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
                    (char *)"eastWest",/* Member name */
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
                    (char *)"northSouth",/* Member name */
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
                    (char *)"courseLength",/* Member name */
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
                    (char *)"ca",/* Member name */
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
                    (char *)"cd",/* Member name */
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
                    (char *)"cl",/* Member name */
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
                    (char *)"buildRate",/* Member name */
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
                    (char *)"turnRate",/* Member name */
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
                }, 
                {
                    (char *)"topOfTarget",/* Member name */
                    {
                        19,/* Representation ID */          
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
                    (char *)"bottomOfTarget",/* Member name */
                    {
                        20,/* Representation ID */          
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
                    (char *)"dip",/* Member name */
                    {
                        21,/* Representation ID */          
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
                    (char *)"fault",/* Member name */
                    {
                        22,/* Representation ID */          
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
                    (char *)"surveyCost",/* Member name */
                    {
                        23,/* Representation ID */          
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
                    (char *)"requestedSurveyQuality",/* Member name */
                    {
                        24,/* Representation ID */          
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

            static DDS_TypeCode SurveyState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::SurveyState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    25, /* Number of members */
                    SurveyState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for SurveyState*/

            if (is_initialized) {
                return &SurveyState_g_tc;
            }

            SurveyState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            SurveyState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            SurveyState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            SurveyState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

            SurveyState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)DataTypes::SurveyQuality_get_typecode();

            SurveyState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            SurveyState_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)DataTypes::SurveyQuality_get_typecode();

            is_initialized = RTI_TRUE;

            return &SurveyState_g_tc;
        }

        RTIBool SurveyState_initialize(
            SurveyState* sample) {
            return nec::process::SurveyState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool SurveyState_initialize_ex(
            SurveyState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::SurveyState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool SurveyState_initialize_w_params(
            SurveyState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if (!DataTypes::SurveyQuality_initialize_w_params(&sample->acutalSurveyQuality,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->measuredDepth)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->inclination)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->azimuth)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->totalVerticalDepth)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->dogLeg)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->verticalSection)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->eastWest)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->northSouth)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->courseLength)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->ca)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->cd)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->cl)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->buildRate)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->turnRate)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->topOfTarget)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->bottomOfTarget)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->dip)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->fault)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->surveyCost)) {
                return RTI_FALSE;
            }

            if (!DataTypes::SurveyQuality_initialize_w_params(&sample->requestedSurveyQuality,
            allocParams)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        void SurveyState_finalize(
            SurveyState* sample)
        {

            nec::process::SurveyState_finalize_ex(sample,RTI_TRUE);
        }

        void SurveyState_finalize_ex(
            SurveyState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::SurveyState_finalize_w_params(
                sample,&deallocParams);
        }

        void SurveyState_finalize_w_params(
            SurveyState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

            DataTypes::SurveyQuality_finalize_w_params(&sample->acutalSurveyQuality,deallocParams);

            DataTypes::SurveyQuality_finalize_w_params(&sample->requestedSurveyQuality,deallocParams);

        }

        void SurveyState_finalize_optional_members(
            SurveyState* sample, RTIBool deletePointers)
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
            DataTypes::SurveyQuality_finalize_optional_members(&sample->acutalSurveyQuality, deallocParams->delete_pointers);
            DataTypes::SurveyQuality_finalize_optional_members(&sample->requestedSurveyQuality, deallocParams->delete_pointers);
        }

        RTIBool SurveyState_copy(
            SurveyState* dst,
            const SurveyState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Uuid_copy(
                    &dst->objectiveId,(const DataTypes::Uuid*)&src->objectiveId)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Status_copy(
                    &dst->status,(const DataTypes::Status*)&src->status)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::SurveyQuality_copy(
                    &dst->acutalSurveyQuality,(const DataTypes::SurveyQuality*)&src->acutalSurveyQuality)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->measuredDepth, &src->measuredDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->inclination, &src->inclination)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->azimuth, &src->azimuth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->totalVerticalDepth, &src->totalVerticalDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->dogLeg, &src->dogLeg)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->verticalSection, &src->verticalSection)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->eastWest, &src->eastWest)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->northSouth, &src->northSouth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->courseLength, &src->courseLength)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ca, &src->ca)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->cd, &src->cd)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->cl, &src->cl)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->buildRate, &src->buildRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->turnRate, &src->turnRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->topOfTarget, &src->topOfTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->bottomOfTarget, &src->bottomOfTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->dip, &src->dip)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->fault, &src->fault)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->surveyCost, &src->surveyCost)) { 
                    return RTI_FALSE;
                }
                if (!DataTypes::SurveyQuality_copy(
                    &dst->requestedSurveyQuality,(const DataTypes::SurveyQuality*)&src->requestedSurveyQuality)) {
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
        * Configure and implement 'SurveyState' sequence class.
        */
        #define T SurveyState
        #define TSeq SurveyStateSeq

        #define T_initialize_w_params nec::process::SurveyState_initialize_w_params

        #define T_finalize_w_params   nec::process::SurveyState_finalize_w_params
        #define T_copy       nec::process::SurveyState_copy

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
} /* namespace nec  */

