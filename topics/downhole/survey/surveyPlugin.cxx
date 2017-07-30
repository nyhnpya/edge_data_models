

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from survey.idl using "rtiddsgen".
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

#include "surveyPlugin.h"

namespace DownholeFunctions {

    /* ----------------------------------------------------------------------------
    *  Type SurveyRequest
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    SurveyRequest*
    SurveyRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        SurveyRequest *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, SurveyRequest);

        if(sample != NULL) {
            if (!DownholeFunctions::SurveyRequest_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    SurveyRequest *
    SurveyRequestPluginSupport_create_data_ex(RTIBool allocate_pointers){
        SurveyRequest *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, SurveyRequest);

        if(sample != NULL) {
            if (!DownholeFunctions::SurveyRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    SurveyRequest *
    SurveyRequestPluginSupport_create_data(void)
    {
        return DownholeFunctions::SurveyRequestPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    SurveyRequestPluginSupport_destroy_data_w_params(
        SurveyRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        DownholeFunctions::SurveyRequest_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    SurveyRequestPluginSupport_destroy_data_ex(
        SurveyRequest *sample,RTIBool deallocate_pointers) {

        DownholeFunctions::SurveyRequest_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    SurveyRequestPluginSupport_destroy_data(
        SurveyRequest *sample) {

        DownholeFunctions::SurveyRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    SurveyRequestPluginSupport_copy_data(
        SurveyRequest *dst,
        const SurveyRequest *src)
    {
        return DownholeFunctions::SurveyRequest_copy(dst,src);
    }

    void 
    SurveyRequestPluginSupport_print_data(
        const SurveyRequest *sample,
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

        DataTypes::PriorityPluginSupport_print_data(
            &sample->priority, "priority", indent_level + 1);

        DataTypes::TimePluginSupport_print_data(
            &sample->timeNeeded, "timeNeeded", indent_level + 1);

        DataTypes::TimePluginSupport_print_data(
            &sample->estimatedDuration, "estimatedDuration", indent_level + 1);

        DataTypes::SurveyQualityPluginSupport_print_data(
            &sample->surveyQuality, "surveyQuality", indent_level + 1);

    }
    SurveyRequest *
    SurveyRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
        SurveyRequest *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, SurveyRequestKeyHolder);

        DownholeFunctions::SurveyRequest_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    SurveyRequest *
    SurveyRequestPluginSupport_create_key(void)
    {
        return  DownholeFunctions::SurveyRequestPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    SurveyRequestPluginSupport_destroy_key_ex(
        SurveyRequestKeyHolder *key,RTIBool deallocate_pointers)
    {
        DownholeFunctions::SurveyRequest_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    SurveyRequestPluginSupport_destroy_key(
        SurveyRequestKeyHolder *key) {

        DownholeFunctions::SurveyRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    SurveyRequestPlugin_on_participant_attached(
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
    SurveyRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    SurveyRequestPlugin_on_endpoint_attached(
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
            DownholeFunctions::SurveyRequestPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            DownholeFunctions::SurveyRequestPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            DownholeFunctions::SurveyRequestPluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            DownholeFunctions::SurveyRequestPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  DownholeFunctions::SurveyRequestPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = DownholeFunctions::SurveyRequestPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                DownholeFunctions::SurveyRequestPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                DownholeFunctions::SurveyRequestPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    SurveyRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    SurveyRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest *sample,
        void *handle)
    {

        SurveyRequest_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    SurveyRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest *dst,
        const SurveyRequest *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return DownholeFunctions::SurveyRequestPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    SurveyRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    SurveyRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyRequest *sample, 
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

            if(!DataTypes::PriorityPlugin_serialize(
                endpoint_data,
                &sample->priority,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if(!DataTypes::TimePlugin_serialize(
                endpoint_data,
                &sample->timeNeeded,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if(!DataTypes::TimePlugin_serialize(
                endpoint_data,
                &sample->estimatedDuration,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if(!DataTypes::SurveyQualityPlugin_serialize(
                endpoint_data,
                &sample->surveyQuality,
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
    SurveyRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest *sample,
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

            DownholeFunctions::SurveyRequest_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
            if(!DataTypes::PriorityPlugin_deserialize_sample(
                endpoint_data,
                &sample->priority,
                stream,
                RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if(!DataTypes::TimePlugin_deserialize_sample(
                endpoint_data,
                &sample->timeNeeded,
                stream,
                RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if(!DataTypes::TimePlugin_deserialize_sample(
                endpoint_data,
                &sample->estimatedDuration,
                stream,
                RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if(!DataTypes::SurveyQualityPlugin_deserialize_sample(
                endpoint_data,
                &sample->surveyQuality,
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
    SurveyRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SurveyRequest *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        SurveyRequestPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            SurveyRequestPlugin_get_serialized_sample_size(
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

        result = DownholeFunctions::SurveyRequestPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    SurveyRequestPlugin_deserialize_from_cdr_buffer(
        SurveyRequest *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return SurveyRequestPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    SurveyRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DownholeFunctions::SurveyRequestPlugin_deserialize_sample( 
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

    RTIBool SurveyRequestPlugin_skip(
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
            if (!DataTypes::PriorityPlugin_skip(
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
            if (!DataTypes::TimePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if (!DataTypes::SurveyQualityPlugin_skip(
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
    SurveyRequestPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=DataTypes::PriorityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    SurveyRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SurveyRequestPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    SurveyRequestPlugin_get_serialized_sample_min_size(
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
        current_alignment +=DataTypes::PriorityPlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_min_size(
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
    SurveyRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const SurveyRequest * sample) 
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
        current_alignment += DataTypes::PriorityPlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->priority);
        current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->timeNeeded);
        current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->estimatedDuration);
        current_alignment += DataTypes::SurveyQualityPlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->surveyQuality);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    SurveyRequestPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    SurveyRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyRequest *sample, 
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

    RTIBool SurveyRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest *sample, 
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

    RTIBool SurveyRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DownholeFunctions::SurveyRequestPlugin_deserialize_key_sample(
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
    SurveyRequestPlugin_get_serialized_key_max_size_ex(
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
    SurveyRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SurveyRequestPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    SurveyRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest *sample,
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

            if (!DataTypes::PriorityPlugin_skip(
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

            if (!DataTypes::TimePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }

            if (!DataTypes::SurveyQualityPlugin_skip(
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
    SurveyRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequestKeyHolder *dst, 
        const SurveyRequest *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    SurveyRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        SurveyRequest *dst, const
        SurveyRequestKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    SurveyRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const SurveyRequest *instance)
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

        if (!DownholeFunctions::SurveyRequestPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)DownholeFunctions::SurveyRequestPlugin_get_serialized_sample_size(
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
            if (!DownholeFunctions::SurveyRequestPlugin_serialize_key(
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
    SurveyRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        SurveyRequest * sample=NULL;

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

        sample = (SurveyRequest *)
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

        if (!DownholeFunctions::SurveyRequestPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *SurveyRequestPlugin_new(void) 
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
        DownholeFunctions::SurveyRequestPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        DownholeFunctions::SurveyRequestPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        DownholeFunctions::SurveyRequestPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        DownholeFunctions::SurveyRequestPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        DownholeFunctions::SurveyRequestPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SurveyRequestPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SurveyRequestPlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        DownholeFunctions::SurveyRequestPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        DownholeFunctions::SurveyRequestPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        DownholeFunctions::SurveyRequestPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        DownholeFunctions::SurveyRequestPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SurveyRequestPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SurveyRequestPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        DownholeFunctions::SurveyRequestPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        DownholeFunctions::SurveyRequestPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        DownholeFunctions::SurveyRequestPlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        DownholeFunctions::SurveyRequestPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        DownholeFunctions::SurveyRequestPlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        DownholeFunctions::SurveyRequestPlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        DownholeFunctions::SurveyRequestPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        SurveyRequestPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        SurveyRequestPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        DownholeFunctions::SurveyRequestPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        DownholeFunctions::SurveyRequestPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)DownholeFunctions::SurveyRequest_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SurveyRequestPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SurveyRequestPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        DownholeFunctions::SurveyRequestPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = SurveyRequestTYPENAME;

        return plugin;
    }

    void
    SurveyRequestPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type SurveyObjective
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    SurveyObjective*
    SurveyObjectivePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        SurveyObjective *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, SurveyObjective);

        if(sample != NULL) {
            if (!DownholeFunctions::SurveyObjective_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    SurveyObjective *
    SurveyObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers){
        SurveyObjective *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, SurveyObjective);

        if(sample != NULL) {
            if (!DownholeFunctions::SurveyObjective_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    SurveyObjective *
    SurveyObjectivePluginSupport_create_data(void)
    {
        return DownholeFunctions::SurveyObjectivePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    SurveyObjectivePluginSupport_destroy_data_w_params(
        SurveyObjective *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        DownholeFunctions::SurveyObjective_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    SurveyObjectivePluginSupport_destroy_data_ex(
        SurveyObjective *sample,RTIBool deallocate_pointers) {

        DownholeFunctions::SurveyObjective_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    SurveyObjectivePluginSupport_destroy_data(
        SurveyObjective *sample) {

        DownholeFunctions::SurveyObjectivePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    SurveyObjectivePluginSupport_copy_data(
        SurveyObjective *dst,
        const SurveyObjective *src)
    {
        return DownholeFunctions::SurveyObjective_copy(dst,src);
    }

    void 
    SurveyObjectivePluginSupport_print_data(
        const SurveyObjective *sample,
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
            &sample->estimatedDuration, "estimatedDuration", indent_level + 1);

        DataTypes::SurveyQualityPluginSupport_print_data(
            &sample->requestedSurveyQuality, "requestedSurveyQuality", indent_level + 1);

    }
    SurveyObjective *
    SurveyObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers){
        SurveyObjective *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, SurveyObjectiveKeyHolder);

        DownholeFunctions::SurveyObjective_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    SurveyObjective *
    SurveyObjectivePluginSupport_create_key(void)
    {
        return  DownholeFunctions::SurveyObjectivePluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    SurveyObjectivePluginSupport_destroy_key_ex(
        SurveyObjectiveKeyHolder *key,RTIBool deallocate_pointers)
    {
        DownholeFunctions::SurveyObjective_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    SurveyObjectivePluginSupport_destroy_key(
        SurveyObjectiveKeyHolder *key) {

        DownholeFunctions::SurveyObjectivePluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    SurveyObjectivePlugin_on_participant_attached(
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
    SurveyObjectivePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    SurveyObjectivePlugin_on_endpoint_attached(
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
            DownholeFunctions::SurveyObjectivePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            DownholeFunctions::SurveyObjectivePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            DownholeFunctions::SurveyObjectivePluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            DownholeFunctions::SurveyObjectivePluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  DownholeFunctions::SurveyObjectivePlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = DownholeFunctions::SurveyObjectivePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                DownholeFunctions::SurveyObjectivePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                DownholeFunctions::SurveyObjectivePlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    SurveyObjectivePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    SurveyObjectivePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective *sample,
        void *handle)
    {

        SurveyObjective_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    SurveyObjectivePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective *dst,
        const SurveyObjective *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return DownholeFunctions::SurveyObjectivePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    SurveyObjectivePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    SurveyObjectivePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyObjective *sample, 
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
                &sample->estimatedDuration,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if(!DataTypes::SurveyQualityPlugin_serialize(
                endpoint_data,
                &sample->requestedSurveyQuality,
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
    SurveyObjectivePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective *sample,
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

            DownholeFunctions::SurveyObjective_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
                &sample->estimatedDuration,
                stream,
                RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if(!DataTypes::SurveyQualityPlugin_deserialize_sample(
                endpoint_data,
                &sample->requestedSurveyQuality,
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
    SurveyObjectivePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SurveyObjective *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        SurveyObjectivePlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            SurveyObjectivePlugin_get_serialized_sample_size(
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

        result = DownholeFunctions::SurveyObjectivePlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    SurveyObjectivePlugin_deserialize_from_cdr_buffer(
        SurveyObjective *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return SurveyObjectivePlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    SurveyObjectivePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DownholeFunctions::SurveyObjectivePlugin_deserialize_sample( 
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

    RTIBool SurveyObjectivePlugin_skip(
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
            if (!DataTypes::SurveyQualityPlugin_skip(
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
    SurveyObjectivePlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    SurveyObjectivePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SurveyObjectivePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    SurveyObjectivePlugin_get_serialized_sample_min_size(
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
        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_min_size(
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
    SurveyObjectivePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const SurveyObjective * sample) 
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
            current_alignment, &sample->estimatedDuration);
        current_alignment += DataTypes::SurveyQualityPlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->requestedSurveyQuality);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    SurveyObjectivePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    SurveyObjectivePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyObjective *sample, 
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

    RTIBool SurveyObjectivePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective *sample, 
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

    RTIBool SurveyObjectivePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DownholeFunctions::SurveyObjectivePlugin_deserialize_key_sample(
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
    SurveyObjectivePlugin_get_serialized_key_max_size_ex(
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
    SurveyObjectivePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SurveyObjectivePlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    SurveyObjectivePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective *sample,
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

            if (!DataTypes::SurveyQualityPlugin_skip(
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
    SurveyObjectivePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjectiveKeyHolder *dst, 
        const SurveyObjective *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    SurveyObjectivePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        SurveyObjective *dst, const
        SurveyObjectiveKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    SurveyObjectivePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const SurveyObjective *instance)
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

        if (!DownholeFunctions::SurveyObjectivePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)DownholeFunctions::SurveyObjectivePlugin_get_serialized_sample_size(
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
            if (!DownholeFunctions::SurveyObjectivePlugin_serialize_key(
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
    SurveyObjectivePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        SurveyObjective * sample=NULL;

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

        sample = (SurveyObjective *)
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

        if (!DownholeFunctions::SurveyObjectivePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *SurveyObjectivePlugin_new(void) 
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
        DownholeFunctions::SurveyObjectivePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        DownholeFunctions::SurveyObjectivePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        DownholeFunctions::SurveyObjectivePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        DownholeFunctions::SurveyObjectivePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        DownholeFunctions::SurveyObjectivePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SurveyObjectivePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SurveyObjectivePlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        DownholeFunctions::SurveyObjectivePlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        DownholeFunctions::SurveyObjectivePlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        DownholeFunctions::SurveyObjectivePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        DownholeFunctions::SurveyObjectivePlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SurveyObjectivePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SurveyObjectivePlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        DownholeFunctions::SurveyObjectivePlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        DownholeFunctions::SurveyObjectivePlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        DownholeFunctions::SurveyObjectivePlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        DownholeFunctions::SurveyObjectivePlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        DownholeFunctions::SurveyObjectivePlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        DownholeFunctions::SurveyObjectivePlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        DownholeFunctions::SurveyObjectivePlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        SurveyObjectivePlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        SurveyObjectivePlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        DownholeFunctions::SurveyObjectivePlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        DownholeFunctions::SurveyObjectivePlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)DownholeFunctions::SurveyObjective_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SurveyObjectivePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SurveyObjectivePlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        DownholeFunctions::SurveyObjectivePlugin_get_serialized_sample_size;

        plugin->endpointTypeName = SurveyObjectiveTYPENAME;

        return plugin;
    }

    void
    SurveyObjectivePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type SurveyState
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    SurveyState*
    SurveyStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        SurveyState *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, SurveyState);

        if(sample != NULL) {
            if (!DownholeFunctions::SurveyState_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    SurveyState *
    SurveyStatePluginSupport_create_data_ex(RTIBool allocate_pointers){
        SurveyState *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, SurveyState);

        if(sample != NULL) {
            if (!DownholeFunctions::SurveyState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    SurveyState *
    SurveyStatePluginSupport_create_data(void)
    {
        return DownholeFunctions::SurveyStatePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    SurveyStatePluginSupport_destroy_data_w_params(
        SurveyState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        DownholeFunctions::SurveyState_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    SurveyStatePluginSupport_destroy_data_ex(
        SurveyState *sample,RTIBool deallocate_pointers) {

        DownholeFunctions::SurveyState_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    SurveyStatePluginSupport_destroy_data(
        SurveyState *sample) {

        DownholeFunctions::SurveyStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    SurveyStatePluginSupport_copy_data(
        SurveyState *dst,
        const SurveyState *src)
    {
        return DownholeFunctions::SurveyState_copy(dst,src);
    }

    void 
    SurveyStatePluginSupport_print_data(
        const SurveyState *sample,
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

        DataTypes::StatusPluginSupport_print_data(
            &sample->status, "status", indent_level + 1);

        DataTypes::SurveyQualityPluginSupport_print_data(
            &sample->acutalSurveyQuality, "acutalSurveyQuality", indent_level + 1);

        RTICdrType_printDouble(
            &sample->measuredDepth, "measuredDepth", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->inclination, "inclination", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->azimuth, "azimuth", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->totalVerticalDepth, "totalVerticalDepth", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->dogLeg, "dogLeg", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->verticalSection, "verticalSection", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->eastWest, "eastWest", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->northSouth, "northSouth", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->courseLength, "courseLength", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->ca, "ca", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->cd, "cd", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->cl, "cl", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->buildRate, "buildRate", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->turnRate, "turnRate", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->topOfTarget, "topOfTarget", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->bottomOfTarget, "bottomOfTarget", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->dip, "dip", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->fault, "fault", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->surveyCost, "surveyCost", indent_level + 1);    

        DataTypes::SurveyQualityPluginSupport_print_data(
            &sample->requestedSurveyQuality, "requestedSurveyQuality", indent_level + 1);

    }
    SurveyState *
    SurveyStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
        SurveyState *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, SurveyStateKeyHolder);

        DownholeFunctions::SurveyState_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    SurveyState *
    SurveyStatePluginSupport_create_key(void)
    {
        return  DownholeFunctions::SurveyStatePluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    SurveyStatePluginSupport_destroy_key_ex(
        SurveyStateKeyHolder *key,RTIBool deallocate_pointers)
    {
        DownholeFunctions::SurveyState_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    SurveyStatePluginSupport_destroy_key(
        SurveyStateKeyHolder *key) {

        DownholeFunctions::SurveyStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    SurveyStatePlugin_on_participant_attached(
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
    SurveyStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    SurveyStatePlugin_on_endpoint_attached(
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
            DownholeFunctions::SurveyStatePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            DownholeFunctions::SurveyStatePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            DownholeFunctions::SurveyStatePluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            DownholeFunctions::SurveyStatePluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  DownholeFunctions::SurveyStatePlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = DownholeFunctions::SurveyStatePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                DownholeFunctions::SurveyStatePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                DownholeFunctions::SurveyStatePlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    SurveyStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    SurveyStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState *sample,
        void *handle)
    {

        SurveyState_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    SurveyStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState *dst,
        const SurveyState *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return DownholeFunctions::SurveyStatePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    SurveyStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    SurveyStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyState *sample, 
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

            if(!DataTypes::StatusPlugin_serialize(
                endpoint_data,
                &sample->status,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if(!DataTypes::SurveyQualityPlugin_serialize(
                endpoint_data,
                &sample->acutalSurveyQuality,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->measuredDepth)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->inclination)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->azimuth)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->totalVerticalDepth)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->dogLeg)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->verticalSection)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->eastWest)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->northSouth)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->courseLength)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->ca)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->cd)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->cl)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->buildRate)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->turnRate)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->topOfTarget)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->bottomOfTarget)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->dip)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->fault)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->surveyCost)) {
                return RTI_FALSE;
            }

            if(!DataTypes::SurveyQualityPlugin_serialize(
                endpoint_data,
                &sample->requestedSurveyQuality,
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
    SurveyStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState *sample,
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

            DownholeFunctions::SurveyState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
            if(!DataTypes::StatusPlugin_deserialize_sample(
                endpoint_data,
                &sample->status,
                stream,
                RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if(!DataTypes::SurveyQualityPlugin_deserialize_sample(
                endpoint_data,
                &sample->acutalSurveyQuality,
                stream,
                RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->measuredDepth)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->inclination)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->azimuth)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->totalVerticalDepth)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->dogLeg)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->verticalSection)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->eastWest)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->northSouth)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->courseLength)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->ca)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->cd)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->cl)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->buildRate)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->turnRate)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->topOfTarget)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->bottomOfTarget)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->dip)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->fault)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->surveyCost)) {
                goto fin; 
            }
            if(!DataTypes::SurveyQualityPlugin_deserialize_sample(
                endpoint_data,
                &sample->requestedSurveyQuality,
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
    SurveyStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SurveyState *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        SurveyStatePlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            SurveyStatePlugin_get_serialized_sample_size(
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

        result = DownholeFunctions::SurveyStatePlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    SurveyStatePlugin_deserialize_from_cdr_buffer(
        SurveyState *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return SurveyStatePlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    SurveyStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DownholeFunctions::SurveyStatePlugin_deserialize_sample( 
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

    RTIBool SurveyStatePlugin_skip(
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
            if (!DataTypes::StatusPlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if (!DataTypes::SurveyQualityPlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
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
            if (!DataTypes::SurveyQualityPlugin_skip(
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
    SurveyStatePlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=DataTypes::StatusPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

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

        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    SurveyStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SurveyStatePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    SurveyStatePlugin_get_serialized_sample_min_size(
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
        current_alignment +=DataTypes::StatusPlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
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
        current_alignment +=DataTypes::SurveyQualityPlugin_get_serialized_sample_min_size(
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
    SurveyStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const SurveyState * sample) 
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
        current_alignment += DataTypes::StatusPlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->status);
        current_alignment += DataTypes::SurveyQualityPlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->acutalSurveyQuality);
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
        current_alignment += DataTypes::SurveyQualityPlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->requestedSurveyQuality);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    SurveyStatePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    SurveyStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyState *sample, 
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

    RTIBool SurveyStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState *sample, 
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

    RTIBool SurveyStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DownholeFunctions::SurveyStatePlugin_deserialize_key_sample(
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
    SurveyStatePlugin_get_serialized_key_max_size_ex(
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
    SurveyStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SurveyStatePlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    SurveyStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState *sample,
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

            if (!DataTypes::StatusPlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }

            if (!DataTypes::SurveyQualityPlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
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

            if (!DataTypes::SurveyQualityPlugin_skip(
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
    SurveyStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyStateKeyHolder *dst, 
        const SurveyState *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    SurveyStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        SurveyState *dst, const
        SurveyStateKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    SurveyStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const SurveyState *instance)
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

        if (!DownholeFunctions::SurveyStatePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)DownholeFunctions::SurveyStatePlugin_get_serialized_sample_size(
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
            if (!DownholeFunctions::SurveyStatePlugin_serialize_key(
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
    SurveyStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        SurveyState * sample=NULL;

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

        sample = (SurveyState *)
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

        if (!DownholeFunctions::SurveyStatePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *SurveyStatePlugin_new(void) 
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
        DownholeFunctions::SurveyStatePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        DownholeFunctions::SurveyStatePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        DownholeFunctions::SurveyStatePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        DownholeFunctions::SurveyStatePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        DownholeFunctions::SurveyStatePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SurveyStatePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SurveyStatePlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        DownholeFunctions::SurveyStatePlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        DownholeFunctions::SurveyStatePlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        DownholeFunctions::SurveyStatePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        DownholeFunctions::SurveyStatePlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SurveyStatePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SurveyStatePlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        DownholeFunctions::SurveyStatePlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        DownholeFunctions::SurveyStatePlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        DownholeFunctions::SurveyStatePlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        DownholeFunctions::SurveyStatePlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        DownholeFunctions::SurveyStatePlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        DownholeFunctions::SurveyStatePlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        DownholeFunctions::SurveyStatePlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        SurveyStatePlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        SurveyStatePlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        DownholeFunctions::SurveyStatePlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        DownholeFunctions::SurveyStatePlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)DownholeFunctions::SurveyState_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SurveyStatePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SurveyStatePlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        DownholeFunctions::SurveyStatePlugin_get_serialized_sample_size;

        plugin->endpointTypeName = SurveyStateTYPENAME;

        return plugin;
    }

    void
    SurveyStatePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 
} /* namespace DownholeFunctions  */

