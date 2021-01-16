
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
                sample=NULL;
            }

            void 
            ModelStatePluginSupport_destroy_data_ex(
                ModelState *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::ModelState_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
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
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePluginDefaultParticipantData pd;
                struct PRESTypePlugin plugin;

                epd.programContext = defaultProgramConext;  
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

            struct RTIXCdrInterpreterPrograms *ModelStatePlugin_get_programs()
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
            *  Type AutoTunerTuningConfiguration
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            AutoTunerTuningConfiguration*
            AutoTunerTuningConfigurationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                AutoTunerTuningConfiguration *sample = NULL;

                sample = new (std::nothrow) AutoTunerTuningConfiguration ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample;
            } 

            AutoTunerTuningConfiguration *
            AutoTunerTuningConfigurationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                AutoTunerTuningConfiguration *sample = NULL;

                sample = new (std::nothrow) AutoTunerTuningConfiguration ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample;
            }

            AutoTunerTuningConfiguration *
            AutoTunerTuningConfigurationPluginSupport_create_data(void)
            {
                return Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            AutoTunerTuningConfigurationPluginSupport_destroy_data_w_params(
                AutoTunerTuningConfiguration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            AutoTunerTuningConfigurationPluginSupport_destroy_data_ex(
                AutoTunerTuningConfiguration *sample,RTIBool deallocate_pointers) {
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            AutoTunerTuningConfigurationPluginSupport_destroy_data(
                AutoTunerTuningConfiguration *sample) {

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            AutoTunerTuningConfigurationPluginSupport_copy_data(
                AutoTunerTuningConfiguration *dst,
                const AutoTunerTuningConfiguration *src)
            {
                return Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_copy(dst,(const AutoTunerTuningConfiguration*) src);
            }

            void 
            AutoTunerTuningConfigurationPluginSupport_print_data(
                const AutoTunerTuningConfiguration *sample,
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

                if (sample->id==NULL) {
                    RTICdrType_printString(
                        NULL,"id", indent_level + 1);
                } else {
                    RTICdrType_printString(
                        sample->id,"id", indent_level + 1);    
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

            AutoTunerTuningConfiguration *
            AutoTunerTuningConfigurationPluginSupport_create_key_ex(RTIBool allocate_pointers){
                AutoTunerTuningConfiguration *key = NULL;

                key = new (std::nothrow) AutoTunerTuningConfigurationKeyHolder ;

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_initialize_ex(key,allocate_pointers, RTI_TRUE);

                return key;
            }

            AutoTunerTuningConfiguration *
            AutoTunerTuningConfigurationPluginSupport_create_key(void)
            {
                return  Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_create_key_ex(RTI_TRUE);
            }

            void 
            AutoTunerTuningConfigurationPluginSupport_destroy_key_ex(
                AutoTunerTuningConfigurationKeyHolder *key,RTIBool deallocate_pointers)
            {
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_finalize_ex(key,deallocate_pointers);

                delete  key;
                key=NULL;
            }

            void 
            AutoTunerTuningConfigurationPluginSupport_destroy_key(
                AutoTunerTuningConfigurationKeyHolder *key) {

                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_destroy_key_ex(key,RTI_TRUE);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            AutoTunerTuningConfigurationPlugin_on_participant_attached(
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
                    AutoTunerTuningConfiguration_get_typecode(),
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
            AutoTunerTuningConfigurationPlugin_on_participant_detached(
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
            AutoTunerTuningConfigurationPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                unsigned int serializedKeyMaxSize = 0;
                unsigned int serializedKeyMaxSizeV2 = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 =  AutoTunerTuningConfigurationPlugin_get_serialized_key_max_size_for_keyhash(
                    epd,
                    RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                    0);

                if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                    epd,
                    endpoint_info,
                    serializedKeyMaxSize,
                    serializedKeyMaxSizeV2))  
                {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_get_serialized_sample_max_size, epd,
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
            AutoTunerTuningConfigurationPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            AutoTunerTuningConfigurationPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration *sample,
                void *handle)
            {
                AutoTunerTuningConfiguration_finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            AutoTunerTuningConfigurationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration *dst,
                const AutoTunerTuningConfiguration *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            AutoTunerTuningConfigurationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            AutoTunerTuningConfigurationPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const AutoTunerTuningConfiguration *sample,
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
                AutoTunerTuningConfiguration_get_typecode();
                pd.programs = AutoTunerTuningConfigurationPlugin_get_programs();
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
                AutoTunerTuningConfigurationPlugin_get_serialized_sample_max_size(
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
            AutoTunerTuningConfigurationPlugin_serialize_to_cdr_buffer(
                char *buffer,
                unsigned int *length,
                const AutoTunerTuningConfiguration *sample)
            {
                return AutoTunerTuningConfigurationPlugin_serialize_to_cdr_buffer_ex(
                    buffer,
                    length,
                    sample,
                    DDS_AUTO_DATA_REPRESENTATION);
            }

            RTIBool
            AutoTunerTuningConfigurationPlugin_deserialize_from_cdr_buffer(
                AutoTunerTuningConfiguration *sample,
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
                AutoTunerTuningConfiguration_get_typecode();
                pd.programs = AutoTunerTuningConfigurationPlugin_get_programs();
                if (pd.programs == NULL) {
                    return RTI_FALSE;
                }

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                AutoTunerTuningConfiguration_finalize_optional_members(sample, RTI_TRUE);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            #ifndef NDDS_STANDALONE_TYPE
            DDS_ReturnCode_t
            AutoTunerTuningConfigurationPlugin_data_to_string(
                const AutoTunerTuningConfiguration *sample,
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
                if (!AutoTunerTuningConfigurationPlugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!AutoTunerTuningConfigurationPlugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }
                data = DDS_DynamicData_new(
                    AutoTunerTuningConfiguration_get_typecode(), 
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
            AutoTunerTuningConfigurationPlugin_get_serialized_sample_max_size(
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
            AutoTunerTuningConfigurationPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool AutoTunerTuningConfigurationPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration **sample, 
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
            AutoTunerTuningConfigurationPlugin_get_serialized_key_max_size(
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
            AutoTunerTuningConfigurationPlugin_get_serialized_key_max_size_for_keyhash(
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

            RTIBool 
            AutoTunerTuningConfigurationPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfigurationKeyHolder *dst, 
                const AutoTunerTuningConfiguration *src)
            {
                if (endpoint_data) {} /* To avoid warnings */   

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            RTIBool 
            AutoTunerTuningConfigurationPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration *dst, const
                AutoTunerTuningConfigurationKeyHolder *src)
            {
                if (endpoint_data) {} /* To avoid warnings */   
                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            RTIBool 
            AutoTunerTuningConfigurationPlugin_instance_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                DDS_KeyHash_t *keyhash,
                const AutoTunerTuningConfiguration *instance,
                RTIEncapsulationId encapsulationId)
            {
                struct RTICdrStream * md5Stream = NULL;
                struct RTICdrStreamState cdrState;
                char * buffer = NULL;
                RTIXCdrBoolean iCdrv2;

                iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
                RTICdrStreamState_init(&cdrState);
                md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

                if (md5Stream == NULL) {
                    return RTI_FALSE;
                }

                RTICdrStream_resetPosition(md5Stream);
                RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

                if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                    endpoint_data,
                    instance,
                    md5Stream,
                    iCdrv2?
                    RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                    RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                    NULL)) 
                {
                    int size;

                    RTICdrStream_pushState(md5Stream, &cdrState, -1);

                    size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
                        endpoint_data,
                        RTI_FALSE,
                        iCdrv2?
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                        0,
                        instance);

                    if (size <= RTICdrStream_getBufferLength(md5Stream)) {
                        RTICdrStream_popState(md5Stream, &cdrState);        
                        return RTI_FALSE;
                    }   

                    RTIOsapiHeap_allocateBuffer(&buffer,size,0);

                    if (buffer == NULL) {
                        RTICdrStream_popState(md5Stream, &cdrState);
                        return RTI_FALSE;
                    }

                    RTICdrStream_set(md5Stream, buffer, size);
                    RTIOsapiMemory_zero(
                        RTICdrStream_getBuffer(md5Stream),
                        RTICdrStream_getBufferLength(md5Stream));
                    RTICdrStream_resetPosition(md5Stream);
                    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
                    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                        endpoint_data,
                        instance,
                        md5Stream, 
                        iCdrv2?
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                        NULL)) 
                    {
                        RTICdrStream_popState(md5Stream, &cdrState);
                        RTIOsapiHeap_freeBuffer(buffer);
                        return RTI_FALSE;
                    }        
                }   

                if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
                (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
                PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
                    RTICdrStream_computeMD5(md5Stream, keyhash->value);
                } else {
                    RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
                    RTIOsapiMemory_copy(
                        keyhash->value, 
                        RTICdrStream_getBuffer(md5Stream), 
                        RTICdrStream_getCurrentPositionOffset(md5Stream));
                }

                keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

                if (buffer != NULL) {
                    RTICdrStream_popState(md5Stream, &cdrState);
                    RTIOsapiHeap_freeBuffer(buffer);
                }

                return RTI_TRUE;
            }

            RTIBool 
            AutoTunerTuningConfigurationPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos) 
            {   
                AutoTunerTuningConfiguration * sample = NULL;
                sample = (AutoTunerTuningConfiguration *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
                if (sample == NULL) {
                    return RTI_FALSE;
                }

                if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                    endpoint_data,
                    sample,
                    stream, 
                    deserialize_encapsulation, 
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                if (!Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_instance_to_keyhash(
                    endpoint_data, 
                    keyhash, 
                    sample,
                    RTICdrStream_getEncapsulationKind(stream))) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            struct RTIXCdrInterpreterPrograms *AutoTunerTuningConfigurationPlugin_get_programs()
            {
                return ::rti::xcdr::get_cdr_serialization_programs<
                AutoTunerTuningConfiguration, 
                true, true, true>();
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *AutoTunerTuningConfigurationPlugin_new(void) 
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
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                AutoTunerTuningConfigurationPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                AutoTunerTuningConfigurationPlugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                AutoTunerTuningConfiguration_finalize_optional_members;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                AutoTunerTuningConfigurationPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                AutoTunerTuningConfigurationPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_instance_to_keyhash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                AutoTunerTuningConfigurationPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                AutoTunerTuningConfigurationPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfigurationPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration_get_typecode();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                AutoTunerTuningConfigurationPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                AutoTunerTuningConfigurationPlugin_return_buffer;
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

                plugin->endpointTypeName = AutoTunerTuningConfigurationTYPENAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            AutoTunerTuningConfigurationPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace AutoTunerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */
#undef RTI_CDR_CURRENT_SUBMODULE 
