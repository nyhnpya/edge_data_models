

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
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

#include "autotuner_configuration.h"

#ifndef NDDS_STANDALONE_TYPE
#include "autotuner_configurationPlugin.h"
#endif

#include <new>

namespace Shell {

    namespace Hmi {

        namespace AutoTunerConfiguration {

            /* ========================================================================= */
            const char *ModelStateTYPENAME = "Shell::Hmi::AutoTunerConfiguration::ModelState";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* ModelState_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ModelState_g_tc_members[9]=
                {

                    {
                        (char *)"pipeInnerDiameter",/* Member name */
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
                        (char *)"pipeOuterDiameter",/* Member name */
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
                        (char *)"slopeFilter",/* Member name */
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
                        (char *)"tauMax",/* Member name */
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
                        (char *)"tauMin",/* Member name */
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
                        (char *)"tauMultiplier",/* Member name */
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
                        (char *)"maxDeviation",/* Member name */
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
                        (char *)"minInterval",/* Member name */
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
                        (char *)"tunerEnabled",/* Member name */
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
                    }
                };

                static DDS_TypeCode ModelState_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::ModelState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        ModelState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ModelState*/

                if (is_initialized) {
                    return &ModelState_g_tc;
                }

                ModelState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ModelState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

                /* Initialize the values for member annotations. */
                ModelState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                ModelState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                ModelState_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;

                ModelState_g_tc._data._sampleAccessInfo =
                ModelState_get_sample_access_info();
                ModelState_g_tc._data._typePlugin =
                ModelState_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ModelState_g_tc;
            }

            #define TSeq ModelStateSeq
            #define T ModelState
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *ModelState_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo ModelState_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(ModelStateSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    ModelStateSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &ModelState_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *ModelState_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::ModelState *sample;

                static RTIXCdrMemberAccessInfo ModelState_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ModelState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ModelState_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::ModelState);
                if (sample == NULL) {
                    return NULL;
                }

                ModelState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pipeInnerDiameter - (char *)sample);

