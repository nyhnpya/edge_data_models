
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objective.idl using "rtiddsgen".
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

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "objectivePlugin.h"

namespace process {
    namespace plan {

        /* ----------------------------------------------------------------------------
        *  Type ObjectiveState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        ObjectiveState*
        ObjectiveStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            ObjectiveState *sample = NULL;

            sample = new (std::nothrow) ObjectiveState ;
            if (sample == NULL) {
                return NULL;
            }

            if (!process::plan::ObjectiveState_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        ObjectiveState *
        ObjectiveStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            ObjectiveState *sample = NULL;

            sample = new (std::nothrow) ObjectiveState ;

            if(sample == NULL) {
                return NULL;
            }

            if (!process::plan::ObjectiveState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        ObjectiveState *
        ObjectiveStatePluginSupport_create_data(void)
        {
            return process::plan::ObjectiveStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        ObjectiveStatePluginSupport_destroy_data_w_params(
            ObjectiveState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            process::plan::ObjectiveState_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        ObjectiveStatePluginSupport_destroy_data_ex(
            ObjectiveState *sample,RTIBool deallocate_pointers) {

            process::plan::ObjectiveState_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        ObjectiveStatePluginSupport_destroy_data(
            ObjectiveState *sample) {

            process::plan::ObjectiveStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        ObjectiveStatePluginSupport_copy_data(
            ObjectiveState *dst,
            const ObjectiveState *src)
        {
            return process::plan::ObjectiveState_copy(dst,(const ObjectiveState*) src);
        }

        void 
        ObjectiveStatePluginSupport_print_data(
            const ObjectiveState *sample,
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

            DataTypes::UuidPluginSupport_print_data(
                (const DataTypes::Uuid*) &sample->id, "id", indent_level + 1);

            DataTypes::UuidPluginSupport_print_data(
                (const DataTypes::Uuid*) &sample->parentId, "parentId", indent_level + 1);

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timestamp, "timestamp", indent_level + 1);

            DataTypes::ObjectivePluginSupport_print_data(
                (const DataTypes::Objective*) &sample->objective, "objective", indent_level + 1);

        }
        ObjectiveState *
        ObjectiveStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
            ObjectiveState *key = NULL;

            key = new (std::nothrow) ObjectiveStateKeyHolder ;

            process::plan::ObjectiveState_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        ObjectiveState *
        ObjectiveStatePluginSupport_create_key(void)
        {
            return  process::plan::ObjectiveStatePluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        ObjectiveStatePluginSupport_destroy_key_ex(
            ObjectiveStateKeyHolder *key,RTIBool deallocate_pointers)
        {
            process::plan::ObjectiveState_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;

        }

        void 
        ObjectiveStatePluginSupport_destroy_key(
            ObjectiveStateKeyHolder *key) {

            process::plan::ObjectiveStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        ObjectiveStatePlugin_on_participant_attached(
            void *registration_data,
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration,
            void *container_plugin_context,
            RTICdrTypeCode *type_code)
        {
            if (registration_data) {} /* To avoid warnings */
            if (participant_info) {} /* To avoid warnings */
            if (top_level_registration) {} /* To avoid warnings */
            if (container_plugin_context) {} /* To avoid warnings */
            if (type_code) {} /* To avoid warnings */

            return PRESTypePluginDefaultParticipantData_new(participant_info);

        }

