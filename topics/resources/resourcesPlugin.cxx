
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from resources.idl using "rtiddsgen".
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

#include "resourcesPlugin.h"

namespace sys {
    namespace process {

        /* ----------------------------------------------------------------------------
        *  Type Resources
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        Resources*
        ResourcesPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            Resources *sample = NULL;

            sample = new (std::nothrow) Resources ;
            if (sample == NULL) {
                return NULL;
            }

            if (!sys::process::Resources_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample;
        } 

        Resources *
        ResourcesPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            Resources *sample = NULL;

            sample = new (std::nothrow) Resources ;

            if(sample == NULL) {
                return NULL;
            }

            if (!sys::process::Resources_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample;
        }

        Resources *
        ResourcesPluginSupport_create_data(void)
        {
            return sys::process::ResourcesPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        ResourcesPluginSupport_destroy_data_w_params(
            Resources *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {
            sys::process::Resources_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        ResourcesPluginSupport_destroy_data_ex(
            Resources *sample,RTIBool deallocate_pointers) {
            sys::process::Resources_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        ResourcesPluginSupport_destroy_data(
            Resources *sample) {

            sys::process::ResourcesPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        ResourcesPluginSupport_copy_data(
            Resources *dst,
            const Resources *src)
        {
            return sys::process::Resources_copy(dst,(const Resources*) src);
        }

        void 
        ResourcesPluginSupport_print_data(
            const Resources *sample,
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

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timestamp, "timestamp", indent_level + 1);

            if (sample->processName==NULL) {
                RTICdrType_printString(
                    NULL,"processName", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->processName,"processName", indent_level + 1);    
            }

            RTICdrType_printLong(
                &sample->pid, "pid", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->upTime, "upTime", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->cpuPercent, "cpuPercent", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minCpuPercent, "minCpuPercent", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxCpuPercent, "maxCpuPercent", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->vmPeak, "vmPeak", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->vmSize, "vmSize", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->vmSwap, "vmSwap", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->vmMaxSwap, "vmMaxSwap", indent_level + 1);    

            RTICdrType_printLong(
                &sample->numThreads, "numThreads", indent_level + 1);    

            RTICdrType_printLong(
                &sample->minNumThreads, "minNumThreads", indent_level + 1);    

            RTICdrType_printLong(
                &sample->maxNumThreads, "maxNumThreads", indent_level + 1);    

            if (sample->osName==NULL) {
                RTICdrType_printString(
                    NULL,"osName", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->osName,"osName", indent_level + 1);    
            }

            if (sample->appVersion==NULL) {
                RTICdrType_printString(
                    NULL,"appVersion", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->appVersion,"appVersion", indent_level + 1);    
            }

        }

        Resources *
        ResourcesPluginSupport_create_key_ex(RTIBool allocate_pointers){
            Resources *key = NULL;

            key = new (std::nothrow) ResourcesKeyHolder ;

            sys::process::Resources_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        Resources *
        ResourcesPluginSupport_create_key(void)
        {
            return  sys::process::ResourcesPluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        ResourcesPluginSupport_destroy_key_ex(
            ResourcesKeyHolder *key,RTIBool deallocate_pointers)
        {
            sys::process::Resources_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;
        }

        void 
        ResourcesPluginSupport_destroy_key(
            ResourcesKeyHolder *key) {

            sys::process::ResourcesPluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        ResourcesPlugin_on_participant_attached(
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
                Resources_get_typecode(),
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
        ResourcesPlugin_on_participant_detached(
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
        ResourcesPlugin_on_endpoint_attached(
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
                sys::process::ResourcesPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                sys::process::ResourcesPluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                sys::process::ResourcesPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                sys::process::ResourcesPluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 

            serializedKeyMaxSize =  sys::process::ResourcesPlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            serializedKeyMaxSizeV2 =  ResourcesPlugin_get_serialized_key_max_size_for_keyhash(
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
                serializedSampleMaxSize = sys::process::ResourcesPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    sys::process::ResourcesPlugin_get_serialized_sample_max_size, epd,
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
        ResourcesPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        ResourcesPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Resources *sample,
            void *handle)
        {
            Resources_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        ResourcesPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Resources *dst,
            const Resources *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return sys::process::ResourcesPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        ResourcesPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        ResourcesPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Resources *sample,
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
            Resources_get_typecode();
            pd.programs = ResourcesPlugin_get_programs();
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
            ResourcesPlugin_get_serialized_sample_max_size(
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
        ResourcesPlugin_serialize_to_cdr_buffer(
            char *buffer,
            unsigned int *length,
            const Resources *sample)
        {
            return ResourcesPlugin_serialize_to_cdr_buffer_ex(
                buffer,
                length,
                sample,
                DDS_AUTO_DATA_REPRESENTATION);
        }

        RTIBool
        ResourcesPlugin_deserialize_from_cdr_buffer(
            Resources *sample,
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
            Resources_get_typecode();
            pd.programs = ResourcesPlugin_get_programs();
            if (pd.programs == NULL) {
                return RTI_FALSE;
            }

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            Resources_finalize_optional_members(sample, RTI_TRUE);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        #ifndef NDDS_STANDALONE_TYPE
        DDS_ReturnCode_t
        ResourcesPlugin_data_to_string(
            const Resources *sample,
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
            if (!ResourcesPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!ResourcesPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }
            data = DDS_DynamicData_new(
                Resources_get_typecode(), 
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
        ResourcesPlugin_get_serialized_sample_max_size(
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
        ResourcesPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool ResourcesPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Resources **sample, 
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
        ResourcesPlugin_get_serialized_key_max_size(
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
        ResourcesPlugin_get_serialized_key_max_size_for_keyhash(
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
        ResourcesPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ResourcesKeyHolder *dst, 
            const Resources *src)
        {
            if (endpoint_data) {} /* To avoid warnings */   

