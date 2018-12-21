
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill.idl using "rtiddsgen".
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

#include "drillPlugin.h"

namespace plc {
    namespace process {

        /* ----------------------------------------------------------------------------
        *  Type DrillRequest
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DrillRequest*
        DrillRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            DrillRequest *sample = NULL;

            sample = new (std::nothrow) DrillRequest ;
            if (sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillRequest_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        DrillRequest *
        DrillRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            DrillRequest *sample = NULL;

            sample = new (std::nothrow) DrillRequest ;

            if(sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        DrillRequest *
        DrillRequestPluginSupport_create_data(void)
        {
            return plc::process::DrillRequestPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        DrillRequestPluginSupport_destroy_data_w_params(
            DrillRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            plc::process::DrillRequest_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillRequestPluginSupport_destroy_data_ex(
            DrillRequest *sample,RTIBool deallocate_pointers) {

            plc::process::DrillRequest_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillRequestPluginSupport_destroy_data(
            DrillRequest *sample) {

            plc::process::DrillRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        DrillRequestPluginSupport_copy_data(
            DrillRequest *dst,
            const DrillRequest *src)
        {
            return plc::process::DrillRequest_copy(dst,(const DrillRequest*) src);
        }

        void 
        DrillRequestPluginSupport_print_data(
            const DrillRequest *sample,
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
        DrillRequestPlugin_on_participant_attached(
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
        DrillRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        DrillRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *containerPluginContext)
        {
            PRESTypePluginEndpointData epd = NULL;

            unsigned int serializedSampleMaxSize;

            if (top_level_registration) {} /* To avoid warnings */
            if (containerPluginContext) {} /* To avoid warnings */

