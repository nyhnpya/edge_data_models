

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objective.idl 
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

#include "objective.h"

#ifndef NDDS_STANDALONE_TYPE
#include "objectivePlugin.h"
#endif

#include <new>

namespace process {

    namespace plan {

        /* ========================================================================= */
        const char *ObjectiveStateTYPENAME = "process::plan::ObjectiveState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * ObjectiveState_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member ObjectiveState_g_tc_members[4]=
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
                    (char *)"parentId",/* Member name */
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
                    (char *)"objective",/* Member name */
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
                }
            };

            static DDS_TypeCode ObjectiveState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"process::plan::ObjectiveState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    4, /* Number of members */
                    ObjectiveState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for ObjectiveState*/

            if (is_initialized) {
                return &ObjectiveState_g_tc;
            }

            ObjectiveState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            ObjectiveState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            ObjectiveState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            ObjectiveState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            ObjectiveState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Objective_get_typecode();

            /* Initialize the values for member annotations. */
            ObjectiveState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            ObjectiveState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            ObjectiveState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            ObjectiveState_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            ObjectiveState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            ObjectiveState_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

            ObjectiveState_g_tc._data._sampleAccessInfo =
            ObjectiveState_get_sample_access_info();
            ObjectiveState_g_tc._data._typePlugin =
            ObjectiveState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &ObjectiveState_g_tc;
        }

        #define TSeq ObjectiveStateSeq
        #define T ObjectiveState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *ObjectiveState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo ObjectiveState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(ObjectiveStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                ObjectiveStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &ObjectiveState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *ObjectiveState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            process::plan::ObjectiveState *sample;

            static RTIXCdrMemberAccessInfo ObjectiveState_g_memberAccessInfos[4] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo ObjectiveState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &ObjectiveState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                process::plan::ObjectiveState);
            if (sample == NULL) {
                return NULL;
            }

            ObjectiveState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            ObjectiveState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->parentId - (char *)sample);

            ObjectiveState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            ObjectiveState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objective - (char *)sample);

            ObjectiveState_g_sampleAccessInfo.memberAccessInfos = 
            ObjectiveState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(ObjectiveState);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    ObjectiveState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    ObjectiveState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            ObjectiveState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            ObjectiveState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            ObjectiveState_get_member_value_pointer;

            ObjectiveState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &ObjectiveState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *ObjectiveState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin ObjectiveState_g_typePlugin = 
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
                process::plan::ObjectiveState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                process::plan::ObjectiveState_finalize_w_return,
                NULL
            };

            return &ObjectiveState_g_typePlugin;
        }
        #endif

        RTIBool ObjectiveState_initialize(
            ObjectiveState* sample) {
            return process::plan::ObjectiveState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool ObjectiveState_initialize_ex(
            ObjectiveState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return process::plan::ObjectiveState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool ObjectiveState_initialize_w_params(
            ObjectiveState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                sample->parentId = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->parentId,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->parentId == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->parentId != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->parentId,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->parentId == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            sample->objective = DataTypes::InitialState;
            return RTI_TRUE;
        }

        RTIBool ObjectiveState_finalize_w_return(
            ObjectiveState* sample)
        {
            process::plan::ObjectiveState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void ObjectiveState_finalize(
            ObjectiveState* sample)
        {

            process::plan::ObjectiveState_finalize_ex(sample,RTI_TRUE);
        }

        void ObjectiveState_finalize_ex(
            ObjectiveState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            process::plan::ObjectiveState_finalize_w_params(
                sample,&deallocParams);
        }

        void ObjectiveState_finalize_w_params(
            ObjectiveState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
            if (sample->parentId != NULL) {
                DDS_String_free(sample->parentId);
                sample->parentId=NULL;

            }
            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            DataTypes::Objective_finalize_w_params(&sample->objective,deallocParams);

        }

        void ObjectiveState_finalize_optional_members(
            ObjectiveState* sample, RTIBool deletePointers)
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

        RTIBool ObjectiveState_copy(
            ObjectiveState* dst,
            const ObjectiveState* src)
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
                    &dst->parentId, src->parentId, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Objective_copy(
                    &dst->objective,(const DataTypes::Objective*)&src->objective)) {
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
        * Configure and implement 'ObjectiveState' sequence class.
        */
        #define T ObjectiveState
        #define TSeq ObjectiveStateSeq

        #define T_initialize_w_params process::plan::ObjectiveState_initialize_w_params

        #define T_finalize_w_params   process::plan::ObjectiveState_finalize_w_params
        #define T_copy       process::plan::ObjectiveState_copy

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

    } /* namespace plan  */

} /* namespace process  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<process::plan::ObjectiveState>::get() 
        {
            return (const RTIXCdrTypeCode *) process::plan::ObjectiveState_get_typecode();
        }

    } 
}
#endif
