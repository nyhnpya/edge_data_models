

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_circulate.idl using "rtiddsgen".
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

#include "plc_circulate.h"

#ifndef NDDS_STANDALONE_TYPE
#include "plc_circulatePlugin.h"
#endif

#include <new>

namespace plc {

    namespace process {

        /* ========================================================================= */
        const char *CirculateRequestTYPENAME = "plc::process::CirculateRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* CirculateRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member CirculateRequest_g_tc_members[1]=
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

            static DDS_TypeCode CirculateRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::CirculateRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    1, /* Number of members */
                    CirculateRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for CirculateRequest*/

            if (is_initialized) {
                return &CirculateRequest_g_tc;
            }

            CirculateRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            CirculateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            CirculateRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
            CirculateRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateRequest_g_tc._data._sampleAccessInfo =
            CirculateRequest_get_sample_access_info();
            CirculateRequest_g_tc._data._typePlugin =
            CirculateRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &CirculateRequest_g_tc;
        }

        #define TSeq CirculateRequestSeq
        #define T CirculateRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *CirculateRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo CirculateRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(CirculateRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                CirculateRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &CirculateRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *CirculateRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::CirculateRequest *sample;

            static RTIXCdrMemberAccessInfo CirculateRequest_g_memberAccessInfos[1] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo CirculateRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &CirculateRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::CirculateRequest);
            if (sample == NULL) {
                return NULL;
            }

            CirculateRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetFlowRate - (char *)sample);

            CirculateRequest_g_sampleAccessInfo.memberAccessInfos = 
            CirculateRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(CirculateRequest);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    CirculateRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    CirculateRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            CirculateRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            CirculateRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            CirculateRequest_get_member_value_pointer;

            CirculateRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &CirculateRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *CirculateRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin CirculateRequest_g_typePlugin = 
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
                plc::process::CirculateRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::CirculateRequest_finalize_w_return,
                NULL
            };

            return &CirculateRequest_g_typePlugin;
        }
        #endif

        RTIBool CirculateRequest_initialize(
            CirculateRequest* sample) {
            return plc::process::CirculateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool CirculateRequest_initialize_ex(
            CirculateRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::CirculateRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool CirculateRequest_initialize_w_params(
            CirculateRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        RTIBool CirculateRequest_finalize_w_return(
            CirculateRequest* sample)
        {
            plc::process::CirculateRequest_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void CirculateRequest_finalize(
            CirculateRequest* sample)
        {

            plc::process::CirculateRequest_finalize_ex(sample,RTI_TRUE);
        }

        void CirculateRequest_finalize_ex(
            CirculateRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::CirculateRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void CirculateRequest_finalize_w_params(
            CirculateRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void CirculateRequest_finalize_optional_members(
            CirculateRequest* sample, RTIBool deletePointers)
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

        RTIBool CirculateRequest_copy(
            CirculateRequest* dst,
            const CirculateRequest* src)
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
        * Configure and implement 'CirculateRequest' sequence class.
        */
        #define T CirculateRequest
        #define TSeq CirculateRequestSeq

        #define T_initialize_w_params plc::process::CirculateRequest_initialize_w_params

        #define T_finalize_w_params   plc::process::CirculateRequest_finalize_w_params
        #define T_copy       plc::process::CirculateRequest_copy

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
        const char *CirculateStateTYPENAME = "plc::process::CirculateState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* CirculateState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member CirculateState_g_tc_members[8]=
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

            static DDS_TypeCode CirculateState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::CirculateState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    8, /* Number of members */
                    CirculateState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for CirculateState*/

            if (is_initialized) {
                return &CirculateState_g_tc;
            }

            CirculateState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            CirculateState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();
            CirculateState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            CirculateState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            CirculateState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            CirculateState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            CirculateState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            CirculateState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            CirculateState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            CirculateState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            CirculateState_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

            CirculateState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            CirculateState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            CirculateState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            CirculateState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            CirculateState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            CirculateState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            CirculateState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            CirculateState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            CirculateState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            CirculateState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            CirculateState_g_tc._data._sampleAccessInfo =
            CirculateState_get_sample_access_info();
            CirculateState_g_tc._data._typePlugin =
            CirculateState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &CirculateState_g_tc;
        }

        #define TSeq CirculateStateSeq
        #define T CirculateState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *CirculateState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo CirculateState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(CirculateStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                CirculateStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &CirculateState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *CirculateState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::CirculateState *sample;

            static RTIXCdrMemberAccessInfo CirculateState_g_memberAccessInfos[8] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo CirculateState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &CirculateState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::CirculateState);
            if (sample == NULL) {
                return NULL;
            }

            CirculateState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            CirculateState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualFlowRate - (char *)sample);

            CirculateState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualStandpipePressure - (char *)sample);

            CirculateState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minFlowRate - (char *)sample);

            CirculateState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxFlowRate - (char *)sample);

            CirculateState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minStandpipePressure - (char *)sample);

            CirculateState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxStandpipePressure - (char *)sample);

            CirculateState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetFlowRate - (char *)sample);

            CirculateState_g_sampleAccessInfo.memberAccessInfos = 
            CirculateState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(CirculateState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    CirculateState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    CirculateState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            CirculateState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            CirculateState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            CirculateState_get_member_value_pointer;

            CirculateState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &CirculateState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *CirculateState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin CirculateState_g_typePlugin = 
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
                plc::process::CirculateState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::CirculateState_finalize_w_return,
                NULL
            };

            return &CirculateState_g_typePlugin;
        }
        #endif

        RTIBool CirculateState_initialize(
            CirculateState* sample) {
            return plc::process::CirculateState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool CirculateState_initialize_ex(
            CirculateState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::CirculateState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool CirculateState_initialize_w_params(
            CirculateState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            sample->status = DataTypes::Fault;

            sample->actualFlowRate = 0.0;

            sample->actualStandpipePressure = 0.0;

            sample->minFlowRate = 0.0;

            sample->maxFlowRate = 0.0;

            sample->minStandpipePressure = 0.0;

            sample->maxStandpipePressure = 0.0;

            sample->targetFlowRate = 0.0;

            return RTI_TRUE;
        }

        RTIBool CirculateState_finalize_w_return(
            CirculateState* sample)
        {
            plc::process::CirculateState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void CirculateState_finalize(
            CirculateState* sample)
        {

            plc::process::CirculateState_finalize_ex(sample,RTI_TRUE);
        }

        void CirculateState_finalize_ex(
            CirculateState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::CirculateState_finalize_w_params(
                sample,&deallocParams);
        }

        void CirculateState_finalize_w_params(
            CirculateState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

        }

        void CirculateState_finalize_optional_members(
            CirculateState* sample, RTIBool deletePointers)
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

        RTIBool CirculateState_copy(
            CirculateState* dst,
            const CirculateState* src)
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
        * Configure and implement 'CirculateState' sequence class.
        */
        #define T CirculateState
        #define TSeq CirculateStateSeq

        #define T_initialize_w_params plc::process::CirculateState_initialize_w_params

        #define T_finalize_w_params   plc::process::CirculateState_finalize_w_params
        #define T_copy       plc::process::CirculateState_copy

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
        const RTIXCdrTypeCode * type_code<plc::process::CirculateRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::CirculateRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<plc::process::CirculateState>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::CirculateState_get_typecode();
        }

    } 
}
#endif
