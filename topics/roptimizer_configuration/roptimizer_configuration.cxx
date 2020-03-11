

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
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

#include "roptimizer_configuration.h"

#ifndef NDDS_STANDALONE_TYPE
#include "roptimizer_configurationPlugin.h"
#endif

#include <new>

namespace Shell {

    namespace Hmi {

        /* ========================================================================= */
        const char *RoptimizerConfigurationTYPENAME = "Shell::Hmi::RoptimizerConfiguration";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* RoptimizerConfiguration_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RoptimizerConfiguration_g_tc_members[4]=
            {

                {
                    (char *)"steadyStateWindow",/* Member name */
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
                    (char *)"steadyStateMin",/* Member name */
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
                    (char *)"rpmStepSize",/* Member name */
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
                    (char *)"ropStepSize",/* Member name */
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

            static DDS_TypeCode RoptimizerConfiguration_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"Shell::Hmi::RoptimizerConfiguration", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    4, /* Number of members */
                    RoptimizerConfiguration_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for RoptimizerConfiguration*/

            if (is_initialized) {
                return &RoptimizerConfiguration_g_tc;
            }

            RoptimizerConfiguration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            RoptimizerConfiguration_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            RoptimizerConfiguration_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            RoptimizerConfiguration_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            RoptimizerConfiguration_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

            /* Initialize the values for member annotations. */
            RoptimizerConfiguration_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
            RoptimizerConfiguration_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerConfiguration_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerConfiguration_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
            RoptimizerConfiguration_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerConfiguration_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerConfiguration_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
            RoptimizerConfiguration_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerConfiguration_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerConfiguration_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
            RoptimizerConfiguration_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerConfiguration_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerConfiguration_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerConfiguration_g_tc._data._sampleAccessInfo =
            RoptimizerConfiguration_get_sample_access_info();
            RoptimizerConfiguration_g_tc._data._typePlugin =
            RoptimizerConfiguration_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &RoptimizerConfiguration_g_tc;
        }

        #define TSeq RoptimizerConfigurationSeq
        #define T RoptimizerConfiguration
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *RoptimizerConfiguration_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo RoptimizerConfiguration_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(RoptimizerConfigurationSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                RoptimizerConfigurationSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &RoptimizerConfiguration_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *RoptimizerConfiguration_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            Shell::Hmi::RoptimizerConfiguration *sample;

            static RTIXCdrMemberAccessInfo RoptimizerConfiguration_g_memberAccessInfos[4] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo RoptimizerConfiguration_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &RoptimizerConfiguration_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                Shell::Hmi::RoptimizerConfiguration);
            if (sample == NULL) {
                return NULL;
            }

            RoptimizerConfiguration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->steadyStateWindow - (char *)sample);

            RoptimizerConfiguration_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->steadyStateMin - (char *)sample);