            epd = PRESTypePluginDefaultEndpointData_new(
                participant_data,
                endpoint_info,
                (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                plc::process::DrillRequestPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                plc::process::DrillRequestPluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = plc::process::DrillRequestPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    plc::process::DrillRequestPlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    plc::process::DrillRequestPlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        DrillRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DrillRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample,
            void *handle)
        {

            DrillRequest_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DrillRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *dst,
            const DrillRequest *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return plc::process::DrillRequestPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DrillRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        DrillRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillRequest *sample, 
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

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->ropLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->diffPressureLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueLimit)) {
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
                    stream, &sample->diffPressureMode)) {
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
        DrillRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample,
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

                    plc::process::DrillRequest_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->ropLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->diffPressureLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueLimit)) {
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
                        stream, &sample->diffPressureMode)) {
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
        DrillRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillRequest *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            DrillRequestPlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                DrillRequestPlugin_get_serialized_sample_size(
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

            result = plc::process::DrillRequestPlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        DrillRequestPlugin_deserialize_from_cdr_buffer(
            DrillRequest *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            DrillRequest_finalize_optional_members(sample, RTI_TRUE);
            return DrillRequestPlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        DrillRequestPlugin_data_to_string(
            const DrillRequest *sample,
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

            if (!DrillRequestPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!DrillRequestPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                DrillRequest_get_typecode(), 
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
        DrillRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "DrillRequestPlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= plc::process::DrillRequestPlugin_deserialize_sample( 
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
                    "DrillRequest");

            }

            return result;

        }

        RTIBool DrillRequestPlugin_skip(
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
        DrillRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (endpoint_data) {} /* To avoid warnings */ 
            if (overflow) {} /* To avoid warnings */

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

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
        DrillRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillRequestPlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        DrillRequestPlugin_get_serialized_sample_min_size(
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
        DrillRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillRequest * sample) 
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
        DrillRequestPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool 
        DrillRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillRequest *sample, 
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

                if (!plc::process::DrillRequestPlugin_serialize(
                    endpoint_data,
                    sample,
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

        RTIBool DrillRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample, 
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

                    if (!plc::process::DrillRequestPlugin_deserialize_sample(
                        endpoint_data, sample, stream, 
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

        RTIBool DrillRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= plc::process::DrillRequestPlugin_deserialize_key_sample(
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
        DrillRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (endpoint_data) {} /* To avoid warnings */
            if (overflow) {} /* To avoid warnings */

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

            current_alignment += plc::process::DrillRequestPlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        unsigned int
        DrillRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillRequestPlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        DrillRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos)
        {
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;

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

                if (!plc::process::DrillRequestPlugin_deserialize_sample(
                    endpoint_data, sample, stream, RTI_FALSE, 
                    RTI_TRUE, endpoint_plugin_qos)) {
                    return RTI_FALSE;
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

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DrillRequestPlugin_new(void) 
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
            plc::process::DrillRequestPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            plc::process::DrillRequestPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            plc::process::DrillRequestPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            plc::process::DrillRequestPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            plc::process::DrillRequestPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DrillRequestPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DrillRequestPlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            plc::process::DrillRequestPlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            plc::process::DrillRequestPlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            plc::process::DrillRequestPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            plc::process::DrillRequestPlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DrillRequestPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DrillRequestPlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            plc::process::DrillRequestPlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)plc::process::DrillRequest_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DrillRequestPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DrillRequestPlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            plc::process::DrillRequestPlugin_get_serialized_sample_size;

            plugin->endpointTypeName = DrillRequestTYPENAME;

            return plugin;
        }

        void
        DrillRequestPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DrillState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DrillState*
        DrillStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            DrillState *sample = NULL;

            sample = new (std::nothrow) DrillState ;
            if (sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillState_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        DrillState *
        DrillStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            DrillState *sample = NULL;

            sample = new (std::nothrow) DrillState ;

            if(sample == NULL) {
                return NULL;
            }

            if (!plc::process::DrillState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        DrillState *
        DrillStatePluginSupport_create_data(void)
        {
            return plc::process::DrillStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        DrillStatePluginSupport_destroy_data_w_params(
            DrillState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            plc::process::DrillState_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillStatePluginSupport_destroy_data_ex(
            DrillState *sample,RTIBool deallocate_pointers) {

            plc::process::DrillState_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        DrillStatePluginSupport_destroy_data(
            DrillState *sample) {

            plc::process::DrillStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        DrillStatePluginSupport_copy_data(
            DrillState *dst,
            const DrillState *src)
        {
            return plc::process::DrillState_copy(dst,(const DrillState*) src);
        }

        void 
        DrillStatePluginSupport_print_data(
            const DrillState *sample,
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
        DrillStatePlugin_on_participant_attached(
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
        DrillStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        DrillStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *containerPluginContext)
        {
            PRESTypePluginEndpointData epd = NULL;

            unsigned int serializedSampleMaxSize;

            if (top_level_registration) {} /* To avoid warnings */
            if (containerPluginContext) {} /* To avoid warnings */

            epd = PRESTypePluginDefaultEndpointData_new(
                participant_data,
                endpoint_info,
                (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                plc::process::DrillStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                plc::process::DrillStatePluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = plc::process::DrillStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    plc::process::DrillStatePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    plc::process::DrillStatePlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        DrillStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DrillStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample,
            void *handle)
        {

            DrillState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DrillStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *dst,
            const DrillState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return plc::process::DrillStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DrillStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        DrillStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillState *sample, 
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

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->ropActual)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobActual)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->diffPressureActual)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueActual)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->ropMachineLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobMachineLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->diffPressureMachineLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueMachineLimit)) {
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
                    stream, &sample->diffPressureMode)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->torqueMode)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->ropLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->wobLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->diffPressureLimit)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torqueLimit)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        DrillStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample,
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

                    plc::process::DrillState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->ropActual)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobActual)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->diffPressureActual)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueActual)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->ropMachineLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobMachineLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->diffPressureMachineLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueMachineLimit)) {
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
                        stream, &sample->diffPressureMode)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->torqueMode)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->ropLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->wobLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->diffPressureLimit)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torqueLimit)) {
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
        DrillStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillState *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            DrillStatePlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                DrillStatePlugin_get_serialized_sample_size(
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

            result = plc::process::DrillStatePlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        DrillStatePlugin_deserialize_from_cdr_buffer(
            DrillState *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            DrillState_finalize_optional_members(sample, RTI_TRUE);
            return DrillStatePlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        DrillStatePlugin_data_to_string(
            const DrillState *sample,
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

            if (!DrillStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!DrillStatePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                DrillState_get_typecode(), 
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
        DrillStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillState **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "DrillStatePlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= plc::process::DrillStatePlugin_deserialize_sample( 
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
                    "DrillState");

            }

            return result;

        }

        RTIBool DrillStatePlugin_skip(
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
        DrillStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (endpoint_data) {} /* To avoid warnings */ 
            if (overflow) {} /* To avoid warnings */

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

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
        DrillStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        DrillStatePlugin_get_serialized_sample_min_size(
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
        DrillStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillState * sample) 
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
        DrillStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool 
        DrillStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillState *sample, 
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

                if (!plc::process::DrillStatePlugin_serialize(
                    endpoint_data,
                    sample,
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

        RTIBool DrillStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample, 
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

                    if (!plc::process::DrillStatePlugin_deserialize_sample(
                        endpoint_data, sample, stream, 
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

        RTIBool DrillStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= plc::process::DrillStatePlugin_deserialize_key_sample(
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
        DrillStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            unsigned int encapsulation_size = current_alignment;

            if (endpoint_data) {} /* To avoid warnings */
            if (overflow) {} /* To avoid warnings */

            if (include_encapsulation) {

                if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                    return 1;
                }
                RTICdrStream_getEncapsulationSize(encapsulation_size);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
            }

            current_alignment += plc::process::DrillStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        unsigned int
        DrillStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = DrillStatePlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        DrillStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos)
        {
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;

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

                if (!plc::process::DrillStatePlugin_deserialize_sample(
                    endpoint_data, sample, stream, RTI_FALSE, 
                    RTI_TRUE, endpoint_plugin_qos)) {
                    return RTI_FALSE;
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

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DrillStatePlugin_new(void) 
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
            plc::process::DrillStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            plc::process::DrillStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            plc::process::DrillStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            plc::process::DrillStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            plc::process::DrillStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DrillStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DrillStatePlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            plc::process::DrillStatePlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            plc::process::DrillStatePlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            plc::process::DrillStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            plc::process::DrillStatePlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DrillStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DrillStatePlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            plc::process::DrillStatePlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)plc::process::DrillState_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DrillStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DrillStatePlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            plc::process::DrillStatePlugin_get_serialized_sample_size;

            plugin->endpointTypeName = DrillStateTYPENAME;

            return plugin;
        }

        void
        DrillStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace process  */
} /* namespace plc  */
#undef RTI_CDR_CURRENT_SUBMODULE 
