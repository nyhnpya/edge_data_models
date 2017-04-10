

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autodriller_configuration.idl using "rtiddsgen".
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

#include "autodriller_configurationPlugin.h"

namespace AutoDrillerConfiguration {

    /* ----------------------------------------------------------------------------
    *  Type HmiRequest
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    HmiRequest*
    HmiRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        HmiRequest *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HmiRequest);

        if(sample != NULL) {
            if (!AutoDrillerConfiguration::HmiRequest_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    HmiRequest *
    HmiRequestPluginSupport_create_data_ex(RTIBool allocate_pointers){
        HmiRequest *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HmiRequest);

        if(sample != NULL) {
            if (!AutoDrillerConfiguration::HmiRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    HmiRequest *
    HmiRequestPluginSupport_create_data(void)
    {
        return AutoDrillerConfiguration::HmiRequestPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    HmiRequestPluginSupport_destroy_data_w_params(
        HmiRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        AutoDrillerConfiguration::HmiRequest_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HmiRequestPluginSupport_destroy_data_ex(
        HmiRequest *sample,RTIBool deallocate_pointers) {

        AutoDrillerConfiguration::HmiRequest_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HmiRequestPluginSupport_destroy_data(
        HmiRequest *sample) {

        AutoDrillerConfiguration::HmiRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    HmiRequestPluginSupport_copy_data(
        HmiRequest *dst,
        const HmiRequest *src)
    {
        return AutoDrillerConfiguration::HmiRequest_copy(dst,src);
    }

    void 
    HmiRequestPluginSupport_print_data(
        const HmiRequest *sample,
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

        DataTypes::TimePluginSupport_print_data(
            &sample->timestamp, "timestamp", indent_level + 1);

        RTICdrType_printLong(
            &sample->mode, "mode", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modeController, "modeController", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->onDataAvailable, "onDataAvailable", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->onLivelinessLost, "onLivelinessLost", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneDifferentialPressureRequestK, "modelOneDifferentialPressureRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneDifferentialPressureRequestTau, "modelOneDifferentialPressureRequestTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneRateOfPenetrationRequestK, "modelOneRateOfPenetrationRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneRateOfPenetrationRequestTau, "modelOneRateOfPenetrationRequestTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneTorqueRequestK, "modelOneTorqueRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneTorqueRequestTau, "modelOneTorqueRequestTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneWeightOnBitRequestK, "modelOneWeightOnBitRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelOneWeightOnBitRequestTau, "modelOneWeightOnBitRequestTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoDifferentialPressureRequestK, "modelTwoDifferentialPressureRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoDifferentialPressureRequestTau, "modelTwoDifferentialPressureRequestTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoRateOfPenetrationRequestK, "modelTwoRateOfPenetrationRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoRateOfPenetrationRequestTau, "modelTwoRateOfPenetrationRequestTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoTorqueRequestK, "modelTwoTorqueRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoTorqueRequestTau, "modelTwoTorqueRequestTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoWeightOnBitRequestK, "modelTwoWeightOnBitRequestK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->modelTwoWeightOnBitRequestTau, "modelTwoWeightOnBitRequestTau", indent_level + 1);    

        RTICdrType_printLong(
            &sample->status, "status", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->tuningDisable, "tuningDisable", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->tuningEnable, "tuningEnable", indent_level + 1);    

    }
    HmiRequest *
    HmiRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
        HmiRequest *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, HmiRequestKeyHolder);

        AutoDrillerConfiguration::HmiRequest_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    HmiRequest *
    HmiRequestPluginSupport_create_key(void)
    {
        return  AutoDrillerConfiguration::HmiRequestPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    HmiRequestPluginSupport_destroy_key_ex(
        HmiRequestKeyHolder *key,RTIBool deallocate_pointers)
    {
        AutoDrillerConfiguration::HmiRequest_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    HmiRequestPluginSupport_destroy_key(
        HmiRequestKeyHolder *key) {

        AutoDrillerConfiguration::HmiRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    HmiRequestPlugin_on_participant_attached(
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
    HmiRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    HmiRequestPlugin_on_endpoint_attached(
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
            AutoDrillerConfiguration::HmiRequestPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            AutoDrillerConfiguration::HmiRequestPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            AutoDrillerConfiguration::HmiRequestPluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            AutoDrillerConfiguration::HmiRequestPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    HmiRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    HmiRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *sample,
        void *handle)
    {

        HmiRequest_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    HmiRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *dst,
        const HmiRequest *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return AutoDrillerConfiguration::HmiRequestPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    HmiRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    HmiRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const HmiRequest *sample, 
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

            if(!DataTypes::TimePlugin_serialize(
                endpoint_data,
                &sample->timestamp,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeLong(
                stream, &sample->mode)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modeController)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->onDataAvailable)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->onLivelinessLost)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneDifferentialPressureRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneDifferentialPressureRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneRateOfPenetrationRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneRateOfPenetrationRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneTorqueRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneTorqueRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneWeightOnBitRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelOneWeightOnBitRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoDifferentialPressureRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoDifferentialPressureRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoRateOfPenetrationRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoRateOfPenetrationRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoTorqueRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoTorqueRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoWeightOnBitRequestK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->modelTwoWeightOnBitRequestTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeLong(
                stream, &sample->status)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->tuningDisable)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->tuningEnable)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    HmiRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *sample,
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

            AutoDrillerConfiguration::HmiRequest_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

            if(!DataTypes::UuidPlugin_deserialize_sample(
                endpoint_data,
                &sample->id,
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
            if (!RTICdrStream_deserializeLong(
                stream, &sample->mode)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modeController)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->onDataAvailable)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->onLivelinessLost)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneDifferentialPressureRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneDifferentialPressureRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneRateOfPenetrationRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneRateOfPenetrationRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneTorqueRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneTorqueRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneWeightOnBitRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelOneWeightOnBitRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoDifferentialPressureRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoDifferentialPressureRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoRateOfPenetrationRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoRateOfPenetrationRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoTorqueRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoTorqueRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoWeightOnBitRequestK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->modelTwoWeightOnBitRequestTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeLong(
                stream, &sample->status)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->tuningDisable)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->tuningEnable)) {
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
    HmiRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HmiRequest *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        HmiRequestPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            HmiRequestPlugin_get_serialized_sample_size(
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

        result = AutoDrillerConfiguration::HmiRequestPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    HmiRequestPlugin_deserialize_from_cdr_buffer(
        HmiRequest *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return HmiRequestPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    HmiRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= AutoDrillerConfiguration::HmiRequestPlugin_deserialize_sample( 
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

    RTIBool HmiRequestPlugin_skip(
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
            if (!DataTypes::TimePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if (!RTICdrStream_skipLong (stream)) {
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
            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipBoolean (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipBoolean (stream)) {
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
    HmiRequestPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
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

        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    HmiRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HmiRequestPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    HmiRequestPlugin_get_serialized_sample_min_size(
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
        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
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
        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
    HmiRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const HmiRequest * sample) 
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
        current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->timestamp);
        current_alignment += RTICdrType_getLongMaxSizeSerialized(
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
        current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
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
    HmiRequestPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    HmiRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const HmiRequest *sample, 
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

    RTIBool HmiRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *sample, 
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

    RTIBool HmiRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= AutoDrillerConfiguration::HmiRequestPlugin_deserialize_key_sample(
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
    HmiRequestPlugin_get_serialized_key_max_size_ex(
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
    HmiRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HmiRequestPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    HmiRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *sample,
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
            if (!DataTypes::TimePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }

            if (!RTICdrStream_skipLong (stream)) {
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

            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipBoolean (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipBoolean (stream)) {
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
    HmiRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequestKeyHolder *dst, 
        const HmiRequest *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HmiRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *dst, const
        HmiRequestKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HmiRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const HmiRequest *instance)
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

        if (!AutoDrillerConfiguration::HmiRequestPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_sample_size(
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
            if (!AutoDrillerConfiguration::HmiRequestPlugin_serialize_key(
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
    HmiRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        HmiRequest * sample=NULL;

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

        sample = (HmiRequest *)
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

        if (!AutoDrillerConfiguration::HmiRequestPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *HmiRequestPlugin_new(void) 
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
        AutoDrillerConfiguration::HmiRequestPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        AutoDrillerConfiguration::HmiRequestPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        AutoDrillerConfiguration::HmiRequestPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        AutoDrillerConfiguration::HmiRequestPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        HmiRequestPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        HmiRequestPlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        HmiRequestPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        HmiRequestPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        HmiRequestPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        HmiRequestPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)AutoDrillerConfiguration::HmiRequest_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        HmiRequestPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        HmiRequestPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        AutoDrillerConfiguration::HmiRequestPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = HmiRequestTYPENAME;

        return plugin;
    }

    void
    HmiRequestPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type HmiState
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    HmiState*
    HmiStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params){
        HmiState *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HmiState);

        if(sample != NULL) {
            if (!AutoDrillerConfiguration::HmiState_initialize_w_params(sample,alloc_params)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }        
        return sample; 
    } 

    HmiState *
    HmiStatePluginSupport_create_data_ex(RTIBool allocate_pointers){
        HmiState *sample = NULL;

        RTIOsapiHeap_allocateStructure(
            &sample, HmiState);

        if(sample != NULL) {
            if (!AutoDrillerConfiguration::HmiState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                RTIOsapiHeap_freeStructure(sample);
                return NULL;
            }
        }
        return sample; 
    }

    HmiState *
    HmiStatePluginSupport_create_data(void)
    {
        return AutoDrillerConfiguration::HmiStatePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    HmiStatePluginSupport_destroy_data_w_params(
        HmiState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        AutoDrillerConfiguration::HmiState_finalize_w_params(sample,dealloc_params);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HmiStatePluginSupport_destroy_data_ex(
        HmiState *sample,RTIBool deallocate_pointers) {

        AutoDrillerConfiguration::HmiState_finalize_ex(sample,deallocate_pointers);

        RTIOsapiHeap_freeStructure(sample);
    }

    void 
    HmiStatePluginSupport_destroy_data(
        HmiState *sample) {

        AutoDrillerConfiguration::HmiStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    HmiStatePluginSupport_copy_data(
        HmiState *dst,
        const HmiState *src)
    {
        return AutoDrillerConfiguration::HmiState_copy(dst,src);
    }

    void 
    HmiStatePluginSupport_print_data(
        const HmiState *sample,
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

        DataTypes::TimePluginSupport_print_data(
            &sample->timestamp, "timestamp", indent_level + 1);

        RTICdrType_printLong(
            &sample->mode, "mode", indent_level + 1);    

        RTICdrType_printLong(
            &sample->modeController, "modeController", indent_level + 1);    

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
            &sample->differentialPressureInitializeK, "differentialPressureInitializeK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureInitializeTau, "differentialPressureInitializeTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureInitializePreFilter, "differentialPressureInitializePreFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureR1, "differentialPressureR1", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureR2, "differentialPressureR2", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationInitializeK, "rateOfPenetrationInitializeK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationInitializeTau, "rateOfPenetrationInitializeTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationInitializePreFilter, "rateOfPenetrationInitializePreFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationInitializeR1, "rateOfPenetrationInitializeR1", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationInitializeR2, "rateOfPenetrationInitializeR2", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueInitializeK, "torqueInitializeK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueInitializeTau, "torqueInitializeTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueInitializePreFilter, "torqueInitializePreFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueInitializeR1, "torqueInitializeR1", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueInitializeR2, "torqueInitializeR2", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitInitializeK, "weightOnBitInitializeK", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitInitializeTau, "weightOnBitInitializeTau", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitInitializePreFilter, "weightOnBitInitializePreFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitInitializeR1, "weightOnBitInitializeR1", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitInitializeR2, "weightOnBitInitializeR2", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->devMin, "devMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->intervalMin, "intervalMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureFilter, "differentialPressureFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureKcMax, "differentialPressureKcMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureKcMin, "differentialPressureKcMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureTdMax, "differentialPressureTdMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureTdMin, "differentialPressureTdMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureTiMax, "differentialPressureTiMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureTiMin, "differentialPressureTiMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureD, "differentialPressureD", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureEps, "differentialPressureEps", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->differentialPressureEpsManual, "differentialPressureEpsManual", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->differentialPressureF, "differentialPressureF", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationFilter, "rateOfPenetrationFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationKcMax, "rateOfPenetrationKcMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationKcMin, "rateOfPenetrationKcMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationTdMax, "rateOfPenetrationTdMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationTdMin, "rateOfPenetrationTdMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationTiMax, "rateOfPenetrationTiMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationTiMin, "rateOfPenetrationTiMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationD, "rateOfPenetrationD", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationEps, "rateOfPenetrationEps", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->rateOfPenetrationEpsManual, "rateOfPenetrationEpsManual", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->rateOfPenetrationF, "rateOfPenetrationF", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitFilter, "weightOnBitFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitKcMax, "weightOnBitKcMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitKcMin, "weightOnBitKcMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitTdMax, "weightOnBitTdMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitTdMin, "weightOnBitTdMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitTiMax, "weightOnBitTiMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitTiMin, "weightOnBitTiMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitD, "weightOnBitD", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitEps, "weightOnBitEps", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->weightOnBitEpsManual, "weightOnBitEpsManual", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->weightOnBitF, "weightOnBitF", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueFilter, "torqueFilter", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueKcMax, "torqueKcMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueKcMin, "torqueKcMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueTdMax, "torqueTdMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueTdMin, "torqueTdMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueTiMax, "torqueTiMax", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueTiMin, "torqueTiMin", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueD, "torqueD", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueEps, "torqueEps", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->torqueEpsManual, "torqueEpsManual", indent_level + 1);    

        RTICdrType_printDouble(
            &sample->torqueF, "torqueF", indent_level + 1);    

        RTICdrType_printLong(
            &sample->status, "status", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->tuningDisable, "tuningDisable", indent_level + 1);    

        RTICdrType_printBoolean(
            &sample->tuningEnable, "tuningEnable", indent_level + 1);    

    }
    HmiState *
    HmiStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
        HmiState *key = NULL;

        RTIOsapiHeap_allocateStructure(
            &key, HmiStateKeyHolder);

        AutoDrillerConfiguration::HmiState_initialize_ex(key,allocate_pointers, RTI_TRUE);
        return key;
    }

    HmiState *
    HmiStatePluginSupport_create_key(void)
    {
        return  AutoDrillerConfiguration::HmiStatePluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    HmiStatePluginSupport_destroy_key_ex(
        HmiStateKeyHolder *key,RTIBool deallocate_pointers)
    {
        AutoDrillerConfiguration::HmiState_finalize_ex(key,deallocate_pointers);

        RTIOsapiHeap_freeStructure(key);
    }

    void 
    HmiStatePluginSupport_destroy_key(
        HmiStateKeyHolder *key) {

        AutoDrillerConfiguration::HmiStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    HmiStatePlugin_on_participant_attached(
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
    HmiStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    HmiStatePlugin_on_endpoint_attached(
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
            AutoDrillerConfiguration::HmiStatePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            AutoDrillerConfiguration::HmiStatePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            AutoDrillerConfiguration::HmiStatePluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            AutoDrillerConfiguration::HmiStatePluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  AutoDrillerConfiguration::HmiStatePlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = AutoDrillerConfiguration::HmiStatePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                AutoDrillerConfiguration::HmiStatePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                AutoDrillerConfiguration::HmiStatePlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    HmiStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    HmiStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *sample,
        void *handle)
    {

        HmiState_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    HmiStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *dst,
        const HmiState *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return AutoDrillerConfiguration::HmiStatePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    HmiStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    HmiStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const HmiState *sample, 
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

            if(!DataTypes::TimePlugin_serialize(
                endpoint_data,
                &sample->timestamp,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeLong(
                stream, &sample->mode)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeLong(
                stream, &sample->modeController)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->modelReset)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->pipeInnerDiameter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->pipeOuterDiameter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->slopeFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->tauMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->tauMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->tauMultiplier)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureInitializeK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureInitializeTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureInitializePreFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureR1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureR2)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationInitializeK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationInitializeTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationInitializePreFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationInitializeR1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationInitializeR2)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueInitializeK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueInitializeTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueInitializePreFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueInitializeR1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueInitializeR2)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitInitializeK)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitInitializeTau)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitInitializePreFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitInitializeR1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitInitializeR2)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->devMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->intervalMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureKcMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureKcMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureTdMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureTdMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureTiMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureTiMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureD)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureEps)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->differentialPressureEpsManual)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->differentialPressureF)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationKcMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationKcMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationTdMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationTdMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationTiMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationTiMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationD)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationEps)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->rateOfPenetrationEpsManual)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->rateOfPenetrationF)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitKcMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitKcMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitTdMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitTdMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitTiMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitTiMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitD)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitEps)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->weightOnBitEpsManual)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->weightOnBitF)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueFilter)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueKcMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueKcMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueTdMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueTdMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueTiMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueTiMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueD)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueEps)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->torqueEpsManual)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeDouble(
                stream, &sample->torqueF)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeLong(
                stream, &sample->status)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->tuningDisable)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeBoolean(
                stream, &sample->tuningEnable)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    HmiStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *sample,
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

            AutoDrillerConfiguration::HmiState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

            if(!DataTypes::UuidPlugin_deserialize_sample(
                endpoint_data,
                &sample->id,
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
            if (!RTICdrStream_deserializeLong(
                stream, &sample->mode)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeLong(
                stream, &sample->modeController)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->modelReset)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->pipeInnerDiameter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->pipeOuterDiameter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->slopeFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->tauMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->tauMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->tauMultiplier)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureInitializeK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureInitializeTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureInitializePreFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureR1)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureR2)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationInitializeK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationInitializeTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationInitializePreFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationInitializeR1)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationInitializeR2)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueInitializeK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueInitializeTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueInitializePreFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueInitializeR1)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueInitializeR2)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitInitializeK)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitInitializeTau)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitInitializePreFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitInitializeR1)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitInitializeR2)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->devMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->intervalMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureKcMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureKcMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureTdMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureTdMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureTiMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureTiMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureD)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureEps)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->differentialPressureEpsManual)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->differentialPressureF)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationKcMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationKcMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationTdMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationTdMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationTiMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationTiMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationD)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationEps)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->rateOfPenetrationEpsManual)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->rateOfPenetrationF)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitKcMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitKcMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitTdMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitTdMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitTiMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitTiMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitD)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitEps)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->weightOnBitEpsManual)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->weightOnBitF)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueFilter)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueKcMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueKcMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueTdMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueTdMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueTiMax)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueTiMin)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueD)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueEps)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->torqueEpsManual)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeDouble(
                stream, &sample->torqueF)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeLong(
                stream, &sample->status)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->tuningDisable)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeBoolean(
                stream, &sample->tuningEnable)) {
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
    HmiStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HmiState *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        HmiStatePlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

        if (buffer == NULL) {
            *length = 
            HmiStatePlugin_get_serialized_sample_size(
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

        result = AutoDrillerConfiguration::HmiStatePlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    HmiStatePlugin_deserialize_from_cdr_buffer(
        HmiState *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        return HmiStatePlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    RTIBool 
    HmiStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HmiState **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= AutoDrillerConfiguration::HmiStatePlugin_deserialize_sample( 
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

    RTIBool HmiStatePlugin_skip(
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
            if (!DataTypes::TimePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipBoolean (stream)) {
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
            if (!RTICdrStream_skipBoolean (stream)) {
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
            if (!RTICdrStream_skipBoolean (stream)) {
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
            if (!RTICdrStream_skipBoolean (stream)) {
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
            if (!RTICdrStream_skipBoolean (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipDouble (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipBoolean (stream)) {
                goto fin; 
            }
            if (!RTICdrStream_skipBoolean (stream)) {
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
    HmiStatePlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);

        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    HmiStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HmiStatePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    HmiStatePlugin_get_serialized_sample_min_size(
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
        current_alignment +=DataTypes::TimePlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
    HmiStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const HmiState * sample) 
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
        current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, &sample->timestamp);
        current_alignment += RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
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
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getLongMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);
        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
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
    HmiStatePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    HmiStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const HmiState *sample, 
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

    RTIBool HmiStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *sample, 
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

    RTIBool HmiStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= AutoDrillerConfiguration::HmiStatePlugin_deserialize_key_sample(
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
    HmiStatePlugin_get_serialized_key_max_size_ex(
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
    HmiStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = HmiStatePlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    HmiStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *sample,
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
            if (!DataTypes::TimePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }

            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipBoolean (stream)) {
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

            if (!RTICdrStream_skipBoolean (stream)) {
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

            if (!RTICdrStream_skipBoolean (stream)) {
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

            if (!RTICdrStream_skipBoolean (stream)) {
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

            if (!RTICdrStream_skipBoolean (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipDouble (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipLong (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipBoolean (stream)) {
                goto fin; 
            }

            if (!RTICdrStream_skipBoolean (stream)) {
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
    HmiStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiStateKeyHolder *dst, 
        const HmiState *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HmiStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *dst, const
        HmiStateKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!DataTypes::Uuid_copy(
            &dst->id, &src->id)) {
            return RTI_FALSE;
        } 
        return RTI_TRUE;
    }

    RTIBool 
    HmiStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const HmiState *instance)
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

        if (!AutoDrillerConfiguration::HmiStatePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)AutoDrillerConfiguration::HmiStatePlugin_get_serialized_sample_size(
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
            if (!AutoDrillerConfiguration::HmiStatePlugin_serialize_key(
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
    HmiStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        HmiState * sample=NULL;

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

        sample = (HmiState *)
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

        if (!AutoDrillerConfiguration::HmiStatePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *HmiStatePlugin_new(void) 
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
        AutoDrillerConfiguration::HmiStatePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        AutoDrillerConfiguration::HmiStatePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        AutoDrillerConfiguration::HmiStatePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        AutoDrillerConfiguration::HmiStatePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        AutoDrillerConfiguration::HmiStatePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        HmiStatePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        HmiStatePlugin_destroy_sample;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        AutoDrillerConfiguration::HmiStatePlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        AutoDrillerConfiguration::HmiStatePlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        AutoDrillerConfiguration::HmiStatePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        AutoDrillerConfiguration::HmiStatePlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        HmiStatePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        HmiStatePlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        AutoDrillerConfiguration::HmiStatePlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        AutoDrillerConfiguration::HmiStatePlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        AutoDrillerConfiguration::HmiStatePlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        AutoDrillerConfiguration::HmiStatePlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        AutoDrillerConfiguration::HmiStatePlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        AutoDrillerConfiguration::HmiStatePlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        AutoDrillerConfiguration::HmiStatePlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        HmiStatePlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        HmiStatePlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        AutoDrillerConfiguration::HmiStatePlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        AutoDrillerConfiguration::HmiStatePlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)AutoDrillerConfiguration::HmiState_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        HmiStatePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        HmiStatePlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        AutoDrillerConfiguration::HmiStatePlugin_get_serialized_sample_size;

        plugin->endpointTypeName = HmiStateTYPENAME;

        return plugin;
    }

    void
    HmiStatePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 
} /* namespace AutoDrillerConfiguration  */

