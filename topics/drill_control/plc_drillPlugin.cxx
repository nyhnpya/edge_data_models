
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
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

#include "plc_drillPlugin.h"

namespace plc {
    namespace process {

        /* ----------------------------------------------------------------------------
        *  Type DrillRequestTopic
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DrillRequestTopic*
        DrillRequestTopicPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            DrillRequestTopic *sample = NULL;

            sample = new (std::nothrow) DrillRequestTopic ;
            if (sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillRequestTopic_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        DrillRequestTopic *
        DrillRequestTopicPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            DrillRequestTopic *sample = NULL;

            sample = new (std::nothrow) DrillRequestTopic ;

            if(sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillRequestTopic_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        DrillRequestTopic *
        DrillRequestTopicPluginSupport_create_data(void)
        {
            return plc::process::DrillRequestTopicPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        DrillRequestTopicPluginSupport_destroy_data_w_params(
            DrillRequestTopic *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            plc::process::DrillRequestTopic_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillRequestTopicPluginSupport_destroy_data_ex(
            DrillRequestTopic *sample,RTIBool deallocate_pointers) {
            plc::process::DrillRequestTopic_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillRequestTopicPluginSupport_destroy_data(
            DrillRequestTopic *sample) {

            plc::process::DrillRequestTopicPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        DrillRequestTopicPluginSupport_copy_data(
            DrillRequestTopic *dst,
            const DrillRequestTopic *src)
        {
            return plc::process::DrillRequestTopic_copy(dst,(const DrillRequestTopic*) src);
        }

        void 
        DrillRequestTopicPluginSupport_print_data(
            const DrillRequestTopic *sample,
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
                &sample->ropLimit, "ropLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->wobLimit, "wobLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->diffPressureLimit, "diffPressureLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueLimit, "torqueLimit", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->ropMode, "ropMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->wobMode, "wobMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->diffPressureMode, "diffPressureMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->torqueMode, "torqueMode", indent_level + 1);    

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DrillRequestTopicPlugin_on_participant_attached(
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
                DrillRequestTopic_get_typecode(),
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
        DrillRequestTopicPlugin_on_participant_detached(
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
        DrillRequestTopicPlugin_on_endpoint_attached(
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
                plc::process::DrillRequestTopicPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                plc::process::DrillRequestTopicPluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = plc::process::DrillRequestTopicPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    plc::process::DrillRequestTopicPlugin_get_serialized_sample_max_size, epd,
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
        DrillRequestTopicPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DrillRequestTopicPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic *sample,
            void *handle)
        {
            DrillRequestTopic_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DrillRequestTopicPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic *dst,
            const DrillRequestTopic *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return plc::process::DrillRequestTopicPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DrillRequestTopicPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DrillRequestTopicPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const DrillRequestTopic *sample,
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
            DrillRequestTopic_get_typecode();
            pd.programs = DrillRequestTopicPlugin_get_programs();
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
            DrillRequestTopicPlugin_get_serialized_sample_max_size(
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
        DrillRequestTopicPlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const DrillRequestTopic *sample)
        {
            return DrillRequestTopicPlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        DrillRequestTopicPlugin_deserialize_from_cdr_buffer(
            DrillRequestTopic *sample,
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
            DrillRequestTopic_get_typecode();
            pd.programs = DrillRequestTopicPlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            DrillRequestTopic_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        DrillRequestTopicPlugin_data_to_string(
            const DrillRequestTopic *sample,
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
            if (!DrillRequestTopicPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!DrillRequestTopicPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                DrillRequestTopic_get_typecode(), 
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
        DrillRequestTopicPlugin_get_serialized_sample_max_size(
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
        DrillRequestTopicPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DrillRequestTopicPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic **sample, 
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
        DrillRequestTopicPlugin_get_serialized_key_max_size(
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
        DrillRequestTopicPlugin_get_serialized_key_max_size_for_keyhash(
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

        struct RTIXCdrInterpreterPrograms *DrillRequestTopicPlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            DrillRequestTopic, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DrillRequestTopicPlugin_new(void) 
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
            plc::process::DrillRequestTopicPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            plc::process::DrillRequestTopicPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            plc::process::DrillRequestTopicPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            plc::process::DrillRequestTopicPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            plc::process::DrillRequestTopicPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DrillRequestTopicPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DrillRequestTopicPlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            DrillRequestTopic_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            plc::process::DrillRequestTopicPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DrillRequestTopicPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DrillRequestTopicPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            plc::process::DrillRequestTopicPlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)plc::process::DrillRequestTopic_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DrillRequestTopicPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DrillRequestTopicPlugin_return_buffer;
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

            plugin->endpointTypeName = DrillRequestTopicTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DrillRequestTopicPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DrillStateTopic
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DrillStateTopic*
        DrillStateTopicPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            DrillStateTopic *sample = NULL;

            sample = new (std::nothrow) DrillStateTopic ;
            if (sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillStateTopic_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        DrillStateTopic *
        DrillStateTopicPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            DrillStateTopic *sample = NULL;

            sample = new (std::nothrow) DrillStateTopic ;

            if(sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillStateTopic_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        DrillStateTopic *
        DrillStateTopicPluginSupport_create_data(void)
        {
            return plc::process::DrillStateTopicPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        DrillStateTopicPluginSupport_destroy_data_w_params(
            DrillStateTopic *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            plc::process::DrillStateTopic_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillStateTopicPluginSupport_destroy_data_ex(
            DrillStateTopic *sample,RTIBool deallocate_pointers) {
            plc::process::DrillStateTopic_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillStateTopicPluginSupport_destroy_data(
            DrillStateTopic *sample) {

            plc::process::DrillStateTopicPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        DrillStateTopicPluginSupport_copy_data(
            DrillStateTopic *dst,
            const DrillStateTopic *src)
        {
            return plc::process::DrillStateTopic_copy(dst,(const DrillStateTopic*) src);
        }

        void 
        DrillStateTopicPluginSupport_print_data(
            const DrillStateTopic *sample,
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
                &sample->ropActual, "ropActual", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->wobActual, "wobActual", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->diffPressureActual, "diffPressureActual", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueActual, "torqueActual", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->ropMachineLimit, "ropMachineLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->wobMachineLimit, "wobMachineLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->diffPressureMachineLimit, "diffPressureMachineLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueMachineLimit, "torqueMachineLimit", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->ropMode, "ropMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->wobMode, "wobMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->diffPressureMode, "diffPressureMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->torqueMode, "torqueMode", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->ropLimit, "ropLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->wobLimit, "wobLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->diffPressureLimit, "diffPressureLimit", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueLimit, "torqueLimit", indent_level + 1);    

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DrillStateTopicPlugin_on_participant_attached(
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
                DrillStateTopic_get_typecode(),
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
        DrillStateTopicPlugin_on_participant_detached(
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
        DrillStateTopicPlugin_on_endpoint_attached(
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
                plc::process::DrillStateTopicPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                plc::process::DrillStateTopicPluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = plc::process::DrillStateTopicPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    plc::process::DrillStateTopicPlugin_get_serialized_sample_max_size, epd,
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
        DrillStateTopicPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DrillStateTopicPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic *sample,
            void *handle)
        {
            DrillStateTopic_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DrillStateTopicPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic *dst,
            const DrillStateTopic *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return plc::process::DrillStateTopicPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DrillStateTopicPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DrillStateTopicPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const DrillStateTopic *sample,
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
            DrillStateTopic_get_typecode();
            pd.programs = DrillStateTopicPlugin_get_programs();
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
            DrillStateTopicPlugin_get_serialized_sample_max_size(
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
        DrillStateTopicPlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const DrillStateTopic *sample)
        {
            return DrillStateTopicPlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        DrillStateTopicPlugin_deserialize_from_cdr_buffer(
            DrillStateTopic *sample,
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
            DrillStateTopic_get_typecode();
            pd.programs = DrillStateTopicPlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            DrillStateTopic_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        DrillStateTopicPlugin_data_to_string(
            const DrillStateTopic *sample,
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
            if (!DrillStateTopicPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!DrillStateTopicPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                DrillStateTopic_get_typecode(), 
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
        DrillStateTopicPlugin_get_serialized_sample_max_size(
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
        DrillStateTopicPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DrillStateTopicPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic **sample, 
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
        DrillStateTopicPlugin_get_serialized_key_max_size(
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
        DrillStateTopicPlugin_get_serialized_key_max_size_for_keyhash(
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

        struct RTIXCdrInterpreterPrograms *DrillStateTopicPlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            DrillStateTopic, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DrillStateTopicPlugin_new(void) 
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
            plc::process::DrillStateTopicPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            plc::process::DrillStateTopicPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            plc::process::DrillStateTopicPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            plc::process::DrillStateTopicPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            plc::process::DrillStateTopicPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DrillStateTopicPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DrillStateTopicPlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            DrillStateTopic_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            plc::process::DrillStateTopicPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DrillStateTopicPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DrillStateTopicPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            plc::process::DrillStateTopicPlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)plc::process::DrillStateTopic_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DrillStateTopicPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DrillStateTopicPlugin_return_buffer;
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

            plugin->endpointTypeName = DrillStateTopicTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DrillStateTopicPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace process  */
} /* namespace plc  */
#undef RTI_CDR_CURRENT_SUBMODULE 
