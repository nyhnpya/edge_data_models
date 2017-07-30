

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from hoist.idl using "rtiddsgen".
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

#include "hoistPlugin.h"

namespace SafeHoistFunctions {

    /* ----------------------------------------------------------------------------
    *  Type HoistRequest
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    HoistRequest*
    HoistRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        HoistRequest *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HoistRequest);

        if(sample != NULL) {
            if (!SafeHoistFunctions::HoistRequest_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    HoistRequest *
    HoistRequestPluginSupport_create_data_ex(RTIBool allocate_pointers){
        HoistRequest *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HoistRequest);

        if(sample != NULL) {
            if (!SafeHoistFunctions::HoistRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    HoistRequest *
    HoistRequestPluginSupport_create_data(void)
    {
        return SafeHoistFunctions::HoistRequestPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    HoistRequestPluginSupport_destroy_data_w_params(
        HoistRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        SafeHoistFunctions::HoistRequest_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HoistRequestPluginSupport_destroy_data_ex(
        HoistRequest *sample,RTIBool deallocate_pointers) {

        SafeHoistFunctions::HoistRequest_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HoistRequestPluginSupport_destroy_data(
        HoistRequest *sample) {

        SafeHoistFunctions::HoistRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    HoistRequestPluginSupport_copy_data(
        HoistRequest *dst,
        const HoistRequest *src)
    {
        return SafeHoistFunctions::HoistRequest_copy(dst,src);
    }

    void 
    HoistRequestPluginSupport_print_data(
        const HoistRequest *sample,
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

        RTICdrType_printDouble(
            &sample->targetVelocity, "targetVelocity", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->targetPosition, "targetPosition", indent_level + 1);    

    }
    HoistRequest *
    HoistRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
        HoistRequest *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, HoistRequestKeyHolder);

        SafeHoistFunctions::HoistRequest_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    HoistRequest *
    HoistRequestPluginSupport_create_key(void)
    {
        return  SafeHoistFunctions::HoistRequestPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    HoistRequestPluginSupport_destroy_key_ex(
        HoistRequestKeyHolder *key,RTIBool deallocate_pointers)
    {
        SafeHoistFunctions::HoistRequest_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    HoistRequestPluginSupport_destroy_key(
        HoistRequestKeyHolder *key) {

        SafeHoistFunctions::HoistRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    HoistRequestPlugin_on_participant_attached(
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
    HoistRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    HoistRequestPlugin_on_endpoint_attached(
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
            SafeHoistFunctions::HoistRequestPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            SafeHoistFunctions::HoistRequestPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            SafeHoistFunctions::HoistRequestPluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            SafeHoistFunctions::HoistRequestPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  SafeHoistFunctions::HoistRequestPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = SafeHoistFunctions::HoistRequestPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                SafeHoistFunctions::HoistRequestPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                SafeHoistFunctions::HoistRequestPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    HoistRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    HoistRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest *sample,
        void *handle)
    {

        HoistRequest_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    HoistRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest *dst,
        const HoistRequest *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return SafeHoistFunctions::HoistRequestPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    HoistRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    HoistRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const HoistRequest *sample, 
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

            if (!RTICdrStream_serializeDouble(
                stream, &sample->targetVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->targetPosition)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    HoistRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest *sample,
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

            SafeHoistFunctions::HoistRequest_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->targetVelocity)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->targetPosition)) {
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
    HoistRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HoistRequest *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        HoistRequestPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            HoistRequestPlugin_get_serialized_sample_size(
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

        result = SafeHoistFunctions::HoistRequestPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    HoistRequestPlugin_deserialize_from_cdr_buffer(
        HoistRequest *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return HoistRequestPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    HoistRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SafeHoistFunctions::HoistRequestPlugin_deserialize_sample( 
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

    RTIBool HoistRequestPlugin_skip(
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
            if (!RTICdrStream_skipDouble (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipDouble (stream)) {
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
    HoistRequestPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    HoistRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HoistRequestPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    HoistRequestPlugin_get_serialized_sample_min_size(
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
        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

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
    HoistRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const HoistRequest * sample) 
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
        current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    HoistRequestPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    HoistRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const HoistRequest *sample, 
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

    RTIBool HoistRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest *sample, 
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

    RTIBool HoistRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SafeHoistFunctions::HoistRequestPlugin_deserialize_key_sample(
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
    HoistRequestPlugin_get_serialized_key_max_size_ex(
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
    HoistRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HoistRequestPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    HoistRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest *sample,
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

            if (!RTICdrStream_skipDouble (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipDouble (stream)) {
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
    HoistRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequestKeyHolder *dst, 
        const HoistRequest *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HoistRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HoistRequest *dst, const
        HoistRequestKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HoistRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const HoistRequest *instance)
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

        if (!SafeHoistFunctions::HoistRequestPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)SafeHoistFunctions::HoistRequestPlugin_get_serialized_sample_size(
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
            if (!SafeHoistFunctions::HoistRequestPlugin_serialize_key(
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
    HoistRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        HoistRequest * sample=NULL;

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

        sample = (HoistRequest *)
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

        if (!SafeHoistFunctions::HoistRequestPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *HoistRequestPlugin_new(void) 
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
        SafeHoistFunctions::HoistRequestPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        SafeHoistFunctions::HoistRequestPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        SafeHoistFunctions::HoistRequestPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        SafeHoistFunctions::HoistRequestPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        SafeHoistFunctions::HoistRequestPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        HoistRequestPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        HoistRequestPlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        SafeHoistFunctions::HoistRequestPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        SafeHoistFunctions::HoistRequestPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        SafeHoistFunctions::HoistRequestPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        SafeHoistFunctions::HoistRequestPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        HoistRequestPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        HoistRequestPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        SafeHoistFunctions::HoistRequestPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        SafeHoistFunctions::HoistRequestPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        SafeHoistFunctions::HoistRequestPlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        SafeHoistFunctions::HoistRequestPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        SafeHoistFunctions::HoistRequestPlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        SafeHoistFunctions::HoistRequestPlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        SafeHoistFunctions::HoistRequestPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        HoistRequestPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        HoistRequestPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        SafeHoistFunctions::HoistRequestPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        SafeHoistFunctions::HoistRequestPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)SafeHoistFunctions::HoistRequest_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        HoistRequestPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        HoistRequestPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        SafeHoistFunctions::HoistRequestPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = HoistRequestTYPENAME;

        return plugin;
    }

    void
    HoistRequestPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type HoistObjective
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    HoistObjective*
    HoistObjectivePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        HoistObjective *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HoistObjective);

        if(sample != NULL) {
            if (!SafeHoistFunctions::HoistObjective_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    HoistObjective *
    HoistObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers){
        HoistObjective *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HoistObjective);

        if(sample != NULL) {
            if (!SafeHoistFunctions::HoistObjective_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    HoistObjective *
    HoistObjectivePluginSupport_create_data(void)
    {
        return SafeHoistFunctions::HoistObjectivePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    HoistObjectivePluginSupport_destroy_data_w_params(
        HoistObjective *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        SafeHoistFunctions::HoistObjective_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HoistObjectivePluginSupport_destroy_data_ex(
        HoistObjective *sample,RTIBool deallocate_pointers) {

        SafeHoistFunctions::HoistObjective_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HoistObjectivePluginSupport_destroy_data(
        HoistObjective *sample) {

        SafeHoistFunctions::HoistObjectivePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    HoistObjectivePluginSupport_copy_data(
        HoistObjective *dst,
        const HoistObjective *src)
    {
        return SafeHoistFunctions::HoistObjective_copy(dst,src);
    }

    void 
    HoistObjectivePluginSupport_print_data(
        const HoistObjective *sample,
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

        RTICdrType_printDouble(
            &sample->targetVelocity, "targetVelocity", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->targetPosition, "targetPosition", indent_level + 1);    

    }
    HoistObjective *
    HoistObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers){
        HoistObjective *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, HoistObjectiveKeyHolder);

        SafeHoistFunctions::HoistObjective_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    HoistObjective *
    HoistObjectivePluginSupport_create_key(void)
    {
        return  SafeHoistFunctions::HoistObjectivePluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    HoistObjectivePluginSupport_destroy_key_ex(
        HoistObjectiveKeyHolder *key,RTIBool deallocate_pointers)
    {
        SafeHoistFunctions::HoistObjective_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    HoistObjectivePluginSupport_destroy_key(
        HoistObjectiveKeyHolder *key) {

        SafeHoistFunctions::HoistObjectivePluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    HoistObjectivePlugin_on_participant_attached(
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
    HoistObjectivePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    HoistObjectivePlugin_on_endpoint_attached(
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
            SafeHoistFunctions::HoistObjectivePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            SafeHoistFunctions::HoistObjectivePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            SafeHoistFunctions::HoistObjectivePluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            SafeHoistFunctions::HoistObjectivePluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  SafeHoistFunctions::HoistObjectivePlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = SafeHoistFunctions::HoistObjectivePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                SafeHoistFunctions::HoistObjectivePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                SafeHoistFunctions::HoistObjectivePlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    HoistObjectivePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    HoistObjectivePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective *sample,
        void *handle)
    {

        HoistObjective_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    HoistObjectivePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective *dst,
        const HoistObjective *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return SafeHoistFunctions::HoistObjectivePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    HoistObjectivePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    HoistObjectivePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const HoistObjective *sample, 
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

            if (!RTICdrStream_serializeDouble(
                stream, &sample->targetVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->targetPosition)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    HoistObjectivePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective *sample,
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

            SafeHoistFunctions::HoistObjective_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->targetVelocity)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->targetPosition)) {
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
    HoistObjectivePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HoistObjective *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        HoistObjectivePlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            HoistObjectivePlugin_get_serialized_sample_size(
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

        result = SafeHoistFunctions::HoistObjectivePlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    HoistObjectivePlugin_deserialize_from_cdr_buffer(
        HoistObjective *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return HoistObjectivePlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    HoistObjectivePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SafeHoistFunctions::HoistObjectivePlugin_deserialize_sample( 
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

    RTIBool HoistObjectivePlugin_skip(
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
            if (!RTICdrStream_skipDouble (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipDouble (stream)) {
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
    HoistObjectivePlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    HoistObjectivePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HoistObjectivePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    HoistObjectivePlugin_get_serialized_sample_min_size(
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
        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

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
    HoistObjectivePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const HoistObjective * sample) 
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
        current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    HoistObjectivePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    HoistObjectivePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const HoistObjective *sample, 
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

    RTIBool HoistObjectivePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective *sample, 
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

    RTIBool HoistObjectivePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SafeHoistFunctions::HoistObjectivePlugin_deserialize_key_sample(
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
    HoistObjectivePlugin_get_serialized_key_max_size_ex(
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
    HoistObjectivePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HoistObjectivePlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    HoistObjectivePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective *sample,
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

            if (!RTICdrStream_skipDouble (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipDouble (stream)) {
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
    HoistObjectivePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjectiveKeyHolder *dst, 
        const HoistObjective *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HoistObjectivePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HoistObjective *dst, const
        HoistObjectiveKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HoistObjectivePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const HoistObjective *instance)
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

        if (!SafeHoistFunctions::HoistObjectivePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)SafeHoistFunctions::HoistObjectivePlugin_get_serialized_sample_size(
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
            if (!SafeHoistFunctions::HoistObjectivePlugin_serialize_key(
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
    HoistObjectivePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        HoistObjective * sample=NULL;

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

        sample = (HoistObjective *)
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

        if (!SafeHoistFunctions::HoistObjectivePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *HoistObjectivePlugin_new(void) 
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
        SafeHoistFunctions::HoistObjectivePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        SafeHoistFunctions::HoistObjectivePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        SafeHoistFunctions::HoistObjectivePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        SafeHoistFunctions::HoistObjectivePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        SafeHoistFunctions::HoistObjectivePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        HoistObjectivePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        HoistObjectivePlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        SafeHoistFunctions::HoistObjectivePlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        SafeHoistFunctions::HoistObjectivePlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        SafeHoistFunctions::HoistObjectivePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        SafeHoistFunctions::HoistObjectivePlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        HoistObjectivePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        HoistObjectivePlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        SafeHoistFunctions::HoistObjectivePlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        SafeHoistFunctions::HoistObjectivePlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        SafeHoistFunctions::HoistObjectivePlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        SafeHoistFunctions::HoistObjectivePlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        SafeHoistFunctions::HoistObjectivePlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        SafeHoistFunctions::HoistObjectivePlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        SafeHoistFunctions::HoistObjectivePlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        HoistObjectivePlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        HoistObjectivePlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        SafeHoistFunctions::HoistObjectivePlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        SafeHoistFunctions::HoistObjectivePlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)SafeHoistFunctions::HoistObjective_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        HoistObjectivePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        HoistObjectivePlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        SafeHoistFunctions::HoistObjectivePlugin_get_serialized_sample_size;

        plugin->endpointTypeName = HoistObjectiveTYPENAME;

        return plugin;
    }

    void
    HoistObjectivePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type HoistState
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    HoistState*
    HoistStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        HoistState *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HoistState);

        if(sample != NULL) {
            if (!SafeHoistFunctions::HoistState_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    HoistState *
    HoistStatePluginSupport_create_data_ex(RTIBool allocate_pointers){
        HoistState *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HoistState);

        if(sample != NULL) {
            if (!SafeHoistFunctions::HoistState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    HoistState *
    HoistStatePluginSupport_create_data(void)
    {
        return SafeHoistFunctions::HoistStatePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    HoistStatePluginSupport_destroy_data_w_params(
        HoistState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        SafeHoistFunctions::HoistState_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HoistStatePluginSupport_destroy_data_ex(
        HoistState *sample,RTIBool deallocate_pointers) {

        SafeHoistFunctions::HoistState_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HoistStatePluginSupport_destroy_data(
        HoistState *sample) {

        SafeHoistFunctions::HoistStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    HoistStatePluginSupport_copy_data(
        HoistState *dst,
        const HoistState *src)
    {
        return SafeHoistFunctions::HoistState_copy(dst,src);
    }

    void 
    HoistStatePluginSupport_print_data(
        const HoistState *sample,
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

        RTICdrType_printDouble(
            &sample->actualVelocity, "actualVelocity", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->actualPosition, "actualPosition", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->maxHoistVelocity, "maxHoistVelocity", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->maxLowerVelocity, "maxLowerVelocity", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->maxHoistPosition, "maxHoistPosition", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->maxLowerPosition, "maxLowerPosition", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->targetVelocity, "targetVelocity", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->targetPosition, "targetPosition", indent_level + 1);    

    }
    HoistState *
    HoistStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
        HoistState *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, HoistStateKeyHolder);

        SafeHoistFunctions::HoistState_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    HoistState *
    HoistStatePluginSupport_create_key(void)
    {
        return  SafeHoistFunctions::HoistStatePluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    HoistStatePluginSupport_destroy_key_ex(
        HoistStateKeyHolder *key,RTIBool deallocate_pointers)
    {
        SafeHoistFunctions::HoistState_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    HoistStatePluginSupport_destroy_key(
        HoistStateKeyHolder *key) {

        SafeHoistFunctions::HoistStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    HoistStatePlugin_on_participant_attached(
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
    HoistStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    HoistStatePlugin_on_endpoint_attached(
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
            SafeHoistFunctions::HoistStatePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            SafeHoistFunctions::HoistStatePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            SafeHoistFunctions::HoistStatePluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            SafeHoistFunctions::HoistStatePluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  SafeHoistFunctions::HoistStatePlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = SafeHoistFunctions::HoistStatePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                SafeHoistFunctions::HoistStatePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                SafeHoistFunctions::HoistStatePlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    HoistStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    HoistStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistState *sample,
        void *handle)
    {

        HoistState_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    HoistStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistState *dst,
        const HoistState *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return SafeHoistFunctions::HoistStatePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    HoistStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    HoistStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const HoistState *sample, 
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

            if (!RTICdrStream_serializeDouble(
                stream, &sample->actualVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->actualPosition)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->maxHoistVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->maxLowerVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->maxHoistPosition)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->maxLowerPosition)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->targetVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->targetPosition)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    HoistStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistState *sample,
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

            SafeHoistFunctions::HoistState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->actualVelocity)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->actualPosition)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->maxHoistVelocity)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->maxLowerVelocity)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->maxHoistPosition)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->maxLowerPosition)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->targetVelocity)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->targetPosition)) {
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
    HoistStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HoistState *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        HoistStatePlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            HoistStatePlugin_get_serialized_sample_size(
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

        result = SafeHoistFunctions::HoistStatePlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    HoistStatePlugin_deserialize_from_cdr_buffer(
        HoistState *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return HoistStatePlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    HoistStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HoistState **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SafeHoistFunctions::HoistStatePlugin_deserialize_sample( 
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

    RTIBool HoistStatePlugin_skip(
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
    HoistStatePlugin_get_serialized_sample_max_size_ex(
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

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    HoistStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HoistStatePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    HoistStatePlugin_get_serialized_sample_min_size(
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
    HoistStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const HoistState * sample) 
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

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    HoistStatePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    HoistStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const HoistState *sample, 
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

    RTIBool HoistStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        HoistState *sample, 
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

    RTIBool HoistStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SafeHoistFunctions::HoistStatePlugin_deserialize_key_sample(
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
    HoistStatePlugin_get_serialized_key_max_size_ex(
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
    HoistStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HoistStatePlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    HoistStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistState *sample,
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
    HoistStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HoistStateKeyHolder *dst, 
        const HoistState *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HoistStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HoistState *dst, const
        HoistStateKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HoistStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const HoistState *instance)
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

        if (!SafeHoistFunctions::HoistStatePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)SafeHoistFunctions::HoistStatePlugin_get_serialized_sample_size(
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
            if (!SafeHoistFunctions::HoistStatePlugin_serialize_key(
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
    HoistStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        HoistState * sample=NULL;

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

        sample = (HoistState *)
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

        if (!SafeHoistFunctions::HoistStatePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *HoistStatePlugin_new(void) 
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
        SafeHoistFunctions::HoistStatePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        SafeHoistFunctions::HoistStatePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        SafeHoistFunctions::HoistStatePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        SafeHoistFunctions::HoistStatePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        SafeHoistFunctions::HoistStatePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        HoistStatePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        HoistStatePlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        SafeHoistFunctions::HoistStatePlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        SafeHoistFunctions::HoistStatePlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        SafeHoistFunctions::HoistStatePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        SafeHoistFunctions::HoistStatePlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        HoistStatePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        HoistStatePlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        SafeHoistFunctions::HoistStatePlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        SafeHoistFunctions::HoistStatePlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        SafeHoistFunctions::HoistStatePlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        SafeHoistFunctions::HoistStatePlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        SafeHoistFunctions::HoistStatePlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        SafeHoistFunctions::HoistStatePlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        SafeHoistFunctions::HoistStatePlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        HoistStatePlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        HoistStatePlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        SafeHoistFunctions::HoistStatePlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        SafeHoistFunctions::HoistStatePlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)SafeHoistFunctions::HoistState_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        HoistStatePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        HoistStatePlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        SafeHoistFunctions::HoistStatePlugin_get_serialized_sample_size;

        plugin->endpointTypeName = HoistStateTYPENAME;

        return plugin;
    }

    void
    HoistStatePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 
} /* namespace SafeHoistFunctions  */

