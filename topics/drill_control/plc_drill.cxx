

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
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

#include "plc_drill.h"

#ifndef NDDS_STANDALONE_TYPE
#include "plc_drillPlugin.h"
#endif

#include <new>

namespace plc {

    namespace process {

        /* ========================================================================= */
        const char *DrillRequestTopicTYPENAME = "plc::process::DrillRequestTopic";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* DrillRequestTopic_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillRequestTopic_g_tc_members[8]=
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode DrillRequestTopic_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::DrillRequestTopic", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    8, /* Number of members */
                    DrillRequestTopic_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillRequestTopic*/

            if (is_initialized) {
                return &DrillRequestTopic_g_tc;
            }

            DrillRequestTopic_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillRequestTopic_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequestTopic_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequestTopic_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequestTopic_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequestTopic_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillRequestTopic_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillRequestTopic_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillRequestTopic_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

            /* Initialize the values for member annotations. */
            DrillRequestTopic_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequestTopic_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequestTopic_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequestTopic_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequestTopic_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequestTopic_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequestTopic_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequestTopic_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequestTopic_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequestTopic_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequestTopic_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequestTopic_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequestTopic_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequestTopic_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequestTopic_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequestTopic_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequestTopic_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequestTopic_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequestTopic_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequestTopic_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequestTopic_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequestTopic_g_tc._data._sampleAccessInfo =
            DrillRequestTopic_get_sample_access_info();
            DrillRequestTopic_g_tc._data._typePlugin =
            DrillRequestTopic_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillRequestTopic_g_tc;
        }

        #define TSeq DrillRequestTopicSeq
        #define T DrillRequestTopic
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillRequestTopic_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillRequestTopic_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillRequestTopicSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillRequestTopicSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillRequestTopic_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillRequestTopic_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::DrillRequestTopic *sample;

