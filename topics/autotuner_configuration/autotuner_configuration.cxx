

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
            const char *ModelStateRequestTYPENAME = "Shell::Hmi::AutoTunerConfiguration::ModelStateRequest";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* ModelStateRequest_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ModelStateRequest_g_tc_members[9]=
                {

                    {
                        (char *)"modelReset",/* Member name */
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
                        (char *)"pipeInnerDiameter",/* Member name */
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
                        (char *)"pipeOuterDiameter",/* Member name */
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
                        (char *)"slopeFilter",/* Member name */
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
                        (char *)"tauMax",/* Member name */
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
                        (char *)"tauMin",/* Member name */
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
                        (char *)"tauMultiplier",/* Member name */
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
                        (char *)"maxDeviation",/* Member name */
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
                        (char *)"minInterval",/* Member name */
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

                static DDS_TypeCode ModelStateRequest_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::ModelStateRequest", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        ModelStateRequest_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ModelStateRequest*/

                if (is_initialized) {
                    return &ModelStateRequest_g_tc;
                }

                ModelStateRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ModelStateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                ModelStateRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelStateRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelStateRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelStateRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelStateRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelStateRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelStateRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                ModelStateRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                ModelStateRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                ModelStateRequest_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                ModelStateRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                ModelStateRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                ModelStateRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ModelStateRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                ModelStateRequest_g_tc._data._sampleAccessInfo =
                ModelStateRequest_get_sample_access_info();
                ModelStateRequest_g_tc._data._typePlugin =
                ModelStateRequest_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ModelStateRequest_g_tc;
            }

            #define TSeq ModelStateRequestSeq
            #define T ModelStateRequest
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *ModelStateRequest_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo ModelStateRequest_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(ModelStateRequestSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    ModelStateRequestSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &ModelStateRequest_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *ModelStateRequest_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::ModelStateRequest *sample;

                static RTIXCdrMemberAccessInfo ModelStateRequest_g_memberAccessInfos[9] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ModelStateRequest_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ModelStateRequest_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::ModelStateRequest);
                if (sample == NULL) {
                    return NULL;
                }

                ModelStateRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->modelReset - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pipeInnerDiameter - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pipeOuterDiameter - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->slopeFilter - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tauMax - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tauMin - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tauMultiplier - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->maxDeviation - (char *)sample);

                ModelStateRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minInterval - (char *)sample);

                ModelStateRequest_g_sampleAccessInfo.memberAccessInfos = 
                ModelStateRequest_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(ModelStateRequest);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        ModelStateRequest_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        ModelStateRequest_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ModelStateRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ModelStateRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
                ModelStateRequest_get_member_value_pointer;

                ModelStateRequest_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ModelStateRequest_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *ModelStateRequest_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin ModelStateRequest_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_finalize_w_return,
                    NULL
                };

                return &ModelStateRequest_g_typePlugin;
            }
            #endif

            RTIBool ModelStateRequest_initialize(
                ModelStateRequest* sample) {
                return Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ModelStateRequest_initialize_ex(
                ModelStateRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ModelStateRequest_initialize_w_params(
                ModelStateRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                sample->modelReset = 0;

                sample->pipeInnerDiameter = 0.0;

                sample->pipeOuterDiameter = 0.0;

                sample->slopeFilter = 0.0;

                sample->tauMax = 0.0;

                sample->tauMin = 0.0;

                sample->tauMultiplier = 0.0;

                sample->maxDeviation = 0.0;

                sample->minInterval = 0.0;

                return RTI_TRUE;
            }

            RTIBool ModelStateRequest_finalize_w_return(
                ModelStateRequest* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void ModelStateRequest_finalize(
                ModelStateRequest* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_finalize_ex(sample,RTI_TRUE);
            }

            void ModelStateRequest_finalize_ex(
                ModelStateRequest* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_finalize_w_params(
                    sample,&deallocParams);
            }

            void ModelStateRequest_finalize_w_params(
                ModelStateRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ModelStateRequest_finalize_optional_members(
                ModelStateRequest* sample, RTIBool deletePointers)
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

            RTIBool ModelStateRequest_copy(
                ModelStateRequest* dst,
                const ModelStateRequest* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->modelReset, &src->modelReset)) { 
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
            * Configure and implement 'ModelStateRequest' sequence class.
            */
            #define T ModelStateRequest
            #define TSeq ModelStateRequestSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_copy

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
            const char *AutoTunerTuningRequestTYPENAME = "Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* AutoTunerTuningRequest_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AutoTunerTuningRequest_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((36));

                static DDS_TypeCode_Member AutoTunerTuningRequest_g_tc_members[10]=
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
                        (char *)"filter",/* Member name */
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
                        (char *)"d",/* Member name */
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
                        (char *)"f",/* Member name */
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
                        (char *)"epsilon",/* Member name */
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
                        (char *)"epsilonManual",/* Member name */
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
                        (char *)"kcMin",/* Member name */
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
                        (char *)"kcMax",/* Member name */
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
                        (char *)"tiMin",/* Member name */
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
                        (char *)"tiMax",/* Member name */
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
                    }
                };

                static DDS_TypeCode AutoTunerTuningRequest_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        AutoTunerTuningRequest_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AutoTunerTuningRequest*/

                if (is_initialized) {
                    return &AutoTunerTuningRequest_g_tc;
                }

                AutoTunerTuningRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AutoTunerTuningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&AutoTunerTuningRequest_g_tc_id_string;
                AutoTunerTuningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                AutoTunerTuningRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                AutoTunerTuningRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                AutoTunerTuningRequest_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                AutoTunerTuningRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                AutoTunerTuningRequest_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                AutoTunerTuningRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningRequest_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningRequest_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningRequest_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningRequest_g_tc._data._sampleAccessInfo =
                AutoTunerTuningRequest_get_sample_access_info();
                AutoTunerTuningRequest_g_tc._data._typePlugin =
                AutoTunerTuningRequest_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &AutoTunerTuningRequest_g_tc;
            }

            #define TSeq AutoTunerTuningRequestSeq
            #define T AutoTunerTuningRequest
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *AutoTunerTuningRequest_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo AutoTunerTuningRequest_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(AutoTunerTuningRequestSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    AutoTunerTuningRequestSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &AutoTunerTuningRequest_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *AutoTunerTuningRequest_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest *sample;

                static RTIXCdrMemberAccessInfo AutoTunerTuningRequest_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AutoTunerTuningRequest_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AutoTunerTuningRequest_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest);
                if (sample == NULL) {
                    return NULL;
                }

                AutoTunerTuningRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->filter - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->d - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->f - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilon - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilonManual - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMin - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMax - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMin - (char *)sample);

                AutoTunerTuningRequest_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMax - (char *)sample);

                AutoTunerTuningRequest_g_sampleAccessInfo.memberAccessInfos = 
                AutoTunerTuningRequest_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(AutoTunerTuningRequest);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        AutoTunerTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        AutoTunerTuningRequest_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AutoTunerTuningRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AutoTunerTuningRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
                AutoTunerTuningRequest_get_member_value_pointer;

                AutoTunerTuningRequest_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AutoTunerTuningRequest_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *AutoTunerTuningRequest_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin AutoTunerTuningRequest_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_finalize_w_return,
                    NULL
                };

                return &AutoTunerTuningRequest_g_typePlugin;
            }
            #endif

            RTIBool AutoTunerTuningRequest_initialize(
                AutoTunerTuningRequest* sample) {
                return Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AutoTunerTuningRequest_initialize_ex(
                AutoTunerTuningRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AutoTunerTuningRequest_initialize_w_params(
                AutoTunerTuningRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    sample->id = DDS_String_alloc((36));
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                } else {
                    if (sample->id != NULL) {
                        RTICdrType_copyStringEx(
                            &sample->id,
                            "",
                            (36),
                            RTI_FALSE);
                        if (sample->id == NULL) {
                            return RTI_FALSE;
                        }
                    }
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

                return RTI_TRUE;
            }

            RTIBool AutoTunerTuningRequest_finalize_w_return(
                AutoTunerTuningRequest* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void AutoTunerTuningRequest_finalize(
                AutoTunerTuningRequest* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_finalize_ex(sample,RTI_TRUE);
            }

            void AutoTunerTuningRequest_finalize_ex(
                AutoTunerTuningRequest* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_finalize_w_params(
                    sample,&deallocParams);
            }

            void AutoTunerTuningRequest_finalize_w_params(
                AutoTunerTuningRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            }

            void AutoTunerTuningRequest_finalize_optional_members(
                AutoTunerTuningRequest* sample, RTIBool deletePointers)
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

            RTIBool AutoTunerTuningRequest_copy(
                AutoTunerTuningRequest* dst,
                const AutoTunerTuningRequest* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->id, src->id, 
                        (36) + 1, RTI_FALSE)){
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
            * Configure and implement 'AutoTunerTuningRequest' sequence class.
            */
            #define T AutoTunerTuningRequest
            #define TSeq AutoTunerTuningRequestSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_copy

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
            const char *AutoTunerTuningStateTYPENAME = "Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState";

            #ifndef NDDS_STANDALONE_TYPE
            DDS_TypeCode* AutoTunerTuningState_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AutoTunerTuningState_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((36));

                static DDS_TypeCode_Member AutoTunerTuningState_g_tc_members[15]=
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
                        (char *)"filter",/* Member name */
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
                        (char *)"d",/* Member name */
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
                        (char *)"f",/* Member name */
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
                        (char *)"epsilon",/* Member name */
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
                        (char *)"epsilonManual",/* Member name */
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
                        (char *)"kcMin",/* Member name */
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
                        (char *)"kcMax",/* Member name */
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
                        (char *)"tiMin",/* Member name */
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
                        (char *)"tiMax",/* Member name */
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
                        (char *)"initK",/* Member name */
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
                        (char *)"initTau",/* Member name */
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
                        (char *)"initPreFilter",/* Member name */
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
                        (char *)"r1",/* Member name */
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
                        (char *)"r2",/* Member name */
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
                    }
                };

                static DDS_TypeCode AutoTunerTuningState_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        AutoTunerTuningState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AutoTunerTuningState*/

                if (is_initialized) {
                    return &AutoTunerTuningState_g_tc;
                }

                AutoTunerTuningState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                AutoTunerTuningState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&AutoTunerTuningState_g_tc_id_string;
                AutoTunerTuningState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
                AutoTunerTuningState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
                AutoTunerTuningState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

                /* Initialize the values for member annotations. */
                AutoTunerTuningState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                AutoTunerTuningState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                AutoTunerTuningState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                AutoTunerTuningState_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                AutoTunerTuningState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
                AutoTunerTuningState_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                AutoTunerTuningState_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                AutoTunerTuningState_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                AutoTunerTuningState_g_tc._data._sampleAccessInfo =
                AutoTunerTuningState_get_sample_access_info();
                AutoTunerTuningState_g_tc._data._typePlugin =
                AutoTunerTuningState_get_type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &AutoTunerTuningState_g_tc;
            }

            #define TSeq AutoTunerTuningStateSeq
            #define T AutoTunerTuningState
            #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
            #undef T
            #undef TSeq

            RTIXCdrSampleAccessInfo *AutoTunerTuningState_get_sample_seq_access_info()
            {
                static RTIXCdrSampleAccessInfo AutoTunerTuningState_g_seqSampleAccessInfo = {
                    RTI_XCDR_TYPE_BINDING_CPP, \
                    {sizeof(AutoTunerTuningStateSeq),0,0,0}, \
                    RTI_XCDR_FALSE, \
                    DDS_Sequence_get_member_value_pointer, \
                    AutoTunerTuningStateSeq_set_member_element_count, \
                    NULL, \
                    NULL, \
                    NULL \
                };

                return &AutoTunerTuningState_g_seqSampleAccessInfo;
            }

            RTIXCdrSampleAccessInfo *AutoTunerTuningState_get_sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState *sample;

                static RTIXCdrMemberAccessInfo AutoTunerTuningState_g_memberAccessInfos[15] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AutoTunerTuningState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AutoTunerTuningState_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState);
                if (sample == NULL) {
                    return NULL;
                }

                AutoTunerTuningState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->filter - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->d - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->f - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilon - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->epsilonManual - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMin - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->kcMax - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMin - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tiMax - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initK - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initTau - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->initPreFilter - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r1 - (char *)sample);

                AutoTunerTuningState_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->r2 - (char *)sample);

                AutoTunerTuningState_g_sampleAccessInfo.memberAccessInfos = 
                AutoTunerTuningState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(AutoTunerTuningState);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        AutoTunerTuningState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        AutoTunerTuningState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AutoTunerTuningState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AutoTunerTuningState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                AutoTunerTuningState_get_member_value_pointer;

                AutoTunerTuningState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AutoTunerTuningState_g_sampleAccessInfo;
            }

            RTIXCdrTypePlugin *AutoTunerTuningState_get_type_plugin_info()
            {
                static RTIXCdrTypePlugin AutoTunerTuningState_g_typePlugin = 
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
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_initialize_ex,
                    NULL,
                    (RTIXCdrTypePluginFinalizeSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_finalize_w_return,
                    NULL
                };

                return &AutoTunerTuningState_g_typePlugin;
            }
            #endif

            RTIBool AutoTunerTuningState_initialize(
                AutoTunerTuningState* sample) {
                return Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AutoTunerTuningState_initialize_ex(
                AutoTunerTuningState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AutoTunerTuningState_initialize_w_params(
                AutoTunerTuningState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    sample->id = DDS_String_alloc((36));
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                } else {
                    if (sample->id != NULL) {
                        RTICdrType_copyStringEx(
                            &sample->id,
                            "",
                            (36),
                            RTI_FALSE);
                        if (sample->id == NULL) {
                            return RTI_FALSE;
                        }
                    }
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

            RTIBool AutoTunerTuningState_finalize_w_return(
                AutoTunerTuningState* sample)
            {
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_finalize_ex(sample, RTI_TRUE);

                return RTI_TRUE;
            }

            void AutoTunerTuningState_finalize(
                AutoTunerTuningState* sample)
            {

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_finalize_ex(sample,RTI_TRUE);
            }

            void AutoTunerTuningState_finalize_ex(
                AutoTunerTuningState* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_finalize_w_params(
                    sample,&deallocParams);
            }

            void AutoTunerTuningState_finalize_w_params(
                AutoTunerTuningState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            }

            void AutoTunerTuningState_finalize_optional_members(
                AutoTunerTuningState* sample, RTIBool deletePointers)
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

            RTIBool AutoTunerTuningState_copy(
                AutoTunerTuningState* dst,
                const AutoTunerTuningState* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->id, src->id, 
                        (36) + 1, RTI_FALSE)){
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
            * Configure and implement 'AutoTunerTuningState' sequence class.
            */
            #define T AutoTunerTuningState
            #define TSeq AutoTunerTuningStateSeq

            #define T_initialize_w_params Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_finalize_w_params
            #define T_copy       Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_copy

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
        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::ModelStateRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::ModelState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::ModelState_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState_get_typecode();
        }

    } 
}
#endif