        void 
        ObjectiveStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        ObjectiveStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *containerPluginContext)
        {
            PRESTypePluginEndpointData epd = NULL;

            unsigned int serializedSampleMaxSize;

            unsigned int serializedKeyMaxSize;

            if (top_level_registration) {} /* To avoid warnings */
            if (containerPluginContext) {} /* To avoid warnings */

            epd = PRESTypePluginDefaultEndpointData_new(
                participant_data,
                endpoint_info,
                (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                process::plan::ObjectiveStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                process::plan::ObjectiveStatePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                process::plan::ObjectiveStatePluginSupport_create_key ,            
                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                process::plan::ObjectiveStatePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 
            serializedKeyMaxSize =  process::plan::ObjectiveStatePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,endpoint_info,serializedKeyMaxSize))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = process::plan::ObjectiveStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    process::plan::ObjectiveStatePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    process::plan::ObjectiveStatePlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        ObjectiveStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        ObjectiveStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *sample,
            void *handle)
        {

            ObjectiveState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        ObjectiveStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *dst,
            const ObjectiveState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return process::plan::ObjectiveStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        ObjectiveStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        ObjectiveStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const ObjectiveState *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos)
        {
            char * position = NULL;
            RTIBool retval = RTI_TRUE;

            if (endpoint_data) {} /* To avoid warnings */
            if (endpoint_plugin_qos) {} /* To avoid warnings */

            if(serialize_encapsulation) {
                if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                    return RTI_FALSE;
                }

                position = RTICdrStream_resetAlignment(stream);
            }

            if(serialize_sample) {

                if(!DataTypes::UuidPlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Uuid*) &sample->id,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::UuidPlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Uuid*) &sample->parentId,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::TimePlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Time*) &sample->timestamp,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::ObjectivePlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Objective*) &sample->objective,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        ObjectiveStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            char * position = NULL;

            RTIBool done = RTI_FALSE;

            try {

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */
                if(deserialize_encapsulation) {

                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }
                if(deserialize_sample) {

                    process::plan::ObjectiveState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                    if(!DataTypes::UuidPlugin_deserialize_sample(
                        endpoint_data,
                        &sample->id,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if(!DataTypes::UuidPlugin_deserialize_sample(
                        endpoint_data,
                        &sample->parentId,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if(!DataTypes::TimePlugin_deserialize_sample(
                        endpoint_data,
                        &sample->timestamp,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if(!DataTypes::ObjectivePlugin_deserialize_sample(
                        endpoint_data,
                        &sample->objective,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        RTIBool
        ObjectiveStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ObjectiveState *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            ObjectiveStatePlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                ObjectiveStatePlugin_get_serialized_sample_size(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                    0,
                    sample);

                if (*length == 0) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }    

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, *length);

            result = process::plan::ObjectiveStatePlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        ObjectiveStatePlugin_deserialize_from_cdr_buffer(
            ObjectiveState *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            ObjectiveState_finalize_optional_members(sample, RTI_TRUE);
            return ObjectiveStatePlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        ObjectiveStatePlugin_data_to_string(
            const ObjectiveState *sample,
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

            if (!ObjectiveStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!ObjectiveStatePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                ObjectiveState_get_typecode(), 
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

        RTIBool 
        ObjectiveStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "ObjectiveStatePlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= process::plan::ObjectiveStatePlugin_deserialize_sample( 
                endpoint_data, (sample != NULL)?*sample:NULL,
                stream, deserialize_encapsulation, deserialize_sample, 
                endpoint_plugin_qos);
            if (result) {
                if (stream->_xTypesState.unassignable) {
                    result = RTI_FALSE;
                }
            }
            if (!result && stream->_xTypesState.unassignable ) {

                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                    "ObjectiveState");

            }

            return result;

        }

        RTIBool ObjectiveStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream,   
            RTIBool skip_encapsulation,
            RTIBool skip_sample, 
            void *endpoint_plugin_qos)
        {
            char * position = NULL;

            RTIBool done = RTI_FALSE;

            if (endpoint_data) {} /* To avoid warnings */
            if (endpoint_plugin_qos) {} /* To avoid warnings */

            if(skip_encapsulation) {
                if (!RTICdrStream_skipEncapsulation(stream)) {
                    return RTI_FALSE;
                }

                position = RTICdrStream_resetAlignment(stream);
            }

            if (skip_sample) {

                if (!DataTypes::UuidPlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }
                if (!DataTypes::UuidPlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }
                if (!DataTypes::TimePlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }
                if (!DataTypes::ObjectivePlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }
            }

            done = RTI_TRUE;
          fin:
            if (done != RTI_TRUE && 
            RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                return RTI_FALSE;   
            }
            if(skip_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return RTI_TRUE;
        }

        unsigned int 
        ObjectiveStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

            current_alignment +=DataTypes::UuidPlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            current_alignment +=DataTypes::UuidPlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            current_alignment +=DataTypes::TimePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            current_alignment +=DataTypes::ObjectivePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return  current_alignment - initial_alignment;
        }

        unsigned int 
        ObjectiveStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = ObjectiveStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        ObjectiveStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (endpoint_data) {} /* To avoid warnings */ 

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

            current_alignment +=DataTypes::UuidPlugin_get_serialized_sample_min_size(
                endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            current_alignment +=DataTypes::UuidPlugin_get_serialized_sample_min_size(
                endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            current_alignment +=DataTypes::TimePlugin_get_serialized_sample_min_size(
                endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            current_alignment +=DataTypes::ObjectivePlugin_get_serialized_sample_min_size(
                endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return  current_alignment - initial_alignment;
        }

        /* Returns the size of the sample in its serialized form (in bytes).
        * It can also be an estimation in excess of the real buffer needed 
        * during a call to the serialize() function.
        * The value reported does not have to include the space for the
        * encapsulation flags.
        */
        unsigned int
        ObjectiveStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const ObjectiveState * sample) 
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;
            struct PRESTypePluginDefaultEndpointData epd;   

            if (sample==NULL) {
                return 0;
            }
            if (endpoint_data == NULL) {
                endpoint_data = (PRESTypePluginEndpointData) &epd;
                PRESTypePluginDefaultEndpointData_setBaseAlignment(
                    endpoint_data,
                    current_alignment);        
            }

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                PRESTypePluginDefaultEndpointData_setBaseAlignment(
                    endpoint_data,
                    current_alignment);
            }

            current_alignment += DataTypes::UuidPlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Uuid*) &sample->id);

            current_alignment += DataTypes::UuidPlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Uuid*) &sample->parentId);

            current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Time*) &sample->timestamp);

            current_alignment += DataTypes::ObjectivePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Objective*) &sample->objective);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        ObjectiveStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool 
        ObjectiveStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const ObjectiveState *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos)
        {
            char * position = NULL;

            if(serialize_encapsulation) {
                if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                    return RTI_FALSE;
                }

                position = RTICdrStream_resetAlignment(stream);
            }

            if(serialize_key) {

                if(!DataTypes::UuidPlugin_serialize_key(
                    endpoint_data,
                    (const DataTypes::Uuid*) &sample->id,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return RTI_TRUE;
        }

        RTIBool ObjectiveStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {

                char * position = NULL;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(deserialize_encapsulation) {

                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }
                if (deserialize_key) {

                    if(!DataTypes::UuidPlugin_deserialize_key_sample(
                        endpoint_data,
                        &sample->id,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }
                }

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        RTIBool ObjectiveStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= process::plan::ObjectiveStatePlugin_deserialize_key_sample(
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
        ObjectiveStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

            current_alignment +=DataTypes::UuidPlugin_get_serialized_key_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        unsigned int
        ObjectiveStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = ObjectiveStatePlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        ObjectiveStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos)
        {
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;

            if (endpoint_data) {} /* To avoid warnings */
            if (endpoint_plugin_qos) {} /* To avoid warnings */

            if (stream == NULL) {
                error = RTI_TRUE;
                goto fin;
            }
            if(deserialize_encapsulation) {
                if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                    return RTI_FALSE;
                }
                position = RTICdrStream_resetAlignment(stream);
            }

            if (deserialize_key) {

                if(!DataTypes::UuidPlugin_serialized_sample_to_key(
                    endpoint_data,
                    &sample->id,
                    stream,
                    RTI_FALSE, RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                if (!DataTypes::UuidPlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }

                if (!DataTypes::TimePlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }

                if (!DataTypes::ObjectivePlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }

            }

            done = RTI_TRUE;
          fin:
            if(!error) {
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
            } else {
                return RTI_FALSE;
            }       

            if(deserialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return RTI_TRUE;
        }

        RTIBool 
        ObjectiveStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveStateKeyHolder *dst, 
            const ObjectiveState *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        ObjectiveStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *dst, const
            ObjectiveStateKeyHolder *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   
            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        ObjectiveStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const ObjectiveState *instance)
        {
            struct RTICdrStream * md5Stream = NULL;
            struct RTICdrStreamState cdrState;
            char * buffer = NULL;

            RTICdrStreamState_init(&cdrState);
            md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

            if (md5Stream == NULL) {
                return RTI_FALSE;
            }

            RTICdrStream_resetPosition(md5Stream);
            RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

            if (!process::plan::ObjectiveStatePlugin_serialize_key(
                endpoint_data,
                instance,
                md5Stream, 
                RTI_FALSE, 
                RTI_CDR_ENCAPSULATION_ID_CDR_BE, 
                RTI_TRUE,
                NULL)) 
            {
                int size;

                RTICdrStream_pushState(md5Stream, &cdrState, -1);

                size = (int)process::plan::ObjectiveStatePlugin_get_serialized_sample_size(
                    endpoint_data,
                    RTI_FALSE,
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
                if (!process::plan::ObjectiveStatePlugin_serialize_key(
                    endpoint_data,
                    instance,
                    md5Stream, 
                    RTI_FALSE, 
                    RTI_CDR_ENCAPSULATION_ID_CDR_BE, 
                    RTI_TRUE,
                    NULL)) 
                {
                    RTICdrStream_popState(md5Stream, &cdrState);
                    RTIOsapiHeap_freeBuffer(buffer);
                    return RTI_FALSE;
                }        
            }   

            if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > 
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
        ObjectiveStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;
            ObjectiveState * sample=NULL;

            if (endpoint_plugin_qos) {} /* To avoid warnings */
            if (stream == NULL) {
                error = RTI_TRUE;
                goto fin;
            }

            if(deserialize_encapsulation) {
                if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                    return RTI_FALSE;
                }

                position = RTICdrStream_resetAlignment(stream);
            }

            sample = (ObjectiveState *)
            PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

            if (sample == NULL) {
                return RTI_FALSE;
            }

            if(!DataTypes::UuidPlugin_serialized_sample_to_key(
                endpoint_data,
                &sample->id,
                stream,
                RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
            done = RTI_TRUE;
          fin:
            if(!error) {
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
            } else {
                return RTI_FALSE;
            } 

            if(deserialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            if (!process::plan::ObjectiveStatePlugin_instance_to_keyhash(
                endpoint_data, keyhash, sample)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *ObjectiveStatePlugin_new(void) 
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
            process::plan::ObjectiveStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            process::plan::ObjectiveStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            process::plan::ObjectiveStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            process::plan::ObjectiveStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            process::plan::ObjectiveStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            ObjectiveStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            ObjectiveStatePlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            process::plan::ObjectiveStatePlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            process::plan::ObjectiveStatePlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            process::plan::ObjectiveStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            process::plan::ObjectiveStatePlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            ObjectiveStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            ObjectiveStatePlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            process::plan::ObjectiveStatePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            process::plan::ObjectiveStatePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            process::plan::ObjectiveStatePlugin_serialize_key;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            process::plan::ObjectiveStatePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            process::plan::ObjectiveStatePlugin_deserialize_key_sample;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            process::plan::ObjectiveStatePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            process::plan::ObjectiveStatePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            ObjectiveStatePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            ObjectiveStatePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            process::plan::ObjectiveStatePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            process::plan::ObjectiveStatePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            plugin->typeCode =  (struct RTICdrTypeCode *)process::plan::ObjectiveState_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            ObjectiveStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            ObjectiveStatePlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            process::plan::ObjectiveStatePlugin_get_serialized_sample_size;

            plugin->endpointTypeName = ObjectiveStateTYPENAME;

            return plugin;
        }

        void
        ObjectiveStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace plan  */
} /* namespace process  */
#undef RTI_CDR_CURRENT_SUBMODULE 
