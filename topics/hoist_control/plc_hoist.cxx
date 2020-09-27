

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
        const char *PlcHoistRequestTYPENAME = "plc::process::PlcHoistRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* PlcHoistRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member PlcHoistRequest_g_tc_members[2]=
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

            static DDS_TypeCode PlcHoistRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcHoistRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    2, /* Number of members */
                    PlcHoistRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for PlcHoistRequest*/

            if (is_initialized) {
                return &PlcHoistRequest_g_tc;
            }

            PlcHoistRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            PlcHoistRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            PlcHoistRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistRequest_g_tc._data._sampleAccessInfo =
            PlcHoistRequest_get_sample_access_info();
            PlcHoistRequest_g_tc._data._typePlugin =
            PlcHoistRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &PlcHoistRequest_g_tc;
        }

        #define TSeq PlcHoistRequestSeq
        #define T PlcHoistRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *PlcHoistRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo PlcHoistRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(PlcHoistRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                PlcHoistRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &PlcHoistRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *PlcHoistRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::PlcHoistRequest *sample;

            static RTIXCdrMemberAccessInfo PlcHoistRequest_g_memberAccessInfos[2] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo PlcHoistRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &PlcHoistRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::PlcHoistRequest);
            if (sample == NULL) {
                return NULL;
            }

            PlcHoistRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetVelocity - (char *)sample);

            PlcHoistRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetPosition - (char *)sample);

            PlcHoistRequest_g_sampleAccessInfo.memberAccessInfos = 
            PlcHoistRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(PlcHoistRequest);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    PlcHoistRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    PlcHoistRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            PlcHoistRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            PlcHoistRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            PlcHoistRequest_get_member_value_pointer;

            PlcHoistRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &PlcHoistRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *PlcHoistRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin PlcHoistRequest_g_typePlugin = 
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
                plc::process::PlcHoistRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::PlcHoistRequest_finalize_w_return,
                NULL
            };

            return &PlcHoistRequest_g_typePlugin;
        }
        #endif

        RTIBool PlcHoistRequest_initialize(
            PlcHoistRequest* sample) {
            return plc::process::PlcHoistRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool PlcHoistRequest_initialize_ex(
            PlcHoistRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::PlcHoistRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PlcHoistRequest_initialize_w_params(
            PlcHoistRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        RTIBool PlcHoistRequest_finalize_w_return(
            PlcHoistRequest* sample)
        {
            plc::process::PlcHoistRequest_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void PlcHoistRequest_finalize(
            PlcHoistRequest* sample)
        {

            plc::process::PlcHoistRequest_finalize_ex(sample,RTI_TRUE);
        }

        void PlcHoistRequest_finalize_ex(
            PlcHoistRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::PlcHoistRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void PlcHoistRequest_finalize_w_params(
            PlcHoistRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void PlcHoistRequest_finalize_optional_members(
            PlcHoistRequest* sample, RTIBool deletePointers)
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

        RTIBool PlcHoistRequest_copy(
            PlcHoistRequest* dst,
            const PlcHoistRequest* src)
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
        * Configure and implement 'PlcHoistRequest' sequence class.
        */
        #define T PlcHoistRequest
        #define TSeq PlcHoistRequestSeq

        #define T_initialize_w_params plc::process::PlcHoistRequest_initialize_w_params

        #define T_finalize_w_params   plc::process::PlcHoistRequest_finalize_w_params
        #define T_copy       plc::process::PlcHoistRequest_copy

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
        const char *PlcHoistStateTYPENAME = "plc::process::PlcHoistState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* PlcHoistState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member PlcHoistState_g_tc_members[11]=
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

            static DDS_TypeCode PlcHoistState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"plc::process::PlcHoistState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    11, /* Number of members */
                    PlcHoistState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for PlcHoistState*/

            if (is_initialized) {
                return &PlcHoistState_g_tc;
            }

            PlcHoistState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            PlcHoistState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            PlcHoistState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            PlcHoistState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            PlcHoistState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            PlcHoistState_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
            PlcHoistState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            PlcHoistState_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            PlcHoistState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            PlcHoistState_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            PlcHoistState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            PlcHoistState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            PlcHoistState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            PlcHoistState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            PlcHoistState_g_tc._data._sampleAccessInfo =
            PlcHoistState_get_sample_access_info();
            PlcHoistState_g_tc._data._typePlugin =
            PlcHoistState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &PlcHoistState_g_tc;
        }

        #define TSeq PlcHoistStateSeq
        #define T PlcHoistState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *PlcHoistState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo PlcHoistState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(PlcHoistStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                PlcHoistStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &PlcHoistState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *PlcHoistState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            plc::process::PlcHoistState *sample;

            static RTIXCdrMemberAccessInfo PlcHoistState_g_memberAccessInfos[11] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo PlcHoistState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &PlcHoistState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                plc::process::PlcHoistState);
            if (sample == NULL) {
                return NULL;
            }

            PlcHoistState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            PlcHoistState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualHookload - (char *)sample);

            PlcHoistState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualVelocity - (char *)sample);

            PlcHoistState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualPosition - (char *)sample);

            PlcHoistState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxHookload - (char *)sample);

            PlcHoistState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxHoistVelocity - (char *)sample);

            PlcHoistState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxLowerVelocity - (char *)sample);

            PlcHoistState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxHoistPosition - (char *)sample);

            PlcHoistState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxLowerPosition - (char *)sample);

            PlcHoistState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetVelocity - (char *)sample);

            PlcHoistState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetPosition - (char *)sample);

            PlcHoistState_g_sampleAccessInfo.memberAccessInfos = 
            PlcHoistState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(PlcHoistState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    PlcHoistState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    PlcHoistState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            PlcHoistState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            PlcHoistState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            PlcHoistState_get_member_value_pointer;

            PlcHoistState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &PlcHoistState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *PlcHoistState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin PlcHoistState_g_typePlugin = 
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
                plc::process::PlcHoistState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                plc::process::PlcHoistState_finalize_w_return,
                NULL
            };

            return &PlcHoistState_g_typePlugin;
        }
        #endif

        RTIBool PlcHoistState_initialize(
            PlcHoistState* sample) {
            return plc::process::PlcHoistState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool PlcHoistState_initialize_ex(
            PlcHoistState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return plc::process::PlcHoistState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PlcHoistState_initialize_w_params(
            PlcHoistState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        RTIBool PlcHoistState_finalize_w_return(
            PlcHoistState* sample)
        {
            plc::process::PlcHoistState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void PlcHoistState_finalize(
            PlcHoistState* sample)
        {

            plc::process::PlcHoistState_finalize_ex(sample,RTI_TRUE);
        }

        void PlcHoistState_finalize_ex(
            PlcHoistState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            plc::process::PlcHoistState_finalize_w_params(
                sample,&deallocParams);
        }

        void PlcHoistState_finalize_w_params(
            PlcHoistState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void PlcHoistState_finalize_optional_members(
            PlcHoistState* sample, RTIBool deletePointers)
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

        RTIBool PlcHoistState_copy(
            PlcHoistState* dst,
            const PlcHoistState* src)
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
        * Configure and implement 'PlcHoistState' sequence class.
        */
        #define T PlcHoistState
        #define TSeq PlcHoistStateSeq

        #define T_initialize_w_params plc::process::PlcHoistState_initialize_w_params

        #define T_finalize_w_params   plc::process::PlcHoistState_finalize_w_params
        #define T_copy       plc::process::PlcHoistState_copy

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
        const RTIXCdrTypeCode * type_code<plc::process::PlcHoistRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::PlcHoistRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<plc::process::PlcHoistState>::get() 
        {
            return (const RTIXCdrTypeCode *) plc::process::PlcHoistState_get_typecode();
        }

    } 
}
#endif
