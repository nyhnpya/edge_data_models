

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
            const char *DiffpTuningRequestTYPENAME = "Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* DiffpTuningRequest_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DiffpTuningRequest_g_tc_members[9]=
                {

                    {
                        (char *)"diffPFilter",/* Member name */
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
                        (char *)"diffPD",/* Member name */
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
                        (char *)"diffPF",/* Member name */
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
                        (char *)"diffPEps",/* Member name */
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
                        (char *)"diffPEpsManual",/* Member name */
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
                        (char *)"diffPKcMin",/* Member name */
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
                        (char *)"diffPKcMax",/* Member name */
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
                        (char *)"diffPTiMin",/* Member name */
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
                        (char *)"diffPTiMax",/* Member name */
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

                static DDS_TypeCode DiffpTuningRequest_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        DiffpTuningRequest_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DiffpTuningRequest*/

                if (is_initialized) {
                    return &DiffpTuningRequest_g_tc;
                }

                DiffpTuningRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DiffpTuningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                DiffpTuningRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                DiffpTuningRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                DiffpTuningRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DiffpTuningRequest_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                DiffpTuningRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                DiffpTuningRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DiffpTuningRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DiffpTuningRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DiffpTuningRequest_g_tc._data._sampleAccessInfo =
                DiffpTuningRequest_get_sample_access_info();
                DiffpTuningRequest_g_tc._data._typePlugin =
                DiffpTuningRequest_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DiffpTuningRequest_g_tc;
            }

            #define TSeq DiffpTuningRequestSeq
            #define T DiffpTuningRequest
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *DiffpTuningRequest_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo DiffpTuningRequest_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(DiffpTuningRequestSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    DiffpTuningRequestSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &DiffpTuningRequest_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *DiffpTuningRequest_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest *sample;

                static RTIXCdrMemberAccessInfo DiffpTuningRequest_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DiffpTuningRequest_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DiffpTuningRequest_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest);
                if (sample == NULL) {
                    return NULL;
                }

                DiffpTuningRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPFilter - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPD - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPF - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPEps - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPEpsManual - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPKcMin - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPKcMax - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPTiMin - (char *)sample);

                DiffpTuningRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPTiMax - (char *)sample);

                DiffpTuningRequest_g_sampleAccessInfo.memberAccessInfos = 
                DiffpTuningRequest_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DiffpTuningRequest);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DiffpTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DiffpTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DiffpTuningRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DiffpTuningRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
                DiffpTuningRequest_get_member_value_pointer;

                DiffpTuningRequest_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DiffpTuningRequest_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *DiffpTuningRequest_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin DiffpTuningRequest_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_finalize_w_return,
                    NULL
                };

                return &DiffpTuningRequest_g_typePlugin;
            }
            #endif

            RTIBool DiffpTuningRequest_initialize(
                DiffpTuningRequest* sample) {
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DiffpTuningRequest_initialize_ex(
                DiffpTuningRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DiffpTuningRequest_initialize_w_params(
                DiffpTuningRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->diffPFilter = 0.0;

                sample->diffPD = 0.0;

                sample->diffPF = 0.0;

                sample->diffPEps = 0.0;

                sample->diffPEpsManual = 0;

                sample->diffPKcMin = 0.0;

                sample->diffPKcMax = 0.0;

                sample->diffPTiMin = 0.0;

                sample->diffPTiMax = 0.0;

                return RTI_TRUE;
            }

            RTIBool DiffpTuningRequest_finalize_w_return(
                DiffpTuningRequest* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void DiffpTuningRequest_finalize(
                DiffpTuningRequest* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_finalize_ex(sample,RTI_TRUE);
            }

            void DiffpTuningRequest_finalize_ex(
                DiffpTuningRequest* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_finalize_w_params(
                    sample,&deallocParams);
            }

            void DiffpTuningRequest_finalize_w_params(
                DiffpTuningRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void DiffpTuningRequest_finalize_optional_members(
                DiffpTuningRequest* sample, RTIBool deletePointers)
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

            RTIBool DiffpTuningRequest_copy(
                DiffpTuningRequest* dst,
                const DiffpTuningRequest* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->diffPFilter, &src->diffPFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPD, &src->diffPD)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPF, &src->diffPF)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPEps, &src->diffPEps)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->diffPEpsManual, &src->diffPEpsManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPKcMin, &src->diffPKcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPKcMax, &src->diffPKcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPTiMin, &src->diffPTiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPTiMax, &src->diffPTiMax)) { 
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
            * Configure and implement 'DiffpTuningRequest' sequence class.
            */
            #define T DiffpTuningRequest
            #define TSeq DiffpTuningRequestSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_copy

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
                        (char *)"diffPFilter",/* Member name */
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
                        (char *)"diffPD",/* Member name */
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
                        (char *)"diffPF",/* Member name */
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
                        (char *)"diffPEps",/* Member name */
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
                        (char *)"diffPEpsManual",/* Member name */
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
                        (char *)"diffPKcMin",/* Member name */
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
                        (char *)"diffPKcMax",/* Member name */
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
                        (char *)"diffPTiMin",/* Member name */
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
                        (char *)"diffPTiMax",/* Member name */
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
                        (char *)"diffPInitK",/* Member name */
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
                        (char *)"diffPInitTau",/* Member name */
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
                        (char *)"diffPInitPreFilter",/* Member name */
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
                        (char *)"diffPR1",/* Member name */
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
                        (char *)"diffPR2",/* Member name */
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
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPFilter - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPD - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPF - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPEps - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPEpsManual - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPKcMin - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPKcMax - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPTiMin - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPTiMax - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPInitK - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPInitTau - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPInitPreFilter - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPR1 - (char *)sample);

                DiffpTuningState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->diffPR2 - (char *)sample);

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

                sample->diffPFilter = 0.0;

                sample->diffPD = 0.0;

                sample->diffPF = 0.0;

                sample->diffPEps = 0.0;

                sample->diffPEpsManual = 0;

                sample->diffPKcMin = 0.0;

                sample->diffPKcMax = 0.0;

                sample->diffPTiMin = 0.0;

                sample->diffPTiMax = 0.0;

                sample->diffPInitK = 0.0;

                sample->diffPInitTau = 0.0;

                sample->diffPInitPreFilter = 0.0;

                sample->diffPR1 = 0.0;

                sample->diffPR2 = 0.0;

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
                        &dst->diffPFilter, &src->diffPFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPD, &src->diffPD)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPF, &src->diffPF)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPEps, &src->diffPEps)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->diffPEpsManual, &src->diffPEpsManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPKcMin, &src->diffPKcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPKcMax, &src->diffPKcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPTiMin, &src->diffPTiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPTiMax, &src->diffPTiMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPInitK, &src->diffPInitK)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPInitTau, &src->diffPInitTau)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPInitPreFilter, &src->diffPInitPreFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPR1, &src->diffPR1)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->diffPR2, &src->diffPR2)) { 
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
            const char *WobTuningRequestTYPENAME = "Shell::Hmi::AutoTunerConfiguration::WobTuningRequest";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* WobTuningRequest_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WobTuningRequest_g_tc_members[9]=
                {

                    {
                        (char *)"wobFilter",/* Member name */
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
                        (char *)"wobD",/* Member name */
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
                        (char *)"wobF",/* Member name */
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
                        (char *)"wobEps",/* Member name */
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
                        (char *)"wobEpsManual",/* Member name */
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
                        (char *)"wobKcMin",/* Member name */
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
                        (char *)"wobKcMax",/* Member name */
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
                        (char *)"wobTiMin",/* Member name */
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
                        (char *)"wobTiMax",/* Member name */
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

                static DDS_TypeCode WobTuningRequest_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::WobTuningRequest", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        WobTuningRequest_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WobTuningRequest*/

                if (is_initialized) {
                    return &WobTuningRequest_g_tc;
                }

                WobTuningRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WobTuningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                WobTuningRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                WobTuningRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                WobTuningRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                WobTuningRequest_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                WobTuningRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                WobTuningRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WobTuningRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WobTuningRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WobTuningRequest_g_tc._data._sampleAccessInfo =
                WobTuningRequest_get_sample_access_info();
                WobTuningRequest_g_tc._data._typePlugin =
                WobTuningRequest_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WobTuningRequest_g_tc;
            }

            #define TSeq WobTuningRequestSeq
            #define T WobTuningRequest
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *WobTuningRequest_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo WobTuningRequest_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(WobTuningRequestSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    WobTuningRequestSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &WobTuningRequest_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *WobTuningRequest_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::WobTuningRequest *sample;

                static RTIXCdrMemberAccessInfo WobTuningRequest_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WobTuningRequest_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WobTuningRequest_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::WobTuningRequest);
                if (sample == NULL) {
                    return NULL;
                }

                WobTuningRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobFilter - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobD - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobF - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobEps - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobEpsManual - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobKcMin - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobKcMax - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobTiMin - (char *)sample);

                WobTuningRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobTiMax - (char *)sample);

                WobTuningRequest_g_sampleAccessInfo.memberAccessInfos = 
                WobTuningRequest_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WobTuningRequest);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WobTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WobTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WobTuningRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WobTuningRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
                WobTuningRequest_get_member_value_pointer;

                WobTuningRequest_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WobTuningRequest_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *WobTuningRequest_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin WobTuningRequest_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_finalize_w_return,
                    NULL
                };

                return &WobTuningRequest_g_typePlugin;
            }
            #endif

            RTIBool WobTuningRequest_initialize(
                WobTuningRequest* sample) {
                return Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WobTuningRequest_initialize_ex(
                WobTuningRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WobTuningRequest_initialize_w_params(
                WobTuningRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->wobFilter = 0.0;

                sample->wobD = 0.0;

                sample->wobF = 0.0;

                sample->wobEps = 0.0;

                sample->wobEpsManual = 0;

                sample->wobKcMin = 0.0;

                sample->wobKcMax = 0.0;

                sample->wobTiMin = 0.0;

                sample->wobTiMax = 0.0;

                return RTI_TRUE;
            }

            RTIBool WobTuningRequest_finalize_w_return(
                WobTuningRequest* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void WobTuningRequest_finalize(
                WobTuningRequest* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_finalize_ex(sample,RTI_TRUE);
            }

            void WobTuningRequest_finalize_ex(
                WobTuningRequest* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_finalize_w_params(
                    sample,&deallocParams);
            }

            void WobTuningRequest_finalize_w_params(
                WobTuningRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void WobTuningRequest_finalize_optional_members(
                WobTuningRequest* sample, RTIBool deletePointers)
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

            RTIBool WobTuningRequest_copy(
                WobTuningRequest* dst,
                const WobTuningRequest* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->wobFilter, &src->wobFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobD, &src->wobD)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobF, &src->wobF)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobEps, &src->wobEps)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->wobEpsManual, &src->wobEpsManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobKcMin, &src->wobKcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobKcMax, &src->wobKcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobTiMin, &src->wobTiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobTiMax, &src->wobTiMax)) { 
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
            * Configure and implement 'WobTuningRequest' sequence class.
            */
            #define T WobTuningRequest
            #define TSeq WobTuningRequestSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_copy

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
                        (char *)"wobFilter",/* Member name */
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
                        (char *)"wobD",/* Member name */
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
                        (char *)"wobF",/* Member name */
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
                        (char *)"wobEps",/* Member name */
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
                        (char *)"wobEpsManual",/* Member name */
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
                        (char *)"wobKcMin",/* Member name */
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
                        (char *)"wobKcMax",/* Member name */
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
                        (char *)"wobTiMin",/* Member name */
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
                        (char *)"wobTiMax",/* Member name */
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
                        (char *)"wobInitK",/* Member name */
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
                        (char *)"wobInitTau",/* Member name */
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
                        (char *)"wobInitPreFilter",/* Member name */
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
                        (char *)"wobR1",/* Member name */
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
                        (char *)"wobR2",/* Member name */
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
                (RTIXCdrUnsignedLong) ((char *)&sample->wobFilter - (char *)sample);

                WobTuningState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobD - (char *)sample);

                WobTuningState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobF - (char *)sample);

                WobTuningState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobEps - (char *)sample);

                WobTuningState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobEpsManual - (char *)sample);

                WobTuningState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobKcMin - (char *)sample);

                WobTuningState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobKcMax - (char *)sample);

                WobTuningState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobTiMin - (char *)sample);

                WobTuningState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobTiMax - (char *)sample);

                WobTuningState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobInitK - (char *)sample);

                WobTuningState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobInitTau - (char *)sample);

                WobTuningState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobInitPreFilter - (char *)sample);

                WobTuningState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobR1 - (char *)sample);

                WobTuningState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->wobR2 - (char *)sample);

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

                sample->wobFilter = 0.0;

                sample->wobD = 0.0;

                sample->wobF = 0.0;

                sample->wobEps = 0.0;

                sample->wobEpsManual = 0;

                sample->wobKcMin = 0.0;

                sample->wobKcMax = 0.0;

                sample->wobTiMin = 0.0;

                sample->wobTiMax = 0.0;

                sample->wobInitK = 0.0;

                sample->wobInitTau = 0.0;

                sample->wobInitPreFilter = 0.0;

                sample->wobR1 = 0.0;

                sample->wobR2 = 0.0;

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
                        &dst->wobFilter, &src->wobFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobD, &src->wobD)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobF, &src->wobF)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobEps, &src->wobEps)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->wobEpsManual, &src->wobEpsManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobKcMin, &src->wobKcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobKcMax, &src->wobKcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobTiMin, &src->wobTiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobTiMax, &src->wobTiMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobInitK, &src->wobInitK)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobInitTau, &src->wobInitTau)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobInitPreFilter, &src->wobInitPreFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobR1, &src->wobR1)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wobR2, &src->wobR2)) { 
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
            const char *TorqueTuningRequestTYPENAME = "Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* TorqueTuningRequest_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TorqueTuningRequest_g_tc_members[9]=
                {

                    {
                        (char *)"torqueFilter",/* Member name */
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
                        (char *)"torqueD",/* Member name */
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
                        (char *)"torqueF",/* Member name */
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
                        (char *)"torqueEps",/* Member name */
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
                        (char *)"torqueEpsManual",/* Member name */
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
                        (char *)"torqueKcMin",/* Member name */
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
                        (char *)"torqueKcMax",/* Member name */
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
                        (char *)"torqueTiMin",/* Member name */
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
                        (char *)"torqueTiMax",/* Member name */
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

                static DDS_TypeCode TorqueTuningRequest_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        TorqueTuningRequest_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TorqueTuningRequest*/

                if (is_initialized) {
                    return &TorqueTuningRequest_g_tc;
                }

                TorqueTuningRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TorqueTuningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                TorqueTuningRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                TorqueTuningRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                TorqueTuningRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                TorqueTuningRequest_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                TorqueTuningRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                TorqueTuningRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                TorqueTuningRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                TorqueTuningRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                TorqueTuningRequest_g_tc._data._sampleAccessInfo =
                TorqueTuningRequest_get_sample_access_info();
                TorqueTuningRequest_g_tc._data._typePlugin =
                TorqueTuningRequest_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &TorqueTuningRequest_g_tc;
            }

            #define TSeq TorqueTuningRequestSeq
            #define T TorqueTuningRequest
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *TorqueTuningRequest_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo TorqueTuningRequest_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(TorqueTuningRequestSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    TorqueTuningRequestSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &TorqueTuningRequest_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *TorqueTuningRequest_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest *sample;

                static RTIXCdrMemberAccessInfo TorqueTuningRequest_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TorqueTuningRequest_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TorqueTuningRequest_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest);
                if (sample == NULL) {
                    return NULL;
                }

                TorqueTuningRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueFilter - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueD - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueF - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueEps - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueEpsManual - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueKcMin - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueKcMax - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueTiMin - (char *)sample);

                TorqueTuningRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueTiMax - (char *)sample);

                TorqueTuningRequest_g_sampleAccessInfo.memberAccessInfos = 
                TorqueTuningRequest_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(TorqueTuningRequest);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        TorqueTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        TorqueTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TorqueTuningRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TorqueTuningRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
                TorqueTuningRequest_get_member_value_pointer;

                TorqueTuningRequest_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TorqueTuningRequest_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *TorqueTuningRequest_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin TorqueTuningRequest_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_finalize_w_return,
                    NULL
                };

                return &TorqueTuningRequest_g_typePlugin;
            }
            #endif

            RTIBool TorqueTuningRequest_initialize(
                TorqueTuningRequest* sample) {
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TorqueTuningRequest_initialize_ex(
                TorqueTuningRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TorqueTuningRequest_initialize_w_params(
                TorqueTuningRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->torqueFilter = 0.0;

                sample->torqueD = 0.0;

                sample->torqueF = 0.0;

                sample->torqueEps = 0.0;

                sample->torqueEpsManual = 0;

                sample->torqueKcMin = 0.0;

                sample->torqueKcMax = 0.0;

                sample->torqueTiMin = 0.0;

                sample->torqueTiMax = 0.0;

                return RTI_TRUE;
            }

            RTIBool TorqueTuningRequest_finalize_w_return(
                TorqueTuningRequest* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void TorqueTuningRequest_finalize(
                TorqueTuningRequest* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_finalize_ex(sample,RTI_TRUE);
            }

            void TorqueTuningRequest_finalize_ex(
                TorqueTuningRequest* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_finalize_w_params(
                    sample,&deallocParams);
            }

            void TorqueTuningRequest_finalize_w_params(
                TorqueTuningRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void TorqueTuningRequest_finalize_optional_members(
                TorqueTuningRequest* sample, RTIBool deletePointers)
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

            RTIBool TorqueTuningRequest_copy(
                TorqueTuningRequest* dst,
                const TorqueTuningRequest* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->torqueFilter, &src->torqueFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueD, &src->torqueD)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueF, &src->torqueF)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueEps, &src->torqueEps)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->torqueEpsManual, &src->torqueEpsManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueKcMin, &src->torqueKcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueKcMax, &src->torqueKcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueTiMin, &src->torqueTiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueTiMax, &src->torqueTiMax)) { 
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
            * Configure and implement 'TorqueTuningRequest' sequence class.
            */
            #define T TorqueTuningRequest
            #define TSeq TorqueTuningRequestSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_copy

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
                        (char *)"torqueFilter",/* Member name */
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
                        (char *)"torqueD",/* Member name */
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
                        (char *)"torqueF",/* Member name */
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
                        (char *)"torqueEps",/* Member name */
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
                        (char *)"torqueEpsManual",/* Member name */
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
                        (char *)"torqueKcMin",/* Member name */
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
                        (char *)"torqueKcMax",/* Member name */
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
                        (char *)"torqueTiMin",/* Member name */
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
                        (char *)"torqueTiMax",/* Member name */
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
                        (char *)"torqueInitK",/* Member name */
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
                        (char *)"torqueInitTau",/* Member name */
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
                        (char *)"torqueInitPreFilter",/* Member name */
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
                        (char *)"torqueR1",/* Member name */
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
                        (char *)"torqueR2",/* Member name */
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
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueFilter - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueD - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueF - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueEps - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueEpsManual - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueKcMin - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueKcMax - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueTiMin - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueTiMax - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitK - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitTau - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitPreFilter - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueR1 - (char *)sample);

                TorqueTuningState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->torqueR2 - (char *)sample);

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

                sample->torqueFilter = 0.0;

                sample->torqueD = 0.0;

                sample->torqueF = 0.0;

                sample->torqueEps = 0.0;

                sample->torqueEpsManual = 0;

                sample->torqueKcMin = 0.0;

                sample->torqueKcMax = 0.0;

                sample->torqueTiMin = 0.0;

                sample->torqueTiMax = 0.0;

                sample->torqueInitK = 0.0;

                sample->torqueInitTau = 0.0;

                sample->torqueInitPreFilter = 0.0;

                sample->torqueR1 = 0.0;

                sample->torqueR2 = 0.0;

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
                        &dst->torqueFilter, &src->torqueFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueD, &src->torqueD)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueF, &src->torqueF)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueEps, &src->torqueEps)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->torqueEpsManual, &src->torqueEpsManual)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueKcMin, &src->torqueKcMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueKcMax, &src->torqueKcMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueTiMin, &src->torqueTiMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueTiMax, &src->torqueTiMax)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueInitK, &src->torqueInitK)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueInitTau, &src->torqueInitTau)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueInitPreFilter, &src->torqueInitPreFilter)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueR1, &src->torqueR1)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->torqueR2, &src->torqueR2)) { 
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

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::DiffpTuningState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::WobTuningRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::WobTuningState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::WobTuningState_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::TorqueTuningState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_get_typecode();
        }

    } 
}
#endif
