

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_circulate.idl 
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

#include "plc_circulate.h"

#ifndef NDDS_STANDALONE_TYPE
#include "plc_circulatePlugin.h"
#endif

#include <new>

namespace plc {

    namespace process {

        /* ========================================================================= */
        const char *PlcCirculateRequestTYPENAME = "plc::process::PlcCirculateRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * PlcCirculateRequest_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member PlcCirculateRequest_g_tc_members[1]=
            {

                {
                    (char *)"targetFlowRate",/* Member name */
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

            static DDS_TypeCode PlcCirculateRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcCirculateRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    1, /* Number of members */
                    PlcCirculateRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for PlcCirculateRequest*/

            if (is_initialized) {
                return &PlcCirculateRequest_g_tc;
            }

            PlcCirculateRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            PlcCirculateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            PlcCirculateRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateRequest_g_tc._data._sampleAccessInfo =
            PlcCirculateRequest_get_sample_access_info();
            PlcCirculateRequest_g_tc._data._typePlugin =
            PlcCirculateRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &PlcCirculateRequest_g_tc;
        }

        #define TSeq PlcCirculateRequestSeq
        #define T PlcCirculateRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *PlcCirculateRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo PlcCirculateRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(PlcCirculateRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                PlcCirculateRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &PlcCirculateRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *PlcCirculateRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::PlcCirculateRequest *sample;

            static RTIXCdrMemberAccessInfo PlcCirculateRequest_g_memberAccessInfos[1] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo PlcCirculateRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &PlcCirculateRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::PlcCirculateRequest);
            if (sample == NULL) {
                return NULL;
            }

            PlcCirculateRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetFlowRate - (char *)sample);

            PlcCirculateRequest_g_sampleAccessInfo.memberAccessInfos = 
            PlcCirculateRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(PlcCirculateRequest);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    PlcCirculateRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    PlcCirculateRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            PlcCirculateRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            PlcCirculateRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            PlcCirculateRequest_get_member_value_pointer;

            PlcCirculateRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &PlcCirculateRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *PlcCirculateRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin PlcCirculateRequest_g_typePlugin = 
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
                plc::process::PlcCirculateRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::PlcCirculateRequest_finalize_w_return,
                NULL
            };

            return &PlcCirculateRequest_g_typePlugin;
        }
        #endif

        RTIBool PlcCirculateRequest_initialize(
            PlcCirculateRequest* sample) {
            return plc::process::PlcCirculateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool PlcCirculateRequest_initialize_ex(
            PlcCirculateRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::PlcCirculateRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PlcCirculateRequest_initialize_w_params(
            PlcCirculateRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            sample->targetFlowRate = 0.0;

            return RTI_TRUE;
        }

        RTIBool PlcCirculateRequest_finalize_w_return(
            PlcCirculateRequest* sample)
        {
            plc::process::PlcCirculateRequest_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void PlcCirculateRequest_finalize(
            PlcCirculateRequest* sample)
        {

            plc::process::PlcCirculateRequest_finalize_ex(sample,RTI_TRUE);
        }

        void PlcCirculateRequest_finalize_ex(
            PlcCirculateRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::PlcCirculateRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void PlcCirculateRequest_finalize_w_params(
            PlcCirculateRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void PlcCirculateRequest_finalize_optional_members(
            PlcCirculateRequest* sample, RTIBool deletePointers)
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

        RTIBool PlcCirculateRequest_copy(
            PlcCirculateRequest* dst,
            const PlcCirculateRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyDouble (
                    &dst->targetFlowRate, &src->targetFlowRate)) { 
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
        * Configure and implement 'PlcCirculateRequest' sequence class.
        */
        #define T PlcCirculateRequest
        #define TSeq PlcCirculateRequestSeq

        #define T_initialize_w_params plc::process::PlcCirculateRequest_initialize_w_params

        #define T_finalize_w_params   plc::process::PlcCirculateRequest_finalize_w_params
        #define T_copy       plc::process::PlcCirculateRequest_copy

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
        const char *PlcCirculateStateTYPENAME = "plc::process::PlcCirculateState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * PlcCirculateState_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member PlcCirculateState_g_tc_members[8]=
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
                    (char *)"actualFlowRate",/* Member name */
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
                    (char *)"actualStandpipePressure",/* Member name */
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
                    (char *)"minFlowRate",/* Member name */
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
                    (char *)"maxFlowRate",/* Member name */
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
                    (char *)"minStandpipePressure",/* Member name */
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
                    (char *)"maxStandpipePressure",/* Member name */
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
                    (char *)"targetFlowRate",/* Member name */
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

            static DDS_TypeCode PlcCirculateState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcCirculateState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    8, /* Number of members */
                    PlcCirculateState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for PlcCirculateState*/

            if (is_initialized) {
                return &PlcCirculateState_g_tc;
            }

            PlcCirculateState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            PlcCirculateState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            PlcCirculateState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcCirculateState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcCirculateState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcCirculateState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcCirculateState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcCirculateState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcCirculateState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            PlcCirculateState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            PlcCirculateState_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
            PlcCirculateState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            PlcCirculateState_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            PlcCirculateState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            PlcCirculateState_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            PlcCirculateState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            PlcCirculateState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcCirculateState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcCirculateState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcCirculateState_g_tc._data._sampleAccessInfo =
            PlcCirculateState_get_sample_access_info();
            PlcCirculateState_g_tc._data._typePlugin =
            PlcCirculateState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &PlcCirculateState_g_tc;
        }

        #define TSeq PlcCirculateStateSeq
        #define T PlcCirculateState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *PlcCirculateState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo PlcCirculateState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(PlcCirculateStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                PlcCirculateStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &PlcCirculateState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *PlcCirculateState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::PlcCirculateState *sample;

            static RTIXCdrMemberAccessInfo PlcCirculateState_g_memberAccessInfos[8] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo PlcCirculateState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &PlcCirculateState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::PlcCirculateState);
            if (sample == NULL) {
                return NULL;
            }

            PlcCirculateState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            PlcCirculateState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualFlowRate - (char *)sample);

            PlcCirculateState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualStandpipePressure - (char *)sample);

            PlcCirculateState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minFlowRate - (char *)sample);

            PlcCirculateState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxFlowRate - (char *)sample);

            PlcCirculateState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minStandpipePressure - (char *)sample);

            PlcCirculateState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxStandpipePressure - (char *)sample);

            PlcCirculateState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetFlowRate - (char *)sample);

            PlcCirculateState_g_sampleAccessInfo.memberAccessInfos = 
            PlcCirculateState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(PlcCirculateState);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    PlcCirculateState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    PlcCirculateState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            PlcCirculateState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            PlcCirculateState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            PlcCirculateState_get_member_value_pointer;

            PlcCirculateState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &PlcCirculateState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *PlcCirculateState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin PlcCirculateState_g_typePlugin = 
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
                plc::process::PlcCirculateState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::PlcCirculateState_finalize_w_return,
                NULL
            };

            return &PlcCirculateState_g_typePlugin;
        }
        #endif

        RTIBool PlcCirculateState_initialize(
            PlcCirculateState* sample) {
            return plc::process::PlcCirculateState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool PlcCirculateState_initialize_ex(
            PlcCirculateState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::PlcCirculateState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PlcCirculateState_initialize_w_params(
            PlcCirculateState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            sample->status = 0;

            sample->actualFlowRate = 0.0;

            sample->actualStandpipePressure = 0.0;

            sample->minFlowRate = 0.0;

            sample->maxFlowRate = 0.0;

            sample->minStandpipePressure = 0.0;

            sample->maxStandpipePressure = 0.0;

            sample->targetFlowRate = 0.0;

            return RTI_TRUE;
        }

        RTIBool PlcCirculateState_finalize_w_return(
            PlcCirculateState* sample)
        {
            plc::process::PlcCirculateState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void PlcCirculateState_finalize(
            PlcCirculateState* sample)
        {

            plc::process::PlcCirculateState_finalize_ex(sample,RTI_TRUE);
        }

        void PlcCirculateState_finalize_ex(
            PlcCirculateState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::PlcCirculateState_finalize_w_params(
                sample,&deallocParams);
        }

        void PlcCirculateState_finalize_w_params(
            PlcCirculateState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void PlcCirculateState_finalize_optional_members(
            PlcCirculateState* sample, RTIBool deletePointers)
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

        RTIBool PlcCirculateState_copy(
            PlcCirculateState* dst,
            const PlcCirculateState* src)
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
                    &dst->actualFlowRate, &src->actualFlowRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->actualStandpipePressure, &src->actualStandpipePressure)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minFlowRate, &src->minFlowRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxFlowRate, &src->maxFlowRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minStandpipePressure, &src->minStandpipePressure)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxStandpipePressure, &src->maxStandpipePressure)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->targetFlowRate, &src->targetFlowRate)) { 
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
        * Configure and implement 'PlcCirculateState' sequence class.
        */
        #define T PlcCirculateState
        #define TSeq PlcCirculateStateSeq

        #define T_initialize_w_params plc::process::PlcCirculateState_initialize_w_params

        #define T_finalize_w_params   plc::process::PlcCirculateState_finalize_w_params
        #define T_copy       plc::process::PlcCirculateState_copy

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
        const RTIXCdrTypeCode * type_code<plc::process::PlcCirculateRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::PlcCirculateRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<plc::process::PlcCirculateState>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::PlcCirculateState_get_typecode();
        }

    } 
}
#endif
