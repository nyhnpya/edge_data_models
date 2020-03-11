

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_hoist.idl using "rtiddsgen".
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

#include "plc_hoist.h"

#ifndef NDDS_STANDALONE_TYPE
#include "plc_hoistPlugin.h"
#endif

#include <new>

namespace plc {

    namespace process {

        /* ========================================================================= */
        const char *HoistRequestTYPENAME = "plc::process::HoistRequest";

        #ifndef NDDS_STANDALONE_TYPE
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode HoistRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::HoistRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    2, /* Number of members */
                    HoistRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for HoistRequest*/

            if (is_initialized) {
                return &HoistRequest_g_tc;
            }

            HoistRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            HoistRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            HoistRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
            HoistRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            HoistRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistRequest_g_tc._data._sampleAccessInfo =
            HoistRequest_get_sample_access_info();
            HoistRequest_g_tc._data._typePlugin =
            HoistRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &HoistRequest_g_tc;
        }

        #define TSeq HoistRequestSeq
        #define T HoistRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *HoistRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo HoistRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(HoistRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                HoistRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &HoistRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *HoistRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::HoistRequest *sample;

            static RTIXCdrMemberAccessInfo HoistRequest_g_memberAccessInfos[2] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo HoistRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &HoistRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::HoistRequest);
            if (sample == NULL) {
                return NULL;
            }

            HoistRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetVelocity - (char *)sample);

            HoistRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetPosition - (char *)sample);

            HoistRequest_g_sampleAccessInfo.memberAccessInfos = 
            HoistRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(HoistRequest);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    HoistRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    HoistRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            HoistRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            HoistRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            HoistRequest_get_member_value_pointer;

            HoistRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &HoistRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *HoistRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin HoistRequest_g_typePlugin = 
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
                plc::process::HoistRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::HoistRequest_finalize_w_return,
                NULL
            };

            return &HoistRequest_g_typePlugin;
        }
        #endif

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

            sample->targetVelocity = 0.0;

            sample->targetPosition = 0.0;

            return RTI_TRUE;
        }

        RTIBool HoistRequest_finalize_w_return(
            HoistRequest* sample)
        {
            plc::process::HoistRequest_finalize_ex(sample, RTI_TRUE);

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

            } catch (const std::bad_alloc&) {
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

        #ifndef NDDS_STANDALONE_TYPE
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode HoistState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::HoistState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    11, /* Number of members */
                    HoistState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for HoistState*/

            if (is_initialized) {
                return &HoistState_g_tc;
            }

            HoistState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            HoistState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            HoistState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HoistState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            HoistState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            HoistState_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
            HoistState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            HoistState_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            HoistState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            HoistState_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            HoistState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            HoistState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HoistState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HoistState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HoistState_g_tc._data._sampleAccessInfo =
            HoistState_get_sample_access_info();
            HoistState_g_tc._data._typePlugin =
            HoistState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &HoistState_g_tc;
        }

        #define TSeq HoistStateSeq
        #define T HoistState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *HoistState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo HoistState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(HoistStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                HoistStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &HoistState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *HoistState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::HoistState *sample;

            static RTIXCdrMemberAccessInfo HoistState_g_memberAccessInfos[11] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo HoistState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &HoistState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::HoistState);
            if (sample == NULL) {
                return NULL;
            }

            HoistState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            HoistState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualHookload - (char *)sample);

            HoistState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualVelocity - (char *)sample);

            HoistState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualPosition - (char *)sample);

            HoistState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxHookload - (char *)sample);

            HoistState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxHoistVelocity - (char *)sample);

            HoistState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxLowerVelocity - (char *)sample);

            HoistState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxHoistPosition - (char *)sample);

            HoistState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxLowerPosition - (char *)sample);

            HoistState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetVelocity - (char *)sample);

            HoistState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetPosition - (char *)sample);

            HoistState_g_sampleAccessInfo.memberAccessInfos = 
            HoistState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(HoistState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    HoistState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    HoistState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            HoistState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            HoistState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            HoistState_get_member_value_pointer;

            HoistState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &HoistState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *HoistState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin HoistState_g_typePlugin = 
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
                plc::process::HoistState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::HoistState_finalize_w_return,
                NULL
            };

            return &HoistState_g_typePlugin;
        }
        #endif

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

            sample->status = 0;

            sample->actualHookload = 0.0;

            sample->actualVelocity = 0.0;

            sample->actualPosition = 0.0;

            sample->maxHookload = 0.0;

            sample->maxHoistVelocity = 0.0;

            sample->maxLowerVelocity = 0.0;

            sample->maxHoistPosition = 0.0;

            sample->maxLowerPosition = 0.0;

            sample->targetVelocity = 0.0;

            sample->targetPosition = 0.0;

            return RTI_TRUE;
        }

        RTIBool HoistState_finalize_w_return(
            HoistState* sample)
        {
            plc::process::HoistState_finalize_ex(sample, RTI_TRUE);

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

        }

        RTIBool HoistState_copy(
            HoistState* dst,
            const HoistState* src)
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

            } catch (const std::bad_alloc&) {
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

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<plc::process::HoistRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::HoistRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<plc::process::HoistState>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::HoistState_get_typecode();
        }

    } 
}
#endif
