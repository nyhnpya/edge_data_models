
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate.idl using "rtiddsgen".
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

#include "circulatePlugin.h"

namespace nec {
    namespace process {

        /* ----------------------------------------------------------------------------
        *  Type CirculateRequest
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        CirculateRequest*
        CirculateRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            CirculateRequest *sample = NULL;

            sample = new (std::nothrow) CirculateRequest ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::process::CirculateRequest_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        CirculateRequest *
        CirculateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            CirculateRequest *sample = NULL;

            sample = new (std::nothrow) CirculateRequest ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::process::CirculateRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        CirculateRequest *
        CirculateRequestPluginSupport_create_data(void)
        {
            return nec::process::CirculateRequestPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        CirculateRequestPluginSupport_destroy_data_w_params(
            CirculateRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            nec::process::CirculateRequest_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        CirculateRequestPluginSupport_destroy_data_ex(
            CirculateRequest *sample,RTIBool deallocate_pointers) {
            nec::process::CirculateRequest_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        CirculateRequestPluginSupport_destroy_data(
            CirculateRequest *sample) {

            nec::process::CirculateRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        CirculateRequestPluginSupport_copy_data(
            CirculateRequest *dst,
            const CirculateRequest *src)
        {
            return nec::process::CirculateRequest_copy(dst,(const CirculateRequest*) src);
        }

        void 
        CirculateRequestPluginSupport_print_data(
            const CirculateRequest *sample,
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

            if (sample->objectiveId==NULL) {
                RTICdrType_printString(
                    NULL,"objectiveId", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->objectiveId,"objectiveId", indent_level + 1);    
            }

            DataTypes::PriorityPluginSupport_print_data(
                (const DataTypes::Priority*) &sample->priority, "priority", indent_level + 1);

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timeNeeded, "timeNeeded", indent_level + 1);

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->estimatedDuration, "estimatedDuration", indent_level + 1);

            RTICdrType_printDouble(
                &sample->targetFlowRate, "targetFlowRate", indent_level + 1);    

        }

        CirculateRequest *
        CirculateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
            CirculateRequest *key = NULL;

            key = new (std::nothrow) CirculateRequestKeyHolder ;

            nec::process::CirculateRequest_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        CirculateRequest *
        CirculateRequestPluginSupport_create_key(void)
        {
            return  nec::process::CirculateRequestPluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        CirculateRequestPluginSupport_destroy_key_ex(
            CirculateRequestKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::process::CirculateRequest_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;
        }

        void 
        CirculateRequestPluginSupport_destroy_key(
            CirculateRequestKeyHolder *key) {

            nec::process::CirculateRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        CirculateRequestPlugin_on_participant_attached(
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
                CirculateRequest_get_typecode(),
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
        CirculateRequestPlugin_on_participant_detached(
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
        CirculateRequestPlugin_on_endpoint_attached(
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
                nec::process::CirculateRequestPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::process::CirculateRequestPluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::process::CirculateRequestPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::process::CirculateRequestPluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 

            serializedKeyMaxSize =  nec::process::CirculateRequestPlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            serializedKeyMaxSizeV2 =  CirculateRequestPlugin_get_serialized_key_max_size_for_keyhash(
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
                serializedSampleMaxSize = nec::process::CirculateRequestPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::process::CirculateRequestPlugin_get_serialized_sample_max_size, epd,
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
        CirculateRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        CirculateRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *sample,
            void *handle)
        {
            CirculateRequest_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        CirculateRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *dst,
            const CirculateRequest *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::process::CirculateRequestPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        CirculateRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        CirculateRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const CirculateRequest *sample,
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
            CirculateRequest_get_typecode();
            pd.programs = CirculateRequestPlugin_get_programs();
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
            CirculateRequestPlugin_get_serialized_sample_max_size(
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
        CirculateRequestPlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const CirculateRequest *sample)
        {
            return CirculateRequestPlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        CirculateRequestPlugin_deserialize_from_cdr_buffer(
            CirculateRequest *sample,
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
            CirculateRequest_get_typecode();
            pd.programs = CirculateRequestPlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            CirculateRequest_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        CirculateRequestPlugin_data_to_string(
            const CirculateRequest *sample,
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
            if (!CirculateRequestPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!CirculateRequestPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                CirculateRequest_get_typecode(), 
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
        CirculateRequestPlugin_get_serialized_sample_max_size(
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
        CirculateRequestPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool CirculateRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest **sample, 
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
        CirculateRequestPlugin_get_serialized_key_max_size(
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
        CirculateRequestPlugin_get_serialized_key_max_size_for_keyhash(
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
        CirculateRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequestKeyHolder *dst, 
            const CirculateRequest *src)
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
        CirculateRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *dst, const
            CirculateRequestKeyHolder *src)
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
        CirculateRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateRequest *instance,
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
        CirculateRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            CirculateRequest * sample = NULL;
            sample = (CirculateRequest *)
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
            if (!nec::process::CirculateRequestPlugin_instance_to_keyhash(
                endpoint_data, 
                keyhash, 
                sample,
                RTICdrStream_getEncapsulationKind(stream))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        struct RTIXCdrInterpreterPrograms *CirculateRequestPlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            CirculateRequest, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *CirculateRequestPlugin_new(void) 
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
            nec::process::CirculateRequestPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::process::CirculateRequestPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::process::CirculateRequestPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::process::CirculateRequestPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::process::CirculateRequestPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            CirculateRequestPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            CirculateRequestPlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            CirculateRequest_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::process::CirculateRequestPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            CirculateRequestPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            CirculateRequestPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::process::CirculateRequestPlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::process::CirculateRequestPlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::process::CirculateRequestPlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::process::CirculateRequestPlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::process::CirculateRequestPlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            CirculateRequestPlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            CirculateRequestPlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::process::CirculateRequestPlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::process::CirculateRequestPlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::process::CirculateRequest_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            CirculateRequestPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            CirculateRequestPlugin_return_buffer;
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

            plugin->endpointTypeName = CirculateRequestTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        CirculateRequestPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type CirculateObjective
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        CirculateObjective*
        CirculateObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            CirculateObjective *sample = NULL;

            sample = new (std::nothrow) CirculateObjective ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::process::CirculateObjective_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        CirculateObjective *
        CirculateObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            CirculateObjective *sample = NULL;

            sample = new (std::nothrow) CirculateObjective ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::process::CirculateObjective_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        CirculateObjective *
        CirculateObjectivePluginSupport_create_data(void)
        {
            return nec::process::CirculateObjectivePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        CirculateObjectivePluginSupport_destroy_data_w_params(
            CirculateObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            nec::process::CirculateObjective_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        CirculateObjectivePluginSupport_destroy_data_ex(
            CirculateObjective *sample,RTIBool deallocate_pointers) {
            nec::process::CirculateObjective_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        CirculateObjectivePluginSupport_destroy_data(
            CirculateObjective *sample) {

            nec::process::CirculateObjectivePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        CirculateObjectivePluginSupport_copy_data(
            CirculateObjective *dst,
            const CirculateObjective *src)
        {
            return nec::process::CirculateObjective_copy(dst,(const CirculateObjective*) src);
        }

        void 
        CirculateObjectivePluginSupport_print_data(
            const CirculateObjective *sample,
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

            if (sample->objectiveId==NULL) {
                RTICdrType_printString(
                    NULL,"objectiveId", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->objectiveId,"objectiveId", indent_level + 1);    
            }

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->estimatedDuration, "estimatedDuration", indent_level + 1);

            RTICdrType_printDouble(
                &sample->targetFlowRate, "targetFlowRate", indent_level + 1);    

        }

        CirculateObjective *
        CirculateObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers){
            CirculateObjective *key = NULL;

            key = new (std::nothrow) CirculateObjectiveKeyHolder ;

            nec::process::CirculateObjective_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        CirculateObjective *
        CirculateObjectivePluginSupport_create_key(void)
        {
            return  nec::process::CirculateObjectivePluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        CirculateObjectivePluginSupport_destroy_key_ex(
            CirculateObjectiveKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::process::CirculateObjective_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;
        }

        void 
        CirculateObjectivePluginSupport_destroy_key(
            CirculateObjectiveKeyHolder *key) {

            nec::process::CirculateObjectivePluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        CirculateObjectivePlugin_on_participant_attached(
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
                CirculateObjective_get_typecode(),
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
        CirculateObjectivePlugin_on_participant_detached(
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
        CirculateObjectivePlugin_on_endpoint_attached(
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
                nec::process::CirculateObjectivePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::process::CirculateObjectivePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::process::CirculateObjectivePluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::process::CirculateObjectivePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 

            serializedKeyMaxSize =  nec::process::CirculateObjectivePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            serializedKeyMaxSizeV2 =  CirculateObjectivePlugin_get_serialized_key_max_size_for_keyhash(
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
                serializedSampleMaxSize = nec::process::CirculateObjectivePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::process::CirculateObjectivePlugin_get_serialized_sample_max_size, epd,
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
        CirculateObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        CirculateObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *sample,
            void *handle)
        {
            CirculateObjective_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        CirculateObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *dst,
            const CirculateObjective *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::process::CirculateObjectivePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        CirculateObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        CirculateObjectivePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const CirculateObjective *sample,
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
            CirculateObjective_get_typecode();
            pd.programs = CirculateObjectivePlugin_get_programs();
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
            CirculateObjectivePlugin_get_serialized_sample_max_size(
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
        CirculateObjectivePlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const CirculateObjective *sample)
        {
            return CirculateObjectivePlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        CirculateObjectivePlugin_deserialize_from_cdr_buffer(
            CirculateObjective *sample,
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
            CirculateObjective_get_typecode();
            pd.programs = CirculateObjectivePlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            CirculateObjective_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        CirculateObjectivePlugin_data_to_string(
            const CirculateObjective *sample,
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
            if (!CirculateObjectivePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!CirculateObjectivePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                CirculateObjective_get_typecode(), 
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
        CirculateObjectivePlugin_get_serialized_sample_max_size(
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
        CirculateObjectivePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool CirculateObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective **sample, 
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
        CirculateObjectivePlugin_get_serialized_key_max_size(
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
        CirculateObjectivePlugin_get_serialized_key_max_size_for_keyhash(
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
        CirculateObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjectiveKeyHolder *dst, 
            const CirculateObjective *src)
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
        CirculateObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *dst, const
            CirculateObjectiveKeyHolder *src)
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
        CirculateObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateObjective *instance,
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
        CirculateObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            CirculateObjective * sample = NULL;
            sample = (CirculateObjective *)
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
            if (!nec::process::CirculateObjectivePlugin_instance_to_keyhash(
                endpoint_data, 
                keyhash, 
                sample,
                RTICdrStream_getEncapsulationKind(stream))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        struct RTIXCdrInterpreterPrograms *CirculateObjectivePlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            CirculateObjective, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *CirculateObjectivePlugin_new(void) 
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
            nec::process::CirculateObjectivePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::process::CirculateObjectivePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::process::CirculateObjectivePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::process::CirculateObjectivePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::process::CirculateObjectivePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            CirculateObjectivePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            CirculateObjectivePlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            CirculateObjective_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::process::CirculateObjectivePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            CirculateObjectivePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            CirculateObjectivePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::process::CirculateObjectivePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::process::CirculateObjectivePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::process::CirculateObjectivePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::process::CirculateObjectivePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::process::CirculateObjectivePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            CirculateObjectivePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            CirculateObjectivePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::process::CirculateObjectivePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::process::CirculateObjectivePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::process::CirculateObjective_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            CirculateObjectivePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            CirculateObjectivePlugin_return_buffer;
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

            plugin->endpointTypeName = CirculateObjectiveTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        CirculateObjectivePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type CirculateState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        CirculateState*
        CirculateStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            CirculateState *sample = NULL;

            sample = new (std::nothrow) CirculateState ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::process::CirculateState_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        CirculateState *
        CirculateStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            CirculateState *sample = NULL;

            sample = new (std::nothrow) CirculateState ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::process::CirculateState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        CirculateState *
        CirculateStatePluginSupport_create_data(void)
        {
            return nec::process::CirculateStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        CirculateStatePluginSupport_destroy_data_w_params(
            CirculateState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            nec::process::CirculateState_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        CirculateStatePluginSupport_destroy_data_ex(
            CirculateState *sample,RTIBool deallocate_pointers) {
            nec::process::CirculateState_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        CirculateStatePluginSupport_destroy_data(
            CirculateState *sample) {

            nec::process::CirculateStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        CirculateStatePluginSupport_copy_data(
            CirculateState *dst,
            const CirculateState *src)
        {
            return nec::process::CirculateState_copy(dst,(const CirculateState*) src);
        }

        void 
        CirculateStatePluginSupport_print_data(
            const CirculateState *sample,
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

            if (sample->objectiveId==NULL) {
                RTICdrType_printString(
                    NULL,"objectiveId", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->objectiveId,"objectiveId", indent_level + 1);    
            }

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timestamp, "timestamp", indent_level + 1);

            DataTypes::StatusPluginSupport_print_data(
                (const DataTypes::Status*) &sample->status, "status", indent_level + 1);

            RTICdrType_printDouble(
                &sample->actualFlowRate, "actualFlowRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->actualStandpipePressure, "actualStandpipePressure", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minFlowRate, "minFlowRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxFlowRate, "maxFlowRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minStandpipePressure, "minStandpipePressure", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxStandpipePressure, "maxStandpipePressure", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->targetFlowRate, "targetFlowRate", indent_level + 1);    

        }

        CirculateState *
        CirculateStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
            CirculateState *key = NULL;

            key = new (std::nothrow) CirculateStateKeyHolder ;

            nec::process::CirculateState_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        CirculateState *
        CirculateStatePluginSupport_create_key(void)
        {
            return  nec::process::CirculateStatePluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        CirculateStatePluginSupport_destroy_key_ex(
            CirculateStateKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::process::CirculateState_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;
        }

        void 
        CirculateStatePluginSupport_destroy_key(
            CirculateStateKeyHolder *key) {

            nec::process::CirculateStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        CirculateStatePlugin_on_participant_attached(
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
                CirculateState_get_typecode(),
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
        CirculateStatePlugin_on_participant_detached(
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
        CirculateStatePlugin_on_endpoint_attached(
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
                nec::process::CirculateStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::process::CirculateStatePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::process::CirculateStatePluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::process::CirculateStatePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 

            serializedKeyMaxSize =  nec::process::CirculateStatePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            serializedKeyMaxSizeV2 =  CirculateStatePlugin_get_serialized_key_max_size_for_keyhash(
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
                serializedSampleMaxSize = nec::process::CirculateStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::process::CirculateStatePlugin_get_serialized_sample_max_size, epd,
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
        CirculateStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        CirculateStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *sample,
            void *handle)
        {
            CirculateState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        CirculateStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *dst,
            const CirculateState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::process::CirculateStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        CirculateStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        CirculateStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const CirculateState *sample,
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
            CirculateState_get_typecode();
            pd.programs = CirculateStatePlugin_get_programs();
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
            CirculateStatePlugin_get_serialized_sample_max_size(
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
        CirculateStatePlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const CirculateState *sample)
        {
            return CirculateStatePlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        CirculateStatePlugin_deserialize_from_cdr_buffer(
            CirculateState *sample,
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
            CirculateState_get_typecode();
            pd.programs = CirculateStatePlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            CirculateState_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        CirculateStatePlugin_data_to_string(
            const CirculateState *sample,
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
            if (!CirculateStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!CirculateStatePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                CirculateState_get_typecode(), 
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
        CirculateStatePlugin_get_serialized_sample_max_size(
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
        CirculateStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool CirculateStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState **sample, 
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
        CirculateStatePlugin_get_serialized_key_max_size(
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
        CirculateStatePlugin_get_serialized_key_max_size_for_keyhash(
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
        CirculateStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateStateKeyHolder *dst, 
            const CirculateState *src)
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
        CirculateStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *dst, const
            CirculateStateKeyHolder *src)
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
        CirculateStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateState *instance,
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
        CirculateStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            CirculateState * sample = NULL;
            sample = (CirculateState *)
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
            if (!nec::process::CirculateStatePlugin_instance_to_keyhash(
                endpoint_data, 
                keyhash, 
                sample,
                RTICdrStream_getEncapsulationKind(stream))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        struct RTIXCdrInterpreterPrograms *CirculateStatePlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            CirculateState, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *CirculateStatePlugin_new(void) 
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
            nec::process::CirculateStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::process::CirculateStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::process::CirculateStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::process::CirculateStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::process::CirculateStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            CirculateStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            CirculateStatePlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            CirculateState_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::process::CirculateStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            CirculateStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            CirculateStatePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::process::CirculateStatePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::process::CirculateStatePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::process::CirculateStatePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::process::CirculateStatePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::process::CirculateStatePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            CirculateStatePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            CirculateStatePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::process::CirculateStatePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::process::CirculateStatePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::process::CirculateState_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            CirculateStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            CirculateStatePlugin_return_buffer;
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

            plugin->endpointTypeName = CirculateStateTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        CirculateStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace process  */
} /* namespace nec  */
#undef RTI_CDR_CURRENT_SUBMODULE 