            RoptimizerConfiguration_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rpmStepSize - (char *)sample);

            RoptimizerConfiguration_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropStepSize - (char *)sample);

            RoptimizerConfiguration_g_sampleAccessInfo.memberAccessInfos = 
            RoptimizerConfiguration_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(RoptimizerConfiguration);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    RoptimizerConfiguration_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    RoptimizerConfiguration_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            RoptimizerConfiguration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            RoptimizerConfiguration_g_sampleAccessInfo.getMemberValuePointerFcn = 
            RoptimizerConfiguration_get_member_value_pointer;

            RoptimizerConfiguration_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &RoptimizerConfiguration_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *RoptimizerConfiguration_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin RoptimizerConfiguration_g_typePlugin = 
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
                Shell::Hmi::RoptimizerConfiguration_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                Shell::Hmi::RoptimizerConfiguration_finalize_w_return,
                NULL
            };

            return &RoptimizerConfiguration_g_typePlugin;
        }
        #endif

        RTIBool RoptimizerConfiguration_initialize(
            RoptimizerConfiguration* sample) {
            return Shell::Hmi::RoptimizerConfiguration_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RoptimizerConfiguration_initialize_ex(
            RoptimizerConfiguration* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return Shell::Hmi::RoptimizerConfiguration_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RoptimizerConfiguration_initialize_w_params(
            RoptimizerConfiguration* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            sample->steadyStateWindow = 0;

            sample->steadyStateMin = 0;

            sample->rpmStepSize = 0;

            sample->ropStepSize = 0;

            return RTI_TRUE;
        }

        RTIBool RoptimizerConfiguration_finalize_w_return(
            RoptimizerConfiguration* sample)
        {
            Shell::Hmi::RoptimizerConfiguration_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void RoptimizerConfiguration_finalize(
            RoptimizerConfiguration* sample)
        {

            Shell::Hmi::RoptimizerConfiguration_finalize_ex(sample,RTI_TRUE);
        }

        void RoptimizerConfiguration_finalize_ex(
            RoptimizerConfiguration* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            Shell::Hmi::RoptimizerConfiguration_finalize_w_params(
                sample,&deallocParams);
        }

        void RoptimizerConfiguration_finalize_w_params(
            RoptimizerConfiguration* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void RoptimizerConfiguration_finalize_optional_members(
            RoptimizerConfiguration* sample, RTIBool deletePointers)
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

        RTIBool RoptimizerConfiguration_copy(
            RoptimizerConfiguration* dst,
            const RoptimizerConfiguration* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyLong (
                    &dst->steadyStateWindow, &src->steadyStateWindow)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->steadyStateMin, &src->steadyStateMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->rpmStepSize, &src->rpmStepSize)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->ropStepSize, &src->ropStepSize)) { 
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
        * Configure and implement 'RoptimizerConfiguration' sequence class.
        */
        #define T RoptimizerConfiguration
        #define TSeq RoptimizerConfigurationSeq

        #define T_initialize_w_params Shell::Hmi::RoptimizerConfiguration_initialize_w_params

        #define T_finalize_w_params   Shell::Hmi::RoptimizerConfiguration_finalize_w_params
        #define T_copy       Shell::Hmi::RoptimizerConfiguration_copy

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
        const char *RoptimizerSteadyStateTYPENAME = "Shell::Hmi::RoptimizerSteadyState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* RoptimizerSteadyState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RoptimizerSteadyState_g_tc_members[7]=
            {

                {
                    (char *)"rpmSteadyState",/* Member name */
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
                    (char *)"ropSteadyState",/* Member name */
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
                    (char *)"wobSteadyState",/* Member name */
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
                    (char *)"torqueSteadyState",/* Member name */
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
                    (char *)"bitWear",/* Member name */
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
                    (char *)"mse",/* Member name */
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
                    (char *)"power",/* Member name */
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
                }
            };

            static DDS_TypeCode RoptimizerSteadyState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"Shell::Hmi::RoptimizerSteadyState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    7, /* Number of members */
                    RoptimizerSteadyState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for RoptimizerSteadyState*/

            if (is_initialized) {
                return &RoptimizerSteadyState_g_tc;
            }

            RoptimizerSteadyState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            RoptimizerSteadyState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerSteadyState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerSteadyState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerSteadyState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerSteadyState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerSteadyState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerSteadyState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            RoptimizerSteadyState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerSteadyState_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerSteadyState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerSteadyState_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerSteadyState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerSteadyState_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerSteadyState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerSteadyState_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerSteadyState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerSteadyState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerSteadyState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerSteadyState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerSteadyState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerSteadyState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerSteadyState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerSteadyState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerSteadyState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerSteadyState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerSteadyState_g_tc._data._sampleAccessInfo =
            RoptimizerSteadyState_get_sample_access_info();
            RoptimizerSteadyState_g_tc._data._typePlugin =
            RoptimizerSteadyState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &RoptimizerSteadyState_g_tc;
        }

        #define TSeq RoptimizerSteadyStateSeq
        #define T RoptimizerSteadyState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *RoptimizerSteadyState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo RoptimizerSteadyState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(RoptimizerSteadyStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                RoptimizerSteadyStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &RoptimizerSteadyState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *RoptimizerSteadyState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            Shell::Hmi::RoptimizerSteadyState *sample;

            static RTIXCdrMemberAccessInfo RoptimizerSteadyState_g_memberAccessInfos[7] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo RoptimizerSteadyState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &RoptimizerSteadyState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                Shell::Hmi::RoptimizerSteadyState);
            if (sample == NULL) {
                return NULL;
            }

            RoptimizerSteadyState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rpmSteadyState - (char *)sample);

            RoptimizerSteadyState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropSteadyState - (char *)sample);

            RoptimizerSteadyState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobSteadyState - (char *)sample);

            RoptimizerSteadyState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueSteadyState - (char *)sample);

            RoptimizerSteadyState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->bitWear - (char *)sample);

            RoptimizerSteadyState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->mse - (char *)sample);

            RoptimizerSteadyState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->power - (char *)sample);

            RoptimizerSteadyState_g_sampleAccessInfo.memberAccessInfos = 
            RoptimizerSteadyState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(RoptimizerSteadyState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    RoptimizerSteadyState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    RoptimizerSteadyState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            RoptimizerSteadyState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            RoptimizerSteadyState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            RoptimizerSteadyState_get_member_value_pointer;

            RoptimizerSteadyState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &RoptimizerSteadyState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *RoptimizerSteadyState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin RoptimizerSteadyState_g_typePlugin = 
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
                Shell::Hmi::RoptimizerSteadyState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                Shell::Hmi::RoptimizerSteadyState_finalize_w_return,
                NULL
            };

            return &RoptimizerSteadyState_g_typePlugin;
        }
        #endif

        RTIBool RoptimizerSteadyState_initialize(
            RoptimizerSteadyState* sample) {
            return Shell::Hmi::RoptimizerSteadyState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RoptimizerSteadyState_initialize_ex(
            RoptimizerSteadyState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return Shell::Hmi::RoptimizerSteadyState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RoptimizerSteadyState_initialize_w_params(
            RoptimizerSteadyState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            sample->rpmSteadyState = 0;

            sample->ropSteadyState = 0;

            sample->wobSteadyState = 0;

            sample->torqueSteadyState = 0;

            sample->bitWear = 0.0;

            sample->mse = 0.0;

            sample->power = 0.0;

            return RTI_TRUE;
        }

        RTIBool RoptimizerSteadyState_finalize_w_return(
            RoptimizerSteadyState* sample)
        {
            Shell::Hmi::RoptimizerSteadyState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void RoptimizerSteadyState_finalize(
            RoptimizerSteadyState* sample)
        {

            Shell::Hmi::RoptimizerSteadyState_finalize_ex(sample,RTI_TRUE);
        }

        void RoptimizerSteadyState_finalize_ex(
            RoptimizerSteadyState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            Shell::Hmi::RoptimizerSteadyState_finalize_w_params(
                sample,&deallocParams);
        }

        void RoptimizerSteadyState_finalize_w_params(
            RoptimizerSteadyState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void RoptimizerSteadyState_finalize_optional_members(
            RoptimizerSteadyState* sample, RTIBool deletePointers)
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

        RTIBool RoptimizerSteadyState_copy(
            RoptimizerSteadyState* dst,
            const RoptimizerSteadyState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyBoolean (
                    &dst->rpmSteadyState, &src->rpmSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->ropSteadyState, &src->ropSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->wobSteadyState, &src->wobSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->torqueSteadyState, &src->torqueSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->bitWear, &src->bitWear)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->mse, &src->mse)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->power, &src->power)) { 
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
        * Configure and implement 'RoptimizerSteadyState' sequence class.
        */
        #define T RoptimizerSteadyState
        #define TSeq RoptimizerSteadyStateSeq

        #define T_initialize_w_params Shell::Hmi::RoptimizerSteadyState_initialize_w_params

        #define T_finalize_w_params   Shell::Hmi::RoptimizerSteadyState_finalize_w_params
        #define T_copy       Shell::Hmi::RoptimizerSteadyState_copy

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

    } /* namespace Hmi  */

} /* namespace Shell  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Shell::Hmi::RoptimizerConfiguration>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::RoptimizerConfiguration_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::RoptimizerSteadyState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::RoptimizerSteadyState_get_typecode();
        }

    } 
}
#endif
