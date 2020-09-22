
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_rotate.idl using "rtiddsgen".
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

#include "plc_rotatePlugin.h"

namespace plc {
    namespace process {

        /* ----------------------------------------------------------------------------
        *  Type PlcRotateRequest
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        PlcRotateRequest*
        PlcRotateRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            PlcRotateRequest *sample = NULL;

            sample = new (std::nothrow) PlcRotateRequest ;
            if (sample == NULL) {
                return NULL;
            }

            if (!plc::process::PlcRotateRequest_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        PlcRotateRequest *
        PlcRotateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            PlcRotateRequest *sample = NULL;

            sample = new (std::nothrow) PlcRotateRequest ;

            if(sample == NULL) {
                return NULL;
            }

            if (!plc::process::PlcRotateRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        PlcRotateRequest *
        PlcRotateRequestPluginSupport_create_data(void)
        {
            return plc::process::PlcRotateRequestPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        PlcRotateRequestPluginSupport_destroy_data_w_params(
            PlcRotateRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            plc::process::PlcRotateRequest_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        PlcRotateRequestPluginSupport_destroy_data_ex(
            PlcRotateRequest *sample,RTIBool deallocate_pointers) {
            plc::process::PlcRotateRequest_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        PlcRotateRequestPluginSupport_destroy_data(
            PlcRotateRequest *sample) {

            plc::process::PlcRotateRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        PlcRotateRequestPluginSupport_copy_data(
            PlcRotateRequest *dst,
            const PlcRotateRequest *src)
        {
            return plc::process::PlcRotateRequest_copy(dst,(const PlcRotateRequest*) src);
        }

        void 
        PlcRotateRequestPluginSupport_print_data(
            const PlcRotateRequest *sample,
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
                &sample->targetRate, "targetRate", indent_level + 1);    

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        PlcRotateRequestPlugin_on_participant_attached(
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
                PlcRotateRequest_get_typecode(),
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
        PlcRotateRequestPlugin_on_participant_detached(
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
        PlcRotateRequestPlugin_on_endpoint_attached(
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
                plc::process::PlcRotateRequestPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                plc::process::PlcRotateRequestPluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = plc::process::PlcRotateRequestPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    plc::process::PlcRotateRequestPlugin_get_serialized_sample_max_size, epd,
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
        PlcRotateRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        PlcRotateRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateRequest *sample,
            void *handle)
        {
            PlcRotateRequest_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        PlcRotateRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateRequest *dst,
            const PlcRotateRequest *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return plc::process::PlcRotateRequestPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        PlcRotateRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        PlcRotateRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcRotateRequest *sample,
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
            PlcRotateRequest_get_typecode();
            pd.programs = PlcRotateRequestPlugin_get_programs();
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
            PlcRotateRequestPlugin_get_serialized_sample_max_size(
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
        PlcRotateRequestPlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const PlcRotateRequest *sample)
        {
            return PlcRotateRequestPlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        PlcRotateRequestPlugin_deserialize_from_cdr_buffer(
            PlcRotateRequest *sample,
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
            PlcRotateRequest_get_typecode();
            pd.programs = PlcRotateRequestPlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            PlcRotateRequest_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        PlcRotateRequestPlugin_data_to_string(
            const PlcRotateRequest *sample,
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
            if (!PlcRotateRequestPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!PlcRotateRequestPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                PlcRotateRequest_get_typecode(), 
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
        PlcRotateRequestPlugin_get_serialized_sample_max_size(
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
        PlcRotateRequestPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool PlcRotateRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateRequest **sample, 
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
        PlcRotateRequestPlugin_get_serialized_key_max_size(
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
        PlcRotateRequestPlugin_get_serialized_key_max_size_for_keyhash(
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

        struct RTIXCdrInterpreterPrograms *PlcRotateRequestPlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            PlcRotateRequest, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *PlcRotateRequestPlugin_new(void) 
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
            plc::process::PlcRotateRequestPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            plc::process::PlcRotateRequestPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            plc::process::PlcRotateRequestPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            plc::process::PlcRotateRequestPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            plc::process::PlcRotateRequestPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            PlcRotateRequestPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            PlcRotateRequestPlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            PlcRotateRequest_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            plc::process::PlcRotateRequestPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            PlcRotateRequestPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            PlcRotateRequestPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            plc::process::PlcRotateRequestPlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)plc::process::PlcRotateRequest_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            PlcRotateRequestPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            PlcRotateRequestPlugin_return_buffer;
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

            plugin->endpointTypeName = PlcRotateRequestTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        PlcRotateRequestPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type PlcRotateState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        PlcRotateState*
        PlcRotateStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            PlcRotateState *sample = NULL;

            sample = new (std::nothrow) PlcRotateState ;
            if (sample == NULL) {
                return NULL;
            }

            if (!plc::process::PlcRotateState_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        PlcRotateState *
        PlcRotateStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            PlcRotateState *sample = NULL;

            sample = new (std::nothrow) PlcRotateState ;

            if(sample == NULL) {
                return NULL;
            }

            if (!plc::process::PlcRotateState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        PlcRotateState *
        PlcRotateStatePluginSupport_create_data(void)
        {
            return plc::process::PlcRotateStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        PlcRotateStatePluginSupport_destroy_data_w_params(
            PlcRotateState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            plc::process::PlcRotateState_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        PlcRotateStatePluginSupport_destroy_data_ex(
            PlcRotateState *sample,RTIBool deallocate_pointers) {
            plc::process::PlcRotateState_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        PlcRotateStatePluginSupport_destroy_data(
            PlcRotateState *sample) {

            plc::process::PlcRotateStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        PlcRotateStatePluginSupport_copy_data(
            PlcRotateState *dst,
            const PlcRotateState *src)
        {
            return plc::process::PlcRotateState_copy(dst,(const PlcRotateState*) src);
        }

        void 
        PlcRotateStatePluginSupport_print_data(
            const PlcRotateState *sample,
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

            RTICdrType_printLong(
                &sample->status, "status", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->actualRate, "actualRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minRate, "minRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxRate, "maxRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->targetRate, "targetRate", indent_level + 1);    

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        PlcRotateStatePlugin_on_participant_attached(
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
                PlcRotateState_get_typecode(),
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
        PlcRotateStatePlugin_on_participant_detached(
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
        PlcRotateStatePlugin_on_endpoint_attached(
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
                plc::process::PlcRotateStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                plc::process::PlcRotateStatePluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = plc::process::PlcRotateStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    plc::process::PlcRotateStatePlugin_get_serialized_sample_max_size, epd,
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
        PlcRotateStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        PlcRotateStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateState *sample,
            void *handle)
        {
            PlcRotateState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        PlcRotateStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateState *dst,
            const PlcRotateState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return plc::process::PlcRotateStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        PlcRotateStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        PlcRotateStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcRotateState *sample,
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
            PlcRotateState_get_typecode();
            pd.programs = PlcRotateStatePlugin_get_programs();
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
            PlcRotateStatePlugin_get_serialized_sample_max_size(
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
        PlcRotateStatePlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const PlcRotateState *sample)
        {
            return PlcRotateStatePlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        PlcRotateStatePlugin_deserialize_from_cdr_buffer(
            PlcRotateState *sample,
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
            PlcRotateState_get_typecode();
            pd.programs = PlcRotateStatePlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            PlcRotateState_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        PlcRotateStatePlugin_data_to_string(
            const PlcRotateState *sample,
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
            if (!PlcRotateStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!PlcRotateStatePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                PlcRotateState_get_typecode(), 
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
        PlcRotateStatePlugin_get_serialized_sample_max_size(
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
        PlcRotateStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool PlcRotateStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateState **sample, 
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
        PlcRotateStatePlugin_get_serialized_key_max_size(
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
        PlcRotateStatePlugin_get_serialized_key_max_size_for_keyhash(
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

        struct RTIXCdrInterpreterPrograms *PlcRotateStatePlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            PlcRotateState, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *PlcRotateStatePlugin_new(void) 
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
            plc::process::PlcRotateStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            plc::process::PlcRotateStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            plc::process::PlcRotateStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            plc::process::PlcRotateStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            plc::process::PlcRotateStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            PlcRotateStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            PlcRotateStatePlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            PlcRotateState_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            plc::process::PlcRotateStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            PlcRotateStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            PlcRotateStatePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            plc::process::PlcRotateStatePlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)plc::process::PlcRotateState_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            PlcRotateStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            PlcRotateStatePlugin_return_buffer;
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

            plugin->endpointTypeName = PlcRotateStateTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        PlcRotateStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace process  */
} /* namespace plc  */
#undef RTI_CDR_CURRENT_SUBMODULE 
