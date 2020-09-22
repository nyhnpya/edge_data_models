
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
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
            *  Type ModelStateRequest
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            ModelStateRequest*
            ModelStateRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                ModelStateRequest *sample = NULL;

                sample = new (std::nothrow) ModelStateRequest ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            ModelStateRequest *
            ModelStateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                ModelStateRequest *sample = NULL;

                sample = new (std::nothrow) ModelStateRequest ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            ModelStateRequest *
            ModelStateRequestPluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            ModelStateRequestPluginSupport_destroy_data_w_params(
                ModelStateRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            ModelStateRequestPluginSupport_destroy_data_ex(
                ModelStateRequest *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            ModelStateRequestPluginSupport_destroy_data(
                ModelStateRequest *sample) {

                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            ModelStateRequestPluginSupport_copy_data(
                ModelStateRequest *dst,
                const ModelStateRequest *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_copy(dst,(const ModelStateRequest*) src);
            }

            void 
            ModelStateRequestPluginSupport_print_data(
                const ModelStateRequest *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printBoolean(
                    &sample->modelReset, "modelReset", indent_level + 1);    

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

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            ModelStateRequestPlugin_on_participant_attached(
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

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    ModelStateRequest_get_typecode(),
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
            ModelStateRequestPlugin_on_participant_detached(
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
            ModelStateRequestPlugin_on_endpoint_attached(
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
                    Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_get_serialized_sample_max_size, epd,
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
            ModelStateRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            ModelStateRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateRequest *sample,
                void *handle)
            {
                ModelStateRequest_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            ModelStateRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateRequest *dst,
                const ModelStateRequest *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            ModelStateRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            ModelStateRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const ModelStateRequest *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                ModelStateRequest_get_typecode();
                pd.programs = ModelStateRequestPlugin_get_programs();
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
                ModelStateRequestPlugin_get_serialized_sample_max_size(
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
            ModelStateRequestPlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const ModelStateRequest *sample)
            {
                return ModelStateRequestPlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            ModelStateRequestPlugin_deserialize_from_cdr_buffer(
                ModelStateRequest *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                ModelStateRequest_get_typecode();
                pd.programs = ModelStateRequestPlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                ModelStateRequest_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            ModelStateRequestPlugin_data_to_string(
                const ModelStateRequest *sample,
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
                if (!ModelStateRequestPlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!ModelStateRequestPlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    ModelStateRequest_get_typecode(), 
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
            ModelStateRequestPlugin_get_serialized_sample_max_size(
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
            ModelStateRequestPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool ModelStateRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateRequest **sample, 
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
            ModelStateRequestPlugin_get_serialized_key_max_size(
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
            ModelStateRequestPlugin_get_serialized_key_max_size_for_keyhash(
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

            struct RTIXCdrInterpreterPrograms *ModelStateRequestPlugin_get_programs()
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                ModelStateRequest, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *ModelStateRequestPlugin_new(void) 
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
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                ModelStateRequestPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                ModelStateRequestPlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                ModelStateRequest_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                ModelStateRequestPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                ModelStateRequestPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::ModelStateRequest_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                ModelStateRequestPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                ModelStateRequestPlugin_return_buffer;
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

                plugin->endpointTypeName = ModelStateRequestTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            ModelStateRequestPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type ModelStateState
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            ModelStateState*
            ModelStateStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                ModelStateState *sample = NULL;

                sample = new (std::nothrow) ModelStateState ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::ModelStateState_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            ModelStateState *
            ModelStateStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                ModelStateState *sample = NULL;

                sample = new (std::nothrow) ModelStateState ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::ModelStateState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            ModelStateState *
            ModelStateStatePluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::ModelStateStatePluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            ModelStateStatePluginSupport_destroy_data_w_params(
                ModelStateState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::ModelStateState_finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            ModelStateStatePluginSupport_destroy_data_ex(
                ModelStateState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::ModelStateState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            ModelStateStatePluginSupport_destroy_data(
                ModelStateState *sample) {

                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            ModelStateStatePluginSupport_copy_data(
                ModelStateState *dst,
                const ModelStateState *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::ModelStateState_copy(dst,(const ModelStateState*) src);
            }

            void 
            ModelStateStatePluginSupport_print_data(
                const ModelStateState *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
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
            ModelStateStatePlugin_on_participant_attached(
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

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    ModelStateState_get_typecode(),
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
            ModelStateStatePlugin_on_participant_detached(
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
            ModelStateStatePlugin_on_endpoint_attached(
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
                    Shell::Hmi::AutoTunerConfiguration::ModelStateStatePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::ModelStateStatePluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_get_serialized_sample_max_size, epd,
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
            ModelStateStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            ModelStateStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateState *sample,
                void *handle)
            {
                ModelStateState_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            ModelStateStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateState *dst,
                const ModelStateState *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::ModelStateStatePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            ModelStateStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            ModelStateStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const ModelStateState *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                ModelStateState_get_typecode();
                pd.programs = ModelStateStatePlugin_get_programs();
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
                ModelStateStatePlugin_get_serialized_sample_max_size(
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
            ModelStateStatePlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const ModelStateState *sample)
            {
                return ModelStateStatePlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            ModelStateStatePlugin_deserialize_from_cdr_buffer(
                ModelStateState *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                ModelStateState_get_typecode();
                pd.programs = ModelStateStatePlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                ModelStateState_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            ModelStateStatePlugin_data_to_string(
                const ModelStateState *sample,
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
                if (!ModelStateStatePlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!ModelStateStatePlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    ModelStateState_get_typecode(), 
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
            ModelStateStatePlugin_get_serialized_sample_max_size(
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
            ModelStateStatePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool ModelStateStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateState **sample, 
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
            ModelStateStatePlugin_get_serialized_key_max_size(
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
            ModelStateStatePlugin_get_serialized_key_max_size_for_keyhash(
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

            struct RTIXCdrInterpreterPrograms *ModelStateStatePlugin_get_programs()
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                ModelStateState, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *ModelStateStatePlugin_new(void) 
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
                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                ModelStateStatePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                ModelStateStatePlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                ModelStateState_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                ModelStateStatePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                ModelStateStatePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::ModelStateStatePlugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::ModelStateState_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                ModelStateStatePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                ModelStateStatePlugin_return_buffer;
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

                plugin->endpointTypeName = ModelStateStateTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            ModelStateStatePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type DiffpTuningRequest
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            DiffpTuningRequest*
            DiffpTuningRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                DiffpTuningRequest *sample = NULL;

                sample = new (std::nothrow) DiffpTuningRequest ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            DiffpTuningRequest *
            DiffpTuningRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                DiffpTuningRequest *sample = NULL;

                sample = new (std::nothrow) DiffpTuningRequest ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            DiffpTuningRequest *
            DiffpTuningRequestPluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            DiffpTuningRequestPluginSupport_destroy_data_w_params(
                DiffpTuningRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            DiffpTuningRequestPluginSupport_destroy_data_ex(
                DiffpTuningRequest *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            DiffpTuningRequestPluginSupport_destroy_data(
                DiffpTuningRequest *sample) {

                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            DiffpTuningRequestPluginSupport_copy_data(
                DiffpTuningRequest *dst,
                const DiffpTuningRequest *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_copy(dst,(const DiffpTuningRequest*) src);
            }

            void 
            DiffpTuningRequestPluginSupport_print_data(
                const DiffpTuningRequest *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->diffPFilter, "diffPFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPD, "diffPD", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPF, "diffPF", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPEps, "diffPEps", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->diffPEpsManual, "diffPEpsManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPKcMin, "diffPKcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPKcMax, "diffPKcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPTiMin, "diffPTiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPTiMax, "diffPTiMax", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            DiffpTuningRequestPlugin_on_participant_attached(
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

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    DiffpTuningRequest_get_typecode(),
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
            DiffpTuningRequestPlugin_on_participant_detached(
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
            DiffpTuningRequestPlugin_on_endpoint_attached(
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
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_get_serialized_sample_max_size, epd,
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
            DiffpTuningRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            DiffpTuningRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningRequest *sample,
                void *handle)
            {
                DiffpTuningRequest_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            DiffpTuningRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningRequest *dst,
                const DiffpTuningRequest *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            DiffpTuningRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            DiffpTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const DiffpTuningRequest *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                DiffpTuningRequest_get_typecode();
                pd.programs = DiffpTuningRequestPlugin_get_programs();
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
                DiffpTuningRequestPlugin_get_serialized_sample_max_size(
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
            DiffpTuningRequestPlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const DiffpTuningRequest *sample)
            {
                return DiffpTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            DiffpTuningRequestPlugin_deserialize_from_cdr_buffer(
                DiffpTuningRequest *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                DiffpTuningRequest_get_typecode();
                pd.programs = DiffpTuningRequestPlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                DiffpTuningRequest_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            DiffpTuningRequestPlugin_data_to_string(
                const DiffpTuningRequest *sample,
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
                if (!DiffpTuningRequestPlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!DiffpTuningRequestPlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    DiffpTuningRequest_get_typecode(), 
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
            DiffpTuningRequestPlugin_get_serialized_sample_max_size(
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
            DiffpTuningRequestPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool DiffpTuningRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningRequest **sample, 
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
            DiffpTuningRequestPlugin_get_serialized_key_max_size(
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
            DiffpTuningRequestPlugin_get_serialized_key_max_size_for_keyhash(
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

            struct RTIXCdrInterpreterPrograms *DiffpTuningRequestPlugin_get_programs()
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                DiffpTuningRequest, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *DiffpTuningRequestPlugin_new(void) 
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
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                DiffpTuningRequestPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                DiffpTuningRequestPlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                DiffpTuningRequest_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                DiffpTuningRequestPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                DiffpTuningRequestPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                DiffpTuningRequestPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                DiffpTuningRequestPlugin_return_buffer;
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

                plugin->endpointTypeName = DiffpTuningRequestTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            DiffpTuningRequestPlugin_delete(struct PRESTypePlugin *plugin)
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
                sample=NULL;
            }

            void 
            DiffpTuningStatePluginSupport_destroy_data_ex(
                DiffpTuningState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::DiffpTuningState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
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
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->diffPFilter, "diffPFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPD, "diffPD", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPF, "diffPF", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPEps, "diffPEps", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->diffPEpsManual, "diffPEpsManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPKcMin, "diffPKcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPKcMax, "diffPKcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPTiMin, "diffPTiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPTiMax, "diffPTiMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPInitK, "diffPInitK", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPInitTau, "diffPInitTau", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPInitPreFilter, "diffPInitPreFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPR1, "diffPR1", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->diffPR2, "diffPR2", indent_level + 1);    

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
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
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
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
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

            struct RTIXCdrInterpreterPrograms *DiffpTuningStatePlugin_get_programs()
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
            *  Type WobTuningRequest
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            WobTuningRequest*
            WobTuningRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                WobTuningRequest *sample = NULL;

                sample = new (std::nothrow) WobTuningRequest ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            WobTuningRequest *
            WobTuningRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                WobTuningRequest *sample = NULL;

                sample = new (std::nothrow) WobTuningRequest ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            WobTuningRequest *
            WobTuningRequestPluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            WobTuningRequestPluginSupport_destroy_data_w_params(
                WobTuningRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            WobTuningRequestPluginSupport_destroy_data_ex(
                WobTuningRequest *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            WobTuningRequestPluginSupport_destroy_data(
                WobTuningRequest *sample) {

                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            WobTuningRequestPluginSupport_copy_data(
                WobTuningRequest *dst,
                const WobTuningRequest *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_copy(dst,(const WobTuningRequest*) src);
            }

            void 
            WobTuningRequestPluginSupport_print_data(
                const WobTuningRequest *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->wobFilter, "wobFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobD, "wobD", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobF, "wobF", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobEps, "wobEps", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->wobEpsManual, "wobEpsManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobKcMin, "wobKcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobKcMax, "wobKcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobTiMin, "wobTiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobTiMax, "wobTiMax", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            WobTuningRequestPlugin_on_participant_attached(
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

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    WobTuningRequest_get_typecode(),
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
            WobTuningRequestPlugin_on_participant_detached(
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
            WobTuningRequestPlugin_on_endpoint_attached(
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
                    Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_get_serialized_sample_max_size, epd,
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
            WobTuningRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            WobTuningRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningRequest *sample,
                void *handle)
            {
                WobTuningRequest_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            WobTuningRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningRequest *dst,
                const WobTuningRequest *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            WobTuningRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            WobTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const WobTuningRequest *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                WobTuningRequest_get_typecode();
                pd.programs = WobTuningRequestPlugin_get_programs();
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
                WobTuningRequestPlugin_get_serialized_sample_max_size(
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
            WobTuningRequestPlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const WobTuningRequest *sample)
            {
                return WobTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            WobTuningRequestPlugin_deserialize_from_cdr_buffer(
                WobTuningRequest *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                WobTuningRequest_get_typecode();
                pd.programs = WobTuningRequestPlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                WobTuningRequest_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            WobTuningRequestPlugin_data_to_string(
                const WobTuningRequest *sample,
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
                if (!WobTuningRequestPlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!WobTuningRequestPlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    WobTuningRequest_get_typecode(), 
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
            WobTuningRequestPlugin_get_serialized_sample_max_size(
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
            WobTuningRequestPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool WobTuningRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningRequest **sample, 
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
            WobTuningRequestPlugin_get_serialized_key_max_size(
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
            WobTuningRequestPlugin_get_serialized_key_max_size_for_keyhash(
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

            struct RTIXCdrInterpreterPrograms *WobTuningRequestPlugin_get_programs()
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                WobTuningRequest, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *WobTuningRequestPlugin_new(void) 
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
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                WobTuningRequestPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                WobTuningRequestPlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                WobTuningRequest_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                WobTuningRequestPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                WobTuningRequestPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::WobTuningRequest_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                WobTuningRequestPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                WobTuningRequestPlugin_return_buffer;
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

                plugin->endpointTypeName = WobTuningRequestTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            WobTuningRequestPlugin_delete(struct PRESTypePlugin *plugin)
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
                sample=NULL;
            }

            void 
            WobTuningStatePluginSupport_destroy_data_ex(
                WobTuningState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::WobTuningState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
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
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->wobFilter, "wobFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobD, "wobD", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobF, "wobF", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobEps, "wobEps", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->wobEpsManual, "wobEpsManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobKcMin, "wobKcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobKcMax, "wobKcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobTiMin, "wobTiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobTiMax, "wobTiMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobInitK, "wobInitK", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobInitTau, "wobInitTau", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobInitPreFilter, "wobInitPreFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobR1, "wobR1", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->wobR2, "wobR2", indent_level + 1);    

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
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
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
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
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

            struct RTIXCdrInterpreterPrograms *WobTuningStatePlugin_get_programs()
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
            *  Type TorqueTuningRequest
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            TorqueTuningRequest*
            TorqueTuningRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                TorqueTuningRequest *sample = NULL;

                sample = new (std::nothrow) TorqueTuningRequest ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            TorqueTuningRequest *
            TorqueTuningRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                TorqueTuningRequest *sample = NULL;

                sample = new (std::nothrow) TorqueTuningRequest ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            TorqueTuningRequest *
            TorqueTuningRequestPluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            TorqueTuningRequestPluginSupport_destroy_data_w_params(
                TorqueTuningRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            TorqueTuningRequestPluginSupport_destroy_data_ex(
                TorqueTuningRequest *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            TorqueTuningRequestPluginSupport_destroy_data(
                TorqueTuningRequest *sample) {

                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            TorqueTuningRequestPluginSupport_copy_data(
                TorqueTuningRequest *dst,
                const TorqueTuningRequest *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_copy(dst,(const TorqueTuningRequest*) src);
            }

            void 
            TorqueTuningRequestPluginSupport_print_data(
                const TorqueTuningRequest *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->torqueFilter, "torqueFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueD, "torqueD", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueF, "torqueF", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueEps, "torqueEps", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->torqueEpsManual, "torqueEpsManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueKcMin, "torqueKcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueKcMax, "torqueKcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueTiMin, "torqueTiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueTiMax, "torqueTiMax", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            TorqueTuningRequestPlugin_on_participant_attached(
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

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    TorqueTuningRequest_get_typecode(),
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
            TorqueTuningRequestPlugin_on_participant_detached(
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
            TorqueTuningRequestPlugin_on_endpoint_attached(
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
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_get_serialized_sample_max_size, epd,
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
            TorqueTuningRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            TorqueTuningRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningRequest *sample,
                void *handle)
            {
                TorqueTuningRequest_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            TorqueTuningRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningRequest *dst,
                const TorqueTuningRequest *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            TorqueTuningRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            TorqueTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const TorqueTuningRequest *sample,
                DDS_DataRepresentationId_t representation)
            {
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                TorqueTuningRequest_get_typecode();
                pd.programs = TorqueTuningRequestPlugin_get_programs();
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
                TorqueTuningRequestPlugin_get_serialized_sample_max_size(
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
            TorqueTuningRequestPlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const TorqueTuningRequest *sample)
            {
                return TorqueTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            TorqueTuningRequestPlugin_deserialize_from_cdr_buffer(
                TorqueTuningRequest *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                TorqueTuningRequest_get_typecode();
                pd.programs = TorqueTuningRequestPlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                TorqueTuningRequest_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            TorqueTuningRequestPlugin_data_to_string(
                const TorqueTuningRequest *sample,
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
                if (!TorqueTuningRequestPlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!TorqueTuningRequestPlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    TorqueTuningRequest_get_typecode(), 
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
            TorqueTuningRequestPlugin_get_serialized_sample_max_size(
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
            TorqueTuningRequestPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool TorqueTuningRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningRequest **sample, 
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
            TorqueTuningRequestPlugin_get_serialized_key_max_size(
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
            TorqueTuningRequestPlugin_get_serialized_key_max_size_for_keyhash(
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

            struct RTIXCdrInterpreterPrograms *TorqueTuningRequestPlugin_get_programs()
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                TorqueTuningRequest, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *TorqueTuningRequestPlugin_new(void) 
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
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                TorqueTuningRequestPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                TorqueTuningRequestPlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                TorqueTuningRequest_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                TorqueTuningRequestPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                TorqueTuningRequestPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                TorqueTuningRequestPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                TorqueTuningRequestPlugin_return_buffer;
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

                plugin->endpointTypeName = TorqueTuningRequestTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            TorqueTuningRequestPlugin_delete(struct PRESTypePlugin *plugin)
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
                sample=NULL;
            }

            void 
            TorqueTuningStatePluginSupport_destroy_data_ex(
                TorqueTuningState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::TorqueTuningState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
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
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printDouble(
                    &sample->torqueFilter, "torqueFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueD, "torqueD", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueF, "torqueF", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueEps, "torqueEps", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->torqueEpsManual, "torqueEpsManual", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueKcMin, "torqueKcMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueKcMax, "torqueKcMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueTiMin, "torqueTiMin", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueTiMax, "torqueTiMax", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueInitK, "torqueInitK", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueInitTau, "torqueInitTau", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueInitPreFilter, "torqueInitPreFilter", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueR1, "torqueR1", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->torqueR2, "torqueR2", indent_level + 1);    

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
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
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
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
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

            struct RTIXCdrInterpreterPrograms *TorqueTuningStatePlugin_get_programs()
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
