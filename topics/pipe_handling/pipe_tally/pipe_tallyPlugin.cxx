

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pipe_tally.idl using "rtiddsgen".
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

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "pipe_tallyPlugin.h"

namespace nec {
    namespace process {

        /* ----------------------------------------------------------------------------
        *  Type PipeTallyState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        PipeTallyState*
        PipeTallyStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params){
            PipeTallyState *sample = NULL;

            RTIOsapiHeap_allocateStructure(
                &sample, PipeTallyState);

            if(sample != NULL) {
                if (!nec::process::PipeTallyState_initialize_w_params(sample,alloc_params)) {
                    RTIOsapiHeap_freeStructure(sample);
                    return NULL;
                }
            }        
            return sample; 
        } 

        PipeTallyState *
        PipeTallyStatePluginSupport_create_data_ex(RTIBool allocate_pointers){
            PipeTallyState *sample = NULL;

            RTIOsapiHeap_allocateStructure(
                &sample, PipeTallyState);

            if(sample != NULL) {
                if (!nec::process::PipeTallyState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    RTIOsapiHeap_freeStructure(sample);
                    return NULL;
                }
            }
            return sample; 
        }

        PipeTallyState *
        PipeTallyStatePluginSupport_create_data(void)
        {
            return nec::process::PipeTallyStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        PipeTallyStatePluginSupport_destroy_data_w_params(
            PipeTallyState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            nec::process::PipeTallyState_finalize_w_params(sample,dealloc_params);

            RTIOsapiHeap_freeStructure(sample);
        }

        void 
        PipeTallyStatePluginSupport_destroy_data_ex(
            PipeTallyState *sample,RTIBool deallocate_pointers) {

            nec::process::PipeTallyState_finalize_ex(sample,deallocate_pointers);

            RTIOsapiHeap_freeStructure(sample);
        }

        void 
        PipeTallyStatePluginSupport_destroy_data(
            PipeTallyState *sample) {

            nec::process::PipeTallyStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        PipeTallyStatePluginSupport_copy_data(
            PipeTallyState *dst,
            const PipeTallyState *src)
        {
            return nec::process::PipeTallyState_copy(dst,src);
        }

        void 
        PipeTallyStatePluginSupport_print_data(
            const PipeTallyState *sample,
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
                &sample->id, "id", indent_level + 1);

            DataTypes::UuidPluginSupport_print_data(
                &sample->objectiveId, "objectiveId", indent_level + 1);

            DataTypes::TimePluginSupport_print_data(
                &sample->timestamp, "timestamp", indent_level + 1);

            if (sample->serialNumber==NULL) {
                RTICdrType_printString(
                    NULL,"serialNumber", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->serialNumber,"serialNumber", indent_level + 1);    
            }

            RTICdrType_printUnsignedLong(
                &sample->jointNumber, "jointNumber", indent_level + 1);    

            RTICdrType_printUnsignedLong(
                &sample->standNumber, "standNumber", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->weight, "weight", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->outerDiameter, "outerDiameter", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->innerDiameter, "innerDiameter", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->kellyDown, "kellyDown", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->length, "length", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->pipeLength, "pipeLength", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->stringLength, "stringLength", indent_level + 1);    

            if (sample->description==NULL) {
                RTICdrType_printString(
                    NULL,"description", indent_level + 1);
            } else {
                RTICdrType_printString(
                    sample->description,"description", indent_level + 1);    
            }

            DataTypes::PipeTypePluginSupport_print_data(
                &sample->pipeType, "pipeType", indent_level + 1);

        }
        PipeTallyState *
        PipeTallyStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
            PipeTallyState *key = NULL;

            RTIOsapiHeap_allocateStructure(
                &key, PipeTallyStateKeyHolder);

            nec::process::PipeTallyState_initialize_ex(key,allocate_pointers, RTI_TRUE);
            return key;
        }

        PipeTallyState *
        PipeTallyStatePluginSupport_create_key(void)
        {
            return  nec::process::PipeTallyStatePluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        PipeTallyStatePluginSupport_destroy_key_ex(
            PipeTallyStateKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::process::PipeTallyState_finalize_ex(key,deallocate_pointers);

            RTIOsapiHeap_freeStructure(key);
        }

        void 
        PipeTallyStatePluginSupport_destroy_key(
            PipeTallyStateKeyHolder *key) {

            nec::process::PipeTallyStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        PipeTallyStatePlugin_on_participant_attached(
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
        PipeTallyStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        PipeTallyStatePlugin_on_endpoint_attached(
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
                nec::process::PipeTallyStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::process::PipeTallyStatePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::process::PipeTallyStatePluginSupport_create_key ,            
                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::process::PipeTallyStatePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 
            serializedKeyMaxSize =  nec::process::PipeTallyStatePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,endpoint_info,serializedKeyMaxSize))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = nec::process::PipeTallyStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::process::PipeTallyStatePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    nec::process::PipeTallyStatePlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        PipeTallyStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        PipeTallyStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *sample,
            void *handle)
        {

            PipeTallyState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        PipeTallyStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *dst,
            const PipeTallyState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::process::PipeTallyStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        PipeTallyStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        PipeTallyStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const PipeTallyState *sample, 
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
                    &sample->id,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::UuidPlugin_serialize(
                    endpoint_data,
                    &sample->objectiveId,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::TimePlugin_serialize(
                    endpoint_data,
                    &sample->timestamp,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeString(
                    stream, sample->serialNumber, (255) + 1)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeUnsignedLong(
                    stream, &sample->jointNumber)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeUnsignedLong(
                    stream, &sample->standNumber)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->weight)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->outerDiameter)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->innerDiameter)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->kellyDown)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->length)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->pipeLength)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->stringLength)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeString(
                    stream, sample->description, (255) + 1)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::PipeTypePlugin_serialize(
                    endpoint_data,
                    &sample->pipeType,
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
        PipeTallyStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            char * position = NULL;

            RTIBool done = RTI_FALSE;

            if (endpoint_data) {} /* To avoid warnings */
            if (endpoint_plugin_qos) {} /* To avoid warnings */
            if(deserialize_encapsulation) {

                if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                    return RTI_FALSE;
                }