            if (!RTICdrType_copyStringEx (
                &dst->processName, src->processName, 
                (36) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        RTIBool 
        ResourcesPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            Resources *dst, const
            ResourcesKeyHolder *src)
        {
            if (endpoint_data) {} /* To avoid warnings */   
            if (!RTICdrType_copyStringEx (
                &dst->processName, src->processName, 
                (36) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        RTIBool 
        ResourcesPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const Resources *instance,
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
        ResourcesPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            Resources * sample = NULL;
            sample = (Resources *)
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
            if (!sys::process::ResourcesPlugin_instance_to_keyhash(
                endpoint_data, 
                keyhash, 
                sample,
                RTICdrStream_getEncapsulationKind(stream))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        struct RTIXCdrInterpreterPrograms *ResourcesPlugin_get_programs()
        {
            return ::rti::xcdr::get_cdr_serialization_programs<
            Resources, 
            true, true, true>();
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *ResourcesPlugin_new(void) 
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
            sys::process::ResourcesPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            sys::process::ResourcesPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            sys::process::ResourcesPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            sys::process::ResourcesPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            sys::process::ResourcesPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            ResourcesPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            ResourcesPlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            Resources_finalize_optional_members;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            sys::process::ResourcesPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            ResourcesPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            ResourcesPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            sys::process::ResourcesPlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            sys::process::ResourcesPlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            sys::process::ResourcesPlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            sys::process::ResourcesPlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            sys::process::ResourcesPlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            ResourcesPlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            ResourcesPlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            sys::process::ResourcesPlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            sys::process::ResourcesPlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode =  (struct RTICdrTypeCode *)sys::process::Resources_get_typecode();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            ResourcesPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            ResourcesPlugin_return_buffer;
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

            plugin->endpointTypeName = ResourcesTYPENAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        ResourcesPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace process  */
} /* namespace sys  */
#undef RTI_CDR_CURRENT_SUBMODULE 
