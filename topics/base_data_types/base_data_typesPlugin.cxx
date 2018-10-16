
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from base_data_types.idl using "rtiddsgen".
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

#include "base_data_typesPlugin.h"

namespace DataTypes {

    /* ----------------------------------------------------------------------------
    *  Type Uuid
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Uuid*
    UuidPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        Uuid *sample = NULL;

        sample = new (std::nothrow) Uuid ;
        if (sample == NULL) {
            return NULL;
        }

        if (!DataTypes::Uuid_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample; 
    } 

    Uuid *
    UuidPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        Uuid *sample = NULL;

        sample = new (std::nothrow) Uuid ;

        if(sample == NULL) {
            return NULL;
        }

        if (!DataTypes::Uuid_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample; 
    }

    Uuid *
    UuidPluginSupport_create_data(void)
    {
        return DataTypes::UuidPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    UuidPluginSupport_destroy_data_w_params(
        Uuid *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        DataTypes::Uuid_finalize_w_params(sample,dealloc_params);

        delete  sample;
        sample=NULL;
    }

    void 
    UuidPluginSupport_destroy_data_ex(
        Uuid *sample,RTIBool deallocate_pointers) {

        DataTypes::Uuid_finalize_ex(sample,deallocate_pointers);

        delete  sample;
        sample=NULL;
    }

    void 
    UuidPluginSupport_destroy_data(
        Uuid *sample) {

        DataTypes::UuidPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    UuidPluginSupport_copy_data(
        Uuid *dst,
        const Uuid *src)
    {
        return DataTypes::Uuid_copy(dst,(const Uuid*) src);
    }

    void 
    UuidPluginSupport_print_data(
        const Uuid *sample,
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

        if ((*sample)==NULL) {
            RTICdrType_printString(
                NULL,"", indent_level + 1);
        } else {
            RTICdrType_printString(
                (*sample),"", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    UuidPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Uuid *dst,
        const Uuid *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return DataTypes::UuidPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    UuidPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    UuidPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Uuid *sample, 
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

            if (!RTICdrStream_serializeString(
                stream, (*sample), (36) + 1)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    UuidPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Uuid *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;

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

                DataTypes::Uuid_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                if (!RTICdrStream_deserializeStringEx(
                    stream,&(*sample), (36) + 1, RTI_FALSE)) {
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

    RTIBool UuidPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream,   
        RTIBool skip_encapsulation,
        RTIBool skip_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(skip_encapsulation) {
            if (!RTICdrStream_skipEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if (skip_sample) {

            if (!RTICdrStream_skipString (stream, (36)+1)) {
                return RTI_FALSE;
            }
        }

        if(skip_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    unsigned int 
    UuidPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (36)+1);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    UuidPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = UuidPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    UuidPlugin_get_serialized_sample_min_size(
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

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);

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
    UuidPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Uuid * sample) 
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

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), (*sample));

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    UuidPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool 
    UuidPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Uuid *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_key) {

            if (!RTICdrStream_serializeString(
                stream, (*sample), (36) + 1)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    RTIBool UuidPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Uuid *sample, 
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

                if (!RTICdrStream_deserializeStringEx(
                    stream,&(*sample), (36) + 1, RTI_FALSE)) {
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

    unsigned int
    UuidPlugin_get_serialized_key_max_size_ex(
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

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (36)+1);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    unsigned int
    UuidPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = UuidPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    UuidPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Uuid *sample,
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

            if (!RTICdrStream_deserializeStringEx(
                stream,&(*sample), (36) + 1, RTI_FALSE)) {
                return RTI_FALSE;
            }

        }

        if(deserialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type Time
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Time*
    TimePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        Time *sample = NULL;

        sample = new (std::nothrow) Time ;
        if (sample == NULL) {
            return NULL;
        }

        if (!DataTypes::Time_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample; 
    } 

    Time *
    TimePluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        Time *sample = NULL;

        sample = new (std::nothrow) Time ;

        if(sample == NULL) {
            return NULL;
        }

        if (!DataTypes::Time_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample; 
    }

    Time *
    TimePluginSupport_create_data(void)
    {
        return DataTypes::TimePluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    TimePluginSupport_destroy_data_w_params(
        Time *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        DataTypes::Time_finalize_w_params(sample,dealloc_params);

        delete  sample;
        sample=NULL;
    }

    void 
    TimePluginSupport_destroy_data_ex(
        Time *sample,RTIBool deallocate_pointers) {

        DataTypes::Time_finalize_ex(sample,deallocate_pointers);

        delete  sample;
        sample=NULL;
    }

    void 
    TimePluginSupport_destroy_data(
        Time *sample) {

        DataTypes::TimePluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    TimePluginSupport_copy_data(
        Time *dst,
        const Time *src)
    {
        return DataTypes::Time_copy(dst,(const Time*) src);
    }

    void 
    TimePluginSupport_print_data(
        const Time *sample,
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
            &sample->sec, "sec", indent_level + 1);    

        RTICdrType_printUnsignedLong(
            &sample->nanosec, "nanosec", indent_level + 1);    

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    TimePlugin_on_participant_attached(
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
    TimePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    TimePlugin_on_endpoint_attached(
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
            DataTypes::TimePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            DataTypes::TimePluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = DataTypes::TimePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                DataTypes::TimePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                DataTypes::TimePlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    TimePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    TimePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Time *sample,
        void *handle)
    {

        Time_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    TimePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Time *dst,
        const Time *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return DataTypes::TimePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    TimePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    TimePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Time *sample, 
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
                stream, &sample->sec)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeUnsignedLong(
                stream, &sample->nanosec)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    TimePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Time *sample,
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

                DataTypes::Time_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                if (!RTICdrStream_deserializeLong(
                    stream, &sample->sec)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeUnsignedLong(
                    stream, &sample->nanosec)) {
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
    TimePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Time *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        TimePlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

        if (buffer == NULL) {
            *length = 
            TimePlugin_get_serialized_sample_size(
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

        result = DataTypes::TimePlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    TimePlugin_deserialize_from_cdr_buffer(
        Time *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        Time_finalize_optional_members(sample, RTI_TRUE);
        return TimePlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    DDS_ReturnCode_t
    TimePlugin_data_to_string(
        const Time *sample,
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

        if (!TimePlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!TimePlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        data = DDS_DynamicData_new(
            Time_get_typecode(), 
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
    TimePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Time **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        const char *METHOD_NAME = "TimePlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DataTypes::TimePlugin_deserialize_sample( 
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
                "Time");

        }

        return result;

    }

    RTIBool TimePlugin_skip(
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
            if (!RTICdrStream_skipUnsignedLong (stream)) {
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
    TimePlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    TimePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = TimePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    TimePlugin_get_serialized_sample_min_size(
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
        current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
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
    TimePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Time * sample) 
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

        current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
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
    TimePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool 
    TimePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Time *sample, 
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

            if (!DataTypes::TimePlugin_serialize(
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

    RTIBool TimePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Time *sample, 
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

                if (!DataTypes::TimePlugin_deserialize_sample(
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

    RTIBool TimePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Time **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= DataTypes::TimePlugin_deserialize_key_sample(
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
    TimePlugin_get_serialized_key_max_size_ex(
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

        current_alignment += DataTypes::TimePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    unsigned int
    TimePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = TimePlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    TimePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Time *sample,
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

            if (!DataTypes::TimePlugin_deserialize_sample(
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
    struct PRESTypePlugin *TimePlugin_new(void) 
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
        DataTypes::TimePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        DataTypes::TimePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        DataTypes::TimePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        DataTypes::TimePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        DataTypes::TimePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        TimePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        TimePlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        Time_finalize_optional_members;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        DataTypes::TimePlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        DataTypes::TimePlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        DataTypes::TimePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        DataTypes::TimePlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        TimePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        TimePlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        DataTypes::TimePlugin_get_key_kind;

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
        plugin->typeCode =  (struct RTICdrTypeCode *)DataTypes::Time_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        TimePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        TimePlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        DataTypes::TimePlugin_get_serialized_sample_size;

        plugin->endpointTypeName = TimeTYPENAME;

        return plugin;
    }

    void
    TimePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    PriorityPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Priority *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "PriorityPlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != Normal && *sample != High && *sample != Critical){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "Priority");
                return RTI_FALSE;       
            }

            if (!RTICdrStream_serializeEnum(stream, sample))
            {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    RTIBool 
    PriorityPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Priority *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "PriorityPlugin_deserialize_sample";

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

                if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
                {
                    return RTI_FALSE;
                }
                switch (enum_tmp) {
                    case Normal:
                    *sample=Normal;
                    break;
                    case High:
                    *sample=High;
                    break;
                    case Critical:
                    *sample=Critical;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            Priority_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "Priority");
                            return RTI_FALSE;
                        }
                    }
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

    RTIBool PriorityPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream,   
        RTIBool skip_encapsulation,
        RTIBool skip_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(skip_encapsulation) {
            if (!RTICdrStream_skipEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if (skip_sample) {

            if (!RTICdrStream_skipEnum(stream)) {
                return RTI_FALSE;
            }
        }

        if(skip_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    unsigned int 
    PriorityPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    PriorityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::PriorityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int PriorityPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::PriorityPlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    /* Returns the size of the sample in its serialized form (in bytes).
    * It can also be an estimation in excess of the real buffer needed 
    * during a call to the serialize() function.
    * The value reported does not have to include the space for the
    * encapsulation flags.
    */
    unsigned int
    PriorityPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Priority * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += DataTypes::PriorityPlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id,
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data,
                current_alignment));

        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    RTIBool 
    PriorityPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Priority *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  DataTypes::PriorityPlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool PriorityPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Priority *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  DataTypes::PriorityPlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    PriorityPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  DataTypes::PriorityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    PriorityPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Priority *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  DataTypes::PriorityPlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void PriorityPluginSupport_print_data(
        const Priority *sample,
        const char *description, int indent_level)
    {
        if (description != NULL) {
            RTICdrType_printIndent(indent_level);
            RTILog_debug("%s:\n", description);
        }

        if (sample == NULL) {
            RTICdrType_printIndent(indent_level+1);
            RTILog_debug("NULL\n");
            return;
        }

        RTICdrType_printEnum((RTICdrEnum *)sample, "Priority", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    SurveyQualityPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyQuality *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "SurveyQualityPlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != Definitive && *sample != Inconclusive){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "SurveyQuality");
                return RTI_FALSE;       
            }

            if (!RTICdrStream_serializeEnum(stream, sample))
            {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    RTIBool 
    SurveyQualityPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyQuality *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "SurveyQualityPlugin_deserialize_sample";

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

                if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
                {
                    return RTI_FALSE;
                }
                switch (enum_tmp) {
                    case Definitive:
                    *sample=Definitive;
                    break;
                    case Inconclusive:
                    *sample=Inconclusive;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            SurveyQuality_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "SurveyQuality");
                            return RTI_FALSE;
                        }
                    }
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

    RTIBool SurveyQualityPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream,   
        RTIBool skip_encapsulation,
        RTIBool skip_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(skip_encapsulation) {
            if (!RTICdrStream_skipEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if (skip_sample) {

            if (!RTICdrStream_skipEnum(stream)) {
                return RTI_FALSE;
            }
        }

        if(skip_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    unsigned int 
    SurveyQualityPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    SurveyQualityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int SurveyQualityPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    /* Returns the size of the sample in its serialized form (in bytes).
    * It can also be an estimation in excess of the real buffer needed 
    * during a call to the serialize() function.
    * The value reported does not have to include the space for the
    * encapsulation flags.
    */
    unsigned int
    SurveyQualityPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const SurveyQuality * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id,
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data,
                current_alignment));

        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    RTIBool 
    SurveyQualityPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const SurveyQuality *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  DataTypes::SurveyQualityPlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool SurveyQualityPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        SurveyQuality *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  DataTypes::SurveyQualityPlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    SurveyQualityPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  DataTypes::SurveyQualityPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    SurveyQualityPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SurveyQuality *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  DataTypes::SurveyQualityPlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void SurveyQualityPluginSupport_print_data(
        const SurveyQuality *sample,
        const char *description, int indent_level)
    {
        if (description != NULL) {
            RTICdrType_printIndent(indent_level);
            RTILog_debug("%s:\n", description);
        }

        if (sample == NULL) {
            RTICdrType_printIndent(indent_level+1);
            RTILog_debug("NULL\n");
            return;
        }

        RTICdrType_printEnum((RTICdrEnum *)sample, "SurveyQuality", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    StatusPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Status *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "StatusPlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != Fault && *sample != Good){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "Status");
                return RTI_FALSE;       
            }

            if (!RTICdrStream_serializeEnum(stream, sample))
            {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    RTIBool 
    StatusPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Status *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "StatusPlugin_deserialize_sample";

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

                if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
                {
                    return RTI_FALSE;
                }
                switch (enum_tmp) {
                    case Fault:
                    *sample=Fault;
                    break;
                    case Good:
                    *sample=Good;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            Status_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "Status");
                            return RTI_FALSE;
                        }
                    }
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

    RTIBool StatusPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream,   
        RTIBool skip_encapsulation,
        RTIBool skip_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(skip_encapsulation) {
            if (!RTICdrStream_skipEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if (skip_sample) {

            if (!RTICdrStream_skipEnum(stream)) {
                return RTI_FALSE;
            }
        }

        if(skip_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    unsigned int 
    StatusPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    StatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::StatusPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int StatusPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::StatusPlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    /* Returns the size of the sample in its serialized form (in bytes).
    * It can also be an estimation in excess of the real buffer needed 
    * during a call to the serialize() function.
    * The value reported does not have to include the space for the
    * encapsulation flags.
    */
    unsigned int
    StatusPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Status * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += DataTypes::StatusPlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id,
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data,
                current_alignment));

        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    RTIBool 
    StatusPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Status *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  DataTypes::StatusPlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool StatusPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Status *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  DataTypes::StatusPlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    StatusPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  DataTypes::StatusPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    StatusPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Status *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  DataTypes::StatusPlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void StatusPluginSupport_print_data(
        const Status *sample,
        const char *description, int indent_level)
    {
        if (description != NULL) {
            RTICdrType_printIndent(indent_level);
            RTILog_debug("%s:\n", description);
        }

        if (sample == NULL) {
            RTICdrType_printIndent(indent_level+1);
            RTILog_debug("NULL\n");
            return;
        }

        RTICdrType_printEnum((RTICdrEnum *)sample, "Status", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    PipeTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const PipeType *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "PipeTypePlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != DrillCollar && *sample != HeavyWeight && *sample != DrillPipe){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "PipeType");
                return RTI_FALSE;       
            }

            if (!RTICdrStream_serializeEnum(stream, sample))
            {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    RTIBool 
    PipeTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        PipeType *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "PipeTypePlugin_deserialize_sample";

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

                if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
                {
                    return RTI_FALSE;
                }
                switch (enum_tmp) {
                    case DrillCollar:
                    *sample=DrillCollar;
                    break;
                    case HeavyWeight:
                    *sample=HeavyWeight;
                    break;
                    case DrillPipe:
                    *sample=DrillPipe;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            PipeType_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "PipeType");
                            return RTI_FALSE;
                        }
                    }
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

    RTIBool PipeTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream,   
        RTIBool skip_encapsulation,
        RTIBool skip_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(skip_encapsulation) {
            if (!RTICdrStream_skipEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if (skip_sample) {

            if (!RTICdrStream_skipEnum(stream)) {
                return RTI_FALSE;
            }
        }

        if(skip_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    unsigned int 
    PipeTypePlugin_get_serialized_sample_max_size_ex(
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

        current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    PipeTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::PipeTypePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int PipeTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::PipeTypePlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    /* Returns the size of the sample in its serialized form (in bytes).
    * It can also be an estimation in excess of the real buffer needed 
    * during a call to the serialize() function.
    * The value reported does not have to include the space for the
    * encapsulation flags.
    */
    unsigned int
    PipeTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const PipeType * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += DataTypes::PipeTypePlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id,
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data,
                current_alignment));

        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    RTIBool 
    PipeTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const PipeType *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  DataTypes::PipeTypePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool PipeTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        PipeType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  DataTypes::PipeTypePlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    PipeTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  DataTypes::PipeTypePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    PipeTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PipeType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  DataTypes::PipeTypePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void PipeTypePluginSupport_print_data(
        const PipeType *sample,
        const char *description, int indent_level)
    {
        if (description != NULL) {
            RTICdrType_printIndent(indent_level);
            RTILog_debug("%s:\n", description);
        }

        if (sample == NULL) {
            RTICdrType_printIndent(indent_level+1);
            RTILog_debug("NULL\n");
            return;
        }

        RTICdrType_printEnum((RTICdrEnum *)sample, "PipeType", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    ObjectivePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Objective *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "ObjectivePlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != None && *sample != Casing && *sample != CleaningHole && *sample != Drilling && *sample != AutoReaming && *sample != Tripping){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "Objective");
                return RTI_FALSE;       
            }

            if (!RTICdrStream_serializeEnum(stream, sample))
            {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    RTIBool 
    ObjectivePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Objective *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "ObjectivePlugin_deserialize_sample";

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

                if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
                {
                    return RTI_FALSE;
                }
                switch (enum_tmp) {
                    case None:
                    *sample=None;
                    break;
                    case Casing:
                    *sample=Casing;
                    break;
                    case CleaningHole:
                    *sample=CleaningHole;
                    break;
                    case Drilling:
                    *sample=Drilling;
                    break;
                    case AutoReaming:
                    *sample=AutoReaming;
                    break;
                    case Tripping:
                    *sample=Tripping;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            Objective_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "Objective");
                            return RTI_FALSE;
                        }
                    }
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

    RTIBool ObjectivePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream,   
        RTIBool skip_encapsulation,
        RTIBool skip_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(skip_encapsulation) {
            if (!RTICdrStream_skipEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if (skip_sample) {

            if (!RTICdrStream_skipEnum(stream)) {
                return RTI_FALSE;
            }
        }

        if(skip_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    unsigned int 
    ObjectivePlugin_get_serialized_sample_max_size_ex(
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

        current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    ObjectivePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::ObjectivePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int ObjectivePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += DataTypes::ObjectivePlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    /* Returns the size of the sample in its serialized form (in bytes).
    * It can also be an estimation in excess of the real buffer needed 
    * during a call to the serialize() function.
    * The value reported does not have to include the space for the
    * encapsulation flags.
    */
    unsigned int
    ObjectivePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Objective * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += DataTypes::ObjectivePlugin_get_serialized_sample_max_size(
            endpoint_data,include_encapsulation,
            encapsulation_id,
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data,
                current_alignment));

        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    RTIBool 
    ObjectivePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Objective *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  DataTypes::ObjectivePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool ObjectivePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Objective *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  DataTypes::ObjectivePlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    ObjectivePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  DataTypes::ObjectivePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    ObjectivePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Objective *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  DataTypes::ObjectivePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void ObjectivePluginSupport_print_data(
        const Objective *sample,
        const char *description, int indent_level)
    {
        if (description != NULL) {
            RTICdrType_printIndent(indent_level);
            RTILog_debug("%s:\n", description);
        }

        if (sample == NULL) {
            RTICdrType_printIndent(indent_level+1);
            RTILog_debug("NULL\n");
            return;
        }

        RTICdrType_printEnum((RTICdrEnum *)sample, "Objective", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
} /* namespace DataTypes  */
#undef RTI_CDR_CURRENT_SUBMODULE 
