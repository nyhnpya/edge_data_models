
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
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

#include "roptimizer_configurationPlugin.h"

namespace Shell {
    namespace Hmi {

        /* ----------------------------------------------------------------------------
        *  Type RoptimizerConfiguration
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        RoptimizerConfiguration*
        RoptimizerConfigurationPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            RoptimizerConfiguration *sample = NULL;

            sample = new (std::nothrow) RoptimizerConfiguration ;
            if (sample == NULL) {
                return NULL;
            }

            if (!Shell::Hmi::RoptimizerConfiguration_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        RoptimizerConfiguration *
        RoptimizerConfigurationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            RoptimizerConfiguration *sample = NULL;

            sample = new (std::nothrow) RoptimizerConfiguration ;

            if(sample == NULL) {
                return NULL;
            }

            if (!Shell::Hmi::RoptimizerConfiguration_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        RoptimizerConfiguration *
        RoptimizerConfigurationPluginSupport_create_data(void)
        {
            return Shell::Hmi::RoptimizerConfigurationPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        RoptimizerConfigurationPluginSupport_destroy_data_w_params(
            RoptimizerConfiguration *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            Shell::Hmi::RoptimizerConfiguration_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        RoptimizerConfigurationPluginSupport_destroy_data_ex(
            RoptimizerConfiguration *sample,RTIBool deallocate_pointers) {

            Shell::Hmi::RoptimizerConfiguration_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        RoptimizerConfigurationPluginSupport_destroy_data(
            RoptimizerConfiguration *sample) {

            Shell::Hmi::RoptimizerConfigurationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        RoptimizerConfigurationPluginSupport_copy_data(
            RoptimizerConfiguration *dst,
            const RoptimizerConfiguration *src)
        {
            return Shell::Hmi::RoptimizerConfiguration_copy(dst,(const RoptimizerConfiguration*) src);
        }

        void 
        RoptimizerConfigurationPluginSupport_print_data(
            const RoptimizerConfiguration *sample,
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

            RTICdrType_printLong(
                &sample->steadyStateWindow, "steadyStateWindow", indent_level + 1);    

            RTICdrType_printLong(
                &sample->steadyStateMin, "steadyStateMin", indent_level + 1);    

            RTICdrType_printLong(
                &sample->rpmStepSize, "rpmStepSize", indent_level + 1);    

            RTICdrType_printLong(
                &sample->ropStepSize, "ropStepSize", indent_level + 1);    

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        RoptimizerConfigurationPlugin_on_participant_attached(
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
        RoptimizerConfigurationPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        RoptimizerConfigurationPlugin_on_endpoint_attached(
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
                Shell::Hmi::RoptimizerConfigurationPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                Shell::Hmi::RoptimizerConfigurationPluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = Shell::Hmi::RoptimizerConfigurationPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    Shell::Hmi::RoptimizerConfigurationPlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    Shell::Hmi::RoptimizerConfigurationPlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        RoptimizerConfigurationPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        RoptimizerConfigurationPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerConfiguration *sample,
            void *handle)
        {

            RoptimizerConfiguration_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        RoptimizerConfigurationPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerConfiguration *dst,
            const RoptimizerConfiguration *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return Shell::Hmi::RoptimizerConfigurationPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        RoptimizerConfigurationPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        RoptimizerConfigurationPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RoptimizerConfiguration *sample, 
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

                if (!RTICdrStream_serializeLong(
                    stream, &sample->steadyStateWindow)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeLong(
                    stream, &sample->steadyStateMin)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeLong(
                    stream, &sample->rpmStepSize)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeLong(
                    stream, &sample->ropStepSize)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        RoptimizerConfigurationPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerConfiguration *sample,
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

                    Shell::Hmi::RoptimizerConfiguration_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                    if (!RTICdrStream_deserializeLong(
                        stream, &sample->steadyStateWindow)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeLong(
                        stream, &sample->steadyStateMin)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeLong(
                        stream, &sample->rpmStepSize)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeLong(
                        stream, &sample->ropStepSize)) {
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
        RoptimizerConfigurationPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RoptimizerConfiguration *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            RoptimizerConfigurationPlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                RoptimizerConfigurationPlugin_get_serialized_sample_size(
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

            result = Shell::Hmi::RoptimizerConfigurationPlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        RoptimizerConfigurationPlugin_deserialize_from_cdr_buffer(
            RoptimizerConfiguration *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            RoptimizerConfiguration_finalize_optional_members(sample, RTI_TRUE);
            return RoptimizerConfigurationPlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        RoptimizerConfigurationPlugin_data_to_string(
            const RoptimizerConfiguration *sample,
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

            if (!RoptimizerConfigurationPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!RoptimizerConfigurationPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                RoptimizerConfiguration_get_typecode(), 
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
        RoptimizerConfigurationPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerConfiguration **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "RoptimizerConfigurationPlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= Shell::Hmi::RoptimizerConfigurationPlugin_deserialize_sample( 
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
                    "RoptimizerConfiguration");

            }

            return result;

        }

        RTIBool RoptimizerConfigurationPlugin_skip(
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

                if (!RTICdrStream_skipLong (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipLong (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipLong (stream)) {
                    goto fin; 
                }
                if (!RTICdrStream_skipLong (stream)) {
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
        RoptimizerConfigurationPlugin_get_serialized_sample_max_size_ex(
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

            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                current_alignment);

            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return  current_alignment - initial_alignment;
        }

        unsigned int 
        RoptimizerConfigurationPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RoptimizerConfigurationPlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        RoptimizerConfigurationPlugin_get_serialized_sample_min_size(
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

            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                current_alignment);
            current_alignment +=RTICdrType_getLongMaxSizeSerialized(
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
        RoptimizerConfigurationPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RoptimizerConfiguration * sample) 
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

            current_alignment += RTICdrType_getLongMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getLongMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getLongMaxSizeSerialized(
                PRESTypePluginDefaultEndpointData_getAlignment(
                    endpoint_data, current_alignment));

            current_alignment += RTICdrType_getLongMaxSizeSerialized(
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
        RoptimizerConfigurationPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool 
        RoptimizerConfigurationPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RoptimizerConfiguration *sample, 
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

                if (!Shell::Hmi::RoptimizerConfigurationPlugin_serialize(
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

        RTIBool RoptimizerConfigurationPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerConfiguration *sample, 
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

                    if (!Shell::Hmi::RoptimizerConfigurationPlugin_deserialize_sample(
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

        RTIBool RoptimizerConfigurationPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerConfiguration **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= Shell::Hmi::RoptimizerConfigurationPlugin_deserialize_key_sample(
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
        RoptimizerConfigurationPlugin_get_serialized_key_max_size_ex(
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

            current_alignment += Shell::Hmi::RoptimizerConfigurationPlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        unsigned int
        RoptimizerConfigurationPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RoptimizerConfigurationPlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        RoptimizerConfigurationPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerConfiguration *sample,
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

                if (!Shell::Hmi::RoptimizerConfigurationPlugin_deserialize_sample(
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
        struct PRESTypePlugin *RoptimizerConfigurationPlugin_new(void) 
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
            Shell::Hmi::RoptimizerConfigurationPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            Shell::Hmi::RoptimizerConfigurationPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            Shell::Hmi::RoptimizerConfigurationPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            Shell::Hmi::RoptimizerConfigurationPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            Shell::Hmi::RoptimizerConfigurationPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            RoptimizerConfigurationPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            RoptimizerConfigurationPlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            RoptimizerConfiguration_finalize_optional_members;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            Shell::Hmi::RoptimizerConfigurationPlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            Shell::Hmi::RoptimizerConfigurationPlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            Shell::Hmi::RoptimizerConfigurationPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            Shell::Hmi::RoptimizerConfigurationPlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            RoptimizerConfigurationPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            RoptimizerConfigurationPlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            Shell::Hmi::RoptimizerConfigurationPlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::RoptimizerConfiguration_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            RoptimizerConfigurationPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            RoptimizerConfigurationPlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            Shell::Hmi::RoptimizerConfigurationPlugin_get_serialized_sample_size;

            plugin->endpointTypeName = RoptimizerConfigurationTYPENAME;

            return plugin;
        }

        void
        RoptimizerConfigurationPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type RoptimizerSteadyState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        RoptimizerSteadyState*
        RoptimizerSteadyStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            RoptimizerSteadyState *sample = NULL;

            sample = new (std::nothrow) RoptimizerSteadyState ;
            if (sample == NULL) {
                return NULL;
            }

            if (!Shell::Hmi::RoptimizerSteadyState_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        RoptimizerSteadyState *
        RoptimizerSteadyStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            RoptimizerSteadyState *sample = NULL;

            sample = new (std::nothrow) RoptimizerSteadyState ;

            if(sample == NULL) {
                return NULL;
            }

            if (!Shell::Hmi::RoptimizerSteadyState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        RoptimizerSteadyState *
        RoptimizerSteadyStatePluginSupport_create_data(void)
        {
            return Shell::Hmi::RoptimizerSteadyStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        RoptimizerSteadyStatePluginSupport_destroy_data_w_params(
            RoptimizerSteadyState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            Shell::Hmi::RoptimizerSteadyState_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        RoptimizerSteadyStatePluginSupport_destroy_data_ex(
            RoptimizerSteadyState *sample,RTIBool deallocate_pointers) {

            Shell::Hmi::RoptimizerSteadyState_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        RoptimizerSteadyStatePluginSupport_destroy_data(
            RoptimizerSteadyState *sample) {

            Shell::Hmi::RoptimizerSteadyStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        RoptimizerSteadyStatePluginSupport_copy_data(
            RoptimizerSteadyState *dst,
            const RoptimizerSteadyState *src)
        {
            return Shell::Hmi::RoptimizerSteadyState_copy(dst,(const RoptimizerSteadyState*) src);
        }

        void 
        RoptimizerSteadyStatePluginSupport_print_data(
            const RoptimizerSteadyState *sample,
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

            RTICdrType_printBoolean(
                &sample->rpmSteadyState, "rpmSteadyState", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->ropSteadyState, "ropSteadyState", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->wobSteadyState, "wobSteadyState", indent_level + 1);    

            RTICdrType_printBoolean(
                &sample->torqueSteadyState, "torqueSteadyState", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->bitWear, "bitWear", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->mse, "mse", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->power, "power", indent_level + 1);    

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        RoptimizerSteadyStatePlugin_on_participant_attached(
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
        RoptimizerSteadyStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        RoptimizerSteadyStatePlugin_on_endpoint_attached(
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
                Shell::Hmi::RoptimizerSteadyStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                Shell::Hmi::RoptimizerSteadyStatePluginSupport_destroy_data,
                NULL , NULL );

            if (epd == NULL) {
                return NULL;
            } 

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = Shell::Hmi::RoptimizerSteadyStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    Shell::Hmi::RoptimizerSteadyStatePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    Shell::Hmi::RoptimizerSteadyStatePlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        RoptimizerSteadyStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        RoptimizerSteadyStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerSteadyState *sample,
            void *handle)
        {

            RoptimizerSteadyState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        RoptimizerSteadyStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerSteadyState *dst,
            const RoptimizerSteadyState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return Shell::Hmi::RoptimizerSteadyStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        RoptimizerSteadyStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        RoptimizerSteadyStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RoptimizerSteadyState *sample, 
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

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->rpmSteadyState)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->ropSteadyState)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->wobSteadyState)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeBoolean(
                    stream, &sample->torqueSteadyState)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->bitWear)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->mse)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->power)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        RoptimizerSteadyStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerSteadyState *sample,
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

                    Shell::Hmi::RoptimizerSteadyState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->rpmSteadyState)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->ropSteadyState)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->wobSteadyState)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeBoolean(
                        stream, &sample->torqueSteadyState)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->bitWear)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->mse)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->power)) {
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
        RoptimizerSteadyStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RoptimizerSteadyState *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            RoptimizerSteadyStatePlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                RoptimizerSteadyStatePlugin_get_serialized_sample_size(
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

            result = Shell::Hmi::RoptimizerSteadyStatePlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        RoptimizerSteadyStatePlugin_deserialize_from_cdr_buffer(
            RoptimizerSteadyState *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            RoptimizerSteadyState_finalize_optional_members(sample, RTI_TRUE);
            return RoptimizerSteadyStatePlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        RoptimizerSteadyStatePlugin_data_to_string(
            const RoptimizerSteadyState *sample,
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

            if (!RoptimizerSteadyStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!RoptimizerSteadyStatePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                RoptimizerSteadyState_get_typecode(), 
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
        RoptimizerSteadyStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerSteadyState **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "RoptimizerSteadyStatePlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= Shell::Hmi::RoptimizerSteadyStatePlugin_deserialize_sample( 
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
                    "RoptimizerSteadyState");

            }

            return result;

        }

        RTIBool RoptimizerSteadyStatePlugin_skip(
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
        RoptimizerSteadyStatePlugin_get_serialized_sample_max_size_ex(
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

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return  current_alignment - initial_alignment;
        }

        unsigned int 
        RoptimizerSteadyStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RoptimizerSteadyStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        RoptimizerSteadyStatePlugin_get_serialized_sample_min_size(
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
        RoptimizerSteadyStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RoptimizerSteadyState * sample) 
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

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        RoptimizerSteadyStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool 
        RoptimizerSteadyStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RoptimizerSteadyState *sample, 
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

                if (!Shell::Hmi::RoptimizerSteadyStatePlugin_serialize(
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

        RTIBool RoptimizerSteadyStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerSteadyState *sample, 
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

                    if (!Shell::Hmi::RoptimizerSteadyStatePlugin_deserialize_sample(
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

        RTIBool RoptimizerSteadyStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerSteadyState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= Shell::Hmi::RoptimizerSteadyStatePlugin_deserialize_key_sample(
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
        RoptimizerSteadyStatePlugin_get_serialized_key_max_size_ex(
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

            current_alignment += Shell::Hmi::RoptimizerSteadyStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        unsigned int
        RoptimizerSteadyStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RoptimizerSteadyStatePlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        RoptimizerSteadyStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RoptimizerSteadyState *sample,
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

                if (!Shell::Hmi::RoptimizerSteadyStatePlugin_deserialize_sample(
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
        struct PRESTypePlugin *RoptimizerSteadyStatePlugin_new(void) 
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
            Shell::Hmi::RoptimizerSteadyStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            Shell::Hmi::RoptimizerSteadyStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            Shell::Hmi::RoptimizerSteadyStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            Shell::Hmi::RoptimizerSteadyStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            Shell::Hmi::RoptimizerSteadyStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            RoptimizerSteadyStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            RoptimizerSteadyStatePlugin_destroy_sample;
            plugin->finalizeOptionalMembersFnc =
            (PRESTypePluginFinalizeOptionalMembersFunction)
            RoptimizerSteadyState_finalize_optional_members;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            Shell::Hmi::RoptimizerSteadyStatePlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            Shell::Hmi::RoptimizerSteadyStatePlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            Shell::Hmi::RoptimizerSteadyStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            Shell::Hmi::RoptimizerSteadyStatePlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            RoptimizerSteadyStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            RoptimizerSteadyStatePlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            Shell::Hmi::RoptimizerSteadyStatePlugin_get_key_kind;

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
            plugin->typeCode =  (struct RTICdrTypeCode *)Shell::Hmi::RoptimizerSteadyState_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            RoptimizerSteadyStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            RoptimizerSteadyStatePlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            Shell::Hmi::RoptimizerSteadyStatePlugin_get_serialized_sample_size;

            plugin->endpointTypeName = RoptimizerSteadyStateTYPENAME;

            return plugin;
        }

        void
        RoptimizerSteadyStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace Hmi  */
} /* namespace Shell  */
#undef RTI_CDR_CURRENT_SUBMODULE 
