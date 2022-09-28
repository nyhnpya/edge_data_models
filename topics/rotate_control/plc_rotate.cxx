

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_rotate.idl 
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

#include "plc_rotate.h"

#ifndef NDDS_STANDALONE_TYPE
#include "plc_rotatePlugin.h"
#endif

#include <new>

namespace plc {

    namespace process {

        /* ========================================================================= */
        const char *PlcRotateRequestTYPENAME = "plc::process::PlcRotateRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * PlcRotateRequest_get_typecode(void)
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode PlcRotateRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcRotateRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    1, /* Number of members */
                    PlcRotateRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for PlcRotateRequest*/

            if (is_initialized) {
                return &PlcRotateRequest_g_tc;
            }

            PlcRotateRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            PlcRotateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            PlcRotateRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
            PlcRotateRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcRotateRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcRotateRequest_g_tc._data._sampleAccessInfo =
            PlcRotateRequest_get_sample_access_info();
            PlcRotateRequest_g_tc._data._typePlugin =
            PlcRotateRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &PlcRotateRequest_g_tc;
        }

        #define TSeq PlcRotateRequestSeq
        #define T PlcRotateRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *PlcRotateRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo PlcRotateRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(PlcRotateRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                PlcRotateRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &PlcRotateRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *PlcRotateRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::PlcRotateRequest *sample;

            static RTIXCdrMemberAccessInfo PlcRotateRequest_g_memberAccessInfos[1] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo PlcRotateRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &PlcRotateRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::PlcRotateRequest);
            if (sample == NULL) {
                return NULL;
            }

            PlcRotateRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetRate - (char *)sample);

            PlcRotateRequest_g_sampleAccessInfo.memberAccessInfos = 
            PlcRotateRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(PlcRotateRequest);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    PlcRotateRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    PlcRotateRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            PlcRotateRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            PlcRotateRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            PlcRotateRequest_get_member_value_pointer;

            PlcRotateRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &PlcRotateRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *PlcRotateRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin PlcRotateRequest_g_typePlugin = 
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
                plc::process::PlcRotateRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::PlcRotateRequest_finalize_w_return,
                NULL
            };

            return &PlcRotateRequest_g_typePlugin;
        }
        #endif

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

            sample->targetRate = 0.0;

            return RTI_TRUE;
        }

        RTIBool PlcRotateRequest_finalize_w_return(
            PlcRotateRequest* sample)
        {
            plc::process::PlcRotateRequest_finalize_ex(sample, RTI_TRUE);

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

            } catch (const std::bad_alloc&) {
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

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * PlcRotateState_get_typecode(void)
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode PlcRotateState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcRotateState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    5, /* Number of members */
                    PlcRotateState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for PlcRotateState*/

            if (is_initialized) {
                return &PlcRotateState_g_tc;
            }

            PlcRotateState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            PlcRotateState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            PlcRotateState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcRotateState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcRotateState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcRotateState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            PlcRotateState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            PlcRotateState_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
            PlcRotateState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            PlcRotateState_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            PlcRotateState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            PlcRotateState_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            PlcRotateState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            PlcRotateState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcRotateState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcRotateState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            PlcRotateState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcRotateState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcRotateState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            PlcRotateState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcRotateState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcRotateState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            PlcRotateState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcRotateState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcRotateState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcRotateState_g_tc._data._sampleAccessInfo =
            PlcRotateState_get_sample_access_info();
            PlcRotateState_g_tc._data._typePlugin =
            PlcRotateState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &PlcRotateState_g_tc;
        }

        #define TSeq PlcRotateStateSeq
        #define T PlcRotateState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *PlcRotateState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo PlcRotateState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(PlcRotateStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                PlcRotateStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &PlcRotateState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *PlcRotateState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::PlcRotateState *sample;

            static RTIXCdrMemberAccessInfo PlcRotateState_g_memberAccessInfos[5] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo PlcRotateState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &PlcRotateState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::PlcRotateState);
            if (sample == NULL) {
                return NULL;
            }

            PlcRotateState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            PlcRotateState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualRate - (char *)sample);

            PlcRotateState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minRate - (char *)sample);

            PlcRotateState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxRate - (char *)sample);

            PlcRotateState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetRate - (char *)sample);

            PlcRotateState_g_sampleAccessInfo.memberAccessInfos = 
            PlcRotateState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(PlcRotateState);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    PlcRotateState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    PlcRotateState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            PlcRotateState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            PlcRotateState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            PlcRotateState_get_member_value_pointer;

            PlcRotateState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &PlcRotateState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *PlcRotateState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin PlcRotateState_g_typePlugin = 
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
                plc::process::PlcRotateState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::PlcRotateState_finalize_w_return,
                NULL
            };

            return &PlcRotateState_g_typePlugin;
        }
        #endif

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

            sample->status = 0;

            sample->actualRate = 0.0;

            sample->minRate = 0.0;

            sample->maxRate = 0.0;

            sample->targetRate = 0.0;

            return RTI_TRUE;
        }

        RTIBool PlcRotateState_finalize_w_return(
            PlcRotateState* sample)
        {
            plc::process::PlcRotateState_finalize_ex(sample, RTI_TRUE);

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

            } catch (const std::bad_alloc&) {
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

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<plc::process::PlcRotateRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::PlcRotateRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<plc::process::PlcRotateState>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::PlcRotateState_get_typecode();
        }

    } 
}
#endif