                ModelState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pipeOuterDiameter - (char *)sample);

                ModelState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->slopeFilter - (char *)sample);

                ModelState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tauMax - (char *)sample);

                ModelState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tauMin - (char *)sample);

                ModelState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tauMultiplier - (char *)sample);

                ModelState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDeviation - (char *)sample);

                ModelState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minInterval - (char *)sample);

                ModelState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tunerEnabled - (char *)sample);

                ModelState_g_sampleAccessInfo.memberAccessInfos = 
                ModelState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(ModelState);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        ModelState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        ModelState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ModelState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ModelState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                ModelState_get_member_value_pointer;

                ModelState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ModelState_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *ModelState_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin ModelState_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::ModelState_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_w_return,
                    NULL
                };

                return &ModelState_g_typePlugin;
            }
            #endif

            RTIBool ModelState_initialize(
                ModelState* sample) {
                return Shell::Hmi::AutoTunerConfiguration::ModelState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ModelState_initialize_ex(
                ModelState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::ModelState_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ModelState_initialize_w_params(
                ModelState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->pipeInnerDiameter = 0.0;

                sample->pipeOuterDiameter = 0.0;

                sample->slopeFilter = 0.0;

                sample->tauMax = 0.0;

                sample->tauMin = 0.0;

                sample->tauMultiplier = 0.0;

                sample->maxDeviation = 0.0;

                sample->minInterval = 0.0;

                sample->tunerEnabled = 0;

                return RTI_TRUE;
            }

            RTIBool ModelState_finalize_w_return(
                ModelState* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void ModelState_finalize(
                ModelState* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_ex(sample,RTI_TRUE);
            }

            void ModelState_finalize_ex(
                ModelState* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_w_params(
                    sample,&deallocParams);
            }

            void ModelState_finalize_w_params(
                ModelState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ModelState_finalize_optional_members(
                ModelState* sample, RTIBool deletePointers)
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

            RTIBool ModelState_copy(
                ModelState* dst,
                const ModelState* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->pipeInnerDiameter, &src->pipeInnerDiameter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->pipeOuterDiameter, &src->pipeOuterDiameter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->slopeFilter, &src->slopeFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tauMax, &src->tauMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tauMin, &src->tauMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tauMultiplier, &src->tauMultiplier)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->maxDeviation, &src->maxDeviation)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->minInterval, &src->minInterval)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->tunerEnabled, &src->tunerEnabled)) { 
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
            * Configure and implement 'ModelState' sequence class.
            */
            #define T ModelState
            #define TSeq ModelStateSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::ModelState_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::ModelState_copy

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
            const char *DiffpTuningStateTYPENAME = "Shell::Hmi::AutoTunerConfiguration::DiffpTuningState";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* DiffpTuningState_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DiffpTuningState_g_tc_members[14]=
                {

                    {
                        (char *)"filter",/* Member name */
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
                        (char *)"d",/* Member name */
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
                        (char *)"f",/* Member name */
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
                        (char *)"epsilon",/* Member name */
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
                        (char *)"epsilonManual",/* Member name */
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
                        (char *)"kcMin",/* Member name */
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
                        (char *)"kcMax",/* Member name */
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
                        (char *)"tiMin",/* Member name */
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
                        (char *)"tiMax",/* Member name */
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
                        (char *)"initK",/* Member name */
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
                        (char *)"initTau",/* Member name */
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
                        (char *)"initPreFilter",/* Member name */
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
                        (char *)"r1",/* Member name */
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
                        (char *)"r2",/* Member name */
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
                    }
                };

                static DDS_TypeCode DiffpTuningState_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::DiffpTuningState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        DiffpTuningState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DiffpTuningState*/

                if (is_initialized) {
                    return &DiffpTuningState_g_tc;
                }

                DiffpTuningState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DiffpTuningState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                DiffpTuningState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                DiffpTuningState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DiffpTuningState_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                DiffpTuningState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningState_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningState_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningState_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningState_g_tc._data._sampleAccessInfo =
                DiffpTuningState_get_sample_access_info();
                DiffpTuningState_g_tc._data._typePlugin =
                DiffpTuningState_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DiffpTuningState_g_tc;
            }

            #define TSeq DiffpTuningStateSeq
            #define T DiffpTuningState
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *DiffpTuningState_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo DiffpTuningState_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(DiffpTuningStateSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    DiffpTuningStateSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &DiffpTuningState_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *DiffpTuningState_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningState *sample;

                static RTIXCdrMemberAccessInfo DiffpTuningState_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DiffpTuningState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DiffpTuningState_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningState);
                if (sample == NULL) {
                    return NULL;
                }

                DiffpTuningState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->filter - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->d - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->f - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilon - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilonManual - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMin - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMax - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMin - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMax - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initK - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initTau - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initPreFilter - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r1 - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r2 - (char *)sample);

                DiffpTuningState_g_sampleAccessInfo.memberAccessInfos = 
                DiffpTuningState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DiffpTuningState);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DiffpTuningState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DiffpTuningState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DiffpTuningState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DiffpTuningState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                DiffpTuningState_get_member_value_pointer;

                DiffpTuningState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DiffpTuningState_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *DiffpTuningState_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin DiffpTuningState_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_w_return,
                    NULL
                };

                return &DiffpTuningState_g_typePlugin;
            }
            #endif

            RTIBool DiffpTuningState_initialize(
                DiffpTuningState* sample) {
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DiffpTuningState_initialize_ex(
                DiffpTuningState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DiffpTuningState_initialize_w_params(
                DiffpTuningState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->filter = 0.0;

                sample->d = 0.0;

                sample->f = 0.0;

                sample->epsilon = 0.0;

                sample->epsilonManual = 0;

                sample->kcMin = 0.0;

                sample->kcMax = 0.0;

                sample->tiMin = 0.0;

                sample->tiMax = 0.0;

                sample->initK = 0.0;

                sample->initTau = 0.0;

                sample->initPreFilter = 0.0;

                sample->r1 = 0.0;

                sample->r2 = 0.0;

                return RTI_TRUE;
            }

            RTIBool DiffpTuningState_finalize_w_return(
                DiffpTuningState* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void DiffpTuningState_finalize(
                DiffpTuningState* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_ex(sample,RTI_TRUE);
            }

            void DiffpTuningState_finalize_ex(
                DiffpTuningState* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_w_params(
                    sample,&deallocParams);
            }

            void DiffpTuningState_finalize_w_params(
                DiffpTuningState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void DiffpTuningState_finalize_optional_members(
                DiffpTuningState* sample, RTIBool deletePointers)
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

            RTIBool DiffpTuningState_copy(
                DiffpTuningState* dst,
                const DiffpTuningState* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->filter, &src->filter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->d, &src->d)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->f, &src->f)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->epsilon, &src->epsilon)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->epsilonManual, &src->epsilonManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->kcMin, &src->kcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->kcMax, &src->kcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tiMin, &src->tiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tiMax, &src->tiMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initK, &src->initK)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initTau, &src->initTau)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initPreFilter, &src->initPreFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->r1, &src->r1)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->r2, &src->r2)) { 
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
            * Configure and implement 'DiffpTuningState' sequence class.
            */
            #define T DiffpTuningState
            #define TSeq DiffpTuningStateSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_copy

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
            const char *WobTuningStateTYPENAME = "Shell::Hmi::AutoTunerConfiguration::WobTuningState";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* WobTuningState_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WobTuningState_g_tc_members[14]=
                {

                    {
                        (char *)"filter",/* Member name */
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
                        (char *)"d",/* Member name */
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
                        (char *)"f",/* Member name */
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
                        (char *)"epsilon",/* Member name */
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
                        (char *)"epsilonManual",/* Member name */
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
                        (char *)"kcMin",/* Member name */
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
                        (char *)"kcMax",/* Member name */
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
                        (char *)"tiMin",/* Member name */
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
                        (char *)"tiMax",/* Member name */
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
                        (char *)"initK",/* Member name */
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
                        (char *)"initTau",/* Member name */
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
                        (char *)"initPreFilter",/* Member name */
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
                        (char *)"r1",/* Member name */
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
                        (char *)"r2",/* Member name */
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
                    }
                };

                static DDS_TypeCode WobTuningState_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::WobTuningState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        WobTuningState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WobTuningState*/

                if (is_initialized) {
                    return &WobTuningState_g_tc;
                }

                WobTuningState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WobTuningState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                WobTuningState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                WobTuningState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                WobTuningState_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                WobTuningState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningState_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningState_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningState_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningState_g_tc._data._sampleAccessInfo =
                WobTuningState_get_sample_access_info();
                WobTuningState_g_tc._data._typePlugin =
                WobTuningState_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WobTuningState_g_tc;
            }

            #define TSeq WobTuningStateSeq
            #define T WobTuningState
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *WobTuningState_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo WobTuningState_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(WobTuningStateSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    WobTuningStateSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &WobTuningState_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *WobTuningState_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::WobTuningState *sample;

                static RTIXCdrMemberAccessInfo WobTuningState_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WobTuningState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WobTuningState_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::WobTuningState);
                if (sample == NULL) {
                    return NULL;
                }

                WobTuningState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->filter - (char *)sample);

                WobTuningState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->d - (char *)sample);

                WobTuningState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->f - (char *)sample);

                WobTuningState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilon - (char *)sample);

                WobTuningState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilonManual - (char *)sample);

                WobTuningState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMin - (char *)sample);

                WobTuningState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMax - (char *)sample);

                WobTuningState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMin - (char *)sample);

                WobTuningState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMax - (char *)sample);

                WobTuningState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initK - (char *)sample);

                WobTuningState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initTau - (char *)sample);

                WobTuningState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initPreFilter - (char *)sample);

                WobTuningState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r1 - (char *)sample);

                WobTuningState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r2 - (char *)sample);

                WobTuningState_g_sampleAccessInfo.memberAccessInfos = 
                WobTuningState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WobTuningState);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WobTuningState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WobTuningState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WobTuningState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WobTuningState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                WobTuningState_get_member_value_pointer;

                WobTuningState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WobTuningState_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *WobTuningState_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin WobTuningState_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::WobTuningState_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_w_return,
                    NULL
                };

                return &WobTuningState_g_typePlugin;
            }
            #endif

            RTIBool WobTuningState_initialize(
                WobTuningState* sample) {
                return Shell::Hmi::AutoTunerConfiguration::WobTuningState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WobTuningState_initialize_ex(
                WobTuningState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::WobTuningState_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WobTuningState_initialize_w_params(
                WobTuningState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->filter = 0.0;

                sample->d = 0.0;

                sample->f = 0.0;

                sample->epsilon = 0.0;

                sample->epsilonManual = 0;

                sample->kcMin = 0.0;

                sample->kcMax = 0.0;

                sample->tiMin = 0.0;

                sample->tiMax = 0.0;

                sample->initK = 0.0;

                sample->initTau = 0.0;

                sample->initPreFilter = 0.0;

                sample->r1 = 0.0;

                sample->r2 = 0.0;

                return RTI_TRUE;
            }

            RTIBool WobTuningState_finalize_w_return(
                WobTuningState* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void WobTuningState_finalize(
                WobTuningState* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_ex(sample,RTI_TRUE);
            }

            void WobTuningState_finalize_ex(
                WobTuningState* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_w_params(
                    sample,&deallocParams);
            }

            void WobTuningState_finalize_w_params(
                WobTuningState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void WobTuningState_finalize_optional_members(
                WobTuningState* sample, RTIBool deletePointers)
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

            RTIBool WobTuningState_copy(
                WobTuningState* dst,
                const WobTuningState* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->filter, &src->filter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->d, &src->d)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->f, &src->f)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->epsilon, &src->epsilon)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->epsilonManual, &src->epsilonManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->kcMin, &src->kcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->kcMax, &src->kcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tiMin, &src->tiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tiMax, &src->tiMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initK, &src->initK)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initTau, &src->initTau)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initPreFilter, &src->initPreFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->r1, &src->r1)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->r2, &src->r2)) { 
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
            * Configure and implement 'WobTuningState' sequence class.
            */
            #define T WobTuningState
            #define TSeq WobTuningStateSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::WobTuningState_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::WobTuningState_copy

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
            const char *TorqueTuningStateTYPENAME = "Shell::Hmi::AutoTunerConfiguration::TorqueTuningState";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* TorqueTuningState_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TorqueTuningState_g_tc_members[14]=
                {

                    {
                        (char *)"filter",/* Member name */
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
                        (char *)"d",/* Member name */
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
                        (char *)"f",/* Member name */
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
                        (char *)"epsilon",/* Member name */
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
                        (char *)"epsilonManual",/* Member name */
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
                        (char *)"kcMin",/* Member name */
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
                        (char *)"kcMax",/* Member name */
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
                        (char *)"tiMin",/* Member name */
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
                        (char *)"tiMax",/* Member name */
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
                        (char *)"initK",/* Member name */
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
                        (char *)"initTau",/* Member name */
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
                        (char *)"initPreFilter",/* Member name */
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
                        (char *)"r1",/* Member name */
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
                        (char *)"r2",/* Member name */
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
                    }
                };

                static DDS_TypeCode TorqueTuningState_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::TorqueTuningState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        TorqueTuningState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TorqueTuningState*/

                if (is_initialized) {
                    return &TorqueTuningState_g_tc;
                }

                TorqueTuningState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TorqueTuningState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                TorqueTuningState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                TorqueTuningState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TorqueTuningState_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                TorqueTuningState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningState_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningState_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningState_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningState_g_tc._data._sampleAccessInfo =
                TorqueTuningState_get_sample_access_info();
                TorqueTuningState_g_tc._data._typePlugin =
                TorqueTuningState_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &TorqueTuningState_g_tc;
            }

            #define TSeq TorqueTuningStateSeq
            #define T TorqueTuningState
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *TorqueTuningState_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo TorqueTuningState_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(TorqueTuningStateSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    TorqueTuningStateSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &TorqueTuningState_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *TorqueTuningState_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningState *sample;

                static RTIXCdrMemberAccessInfo TorqueTuningState_g_memberAccessInfos[14] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TorqueTuningState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TorqueTuningState_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningState);
                if (sample == NULL) {
                    return NULL;
                }

                TorqueTuningState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->filter - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->d - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->f - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilon - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilonManual - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMin - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMax - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMin - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMax - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initK - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initTau - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initPreFilter - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r1 - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r2 - (char *)sample);

                TorqueTuningState_g_sampleAccessInfo.memberAccessInfos = 
                TorqueTuningState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(TorqueTuningState);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        TorqueTuningState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        TorqueTuningState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TorqueTuningState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TorqueTuningState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                TorqueTuningState_get_member_value_pointer;

                TorqueTuningState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TorqueTuningState_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *TorqueTuningState_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin TorqueTuningState_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_w_return,
                    NULL
                };

                return &TorqueTuningState_g_typePlugin;
            }
            #endif

            RTIBool TorqueTuningState_initialize(
                TorqueTuningState* sample) {
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TorqueTuningState_initialize_ex(
                TorqueTuningState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TorqueTuningState_initialize_w_params(
                TorqueTuningState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->filter = 0.0;

                sample->d = 0.0;

                sample->f = 0.0;

                sample->epsilon = 0.0;

                sample->epsilonManual = 0;

                sample->kcMin = 0.0;

                sample->kcMax = 0.0;

                sample->tiMin = 0.0;

                sample->tiMax = 0.0;

                sample->initK = 0.0;

                sample->initTau = 0.0;

                sample->initPreFilter = 0.0;

                sample->r1 = 0.0;

                sample->r2 = 0.0;

                return RTI_TRUE;
            }

            RTIBool TorqueTuningState_finalize_w_return(
                TorqueTuningState* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void TorqueTuningState_finalize(
                TorqueTuningState* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_ex(sample,RTI_TRUE);
            }

            void TorqueTuningState_finalize_ex(
                TorqueTuningState* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_w_params(
                    sample,&deallocParams);
            }

            void TorqueTuningState_finalize_w_params(
                TorqueTuningState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void TorqueTuningState_finalize_optional_members(
                TorqueTuningState* sample, RTIBool deletePointers)
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

            RTIBool TorqueTuningState_copy(
                TorqueTuningState* dst,
                const TorqueTuningState* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->filter, &src->filter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->d, &src->d)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->f, &src->f)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->epsilon, &src->epsilon)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->epsilonManual, &src->epsilonManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->kcMin, &src->kcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->kcMax, &src->kcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tiMin, &src->tiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->tiMax, &src->tiMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initK, &src->initK)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initTau, &src->initTau)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->initPreFilter, &src->initPreFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->r1, &src->r1)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->r2, &src->r2)) { 
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
            * Configure and implement 'TorqueTuningState' sequence class.
            */
            #define T TorqueTuningState
            #define TSeq TorqueTuningStateSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_copy

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

        } /* namespace AutoTunerConfiguration  */

    } /* namespace Hmi  */

} /* namespace Shell  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::ModelState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::ModelState_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::DiffpTuningState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::WobTuningState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::WobTuningState_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::TorqueTuningState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_get_typecode();
        }

    } 
}
#endif
