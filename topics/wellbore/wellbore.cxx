

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from wellbore.idl 
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
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

#include "wellbore.h"

#ifndef NDDS_STANDALONE_TYPE
#include "wellborePlugin.h"
#endif

#include <new>

namespace nec {

    namespace process {

        /* ========================================================================= */
        const char *WellboreStateTYPENAME = "nec::process::WellboreState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * WellboreState_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member WellboreState_g_tc_members[5]=
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"holeDepth",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"bitDepth",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode WellboreState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::WellboreState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    5, /* Number of members */
                    WellboreState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for WellboreState*/

            if (is_initialized) {
                return &WellboreState_g_tc;
            }

            WellboreState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            WellboreState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            WellboreState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            WellboreState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            WellboreState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            WellboreState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            WellboreState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            WellboreState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            WellboreState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            WellboreState_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            WellboreState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            WellboreState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            WellboreState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            WellboreState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            WellboreState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            WellboreState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            WellboreState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            WellboreState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            WellboreState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            WellboreState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            WellboreState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            WellboreState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            WellboreState_g_tc._data._sampleAccessInfo =
            WellboreState_get_sample_access_info();
            WellboreState_g_tc._data._typePlugin =
            WellboreState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &WellboreState_g_tc;
        }

        #define TSeq WellboreStateSeq
        #define T WellboreState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *WellboreState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo WellboreState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(WellboreStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                WellboreStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &WellboreState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *WellboreState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::process::WellboreState *sample;

            static RTIXCdrMemberAccessInfo WellboreState_g_memberAccessInfos[5] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo WellboreState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &WellboreState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::process::WellboreState);
            if (sample == NULL) {
                return NULL;
            }

            WellboreState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            WellboreState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            WellboreState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            WellboreState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->holeDepth - (char *)sample);

            WellboreState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->bitDepth - (char *)sample);

            WellboreState_g_sampleAccessInfo.memberAccessInfos = 
            WellboreState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(WellboreState);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    WellboreState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    WellboreState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            WellboreState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            WellboreState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            WellboreState_get_member_value_pointer;

            WellboreState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &WellboreState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *WellboreState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin WellboreState_g_typePlugin = 
            {
                NULL, /* serialize */
                NULL, /* serialize_key */
                NULL, /* deserialize_sample */
                NULL, /* deserialize_key_sample */
                NULL, /* skip */
                NULL, /* get_serialized_sample_size */
                NULL, /* get_serialized_sample_max_size_ex */
                NULL, /* get_serialized_key_max_size_ex */
                NULL, /* get_serialized_sample_min_size */
                NULL, /* serialized_sample_to_key */
                (RTIXCdrTypePluginInitializeSampleFunction) 
                nec::process::WellboreState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::process::WellboreState_finalize_w_return,
                NULL
            };

            return &WellboreState_g_typePlugin;
        }
        #endif

        RTIBool WellboreState_initialize(
            WellboreState* sample) {
            return nec::process::WellboreState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool WellboreState_initialize_ex(
            WellboreState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::WellboreState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool WellboreState_initialize_w_params(
            WellboreState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (allocParams->allocate_memory) {
                sample->objectiveId = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->objectiveId,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->objectiveId == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->objectiveId != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->objectiveId,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->objectiveId == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            sample->holeDepth = 0.0;

            sample->bitDepth = 0.0;

            return RTI_TRUE;
        }

        RTIBool WellboreState_finalize_w_return(
            WellboreState* sample)
        {
            nec::process::WellboreState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void WellboreState_finalize(
            WellboreState* sample)
        {

            nec::process::WellboreState_finalize_ex(sample,RTI_TRUE);
        }

        void WellboreState_finalize_ex(
            WellboreState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::WellboreState_finalize_w_params(
                sample,&deallocParams);
        }

        void WellboreState_finalize_w_params(
            WellboreState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            if (sample->id != NULL) {
                DDS_String_free(sample->id);
                sample->id=NULL;

            }
            if (sample->objectiveId != NULL) {
                DDS_String_free(sample->objectiveId);
                sample->objectiveId=NULL;

            }
            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        }

        void WellboreState_finalize_optional_members(
            WellboreState* sample, RTIBool deletePointers)
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

        RTIBool WellboreState_copy(
            WellboreState* dst,
            const WellboreState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->objectiveId, src->objectiveId, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->holeDepth, &src->holeDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->bitDepth, &src->bitDepth)) { 
                    return RTI_FALSE;
                }

                return RTI_TRUE;

            } catch (const std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'WellboreState' sequence class.
        */
        #define T WellboreState
        #define TSeq WellboreStateSeq

        #define T_initialize_w_params nec::process::WellboreState_initialize_w_params

        #define T_finalize_w_params   nec::process::WellboreState_finalize_w_params
        #define T_copy       nec::process::WellboreState_copy

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

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<nec::process::WellboreState>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::process::WellboreState_get_typecode();
        }

    } 
}
#endif