            static RTIXCdrMemberAccessInfo DrillRequestTopic_g_memberAccessInfos[8] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillRequestTopic_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillRequestTopic_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::DrillRequestTopic);
            if (sample == NULL) {
                return NULL;
            }

            DrillRequestTopic_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropLimit - (char *)sample);

            DrillRequestTopic_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobLimit - (char *)sample);

            DrillRequestTopic_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureLimit - (char *)sample);

            DrillRequestTopic_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueLimit - (char *)sample);

            DrillRequestTopic_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMode - (char *)sample);

            DrillRequestTopic_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMode - (char *)sample);

            DrillRequestTopic_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureMode - (char *)sample);

            DrillRequestTopic_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMode - (char *)sample);

            DrillRequestTopic_g_sampleAccessInfo.memberAccessInfos = 
            DrillRequestTopic_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillRequestTopic);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    DrillRequestTopic_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    DrillRequestTopic_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillRequestTopic_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillRequestTopic_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillRequestTopic_get_member_value_pointer;

            DrillRequestTopic_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillRequestTopic_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillRequestTopic_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillRequestTopic_g_typePlugin = 
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
                plc::process::DrillRequestTopic_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::DrillRequestTopic_finalize_w_return,
                NULL
            };

            return &DrillRequestTopic_g_typePlugin;
        }
        #endif

        RTIBool DrillRequestTopic_initialize(
            DrillRequestTopic* sample) {
            return plc::process::DrillRequestTopic_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillRequestTopic_initialize_ex(
            DrillRequestTopic* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::DrillRequestTopic_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillRequestTopic_initialize_w_params(
            DrillRequestTopic* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            sample->ropLimit = 0.0;

            sample->wobLimit = 0.0;

            sample->diffPressureLimit = 0.0;

            sample->torqueLimit = 0.0;

            sample->ropMode = 0;

            sample->wobMode = 0;

            sample->diffPressureMode = 0;

            sample->torqueMode = 0;

            return RTI_TRUE;
        }

        RTIBool DrillRequestTopic_finalize_w_return(
            DrillRequestTopic* sample)
        {
            plc::process::DrillRequestTopic_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillRequestTopic_finalize(
            DrillRequestTopic* sample)
        {

            plc::process::DrillRequestTopic_finalize_ex(sample,RTI_TRUE);
        }

        void DrillRequestTopic_finalize_ex(
            DrillRequestTopic* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::DrillRequestTopic_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillRequestTopic_finalize_w_params(
            DrillRequestTopic* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void DrillRequestTopic_finalize_optional_members(
            DrillRequestTopic* sample, RTIBool deletePointers)
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

        RTIBool DrillRequestTopic_copy(
            DrillRequestTopic* dst,
            const DrillRequestTopic* src)
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

            } catch (const std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'DrillRequestTopic' sequence class.
        */
        #define T DrillRequestTopic
        #define TSeq DrillRequestTopicSeq

        #define T_initialize_w_params plc::process::DrillRequestTopic_initialize_w_params

        #define T_finalize_w_params   plc::process::DrillRequestTopic_finalize_w_params
        #define T_copy       plc::process::DrillRequestTopic_copy

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
        const char *DrillStateTopicTYPENAME = "plc::process::DrillStateTopic";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* DrillStateTopic_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillStateTopic_g_tc_members[16]=
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode DrillStateTopic_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::DrillStateTopic", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    16, /* Number of members */
                    DrillStateTopic_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillStateTopic*/

            if (is_initialized) {
                return &DrillStateTopic_g_tc;
            }

            DrillStateTopic_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillStateTopic_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillStateTopic_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillStateTopic_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillStateTopic_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillStateTopic_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillStateTopic_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            DrillStateTopic_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillStateTopic_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;

            DrillStateTopic_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillStateTopic_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;

            DrillStateTopic_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillStateTopic_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;

            DrillStateTopic_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillStateTopic_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;

            DrillStateTopic_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[15]._annotations._defaultValue._u.double_value = 0.0;
            DrillStateTopic_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillStateTopic_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillStateTopic_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillStateTopic_g_tc._data._sampleAccessInfo =
            DrillStateTopic_get_sample_access_info();
            DrillStateTopic_g_tc._data._typePlugin =
            DrillStateTopic_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillStateTopic_g_tc;
        }

        #define TSeq DrillStateTopicSeq
        #define T DrillStateTopic
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillStateTopic_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillStateTopic_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillStateTopicSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillStateTopicSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillStateTopic_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillStateTopic_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::DrillStateTopic *sample;

            static RTIXCdrMemberAccessInfo DrillStateTopic_g_memberAccessInfos[16] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillStateTopic_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillStateTopic_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::DrillStateTopic);
            if (sample == NULL) {
                return NULL;
            }

            DrillStateTopic_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropActual - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobActual - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureActual - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueActual - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMachineLimit - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMachineLimit - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureMachineLimit - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMachineLimit - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMode - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMode - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureMode - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMode - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropLimit - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobLimit - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureLimit - (char *)sample);

            DrillStateTopic_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueLimit - (char *)sample);

            DrillStateTopic_g_sampleAccessInfo.memberAccessInfos = 
            DrillStateTopic_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillStateTopic);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    DrillStateTopic_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    DrillStateTopic_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillStateTopic_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillStateTopic_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillStateTopic_get_member_value_pointer;

            DrillStateTopic_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillStateTopic_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillStateTopic_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillStateTopic_g_typePlugin = 
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
                plc::process::DrillStateTopic_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::DrillStateTopic_finalize_w_return,
                NULL
            };

            return &DrillStateTopic_g_typePlugin;
        }
        #endif

        RTIBool DrillStateTopic_initialize(
            DrillStateTopic* sample) {
            return plc::process::DrillStateTopic_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillStateTopic_initialize_ex(
            DrillStateTopic* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::DrillStateTopic_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillStateTopic_initialize_w_params(
            DrillStateTopic* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            sample->ropActual = 0.0;

            sample->wobActual = 0.0;

            sample->diffPressureActual = 0.0;

            sample->torqueActual = 0.0;

            sample->ropMachineLimit = 0.0;

            sample->wobMachineLimit = 0.0;

            sample->diffPressureMachineLimit = 0.0;

            sample->torqueMachineLimit = 0.0;

            sample->ropMode = 0;

            sample->wobMode = 0;

            sample->diffPressureMode = 0;

            sample->torqueMode = 0;

            sample->ropLimit = 0.0;

            sample->wobLimit = 0.0;

            sample->diffPressureLimit = 0.0;

            sample->torqueLimit = 0.0;

            return RTI_TRUE;
        }

        RTIBool DrillStateTopic_finalize_w_return(
            DrillStateTopic* sample)
        {
            plc::process::DrillStateTopic_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillStateTopic_finalize(
            DrillStateTopic* sample)
        {

            plc::process::DrillStateTopic_finalize_ex(sample,RTI_TRUE);
        }

        void DrillStateTopic_finalize_ex(
            DrillStateTopic* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::DrillStateTopic_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillStateTopic_finalize_w_params(
            DrillStateTopic* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void DrillStateTopic_finalize_optional_members(
            DrillStateTopic* sample, RTIBool deletePointers)
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

        RTIBool DrillStateTopic_copy(
            DrillStateTopic* dst,
            const DrillStateTopic* src)
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

            } catch (const std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'DrillStateTopic' sequence class.
        */
        #define T DrillStateTopic
        #define TSeq DrillStateTopicSeq

        #define T_initialize_w_params plc::process::DrillStateTopic_initialize_w_params

        #define T_finalize_w_params   plc::process::DrillStateTopic_finalize_w_params
        #define T_copy       plc::process::DrillStateTopic_copy

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
        const RTIXCdrTypeCode * type_code<plc::process::DrillRequestTopic>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::DrillRequestTopic_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<plc::process::DrillStateTopic>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::DrillStateTopic_get_typecode();
        }

    } 
}
#endif
