
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#include "xcdr/xcdr_interpreter.h"
#include "xcdr/xcdr_stream.h"

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "autotuner_configurationPlugin.h"

namespace Shell {
    namespace Hmi {
        namespace AutoTunerConfiguration {

            /* ----------------------------------------------------------------------------
            *  Type ModelState
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            ModelState*
            ModelStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                ModelState *sample = NULL;

                sample = new (std::nothrow) ModelState ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::ModelState_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            ModelState *
            ModelStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                ModelState *sample = NULL;

                sample = new (std::nothrow) ModelState ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::ModelState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            ModelState *
            ModelStatePluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::ModelStatePluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            ModelStatePluginSupport_destroy_data_w_params(
                ModelState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_w_params(sample,dealloc_params);

                delete  sample;
            }

            void 
            ModelStatePluginSupport_destroy_data_ex(
                ModelState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
            }

            void 
            ModelStatePluginSupport_destroy_data(
                ModelState *sample) {

                Shell::Hmi::AutoTunerConfiguration::ModelStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            ModelStatePluginSupport_copy_data(
                ModelState *dst,
                const ModelState *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::ModelState_copy(dst,(const ModelState*) src);
            }

            void 
            ModelStatePluginSupport_print_data(
                const ModelState *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILogParamString_printPlain("%s:\n", desc);
                } else {
                    RTILogParamString_printPlain("\n");
                }

                if (sample == NULL) {
                    RTILogParamString_printPlain("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->pipeInnerDiameter, "pipeInnerDiameter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->pipeOuterDiameter, "pipeOuterDiameter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->slopeFilter, "slopeFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tauMax, "tauMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tauMin, "tauMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tauMultiplier, "tauMultiplier", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->maxDeviation, "maxDeviation", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->minInterval, "minInterval", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->tunerEnabled, "tunerEnabled", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            ModelStatePlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                pd = (struct PRESTypePluginDefaultParticipantData *)
                PRESTypePluginDefaultParticipantData_new(participant_info);

                programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
                programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
                programProperty.resolveAlias = RTI_XCDR_TRUE;
                programProperty.inlineStruct = RTI_XCDR_TRUE;
                programProperty.optimizeEnum = RTI_XCDR_TRUE;
                programProperty.unboundedSize = RTIXCdrLong_MAX;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    ModelState_get_typecode(),
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData) pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            ModelStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {  		
                if (participant_data != NULL) {
                    struct PRESTypePluginDefaultParticipantData *pd = 
                    (struct PRESTypePluginDefaultParticipantData *)participant_data;

                    if (pd->programs != NULL) {
                        DDS_TypeCodeFactory_remove_programs_from_global_list(
                            DDS_TypeCodeFactory_get_instance(),
                            pd->programs);
                        pd->programs = NULL;
                    }
                    PRESTypePluginDefaultParticipantData_delete(participant_data);
                }
            }

            PRESTypePluginEndpointData
            ModelStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::ModelStatePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::ModelStatePluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            ModelStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            ModelStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelState *sample,
                void *handle)
            {
                ModelState_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            ModelStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelState *dst,
                const ModelState *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::ModelStatePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            ModelStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            ModelStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const ModelState *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                ModelState_get_typecode();
                pd.programs = ModelStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);    
                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                ModelStatePlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream,
                    RTI_TRUE,
                    encapsulationId,
                    RTI_TRUE,
                    NULL);

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;
            }

            RTIBool
            ModelStatePlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const ModelState *sample)
            {
                return ModelStatePlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            ModelStatePlugin_deserialize_from_cdr_buffer(
                ModelState *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                ModelState_get_typecode();
                pd.programs = ModelStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                ModelState_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            ModelStatePlugin_data_to_string(
                const ModelState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }
                if (!ModelStatePlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!ModelStatePlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    ModelState_get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }
            #endif

            unsigned int 
            ModelStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            ModelStatePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool ModelStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ModelState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    

            }

            unsigned int
            ModelStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int
            ModelStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                    endpoint_data,
                    &overflow,
                    encapsulation_id,
                    current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            struct RTIXCdrInterpreterPrograms * ModelStatePlugin_get_programs(void)
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                ModelState, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *ModelStatePlugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                ModelStatePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                ModelStatePlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                ModelState_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                ModelStatePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                ModelStatePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::ModelState_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                ModelStatePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                ModelStatePlugin_return_buffer;
                plugin->getBufferWithParams = NULL;
                plugin->returnBufferWithParams = NULL;  
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize;

                plugin->getWriterLoanedSampleFnc = NULL; 
                plugin->returnWriterLoanedSampleFnc = NULL;
                plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
                plugin->validateWriterLoanedSampleFnc = NULL;
                plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

                plugin->endpointTypeName = ModelStateTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            ModelStatePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type DiffpTuningState
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            DiffpTuningState*
            DiffpTuningStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                DiffpTuningState *sample = NULL;

                sample = new (std::nothrow) DiffpTuningState ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            DiffpTuningState *
            DiffpTuningStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                DiffpTuningState *sample = NULL;

                sample = new (std::nothrow) DiffpTuningState ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            DiffpTuningState *
            DiffpTuningStatePluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            DiffpTuningStatePluginSupport_destroy_data_w_params(
                DiffpTuningState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_w_params(sample,dealloc_params);

                delete  sample;
            }

            void 
            DiffpTuningStatePluginSupport_destroy_data_ex(
                DiffpTuningState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
            }

            void 
            DiffpTuningStatePluginSupport_destroy_data(
                DiffpTuningState *sample) {

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            DiffpTuningStatePluginSupport_copy_data(
                DiffpTuningState *dst,
                const DiffpTuningState *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_copy(dst,(const DiffpTuningState*) src);
            }

            void 
            DiffpTuningStatePluginSupport_print_data(
                const DiffpTuningState *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILogParamString_printPlain("%s:\n", desc);
                } else {
                    RTILogParamString_printPlain("\n");
                }

                if (sample == NULL) {
                    RTILogParamString_printPlain("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->filter, "filter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->d, "d", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->f, "f", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->epsilon, "epsilon", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->epsilonManual, "epsilonManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->kcMin, "kcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->kcMax, "kcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tiMin, "tiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tiMax, "tiMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initK, "initK", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initTau, "initTau", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initPreFilter, "initPreFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->r1, "r1", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->r2, "r2", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            DiffpTuningStatePlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                pd = (struct PRESTypePluginDefaultParticipantData *)
                PRESTypePluginDefaultParticipantData_new(participant_info);

                programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
                programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
                programProperty.resolveAlias = RTI_XCDR_TRUE;
                programProperty.inlineStruct = RTI_XCDR_TRUE;
                programProperty.optimizeEnum = RTI_XCDR_TRUE;
                programProperty.unboundedSize = RTIXCdrLong_MAX;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    DiffpTuningState_get_typecode(),
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData) pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            DiffpTuningStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {  		
                if (participant_data != NULL) {
                    struct PRESTypePluginDefaultParticipantData *pd = 
                    (struct PRESTypePluginDefaultParticipantData *)participant_data;

                    if (pd->programs != NULL) {
                        DDS_TypeCodeFactory_remove_programs_from_global_list(
                            DDS_TypeCodeFactory_get_instance(),
                            pd->programs);
                        pd->programs = NULL;
                    }
                    PRESTypePluginDefaultParticipantData_delete(participant_data);
                }
            }

            PRESTypePluginEndpointData
            DiffpTuningStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            DiffpTuningStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            DiffpTuningStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningState *sample,
                void *handle)
            {
                DiffpTuningState_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            DiffpTuningStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningState *dst,
                const DiffpTuningState *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            DiffpTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            DiffpTuningStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const DiffpTuningState *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                DiffpTuningState_get_typecode();
                pd.programs = DiffpTuningStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);    
                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DiffpTuningStatePlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream,
                    RTI_TRUE,
                    encapsulationId,
                    RTI_TRUE,
                    NULL);

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;
            }

            RTIBool
            DiffpTuningStatePlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const DiffpTuningState *sample)
            {
                return DiffpTuningStatePlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            DiffpTuningStatePlugin_deserialize_from_cdr_buffer(
                DiffpTuningState *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                DiffpTuningState_get_typecode();
                pd.programs = DiffpTuningStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                DiffpTuningState_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            DiffpTuningStatePlugin_data_to_string(
                const DiffpTuningState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }
                if (!DiffpTuningStatePlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!DiffpTuningStatePlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    DiffpTuningState_get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }
            #endif

            unsigned int 
            DiffpTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            DiffpTuningStatePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool DiffpTuningStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    

            }

            unsigned int
            DiffpTuningStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int
            DiffpTuningStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                    endpoint_data,
                    &overflow,
                    encapsulation_id,
                    current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            struct RTIXCdrInterpreterPrograms * DiffpTuningStatePlugin_get_programs(void)
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                DiffpTuningState, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *DiffpTuningStatePlugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                DiffpTuningStatePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                DiffpTuningStatePlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                DiffpTuningState_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                DiffpTuningStatePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                DiffpTuningStatePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                DiffpTuningStatePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                DiffpTuningStatePlugin_return_buffer;
                plugin->getBufferWithParams = NULL;
                plugin->returnBufferWithParams = NULL;  
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize;

                plugin->getWriterLoanedSampleFnc = NULL; 
                plugin->returnWriterLoanedSampleFnc = NULL;
                plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
                plugin->validateWriterLoanedSampleFnc = NULL;
                plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

                plugin->endpointTypeName = DiffpTuningStateTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            DiffpTuningStatePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type WobTuningState
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            WobTuningState*
            WobTuningStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                WobTuningState *sample = NULL;

                sample = new (std::nothrow) WobTuningState ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::WobTuningState_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            WobTuningState *
            WobTuningStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                WobTuningState *sample = NULL;

                sample = new (std::nothrow) WobTuningState ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::WobTuningState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            WobTuningState *
            WobTuningStatePluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::WobTuningStatePluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            WobTuningStatePluginSupport_destroy_data_w_params(
                WobTuningState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_w_params(sample,dealloc_params);

                delete  sample;
            }

            void 
            WobTuningStatePluginSupport_destroy_data_ex(
                WobTuningState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
            }

            void 
            WobTuningStatePluginSupport_destroy_data(
                WobTuningState *sample) {

                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            WobTuningStatePluginSupport_copy_data(
                WobTuningState *dst,
                const WobTuningState *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::WobTuningState_copy(dst,(const WobTuningState*) src);
            }

            void 
            WobTuningStatePluginSupport_print_data(
                const WobTuningState *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILogParamString_printPlain("%s:\n", desc);
                } else {
                    RTILogParamString_printPlain("\n");
                }

                if (sample == NULL) {
                    RTILogParamString_printPlain("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->filter, "filter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->d, "d", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->f, "f", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->epsilon, "epsilon", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->epsilonManual, "epsilonManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->kcMin, "kcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->kcMax, "kcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tiMin, "tiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tiMax, "tiMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initK, "initK", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initTau, "initTau", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initPreFilter, "initPreFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->r1, "r1", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->r2, "r2", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            WobTuningStatePlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                pd = (struct PRESTypePluginDefaultParticipantData *)
                PRESTypePluginDefaultParticipantData_new(participant_info);

                programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
                programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
                programProperty.resolveAlias = RTI_XCDR_TRUE;
                programProperty.inlineStruct = RTI_XCDR_TRUE;
                programProperty.optimizeEnum = RTI_XCDR_TRUE;
                programProperty.unboundedSize = RTIXCdrLong_MAX;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    WobTuningState_get_typecode(),
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData) pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            WobTuningStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {  		
                if (participant_data != NULL) {
                    struct PRESTypePluginDefaultParticipantData *pd = 
                    (struct PRESTypePluginDefaultParticipantData *)participant_data;

                    if (pd->programs != NULL) {
                        DDS_TypeCodeFactory_remove_programs_from_global_list(
                            DDS_TypeCodeFactory_get_instance(),
                            pd->programs);
                        pd->programs = NULL;
                    }
                    PRESTypePluginDefaultParticipantData_delete(participant_data);
                }
            }

            PRESTypePluginEndpointData
            WobTuningStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::WobTuningStatePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::WobTuningStatePluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            WobTuningStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            WobTuningStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningState *sample,
                void *handle)
            {
                WobTuningState_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            WobTuningStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningState *dst,
                const WobTuningState *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::WobTuningStatePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            WobTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            WobTuningStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const WobTuningState *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                WobTuningState_get_typecode();
                pd.programs = WobTuningStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);    
                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WobTuningStatePlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream,
                    RTI_TRUE,
                    encapsulationId,
                    RTI_TRUE,
                    NULL);

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;
            }

            RTIBool
            WobTuningStatePlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const WobTuningState *sample)
            {
                return WobTuningStatePlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            WobTuningStatePlugin_deserialize_from_cdr_buffer(
                WobTuningState *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                WobTuningState_get_typecode();
                pd.programs = WobTuningStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                WobTuningState_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            WobTuningStatePlugin_data_to_string(
                const WobTuningState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }
                if (!WobTuningStatePlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!WobTuningStatePlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    WobTuningState_get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }
            #endif

            unsigned int 
            WobTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            WobTuningStatePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool WobTuningStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    

            }

            unsigned int
            WobTuningStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int
            WobTuningStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                    endpoint_data,
                    &overflow,
                    encapsulation_id,
                    current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            struct RTIXCdrInterpreterPrograms * WobTuningStatePlugin_get_programs(void)
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                WobTuningState, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *WobTuningStatePlugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                WobTuningStatePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                WobTuningStatePlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                WobTuningState_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                WobTuningStatePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                WobTuningStatePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::WobTuningState_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                WobTuningStatePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                WobTuningStatePlugin_return_buffer;
                plugin->getBufferWithParams = NULL;
                plugin->returnBufferWithParams = NULL;  
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize;

                plugin->getWriterLoanedSampleFnc = NULL; 
                plugin->returnWriterLoanedSampleFnc = NULL;
                plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
                plugin->validateWriterLoanedSampleFnc = NULL;
                plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

                plugin->endpointTypeName = WobTuningStateTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            WobTuningStatePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type TorqueTuningState
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            TorqueTuningState*
            TorqueTuningStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                TorqueTuningState *sample = NULL;

                sample = new (std::nothrow) TorqueTuningState ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            TorqueTuningState *
            TorqueTuningStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                TorqueTuningState *sample = NULL;

                sample = new (std::nothrow) TorqueTuningState ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            TorqueTuningState *
            TorqueTuningStatePluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            TorqueTuningStatePluginSupport_destroy_data_w_params(
                TorqueTuningState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_w_params(sample,dealloc_params);

                delete  sample;
            }

            void 
            TorqueTuningStatePluginSupport_destroy_data_ex(
                TorqueTuningState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
            }

            void 
            TorqueTuningStatePluginSupport_destroy_data(
                TorqueTuningState *sample) {

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            TorqueTuningStatePluginSupport_copy_data(
                TorqueTuningState *dst,
                const TorqueTuningState *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_copy(dst,(const TorqueTuningState*) src);
            }

            void 
            TorqueTuningStatePluginSupport_print_data(
                const TorqueTuningState *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILogParamString_printPlain("%s:\n", desc);
                } else {
                    RTILogParamString_printPlain("\n");
                }

                if (sample == NULL) {
                    RTILogParamString_printPlain("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->filter, "filter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->d, "d", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->f, "f", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->epsilon, "epsilon", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->epsilonManual, "epsilonManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->kcMin, "kcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->kcMax, "kcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tiMin, "tiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->tiMax, "tiMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initK, "initK", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initTau, "initTau", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->initPreFilter, "initPreFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->r1, "r1", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->r2, "r2", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            TorqueTuningStatePlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                pd = (struct PRESTypePluginDefaultParticipantData *)
                PRESTypePluginDefaultParticipantData_new(participant_info);

                programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
                programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
                programProperty.resolveAlias = RTI_XCDR_TRUE;
                programProperty.inlineStruct = RTI_XCDR_TRUE;
                programProperty.optimizeEnum = RTI_XCDR_TRUE;
                programProperty.unboundedSize = RTIXCdrLong_MAX;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    TorqueTuningState_get_typecode(),
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData) pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            TorqueTuningStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {  		
                if (participant_data != NULL) {
                    struct PRESTypePluginDefaultParticipantData *pd = 
                    (struct PRESTypePluginDefaultParticipantData *)participant_data;

                    if (pd->programs != NULL) {
                        DDS_TypeCodeFactory_remove_programs_from_global_list(
                            DDS_TypeCodeFactory_get_instance(),
                            pd->programs);
                        pd->programs = NULL;
                    }
                    PRESTypePluginDefaultParticipantData_delete(participant_data);
                }
            }

            PRESTypePluginEndpointData
            TorqueTuningStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            TorqueTuningStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            TorqueTuningStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningState *sample,
                void *handle)
            {
                TorqueTuningState_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            TorqueTuningStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningState *dst,
                const TorqueTuningState *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            TorqueTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            TorqueTuningStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const TorqueTuningState *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                TorqueTuningState_get_typecode();
                pd.programs = TorqueTuningStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);    
                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                TorqueTuningStatePlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream,
                    RTI_TRUE,
                    encapsulationId,
                    RTI_TRUE,
                    NULL);

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;
            }

            RTIBool
            TorqueTuningStatePlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const TorqueTuningState *sample)
            {
                return TorqueTuningStatePlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            TorqueTuningStatePlugin_deserialize_from_cdr_buffer(
                TorqueTuningState *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                TorqueTuningState_get_typecode();
                pd.programs = TorqueTuningStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                TorqueTuningState_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            TorqueTuningStatePlugin_data_to_string(
                const TorqueTuningState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }
                if (!TorqueTuningStatePlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!TorqueTuningStatePlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    TorqueTuningState_get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }
            #endif

            unsigned int 
            TorqueTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            TorqueTuningStatePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool TorqueTuningStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    

            }

            unsigned int
            TorqueTuningStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int
            TorqueTuningStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;
                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                    endpoint_data,
                    &overflow,
                    encapsulation_id,
                    current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            struct RTIXCdrInterpreterPrograms * TorqueTuningStatePlugin_get_programs(void)
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                TorqueTuningState, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *TorqueTuningStatePlugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                TorqueTuningStatePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                TorqueTuningStatePlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                TorqueTuningState_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                TorqueTuningStatePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                TorqueTuningStatePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                TorqueTuningStatePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                TorqueTuningStatePlugin_return_buffer;
                plugin->getBufferWithParams = NULL;
                plugin->returnBufferWithParams = NULL;  
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize;

                plugin->getWriterLoanedSampleFnc = NULL; 
                plugin->returnWriterLoanedSampleFnc = NULL;
                plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
                plugin->validateWriterLoanedSampleFnc = NULL;
                plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

                plugin->endpointTypeName = TorqueTuningStateTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            TorqueTuningStatePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace AutoTunerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */
#undef RTI_CDR_CURRENT_SUBMODULE 