                position = RTICdrStream_resetAlignment(stream);
            }
            if(deserialize_sample) {

                nec::process::PipeTallyState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
                    &sample->objectiveId,
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
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->serialNumber, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeUnsignedLong(
                    stream, &sample->jointNumber)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeUnsignedLong(
                    stream, &sample->standNumber)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeDouble(
                    stream, &sample->weight)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeDouble(
                    stream, &sample->outerDiameter)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeDouble(
                    stream, &sample->innerDiameter)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeDouble(
                    stream, &sample->kellyDown)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeDouble(
                    stream, &sample->length)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeDouble(
                    stream, &sample->pipeLength)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeDouble(
                    stream, &sample->stringLength)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->description, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if(!DataTypes::PipeTypePlugin_deserialize_sample(
                    endpoint_data,
                    &sample->pipeType,
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
        }

        RTIBool
        PipeTallyStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PipeTallyState *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            PipeTallyStatePlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

            if (buffer == NULL) {
                *length = 
                PipeTallyStatePlugin_get_serialized_sample_size(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
                    0,
                    sample);

                if (*length == 0) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }    

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, *length);

            result = nec::process::PipeTallyStatePlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        PipeTallyStatePlugin_deserialize_from_cdr_buffer(
            PipeTallyState *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            return PipeTallyStatePlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        RTIBool 
        PipeTallyStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::process::PipeTallyStatePlugin_deserialize_sample( 
                endpoint_data, (sample != NULL)?*sample:NULL,
                stream, deserialize_encapsulation, deserialize_sample, 
                endpoint_plugin_qos);
            if (result) {
                if (stream->_xTypesState.unassignable) {
                    result = RTI_FALSE;
                }
            }

            return result;

        }

        RTIBool PipeTallyStatePlugin_skip(
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
                if (!RTICdrStream_skipString (stream, (255)+1)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipUnsignedLong (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipUnsignedLong (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipString (stream, (255)+1)) {
                    goto fin; 
                }
                if (!DataTypes::PipeTypePlugin_skip(
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
        PipeTallyStatePlugin_get_serialized_sample_max_size_ex(
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

            current_alignment +=RTICdrType_getStringMaxSizeSerialized(
                current_alignment, (255)+1);

            current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getStringMaxSizeSerialized(
                current_alignment, (255)+1);

            current_alignment +=DataTypes::PipeTypePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return  current_alignment - initial_alignment;
        }

        unsigned int 
        PipeTallyStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PipeTallyStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        PipeTallyStatePlugin_get_serialized_sample_min_size(
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
            current_alignment +=RTICdrType_getStringMaxSizeSerialized(
                current_alignment, 1);
            current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getStringMaxSizeSerialized(
                current_alignment, 1);
            current_alignment +=DataTypes::PipeTypePlugin_get_serialized_sample_min_size(
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
        PipeTallyStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const PipeTallyState * sample) 
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (endpoint_data) {} /* To avoid warnings */ 
            if (sample==NULL) {
                return 0;
            }

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

            current_alignment += DataTypes::UuidPlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, &sample->id);
            current_alignment += DataTypes::UuidPlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, &sample->objectiveId);
            current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, &sample->timestamp);
            current_alignment += RTICdrType_getStringSerializedSize(
                current_alignment, sample->serialNumber);
            current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                current_alignment);
            current_alignment += RTICdrType_getStringSerializedSize(
                current_alignment, sample->description);
            current_alignment += DataTypes::PipeTypePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, &sample->pipeType);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        PipeTallyStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool 
        PipeTallyStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const PipeTallyState *sample, 
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
                    &sample->id,
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

        RTIBool PipeTallyStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
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
        }

        RTIBool PipeTallyStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::process::PipeTallyStatePlugin_deserialize_key_sample(
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
        PipeTallyStatePlugin_get_serialized_key_max_size_ex(
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
        PipeTallyStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PipeTallyStatePlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        PipeTallyStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *sample,
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

                if (!RTICdrStream_skipString (stream, (255)+1)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipUnsignedLong (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipUnsignedLong (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipDouble (stream)) {
                    goto fin; 
                }

                if (!RTICdrStream_skipString (stream, (255)+1)) {
                    goto fin; 
                }

                if (!DataTypes::PipeTypePlugin_skip(
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
                return error;
            }       

            if(deserialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return RTI_TRUE;
        }

        RTIBool 
        PipeTallyStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyStateKeyHolder *dst, 
            const PipeTallyState *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   

            if (!DataTypes::Uuid_copy(
                &dst->id, &src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        PipeTallyStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *dst, const
            PipeTallyStateKeyHolder *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   
            if (!DataTypes::Uuid_copy(
                &dst->id, &src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        PipeTallyStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const PipeTallyState *instance)
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

            if (!nec::process::PipeTallyStatePlugin_serialize_key(
                endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

                int size;

                RTICdrStream_pushState(md5Stream, &cdrState, -1);

                size = (int)nec::process::PipeTallyStatePlugin_get_serialized_sample_size(
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
                if (!nec::process::PipeTallyStatePlugin_serialize_key(
                    endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
                {
                    RTICdrStream_popState(md5Stream, &cdrState);
                    RTIOsapiHeap_freeBuffer(buffer);
                    return RTI_FALSE;
                }        
            }   

            if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
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
        PipeTallyStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;
            PipeTallyState * sample=NULL;

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

            sample = (PipeTallyState *)
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
                return error;
            } 

            if(deserialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            if (!nec::process::PipeTallyStatePlugin_instance_to_keyhash(
                endpoint_data, keyhash, sample)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *PipeTallyStatePlugin_new(void) 
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
            nec::process::PipeTallyStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::process::PipeTallyStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::process::PipeTallyStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::process::PipeTallyStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::process::PipeTallyStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            PipeTallyStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            PipeTallyStatePlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            nec::process::PipeTallyStatePlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            nec::process::PipeTallyStatePlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::process::PipeTallyStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            nec::process::PipeTallyStatePlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            PipeTallyStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            PipeTallyStatePlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::process::PipeTallyStatePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::process::PipeTallyStatePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            nec::process::PipeTallyStatePlugin_serialize_key;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::process::PipeTallyStatePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            nec::process::PipeTallyStatePlugin_deserialize_key_sample;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::process::PipeTallyStatePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::process::PipeTallyStatePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            PipeTallyStatePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            PipeTallyStatePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::process::PipeTallyStatePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::process::PipeTallyStatePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::process::PipeTallyState_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            PipeTallyStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            PipeTallyStatePlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            nec::process::PipeTallyStatePlugin_get_serialized_sample_size;

            plugin->endpointTypeName = PipeTallyStateTYPENAME;

            return plugin;
        }

        void
        PipeTallyStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace process  */
} /* namespace nec  */

