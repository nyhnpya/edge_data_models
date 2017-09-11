
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_calibration.idl using "rtiddsgen".
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

#include "drilling_calibrationPlugin.h"

namespace nec {
    namespace control {

        /* ----------------------------------------------------------------------------
        *  Type DrillingCalibrationRequest
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DrillingCalibrationRequest*
        DrillingCalibrationRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            DrillingCalibrationRequest *sample = NULL;

            sample = new (std::nothrow) DrillingCalibrationRequest ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::control::DrillingCalibrationRequest_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        DrillingCalibrationRequest *
        DrillingCalibrationRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            DrillingCalibrationRequest *sample = NULL;

            sample = new (std::nothrow) DrillingCalibrationRequest ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::control::DrillingCalibrationRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        DrillingCalibrationRequest *
        DrillingCalibrationRequestPluginSupport_create_data(void)
        {
            return nec::control::DrillingCalibrationRequestPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        DrillingCalibrationRequestPluginSupport_destroy_data_w_params(
            DrillingCalibrationRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            nec::control::DrillingCalibrationRequest_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillingCalibrationRequestPluginSupport_destroy_data_ex(
            DrillingCalibrationRequest *sample,RTIBool deallocate_pointers) {

            nec::control::DrillingCalibrationRequest_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillingCalibrationRequestPluginSupport_destroy_data(
            DrillingCalibrationRequest *sample) {

            nec::control::DrillingCalibrationRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        DrillingCalibrationRequestPluginSupport_copy_data(
            DrillingCalibrationRequest *dst,
            const DrillingCalibrationRequest *src)
        {
            return nec::control::DrillingCalibrationRequest_copy(dst,(const DrillingCalibrationRequest*) src);
        }

        void 
        DrillingCalibrationRequestPluginSupport_print_data(
            const DrillingCalibrationRequest *sample,
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

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timestamp, "timestamp", indent_level + 1);

            RTICdrType_printDouble(
                &sample->wobProportional, "wobProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->wobIntegral, "wobIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->differentialPressureProportional, "differentialPressureProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->differentialPressureIntegral, "differentialPressureIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueProportional, "torqueProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueIntegral, "torqueIntegral", indent_level + 1);    

        }
        DrillingCalibrationRequest *
        DrillingCalibrationRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
            DrillingCalibrationRequest *key = NULL;

            key = new (std::nothrow) DrillingCalibrationRequestKeyHolder ;

            nec::control::DrillingCalibrationRequest_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        DrillingCalibrationRequest *
        DrillingCalibrationRequestPluginSupport_create_key(void)
        {
            return  nec::control::DrillingCalibrationRequestPluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        DrillingCalibrationRequestPluginSupport_destroy_key_ex(
            DrillingCalibrationRequestKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::control::DrillingCalibrationRequest_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;

        }

        void 
        DrillingCalibrationRequestPluginSupport_destroy_key(
            DrillingCalibrationRequestKeyHolder *key) {

            nec::control::DrillingCalibrationRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DrillingCalibrationRequestPlugin_on_participant_attached(
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
        DrillingCalibrationRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        DrillingCalibrationRequestPlugin_on_endpoint_attached(
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
                nec::control::DrillingCalibrationRequestPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::control::DrillingCalibrationRequestPluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::control::DrillingCalibrationRequestPluginSupport_create_key ,            
                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::control::DrillingCalibrationRequestPluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 
            serializedKeyMaxSize =  nec::control::DrillingCalibrationRequestPlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,endpoint_info,serializedKeyMaxSize))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = nec::control::DrillingCalibrationRequestPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::control::DrillingCalibrationRequestPlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    nec::control::DrillingCalibrationRequestPlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        DrillingCalibrationRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DrillingCalibrationRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *sample,
            void *handle)
        {

            DrillingCalibrationRequest_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DrillingCalibrationRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *dst,
            const DrillingCalibrationRequest *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::control::DrillingCalibrationRequestPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DrillingCalibrationRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        DrillingCalibrationRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingCalibrationRequest *sample, 
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

                if(!DataTypes::TimePlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Time*) &sample->timestamp,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->differentialPressureProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->differentialPressureIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueIntegral)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        DrillingCalibrationRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *sample,
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

                    nec::control::DrillingCalibrationRequest_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->differentialPressureProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->differentialPressureIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueIntegral)) {
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
        DrillingCalibrationRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingCalibrationRequest *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            DrillingCalibrationRequestPlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                DrillingCalibrationRequestPlugin_get_serialized_sample_size(
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

            result = nec::control::DrillingCalibrationRequestPlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        DrillingCalibrationRequestPlugin_deserialize_from_cdr_buffer(
            DrillingCalibrationRequest *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            DrillingCalibrationRequest_finalize_optional_members(sample, RTI_TRUE);
            return DrillingCalibrationRequestPlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        DrillingCalibrationRequestPlugin_data_to_string(
            const DrillingCalibrationRequest *sample,
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

            if (!DrillingCalibrationRequestPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!DrillingCalibrationRequestPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                DrillingCalibrationRequest_get_typecode(), 
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
        DrillingCalibrationRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "DrillingCalibrationRequestPlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::control::DrillingCalibrationRequestPlugin_deserialize_sample( 
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
                    "DrillingCalibrationRequest");

            }

            return result;

        }

        RTIBool DrillingCalibrationRequestPlugin_skip(
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
        DrillingCalibrationRequestPlugin_get_serialized_sample_max_size_ex(
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
        DrillingCalibrationRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillingCalibrationRequestPlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        DrillingCalibrationRequestPlugin_get_serialized_sample_min_size(
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
        DrillingCalibrationRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingCalibrationRequest * sample) 
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

            current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Time*) &sample->timestamp);

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        DrillingCalibrationRequestPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool 
        DrillingCalibrationRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingCalibrationRequest *sample, 
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

        RTIBool DrillingCalibrationRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *sample, 
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

        RTIBool DrillingCalibrationRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::control::DrillingCalibrationRequestPlugin_deserialize_key_sample(
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
        DrillingCalibrationRequestPlugin_get_serialized_key_max_size_ex(
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
        DrillingCalibrationRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillingCalibrationRequestPlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        DrillingCalibrationRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *sample,
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
                return RTI_FALSE;
            }       

            if(deserialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return RTI_TRUE;
        }

        RTIBool 
        DrillingCalibrationRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequestKeyHolder *dst, 
            const DrillingCalibrationRequest *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        DrillingCalibrationRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *dst, const
            DrillingCalibrationRequestKeyHolder *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   
            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        DrillingCalibrationRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingCalibrationRequest *instance)
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

            if (!nec::control::DrillingCalibrationRequestPlugin_serialize_key(
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

                size = (int)nec::control::DrillingCalibrationRequestPlugin_get_serialized_sample_size(
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
                if (!nec::control::DrillingCalibrationRequestPlugin_serialize_key(
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
        DrillingCalibrationRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;
            DrillingCalibrationRequest * sample=NULL;

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

            sample = (DrillingCalibrationRequest *)
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

            if (!nec::control::DrillingCalibrationRequestPlugin_instance_to_keyhash(
                endpoint_data, keyhash, sample)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DrillingCalibrationRequestPlugin_new(void) 
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
            nec::control::DrillingCalibrationRequestPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::control::DrillingCalibrationRequestPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::control::DrillingCalibrationRequestPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::control::DrillingCalibrationRequestPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::control::DrillingCalibrationRequestPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DrillingCalibrationRequestPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DrillingCalibrationRequestPlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            nec::control::DrillingCalibrationRequestPlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            nec::control::DrillingCalibrationRequestPlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::control::DrillingCalibrationRequestPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            nec::control::DrillingCalibrationRequestPlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DrillingCalibrationRequestPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DrillingCalibrationRequestPlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::control::DrillingCalibrationRequestPlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::control::DrillingCalibrationRequestPlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            nec::control::DrillingCalibrationRequestPlugin_serialize_key;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::control::DrillingCalibrationRequestPlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            nec::control::DrillingCalibrationRequestPlugin_deserialize_key_sample;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::control::DrillingCalibrationRequestPlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::control::DrillingCalibrationRequestPlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DrillingCalibrationRequestPlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DrillingCalibrationRequestPlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::control::DrillingCalibrationRequestPlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::control::DrillingCalibrationRequestPlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::control::DrillingCalibrationRequest_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DrillingCalibrationRequestPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DrillingCalibrationRequestPlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            nec::control::DrillingCalibrationRequestPlugin_get_serialized_sample_size;

            plugin->endpointTypeName = DrillingCalibrationRequestTYPENAME;

            return plugin;
        }

        void
        DrillingCalibrationRequestPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DrillingCalibrationState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DrillingCalibrationState*
        DrillingCalibrationStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            DrillingCalibrationState *sample = NULL;

            sample = new (std::nothrow) DrillingCalibrationState ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::control::DrillingCalibrationState_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        DrillingCalibrationState *
        DrillingCalibrationStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            DrillingCalibrationState *sample = NULL;

            sample = new (std::nothrow) DrillingCalibrationState ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::control::DrillingCalibrationState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        DrillingCalibrationState *
        DrillingCalibrationStatePluginSupport_create_data(void)
        {
            return nec::control::DrillingCalibrationStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        DrillingCalibrationStatePluginSupport_destroy_data_w_params(
            DrillingCalibrationState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            nec::control::DrillingCalibrationState_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillingCalibrationStatePluginSupport_destroy_data_ex(
            DrillingCalibrationState *sample,RTIBool deallocate_pointers) {

            nec::control::DrillingCalibrationState_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillingCalibrationStatePluginSupport_destroy_data(
            DrillingCalibrationState *sample) {

            nec::control::DrillingCalibrationStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        DrillingCalibrationStatePluginSupport_copy_data(
            DrillingCalibrationState *dst,
            const DrillingCalibrationState *src)
        {
            return nec::control::DrillingCalibrationState_copy(dst,(const DrillingCalibrationState*) src);
        }

        void 
        DrillingCalibrationStatePluginSupport_print_data(
            const DrillingCalibrationState *sample,
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

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timestamp, "timestamp", indent_level + 1);

            RTICdrType_printDouble(
                &sample->wobProportional, "wobProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->wobIntegral, "wobIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->differentialPressureProportional, "differentialPressureProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->differentialPressureIntegral, "differentialPressureIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueProportional, "torqueProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torqueIntegral, "torqueIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minWobProportional, "minWobProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxWobProportional, "maxWobProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minWobIntegral, "minWobIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxWobIntegral, "maxWobIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minDifferentialPressureProportional, "minDifferentialPressureProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxDifferentialPressureProportional, "maxDifferentialPressureProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minDifferentialPressureIntegral, "minDifferentialPressureIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxDifferentialPressureIntegral, "maxDifferentialPressureIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minTorqueProportional, "minTorqueProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxTorqueProportional, "maxTorqueProportional", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minTorqueIntegral, "minTorqueIntegral", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxTorqueIntegral, "maxTorqueIntegral", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->ropMode, "ropMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->wobMode, "wobMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->differentialPressureMode, "differentialPressureMode", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->torqueMode, "torqueMode", indent_level + 1);    

        }
        DrillingCalibrationState *
        DrillingCalibrationStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
            DrillingCalibrationState *key = NULL;

            key = new (std::nothrow) DrillingCalibrationStateKeyHolder ;

            nec::control::DrillingCalibrationState_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        DrillingCalibrationState *
        DrillingCalibrationStatePluginSupport_create_key(void)
        {
            return  nec::control::DrillingCalibrationStatePluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        DrillingCalibrationStatePluginSupport_destroy_key_ex(
            DrillingCalibrationStateKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::control::DrillingCalibrationState_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;

        }

        void 
        DrillingCalibrationStatePluginSupport_destroy_key(
            DrillingCalibrationStateKeyHolder *key) {

            nec::control::DrillingCalibrationStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DrillingCalibrationStatePlugin_on_participant_attached(
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
        DrillingCalibrationStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        DrillingCalibrationStatePlugin_on_endpoint_attached(
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
                nec::control::DrillingCalibrationStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::control::DrillingCalibrationStatePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::control::DrillingCalibrationStatePluginSupport_create_key ,            
                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::control::DrillingCalibrationStatePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 
            serializedKeyMaxSize =  nec::control::DrillingCalibrationStatePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,endpoint_info,serializedKeyMaxSize))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = nec::control::DrillingCalibrationStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::control::DrillingCalibrationStatePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    nec::control::DrillingCalibrationStatePlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        DrillingCalibrationStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DrillingCalibrationStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *sample,
            void *handle)
        {

            DrillingCalibrationState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DrillingCalibrationStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *dst,
            const DrillingCalibrationState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::control::DrillingCalibrationStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DrillingCalibrationStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        DrillingCalibrationStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingCalibrationState *sample, 
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

                if(!DataTypes::TimePlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Time*) &sample->timestamp,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->differentialPressureProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->differentialPressureIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minWobProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxWobProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minWobIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxWobIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minDifferentialPressureProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxDifferentialPressureProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minDifferentialPressureIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxDifferentialPressureIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minTorqueProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxTorqueProportional)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minTorqueIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxTorqueIntegral)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->ropMode)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->wobMode)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->differentialPressureMode)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->torqueMode)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        DrillingCalibrationStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *sample,
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

                    nec::control::DrillingCalibrationState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->differentialPressureProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->differentialPressureIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minWobProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxWobProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minWobIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxWobIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minDifferentialPressureProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxDifferentialPressureProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minDifferentialPressureIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxDifferentialPressureIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minTorqueProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxTorqueProportional)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minTorqueIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxTorqueIntegral)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->ropMode)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->wobMode)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->differentialPressureMode)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->torqueMode)) {
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
        DrillingCalibrationStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingCalibrationState *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            DrillingCalibrationStatePlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                DrillingCalibrationStatePlugin_get_serialized_sample_size(
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

            result = nec::control::DrillingCalibrationStatePlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        DrillingCalibrationStatePlugin_deserialize_from_cdr_buffer(
            DrillingCalibrationState *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            DrillingCalibrationState_finalize_optional_members(sample, RTI_TRUE);
            return DrillingCalibrationStatePlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        DrillingCalibrationStatePlugin_data_to_string(
            const DrillingCalibrationState *sample,
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

            if (!DrillingCalibrationStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!DrillingCalibrationStatePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                DrillingCalibrationState_get_typecode(), 
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
        DrillingCalibrationStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "DrillingCalibrationStatePlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::control::DrillingCalibrationStatePlugin_deserialize_sample( 
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
                    "DrillingCalibrationState");

            }

            return result;

        }

        RTIBool DrillingCalibrationStatePlugin_skip(
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
                if (!RTICdrStream_skipBoolean (stream)) {
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
        DrillingCalibrationStatePlugin_get_serialized_sample_max_size_ex(
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

            current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
        DrillingCalibrationStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillingCalibrationStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        DrillingCalibrationStatePlugin_get_serialized_sample_min_size(
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
            current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
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
        DrillingCalibrationStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingCalibrationState * sample) 
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

            current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Time*) &sample->timestamp);

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        DrillingCalibrationStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool 
        DrillingCalibrationStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingCalibrationState *sample, 
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

        RTIBool DrillingCalibrationStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *sample, 
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

        RTIBool DrillingCalibrationStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::control::DrillingCalibrationStatePlugin_deserialize_key_sample(
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
        DrillingCalibrationStatePlugin_get_serialized_key_max_size_ex(
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
        DrillingCalibrationStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillingCalibrationStatePlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        DrillingCalibrationStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *sample,
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

                if (!RTICdrStream_skipBoolean (stream)) {
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
                return RTI_FALSE;
            }       

            if(deserialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return RTI_TRUE;
        }

        RTIBool 
        DrillingCalibrationStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationStateKeyHolder *dst, 
            const DrillingCalibrationState *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        DrillingCalibrationStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *dst, const
            DrillingCalibrationStateKeyHolder *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   
            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        DrillingCalibrationStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingCalibrationState *instance)
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

            if (!nec::control::DrillingCalibrationStatePlugin_serialize_key(
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

                size = (int)nec::control::DrillingCalibrationStatePlugin_get_serialized_sample_size(
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
                if (!nec::control::DrillingCalibrationStatePlugin_serialize_key(
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
        DrillingCalibrationStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;
            DrillingCalibrationState * sample=NULL;

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

            sample = (DrillingCalibrationState *)
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

            if (!nec::control::DrillingCalibrationStatePlugin_instance_to_keyhash(
                endpoint_data, keyhash, sample)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DrillingCalibrationStatePlugin_new(void) 
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
            nec::control::DrillingCalibrationStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::control::DrillingCalibrationStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::control::DrillingCalibrationStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::control::DrillingCalibrationStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::control::DrillingCalibrationStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DrillingCalibrationStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DrillingCalibrationStatePlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            nec::control::DrillingCalibrationStatePlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            nec::control::DrillingCalibrationStatePlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::control::DrillingCalibrationStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            nec::control::DrillingCalibrationStatePlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DrillingCalibrationStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DrillingCalibrationStatePlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::control::DrillingCalibrationStatePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::control::DrillingCalibrationStatePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            nec::control::DrillingCalibrationStatePlugin_serialize_key;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::control::DrillingCalibrationStatePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            nec::control::DrillingCalibrationStatePlugin_deserialize_key_sample;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::control::DrillingCalibrationStatePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::control::DrillingCalibrationStatePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DrillingCalibrationStatePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DrillingCalibrationStatePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::control::DrillingCalibrationStatePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::control::DrillingCalibrationStatePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::control::DrillingCalibrationState_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DrillingCalibrationStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DrillingCalibrationStatePlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            nec::control::DrillingCalibrationStatePlugin_get_serialized_sample_size;

            plugin->endpointTypeName = DrillingCalibrationStateTYPENAME;

            return plugin;
        }

        void
        DrillingCalibrationStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace control  */
} /* namespace nec  */
#undef RTI_CDR_CURRENT_SUBMODULE 
