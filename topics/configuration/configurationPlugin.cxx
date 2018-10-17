
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from configuration.idl using "rtiddsgen".
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

#include "configurationPlugin.h"

namespace Configuration {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    config_typePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const config_type *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "config_typePlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != PROTOCOL && *sample != INTERFACE && *sample != TAG){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "config_type");
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
    config_typePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_type *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "config_typePlugin_deserialize_sample";

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
                    case PROTOCOL:
                    *sample=PROTOCOL;
                    break;
                    case INTERFACE:
                    *sample=INTERFACE;
                    break;
                    case TAG:
                    *sample=TAG;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            config_type_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "config_type");
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

    RTIBool config_typePlugin_skip(
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
    config_typePlugin_get_serialized_sample_max_size_ex(
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
    config_typePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += Configuration::config_typePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int config_typePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += Configuration::config_typePlugin_get_serialized_sample_max_size(
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
    config_typePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const config_type * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += Configuration::config_typePlugin_get_serialized_sample_max_size(
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
    config_typePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const config_type *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  Configuration::config_typePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool config_typePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_type *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  Configuration::config_typePlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    config_typePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  Configuration::config_typePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    config_typePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        config_type *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  Configuration::config_typePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void config_typePluginSupport_print_data(
        const config_type *sample,
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

        RTICdrType_printEnum((RTICdrEnum *)sample, "config_type", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    io_modePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const io_mode *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "io_modePlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != READ && *sample != WRITE){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "io_mode");
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
    io_modePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        io_mode *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "io_modePlugin_deserialize_sample";

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
                    case READ:
                    *sample=READ;
                    break;
                    case WRITE:
                    *sample=WRITE;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            io_mode_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "io_mode");
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

    RTIBool io_modePlugin_skip(
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
    io_modePlugin_get_serialized_sample_max_size_ex(
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
    io_modePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += Configuration::io_modePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int io_modePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += Configuration::io_modePlugin_get_serialized_sample_max_size(
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
    io_modePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const io_mode * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += Configuration::io_modePlugin_get_serialized_sample_max_size(
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
    io_modePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const io_mode *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  Configuration::io_modePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool io_modePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        io_mode *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  Configuration::io_modePlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    io_modePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  Configuration::io_modePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    io_modePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        io_mode *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  Configuration::io_modePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void io_modePluginSupport_print_data(
        const io_mode *sample,
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

        RTICdrType_printEnum((RTICdrEnum *)sample, "io_mode", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    RTIBool 
    plant_typePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const plant_type *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;
        const char *METHOD_NAME = "plant_typePlugin_serialize";

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (*sample != BOOLEAN && *sample != INT8 && *sample != UNSIGNEDINT8 && *sample != INT16 && *sample != UNSIGNEDINT16 && *sample != INT32 && *sample != UNSIGNEDINT32 && *sample != INT64 && *sample != UNSIGNEDINT64 && *sample != FLOAT && *sample != DOUBLE){
                RTICdrLog_exception(
                    METHOD_NAME, 
                    &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                    *sample, 
                    "plant_type");
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
    plant_typePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        plant_type *sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        char * position = NULL;
        DDS_Enum enum_tmp;
        const char *METHOD_NAME = "plant_typePlugin_deserialize_sample";

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
                    case BOOLEAN:
                    *sample=BOOLEAN;
                    break;
                    case INT8:
                    *sample=INT8;
                    break;
                    case UNSIGNEDINT8:
                    *sample=UNSIGNEDINT8;
                    break;
                    case INT16:
                    *sample=INT16;
                    break;
                    case UNSIGNEDINT16:
                    *sample=UNSIGNEDINT16;
                    break;
                    case INT32:
                    *sample=INT32;
                    break;
                    case UNSIGNEDINT32:
                    *sample=UNSIGNEDINT32;
                    break;
                    case INT64:
                    *sample=INT64;
                    break;
                    case UNSIGNEDINT64:
                    *sample=UNSIGNEDINT64;
                    break;
                    case FLOAT:
                    *sample=FLOAT;
                    break;
                    case DOUBLE:
                    *sample=DOUBLE;
                    break;
                    default:
                    {
                        struct PRESTypePluginDefaultEndpointData * epd =
                        (struct PRESTypePluginDefaultEndpointData *)
                        endpoint_data;
                        const struct PRESTypePluginSampleAssignabilityProperty * ap =
                        PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                        if (ap->acceptUnknownEnumValue) {
                            plant_type_initialize(sample);
                        } else {
                            stream->_xTypesState.unassignable = RTI_TRUE;
                            RTICdrLog_exception(
                                METHOD_NAME, 
                                &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                enum_tmp, 
                                "plant_type");
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

    RTIBool plant_typePlugin_skip(
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
    plant_typePlugin_get_serialized_sample_max_size_ex(
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
    plant_typePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += Configuration::plant_typePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,
            NULL,
            include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    unsigned int plant_typePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int initial_alignment = current_alignment;

        current_alignment += Configuration::plant_typePlugin_get_serialized_sample_max_size(
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
    plant_typePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const plant_type * sample) 
    {

        unsigned int initial_alignment = current_alignment;

        if (sample==NULL) {
            return 0;
        }

        current_alignment += Configuration::plant_typePlugin_get_serialized_sample_max_size(
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
    plant_typePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const plant_type *sample, 
        struct RTICdrStream *stream,    
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos)
    {
        return  Configuration::plant_typePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);

    }

    RTIBool plant_typePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        plant_type *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {

            return  Configuration::plant_typePlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    unsigned int
    plant_typePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int initial_alignment = current_alignment;

        current_alignment +=  Configuration::plant_typePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, include_encapsulation,
            encapsulation_id, current_alignment);

        return current_alignment - initial_alignment;
    }

    RTIBool 
    plant_typePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        plant_type *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {

        return  Configuration::plant_typePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);

    }

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    void plant_typePluginSupport_print_data(
        const plant_type *sample,
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

        RTICdrType_printEnum((RTICdrEnum *)sample, "plant_type", indent_level + 1);
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type protocol_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    protocol_t*
    protocol_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        protocol_t *sample = NULL;

        sample = new (std::nothrow) protocol_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Configuration::protocol_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample; 
    } 

    protocol_t *
    protocol_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        protocol_t *sample = NULL;

        sample = new (std::nothrow) protocol_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Configuration::protocol_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample; 
    }

    protocol_t *
    protocol_tPluginSupport_create_data(void)
    {
        return Configuration::protocol_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    protocol_tPluginSupport_destroy_data_w_params(
        protocol_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        Configuration::protocol_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
        sample=NULL;
    }

    void 
    protocol_tPluginSupport_destroy_data_ex(
        protocol_t *sample,RTIBool deallocate_pointers) {

        Configuration::protocol_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
        sample=NULL;
    }

    void 
    protocol_tPluginSupport_destroy_data(
        protocol_t *sample) {

        Configuration::protocol_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    protocol_tPluginSupport_copy_data(
        protocol_t *dst,
        const protocol_t *src)
    {
        return Configuration::protocol_t_copy(dst,(const protocol_t*) src);
    }

    void 
    protocol_tPluginSupport_print_data(
        const protocol_t *sample,
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

        if (sample->protocolId==NULL) {
            RTICdrType_printString(
                NULL,"protocolId", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->protocolId,"protocolId", indent_level + 1);    
        }

        if (sample->protocol==NULL) {
            RTICdrType_printString(
                NULL,"protocol", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->protocol,"protocol", indent_level + 1);    
        }

        if (sample->endpoint==NULL) {
            RTICdrType_printString(
                NULL,"endpoint", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->endpoint,"endpoint", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    protocol_tPlugin_on_participant_attached(
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
    protocol_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    protocol_tPlugin_on_endpoint_attached(
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
            Configuration::protocol_tPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Configuration::protocol_tPluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = Configuration::protocol_tPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Configuration::protocol_tPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                Configuration::protocol_tPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    protocol_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    protocol_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *sample,
        void *handle)
    {

        protocol_t_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    protocol_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *dst,
        const protocol_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Configuration::protocol_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    protocol_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    protocol_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const protocol_t *sample, 
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
                stream, sample->protocolId, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->protocol, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->endpoint, (255) + 1)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    protocol_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *sample,
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

                Configuration::protocol_t_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->protocolId, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->protocol, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->endpoint, (255) + 1, RTI_FALSE)) {
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
    protocol_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const protocol_t *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        protocol_tPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

        if (buffer == NULL) {
            *length = 
            protocol_tPlugin_get_serialized_sample_size(
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

        result = Configuration::protocol_tPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    protocol_tPlugin_deserialize_from_cdr_buffer(
        protocol_t *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        protocol_t_finalize_optional_members(sample, RTI_TRUE);
        return protocol_tPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    DDS_ReturnCode_t
    protocol_tPlugin_data_to_string(
        const protocol_t *sample,
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

        if (!protocol_tPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!protocol_tPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        data = DDS_DynamicData_new(
            protocol_t_get_typecode(), 
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
    protocol_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        const char *METHOD_NAME = "protocol_tPlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::protocol_tPlugin_deserialize_sample( 
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
                "protocol_t");

        }

        return result;

    }

    RTIBool protocol_tPlugin_skip(
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

            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
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
    protocol_tPlugin_get_serialized_sample_max_size_ex(
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
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    protocol_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = protocol_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    protocol_tPlugin_get_serialized_sample_min_size(
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
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
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
    protocol_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const protocol_t * sample) 
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
                endpoint_data, current_alignment), sample->protocolId);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->protocol);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->endpoint);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    protocol_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool 
    protocol_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const protocol_t *sample, 
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

            if (!Configuration::protocol_tPlugin_serialize(
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

    RTIBool protocol_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *sample, 
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

                if (!Configuration::protocol_tPlugin_deserialize_sample(
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

    RTIBool protocol_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::protocol_tPlugin_deserialize_key_sample(
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
    protocol_tPlugin_get_serialized_key_max_size_ex(
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

        current_alignment += Configuration::protocol_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    unsigned int
    protocol_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = protocol_tPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    protocol_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *sample,
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

            if (!Configuration::protocol_tPlugin_deserialize_sample(
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
    struct PRESTypePlugin *protocol_tPlugin_new(void) 
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
        Configuration::protocol_tPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Configuration::protocol_tPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Configuration::protocol_tPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Configuration::protocol_tPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Configuration::protocol_tPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        protocol_tPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        protocol_tPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        protocol_t_finalize_optional_members;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        Configuration::protocol_tPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        Configuration::protocol_tPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Configuration::protocol_tPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        Configuration::protocol_tPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        protocol_tPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        protocol_tPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Configuration::protocol_tPlugin_get_key_kind;

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
        plugin->typeCode =  (struct RTICdrTypeCode *)Configuration::protocol_t_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        protocol_tPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        protocol_tPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        Configuration::protocol_tPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = protocol_tTYPENAME;

        return plugin;
    }

    void
    protocol_tPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type interface_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    interface_t*
    interface_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        interface_t *sample = NULL;

        sample = new (std::nothrow) interface_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Configuration::interface_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample; 
    } 

    interface_t *
    interface_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        interface_t *sample = NULL;

        sample = new (std::nothrow) interface_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Configuration::interface_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample; 
    }

    interface_t *
    interface_tPluginSupport_create_data(void)
    {
        return Configuration::interface_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    interface_tPluginSupport_destroy_data_w_params(
        interface_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        Configuration::interface_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
        sample=NULL;
    }

    void 
    interface_tPluginSupport_destroy_data_ex(
        interface_t *sample,RTIBool deallocate_pointers) {

        Configuration::interface_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
        sample=NULL;
    }

    void 
    interface_tPluginSupport_destroy_data(
        interface_t *sample) {

        Configuration::interface_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    interface_tPluginSupport_copy_data(
        interface_t *dst,
        const interface_t *src)
    {
        return Configuration::interface_t_copy(dst,(const interface_t*) src);
    }

    void 
    interface_tPluginSupport_print_data(
        const interface_t *sample,
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

        Configuration::io_modePluginSupport_print_data(
            (const Configuration::io_mode*) &sample->mode, "mode", indent_level + 1);

        if (sample->ddsInterface==NULL) {
            RTICdrType_printString(
                NULL,"ddsInterface", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->ddsInterface,"ddsInterface", indent_level + 1);    
        }

        if (sample->protocolId==NULL) {
            RTICdrType_printString(
                NULL,"protocolId", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->protocolId,"protocolId", indent_level + 1);    
        }

        if (sample->baseAddress==NULL) {
            RTICdrType_printString(
                NULL,"baseAddress", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->baseAddress,"baseAddress", indent_level + 1);    
        }

        if (sample->size==NULL) {
            RTICdrType_printString(
                NULL,"size", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->size,"size", indent_level + 1);    
        }

        if (sample->frequency==NULL) {
            RTICdrType_printString(
                NULL,"frequency", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->frequency,"frequency", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    interface_tPlugin_on_participant_attached(
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
    interface_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    interface_tPlugin_on_endpoint_attached(
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
            Configuration::interface_tPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Configuration::interface_tPluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = Configuration::interface_tPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Configuration::interface_tPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                Configuration::interface_tPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    interface_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    interface_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *sample,
        void *handle)
    {

        interface_t_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    interface_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *dst,
        const interface_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Configuration::interface_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    interface_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    interface_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const interface_t *sample, 
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

            if(!Configuration::io_modePlugin_serialize(
                endpoint_data,
                (const Configuration::io_mode*) &sample->mode,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->ddsInterface, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->protocolId, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->baseAddress, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->size, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->frequency, (255) + 1)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    interface_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *sample,
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

                Configuration::interface_t_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                if(!Configuration::io_modePlugin_deserialize_sample(
                    endpoint_data,
                    &sample->mode,
                    stream,
                    RTI_FALSE, RTI_TRUE,
                    endpoint_plugin_qos)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->ddsInterface, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->protocolId, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->baseAddress, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->size, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->frequency, (255) + 1, RTI_FALSE)) {
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
    interface_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const interface_t *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        interface_tPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

        if (buffer == NULL) {
            *length = 
            interface_tPlugin_get_serialized_sample_size(
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

        result = Configuration::interface_tPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    interface_tPlugin_deserialize_from_cdr_buffer(
        interface_t *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        interface_t_finalize_optional_members(sample, RTI_TRUE);
        return interface_tPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    DDS_ReturnCode_t
    interface_tPlugin_data_to_string(
        const interface_t *sample,
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

        if (!interface_tPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!interface_tPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        data = DDS_DynamicData_new(
            interface_t_get_typecode(), 
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
    interface_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        interface_t **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        const char *METHOD_NAME = "interface_tPlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::interface_tPlugin_deserialize_sample( 
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
                "interface_t");

        }

        return result;

    }

    RTIBool interface_tPlugin_skip(
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

            if (!Configuration::io_modePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
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
    interface_tPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=Configuration::io_modePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    interface_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = interface_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    interface_tPlugin_get_serialized_sample_min_size(
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

        current_alignment +=Configuration::io_modePlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
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
    interface_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const interface_t * sample) 
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

        current_alignment += Configuration::io_modePlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, (const Configuration::io_mode*) &sample->mode);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->ddsInterface);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->protocolId);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->baseAddress);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->size);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->frequency);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    interface_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool 
    interface_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const interface_t *sample, 
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

            if (!Configuration::interface_tPlugin_serialize(
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

    RTIBool interface_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *sample, 
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

                if (!Configuration::interface_tPlugin_deserialize_sample(
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

    RTIBool interface_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        interface_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::interface_tPlugin_deserialize_key_sample(
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
    interface_tPlugin_get_serialized_key_max_size_ex(
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

        current_alignment += Configuration::interface_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    unsigned int
    interface_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = interface_tPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    interface_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *sample,
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

            if (!Configuration::interface_tPlugin_deserialize_sample(
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
    struct PRESTypePlugin *interface_tPlugin_new(void) 
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
        Configuration::interface_tPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Configuration::interface_tPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Configuration::interface_tPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Configuration::interface_tPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Configuration::interface_tPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        interface_tPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        interface_tPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        interface_t_finalize_optional_members;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        Configuration::interface_tPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        Configuration::interface_tPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Configuration::interface_tPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        Configuration::interface_tPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        interface_tPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        interface_tPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Configuration::interface_tPlugin_get_key_kind;

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
        plugin->typeCode =  (struct RTICdrTypeCode *)Configuration::interface_t_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        interface_tPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        interface_tPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        Configuration::interface_tPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = interface_tTYPENAME;

        return plugin;
    }

    void
    interface_tPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type tag_t
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    tag_t*
    tag_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        tag_t *sample = NULL;

        sample = new (std::nothrow) tag_t ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Configuration::tag_t_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample; 
    } 

    tag_t *
    tag_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        tag_t *sample = NULL;

        sample = new (std::nothrow) tag_t ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Configuration::tag_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample; 
    }

    tag_t *
    tag_tPluginSupport_create_data(void)
    {
        return Configuration::tag_tPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    tag_tPluginSupport_destroy_data_w_params(
        tag_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        Configuration::tag_t_finalize_w_params(sample,dealloc_params);

        delete  sample;
        sample=NULL;
    }

    void 
    tag_tPluginSupport_destroy_data_ex(
        tag_t *sample,RTIBool deallocate_pointers) {

        Configuration::tag_t_finalize_ex(sample,deallocate_pointers);

        delete  sample;
        sample=NULL;
    }

    void 
    tag_tPluginSupport_destroy_data(
        tag_t *sample) {

        Configuration::tag_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    tag_tPluginSupport_copy_data(
        tag_t *dst,
        const tag_t *src)
    {
        return Configuration::tag_t_copy(dst,(const tag_t*) src);
    }

    void 
    tag_tPluginSupport_print_data(
        const tag_t *sample,
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

        if (sample->ddsInterface==NULL) {
            RTICdrType_printString(
                NULL,"ddsInterface", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->ddsInterface,"ddsInterface", indent_level + 1);    
        }

        if (sample->edgeType==NULL) {
            RTICdrType_printString(
                NULL,"edgeType", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->edgeType,"edgeType", indent_level + 1);    
        }

        if (sample->ioType==NULL) {
            RTICdrType_printString(
                NULL,"ioType", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->ioType,"ioType", indent_level + 1);    
        }

        if (sample->ioUnit==NULL) {
            RTICdrType_printString(
                NULL,"ioUnit", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->ioUnit,"ioUnit", indent_level + 1);    
        }

        if (sample->floatEpsilon==NULL) {
            RTICdrType_printString(
                NULL,"floatEpsilon", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->floatEpsilon,"floatEpsilon", indent_level + 1);    
        }

        if (sample->tag==NULL) {
            RTICdrType_printString(
                NULL,"tag", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->tag,"tag", indent_level + 1);    
        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    tag_tPlugin_on_participant_attached(
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
    tag_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    tag_tPlugin_on_endpoint_attached(
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
            Configuration::tag_tPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Configuration::tag_tPluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = Configuration::tag_tPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Configuration::tag_tPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                Configuration::tag_tPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    tag_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    tag_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tag_t *sample,
        void *handle)
    {

        tag_t_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    tag_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tag_t *dst,
        const tag_t *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Configuration::tag_tPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    tag_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    tag_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const tag_t *sample, 
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
                stream, sample->ddsInterface, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->edgeType, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->ioType, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->ioUnit, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->floatEpsilon, (255) + 1)) {
                return RTI_FALSE;
            }

            if (!RTICdrStream_serializeString(
                stream, sample->tag, (255) + 1)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    tag_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        tag_t *sample,
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

                Configuration::tag_t_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->ddsInterface, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->edgeType, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->ioType, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->ioUnit, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->floatEpsilon, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->tag, (255) + 1, RTI_FALSE)) {
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
    tag_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tag_t *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        tag_tPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

        if (buffer == NULL) {
            *length = 
            tag_tPlugin_get_serialized_sample_size(
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

        result = Configuration::tag_tPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    tag_tPlugin_deserialize_from_cdr_buffer(
        tag_t *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        tag_t_finalize_optional_members(sample, RTI_TRUE);
        return tag_tPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    DDS_ReturnCode_t
    tag_tPlugin_data_to_string(
        const tag_t *sample,
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

        if (!tag_tPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!tag_tPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        data = DDS_DynamicData_new(
            tag_t_get_typecode(), 
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
    tag_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tag_t **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        const char *METHOD_NAME = "tag_tPlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::tag_tPlugin_deserialize_sample( 
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
                "tag_t");

        }

        return result;

    }

    RTIBool tag_tPlugin_skip(
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

            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!RTICdrStream_skipString (stream, (255)+1)) {
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
    tag_tPlugin_get_serialized_sample_max_size_ex(
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
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    tag_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = tag_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    tag_tPlugin_get_serialized_sample_min_size(
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
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, 1);
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
    tag_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const tag_t * sample) 
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
                endpoint_data, current_alignment), sample->ddsInterface);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->edgeType);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->ioType);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->ioUnit);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->floatEpsilon);

        current_alignment += RTICdrType_getStringSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment), sample->tag);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    tag_tPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool 
    tag_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const tag_t *sample, 
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

            if (!Configuration::tag_tPlugin_serialize(
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

    RTIBool tag_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        tag_t *sample, 
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

                if (!Configuration::tag_tPlugin_deserialize_sample(
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

    RTIBool tag_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tag_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::tag_tPlugin_deserialize_key_sample(
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
    tag_tPlugin_get_serialized_key_max_size_ex(
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

        current_alignment += Configuration::tag_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    unsigned int
    tag_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = tag_tPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    tag_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tag_t *sample,
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

            if (!Configuration::tag_tPlugin_deserialize_sample(
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
    struct PRESTypePlugin *tag_tPlugin_new(void) 
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
        Configuration::tag_tPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Configuration::tag_tPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Configuration::tag_tPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Configuration::tag_tPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Configuration::tag_tPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        tag_tPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        tag_tPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        tag_t_finalize_optional_members;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        Configuration::tag_tPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        Configuration::tag_tPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Configuration::tag_tPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        Configuration::tag_tPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        tag_tPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        tag_tPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Configuration::tag_tPlugin_get_key_kind;

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
        plugin->typeCode =  (struct RTICdrTypeCode *)Configuration::tag_t_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        tag_tPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        tag_tPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        Configuration::tag_tPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = tag_tTYPENAME;

        return plugin;
    }

    void
    tag_tPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type config_data
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    config_data*
    config_dataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        config_data *sample = NULL;

        sample = new (std::nothrow) config_data ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Configuration::config_data_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample; 
    } 

    config_data *
    config_dataPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        config_data *sample = NULL;

        sample = new (std::nothrow) config_data ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Configuration::config_data_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample; 
    }

    config_data *
    config_dataPluginSupport_create_data(void)
    {
        return Configuration::config_dataPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    config_dataPluginSupport_destroy_data_w_params(
        config_data *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        Configuration::config_data_finalize_w_params(sample,dealloc_params);

        delete  sample;
        sample=NULL;
    }

    void 
    config_dataPluginSupport_destroy_data_ex(
        config_data *sample,RTIBool deallocate_pointers) {

        Configuration::config_data_finalize_ex(sample,deallocate_pointers);

        delete  sample;
        sample=NULL;
    }

    void 
    config_dataPluginSupport_destroy_data(
        config_data *sample) {

        Configuration::config_dataPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    config_dataPluginSupport_copy_data(
        config_data *dst,
        const config_data *src)
    {
        return Configuration::config_data_copy(dst,(const config_data*) src);
    }

    void 
    config_dataPluginSupport_print_data(
        const config_data *sample,
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

        Configuration::config_typePluginSupport_print_data(
            (const Configuration::config_type*) &sample->_d, "_d", indent_level + 1);

        switch(sample->_d) {

            case (Configuration::PROTOCOL):
                {
                    Configuration::protocol_tPluginSupport_print_data(
                        (const Configuration::protocol_t*) &sample->_u.protocolSpec, "_u.protocolSpec", indent_level + 1);

            } break ;
            case (Configuration::INTERFACE):
                {
                    Configuration::interface_tPluginSupport_print_data(
                        (const Configuration::interface_t*) &sample->_u.interfaceSpec, "_u.interfaceSpec", indent_level + 1);

            } break ;
            case (Configuration::TAG):
                {
                    Configuration::tag_tPluginSupport_print_data(
                        (const Configuration::tag_t*) &sample->_u.tagSpec, "_u.tagSpec", indent_level + 1);

            } break ;

        }

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    config_dataPlugin_on_participant_attached(
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
    config_dataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    config_dataPlugin_on_endpoint_attached(
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
            Configuration::config_dataPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Configuration::config_dataPluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = Configuration::config_dataPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Configuration::config_dataPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                Configuration::config_dataPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    config_dataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    config_dataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data *sample,
        void *handle)
    {

        config_data_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    config_dataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data *dst,
        const config_data *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Configuration::config_dataPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    config_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    config_dataPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const config_data *sample, 
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

            if(!Configuration::config_typePlugin_serialize(
                endpoint_data,
                (const Configuration::config_type*) &sample->_d,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            switch(sample->_d) {

                case (Configuration::PROTOCOL):
                    {

                        if(!Configuration::protocol_tPlugin_serialize(
                            endpoint_data,
                            (const Configuration::protocol_t*) &sample->_u.protocolSpec,
                            stream,
                            RTI_FALSE, encapsulation_id,
                            RTI_TRUE,
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                    }

                } break ;
                case (Configuration::INTERFACE):
                    {

                        if(!Configuration::interface_tPlugin_serialize(
                            endpoint_data,
                            (const Configuration::interface_t*) &sample->_u.interfaceSpec,
                            stream,
                            RTI_FALSE, encapsulation_id,
                            RTI_TRUE,
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                    }

                } break ;
                case (Configuration::TAG):
                    {

                        if(!Configuration::tag_tPlugin_serialize(
                            endpoint_data,
                            (const Configuration::tag_t*) &sample->_u.tagSpec,
                            stream,
                            RTI_FALSE, encapsulation_id,
                            RTI_TRUE,
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                    }

                } break ;

            }
        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return retval;
    }

    RTIBool 
    config_dataPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data *sample,
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

                if(!Configuration::config_typePlugin_deserialize_sample(
                    endpoint_data,
                    &sample->_d,
                    stream,
                    RTI_FALSE, RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                switch(sample->_d) {
                    case (Configuration::PROTOCOL):
                        {
                            if(!Configuration::protocol_tPlugin_deserialize_sample(
                                endpoint_data,
                                &sample->_u.protocolSpec,
                                stream,
                                RTI_FALSE, RTI_TRUE,
                                endpoint_plugin_qos)) {
                                return RTI_FALSE;
                        }
                    } break ;
                    case (Configuration::INTERFACE):
                        {
                            if(!Configuration::interface_tPlugin_deserialize_sample(
                                endpoint_data,
                                &sample->_u.interfaceSpec,
                                stream,
                                RTI_FALSE, RTI_TRUE,
                                endpoint_plugin_qos)) {
                                return RTI_FALSE;
                        }
                    } break ;
                    case (Configuration::TAG):
                        {
                            if(!Configuration::tag_tPlugin_deserialize_sample(
                                endpoint_data,
                                &sample->_u.tagSpec,
                                stream,
                                RTI_FALSE, RTI_TRUE,
                                endpoint_plugin_qos)) {
                                return RTI_FALSE;
                        }
                    } break ;
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

    RTIBool
    config_dataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const config_data *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        config_dataPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

        if (buffer == NULL) {
            *length = 
            config_dataPlugin_get_serialized_sample_size(
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

        result = Configuration::config_dataPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    config_dataPlugin_deserialize_from_cdr_buffer(
        config_data *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        config_data_finalize_optional_members(sample, RTI_TRUE);
        return config_dataPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    DDS_ReturnCode_t
    config_dataPlugin_data_to_string(
        const config_data *sample,
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

        if (!config_dataPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!config_dataPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        data = DDS_DynamicData_new(
            config_data_get_typecode(), 
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
    config_dataPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        config_data **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        const char *METHOD_NAME = "config_dataPlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::config_dataPlugin_deserialize_sample( 
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
                "config_data");

        }

        return result;

    }

    RTIBool config_dataPlugin_skip(
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

            Configuration::config_type disc;

            if (!Configuration::config_typePlugin_deserialize_sample(
                endpoint_data,
                &disc,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            switch(disc) {

                case (Configuration::PROTOCOL):
                    {
                        if (!Configuration::protocol_tPlugin_skip(
                            endpoint_data,
                            stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (Configuration::INTERFACE):
                    {
                        if (!Configuration::interface_tPlugin_skip(
                            endpoint_data,
                            stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (Configuration::TAG):
                    {
                        if (!Configuration::tag_tPlugin_skip(
                            endpoint_data,
                            stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                    }
                } break ;
            }
        }

        if(skip_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    unsigned int 
    config_dataPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int union_max_size_serialized = 0;

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

        current_alignment +=Configuration::config_typePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        union_max_size_serialized = RTIOsapiUtility_max((unsigned int) Configuration::protocol_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment),                                    union_max_size_serialized);
        union_max_size_serialized = RTIOsapiUtility_max((unsigned int) Configuration::interface_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment),                                    union_max_size_serialized);
        union_max_size_serialized = RTIOsapiUtility_max((unsigned int) Configuration::tag_tPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment),                                    union_max_size_serialized);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return union_max_size_serialized + current_alignment - initial_alignment;
    }

    unsigned int 
    config_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = config_dataPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    config_dataPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {

        unsigned int union_min_size_serialized = 0xffffffff;

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

        current_alignment +=Configuration::config_typePlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        union_min_size_serialized = RTIOsapiUtility_min((unsigned int) Configuration::protocol_tPlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment), union_min_size_serialized);
        union_min_size_serialized = RTIOsapiUtility_min((unsigned int) Configuration::interface_tPlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment), union_min_size_serialized);
        union_min_size_serialized = RTIOsapiUtility_min((unsigned int) Configuration::tag_tPlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment), union_min_size_serialized);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  union_min_size_serialized + current_alignment - initial_alignment;
    }

    /* Returns the size of the sample in its serialized form (in bytes).
    * It can also be an estimation in excess of the real buffer needed 
    * during a call to the serialize() function.
    * The value reported does not have to include the space for the
    * encapsulation flags.
    */
    unsigned int
    config_dataPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const config_data * sample) 
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

        current_alignment += Configuration::config_typePlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, (const Configuration::config_type*) &sample->_d);
        switch(sample->_d) {
            case (Configuration::PROTOCOL):
                {

                    current_alignment += Configuration::protocol_tPlugin_get_serialized_sample_size(
                        endpoint_data,RTI_FALSE, encapsulation_id,
                        current_alignment, (const Configuration::protocol_t*) &sample->_u.protocolSpec);
            }break ;
            case (Configuration::INTERFACE):
                {

                    current_alignment += Configuration::interface_tPlugin_get_serialized_sample_size(
                        endpoint_data,RTI_FALSE, encapsulation_id,
                        current_alignment, (const Configuration::interface_t*) &sample->_u.interfaceSpec);
            }break ;
            case (Configuration::TAG):
                {

                    current_alignment += Configuration::tag_tPlugin_get_serialized_sample_size(
                        endpoint_data,RTI_FALSE, encapsulation_id,
                        current_alignment, (const Configuration::tag_t*) &sample->_u.tagSpec);
            }break ;
        }

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    config_dataPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool 
    config_dataPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const config_data *sample, 
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

            if (!Configuration::config_dataPlugin_serialize(
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

    RTIBool config_dataPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data *sample, 
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

                if (!Configuration::config_dataPlugin_deserialize_sample(
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

    RTIBool config_dataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        config_data **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::config_dataPlugin_deserialize_key_sample(
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
    config_dataPlugin_get_serialized_key_max_size_ex(
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

        current_alignment += Configuration::config_dataPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    unsigned int
    config_dataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = config_dataPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    config_dataPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        config_data *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos)
    {
        char * position = NULL;

        if(deserialize_encapsulation) {
            if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                return RTI_FALSE;
            }
            position = RTICdrStream_resetAlignment(stream);
        }

        if (deserialize_key) {

            if (!Configuration::config_dataPlugin_deserialize_sample(
                endpoint_data, sample, stream, RTI_FALSE, 
                RTI_TRUE, endpoint_plugin_qos)) {
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
    struct PRESTypePlugin *config_dataPlugin_new(void) 
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
        Configuration::config_dataPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Configuration::config_dataPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Configuration::config_dataPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Configuration::config_dataPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Configuration::config_dataPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        config_dataPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        config_dataPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        config_data_finalize_optional_members;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        Configuration::config_dataPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        Configuration::config_dataPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Configuration::config_dataPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        Configuration::config_dataPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        config_dataPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        config_dataPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Configuration::config_dataPlugin_get_key_kind;

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
        plugin->typeCode =  (struct RTICdrTypeCode *)Configuration::config_data_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        config_dataPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        config_dataPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        Configuration::config_dataPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = config_dataTYPENAME;

        return plugin;
    }

    void
    config_dataPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 

    /* ----------------------------------------------------------------------------
    *  Type Item
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Item*
    ItemPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params) 
    {
        Item *sample = NULL;

        sample = new (std::nothrow) Item ;
        if (sample == NULL) {
            return NULL;
        }

        if (!Configuration::Item_initialize_w_params(sample,alloc_params)) {
            delete  sample;
            sample=NULL;
        }
        return sample; 
    } 

    Item *
    ItemPluginSupport_create_data_ex(RTIBool allocate_pointers) 
    {
        Item *sample = NULL;

        sample = new (std::nothrow) Item ;

        if(sample == NULL) {
            return NULL;
        }

        if (!Configuration::Item_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            delete  sample;
            sample=NULL;
        }

        return sample; 
    }

    Item *
    ItemPluginSupport_create_data(void)
    {
        return Configuration::ItemPluginSupport_create_data_ex(RTI_TRUE);
    }

    void 
    ItemPluginSupport_destroy_data_w_params(
        Item *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params) {

        Configuration::Item_finalize_w_params(sample,dealloc_params);

        delete  sample;
        sample=NULL;
    }

    void 
    ItemPluginSupport_destroy_data_ex(
        Item *sample,RTIBool deallocate_pointers) {

        Configuration::Item_finalize_ex(sample,deallocate_pointers);

        delete  sample;
        sample=NULL;
    }

    void 
    ItemPluginSupport_destroy_data(
        Item *sample) {

        Configuration::ItemPluginSupport_destroy_data_ex(sample,RTI_TRUE);

    }

    RTIBool 
    ItemPluginSupport_copy_data(
        Item *dst,
        const Item *src)
    {
        return Configuration::Item_copy(dst,(const Item*) src);
    }

    void 
    ItemPluginSupport_print_data(
        const Item *sample,
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

        if (sample->key==NULL) {
            RTICdrType_printString(
                NULL,"key", indent_level + 1);
        } else {
            RTICdrType_printString(
                sample->key,"key", indent_level + 1);    
        }

        Configuration::config_typePluginSupport_print_data(
            (const Configuration::config_type*) &sample->configType, "configType", indent_level + 1);

        Configuration::config_dataPluginSupport_print_data(
            (const Configuration::config_data*) &sample->configData, "configData", indent_level + 1);

    }
    Item *
    ItemPluginSupport_create_key_ex(RTIBool allocate_pointers){
        Item *key = NULL;

        key = new (std::nothrow) ItemKeyHolder ;

        Configuration::Item_initialize_ex(key,allocate_pointers, RTI_TRUE);

        return key;
    }

    Item *
    ItemPluginSupport_create_key(void)
    {
        return  Configuration::ItemPluginSupport_create_key_ex(RTI_TRUE);
    }

    void 
    ItemPluginSupport_destroy_key_ex(
        ItemKeyHolder *key,RTIBool deallocate_pointers)
    {
        Configuration::Item_finalize_ex(key,deallocate_pointers);

        delete  key;
        key=NULL;

    }

    void 
    ItemPluginSupport_destroy_key(
        ItemKeyHolder *key) {

        Configuration::ItemPluginSupport_destroy_key_ex(key,RTI_TRUE);

    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    ItemPlugin_on_participant_attached(
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
    ItemPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {

        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }

    PRESTypePluginEndpointData
    ItemPlugin_on_endpoint_attached(
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
            Configuration::ItemPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            Configuration::ItemPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            Configuration::ItemPluginSupport_create_key ,            
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            Configuration::ItemPluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 
        serializedKeyMaxSize =  Configuration::ItemPlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,endpoint_info,serializedKeyMaxSize))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = Configuration::ItemPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                Configuration::ItemPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                Configuration::ItemPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;    
    }

    void 
    ItemPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  

        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    ItemPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item *sample,
        void *handle)
    {

        Item_finalize_optional_members(sample, RTI_TRUE);

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    ItemPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item *dst,
        const Item *src)
    {
        if (endpoint_data) {} /* To avoid warnings */
        return Configuration::ItemPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    ItemPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool 
    ItemPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Item *sample, 
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
                stream, sample->key, (255) + 1)) {
                return RTI_FALSE;
            }

            if(!Configuration::config_typePlugin_serialize(
                endpoint_data,
                (const Configuration::config_type*) &sample->configType,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

            if(!Configuration::config_dataPlugin_serialize(
                endpoint_data,
                (const Configuration::config_data*) &sample->configData,
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
    ItemPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item *sample,
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

                Configuration::Item_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                if (!RTICdrStream_deserializeStringEx(
                    stream,&sample->key, (255) + 1, RTI_FALSE)) {
                    goto fin; 
                }
                if(!Configuration::config_typePlugin_deserialize_sample(
                    endpoint_data,
                    &sample->configType,
                    stream,
                    RTI_FALSE, RTI_TRUE,
                    endpoint_plugin_qos)) {
                    goto fin; 
                }
                if(!Configuration::config_dataPlugin_deserialize_sample(
                    endpoint_data,
                    &sample->configData,
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
    ItemPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Item *sample)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        ItemPlugin_get_serialized_sample_max_size(
            NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

        if (buffer == NULL) {
            *length = 
            ItemPlugin_get_serialized_sample_size(
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

        result = Configuration::ItemPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, sample, &stream, 
            RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
            RTI_TRUE, NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    }

    RTIBool
    ItemPlugin_deserialize_from_cdr_buffer(
        Item *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        Item_finalize_optional_members(sample, RTI_TRUE);
        return ItemPlugin_deserialize_sample( 
            NULL, sample,
            &stream, RTI_TRUE, RTI_TRUE, 
            NULL);
    }

    DDS_ReturnCode_t
    ItemPlugin_data_to_string(
        const Item *sample,
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

        if (!ItemPlugin_serialize_to_cdr_buffer(
            NULL, 
            &length, 
            sample)) {
            return DDS_RETCODE_ERROR;
        }

        RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
        if (buffer == NULL) {
            return DDS_RETCODE_ERROR;
        }

        if (!ItemPlugin_serialize_to_cdr_buffer(
            buffer, 
            &length, 
            sample)) {
            RTIOsapiHeap_freeBuffer(buffer);
            return DDS_RETCODE_ERROR;
        }

        data = DDS_DynamicData_new(
            Item_get_typecode(), 
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
    ItemPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Item **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,   
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos)
    {

        RTIBool result;
        const char *METHOD_NAME = "ItemPlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::ItemPlugin_deserialize_sample( 
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
                "Item");

        }

        return result;

    }

    RTIBool ItemPlugin_skip(
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

            if (!RTICdrStream_skipString (stream, (255)+1)) {
                goto fin; 
            }
            if (!Configuration::config_typePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }
            if (!Configuration::config_dataPlugin_skip(
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
    ItemPlugin_get_serialized_sample_max_size_ex(
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

        current_alignment +=RTICdrType_getStringMaxSizeSerialized(
            current_alignment, (255)+1);

        current_alignment +=Configuration::config_typePlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        current_alignment +=Configuration::config_dataPlugin_get_serialized_sample_max_size_ex(
            endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    }

    unsigned int 
    ItemPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = ItemPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    unsigned int 
    ItemPlugin_get_serialized_sample_min_size(
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
        current_alignment +=Configuration::config_typePlugin_get_serialized_sample_min_size(
            endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
        current_alignment +=Configuration::config_dataPlugin_get_serialized_sample_min_size(
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
    ItemPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Item * sample) 
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
                endpoint_data, current_alignment), sample->key);

        current_alignment += Configuration::config_typePlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, (const Configuration::config_type*) &sample->configType);

        current_alignment += Configuration::config_dataPlugin_get_serialized_sample_size(
            endpoint_data,RTI_FALSE, encapsulation_id,
            current_alignment, (const Configuration::config_data*) &sample->configData);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    ItemPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool 
    ItemPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Item *sample, 
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
                stream, sample->key, (255) + 1)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;
    }

    RTIBool ItemPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item *sample, 
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
                    stream,&sample->key, (255) + 1, RTI_FALSE)) {
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

    RTIBool ItemPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Item **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= Configuration::ItemPlugin_deserialize_key_sample(
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
    ItemPlugin_get_serialized_key_max_size_ex(
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
            current_alignment, (255)+1);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    }

    unsigned int
    ItemPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = ItemPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    ItemPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Item *sample,
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

            if (!RTICdrStream_deserializeStringEx(
                stream,&sample->key, (255) + 1, RTI_FALSE)) {
                return RTI_FALSE;
            }
            if (!Configuration::config_typePlugin_skip(
                endpoint_data,
                stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                goto fin; 
            }

            if (!Configuration::config_dataPlugin_skip(
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
    ItemPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ItemKeyHolder *dst, 
        const Item *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   

        if (!RTICdrType_copyStringEx (
            &dst->key, src->key, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool 
    ItemPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Item *dst, const
        ItemKeyHolder *src)
    {

        if (endpoint_data) {} /* To avoid warnings */   
        if (!RTICdrType_copyStringEx (
            &dst->key, src->key, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool 
    ItemPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const Item *instance)
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

        if (!Configuration::ItemPlugin_serialize_key(
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

            size = (int)Configuration::ItemPlugin_get_serialized_sample_size(
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
            if (!Configuration::ItemPlugin_serialize_key(
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
    ItemPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos) 
    {   
        char * position = NULL;

        RTIBool done = RTI_FALSE;
        RTIBool error = RTI_FALSE;
        Item * sample=NULL;

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

        sample = (Item *)
        PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

        if (sample == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_deserializeStringEx(
            stream,&sample->key, (255) + 1, RTI_FALSE)) {
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

        if (!Configuration::ItemPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *ItemPlugin_new(void) 
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
        Configuration::ItemPlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        Configuration::ItemPlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        Configuration::ItemPlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        Configuration::ItemPlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        Configuration::ItemPlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        ItemPlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        ItemPlugin_destroy_sample;
        plugin->finalizeOptionalMembersFnc =
        (PRESTypePluginFinalizeOptionalMembersFunction)
        Item_finalize_optional_members;

        plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        Configuration::ItemPlugin_serialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        Configuration::ItemPlugin_deserialize;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        Configuration::ItemPlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        Configuration::ItemPlugin_get_serialized_sample_min_size;

        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        ItemPlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        ItemPlugin_return_sample;

        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        Configuration::ItemPlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        Configuration::ItemPlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        Configuration::ItemPlugin_serialize_key;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        Configuration::ItemPlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        Configuration::ItemPlugin_deserialize_key_sample;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        Configuration::ItemPlugin_instance_to_keyhash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        Configuration::ItemPlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        ItemPlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        ItemPlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        Configuration::ItemPlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        Configuration::ItemPlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        plugin->typeCode =  (struct RTICdrTypeCode *)Configuration::Item_get_typecode();

        plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        ItemPlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        ItemPlugin_return_buffer;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        Configuration::ItemPlugin_get_serialized_sample_size;

        plugin->endpointTypeName = ItemTYPENAME;

        return plugin;
    }

    void
    ItemPlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 
} /* namespace Configuration  */
#undef RTI_CDR_CURRENT_SUBMODULE 
