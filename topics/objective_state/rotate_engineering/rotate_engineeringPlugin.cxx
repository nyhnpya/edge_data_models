
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
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

#include "rotate_engineeringPlugin.h"

namespace nec {
    namespace engineering {

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        RTIBool 
        StatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const State *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos)
        {
            char * position = NULL;
            const char *METHOD_NAME = "StatePlugin_serialize";

            if (endpoint_data) {} /* To avoid warnings */
            if (endpoint_plugin_qos) {} /* To avoid warnings */

            if(serialize_encapsulation) {
                if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                    return RTI_FALSE;
                }

                position = RTICdrStream_resetAlignment(stream);
            }

            if(serialize_sample) {

                if (*sample != Available && *sample != Unavailable && *sample != NotSafe){
                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                        *sample, 
                        "State");
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
        StatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            State *sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            char * position = NULL;
            DDS_Enum enum_tmp;
            const char *METHOD_NAME = "StatePlugin_deserialize_sample";

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
                        case Available:
                        *sample=Available;
                        break;
                        case Unavailable:
                        *sample=Unavailable;
                        break;
                        case NotSafe:
                        *sample=NotSafe;
                        break;
                        default:
                        {
                            struct PRESTypePluginDefaultEndpointData * epd =
                            (struct PRESTypePluginDefaultEndpointData *)
                            endpoint_data;
                            const struct PRESTypePluginSampleAssignabilityProperty * ap =
                            PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                            if (ap->acceptUnknownEnumValue) {
                                State_initialize(sample);
                            } else {
                                stream->_xTypesState.unassignable = RTI_TRUE;
                                RTICdrLog_exception(
                                    METHOD_NAME, 
                                    &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                    enum_tmp, 
                                    "State");
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

        RTIBool StatePlugin_skip(
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
        StatePlugin_get_serialized_sample_max_size_ex(
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
        StatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int initial_alignment = current_alignment;

            current_alignment += nec::engineering::StatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,
                NULL,
                include_encapsulation,
                encapsulation_id, current_alignment);

            return current_alignment - initial_alignment;
        }

        unsigned int StatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int initial_alignment = current_alignment;

            current_alignment += nec::engineering::StatePlugin_get_serialized_sample_max_size(
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
        StatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const State * sample) 
        {

            unsigned int initial_alignment = current_alignment;

            if (sample==NULL) {
                return 0;
            }

            current_alignment += nec::engineering::StatePlugin_get_serialized_sample_max_size(
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
        StatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const State *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos)
        {
            return  nec::engineering::StatePlugin_serialize(
                endpoint_data, sample, stream, 
                serialize_encapsulation, encapsulation_id, 
                serialize_key, endpoint_plugin_qos);

        }

        RTIBool StatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            State *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {

                return  nec::engineering::StatePlugin_deserialize_sample(
                    endpoint_data, sample, stream, deserialize_encapsulation, 
                    deserialize_key, endpoint_plugin_qos);

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        unsigned int
        StatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            current_alignment +=  nec::engineering::StatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, include_encapsulation,
                encapsulation_id, current_alignment);

            return current_alignment - initial_alignment;
        }

        RTIBool 
        StatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            State *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos)
        {

            return  nec::engineering::StatePlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        }

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        void StatePluginSupport_print_data(
            const State *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "State", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        RTIBool 
        ModePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const Mode *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos)
        {
            char * position = NULL;
            const char *METHOD_NAME = "ModePlugin_serialize";

            if (endpoint_data) {} /* To avoid warnings */
            if (endpoint_plugin_qos) {} /* To avoid warnings */

            if(serialize_encapsulation) {
                if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                    return RTI_FALSE;
                }

                position = RTICdrStream_resetAlignment(stream);
            }

            if(serialize_sample) {

                if (*sample != Locka && *sample != Remote && *sample != QuillOscillation){
                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_SERIALIZE_INVALID_ENUMERATOR_ds, 
                        *sample, 
                        "Mode");
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
        ModePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            Mode *sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            char * position = NULL;
            DDS_Enum enum_tmp;
            const char *METHOD_NAME = "ModePlugin_deserialize_sample";

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
                        case Locka:
                        *sample=Locka;
                        break;
                        case Remote:
                        *sample=Remote;
                        break;
                        case QuillOscillation:
                        *sample=QuillOscillation;
                        break;
                        default:
                        {
                            struct PRESTypePluginDefaultEndpointData * epd =
                            (struct PRESTypePluginDefaultEndpointData *)
                            endpoint_data;
                            const struct PRESTypePluginSampleAssignabilityProperty * ap =
                            PRESTypePluginDefaultEndpointData_getAssignabilityProperty(epd);

                            if (ap->acceptUnknownEnumValue) {
                                Mode_initialize(sample);
                            } else {
                                stream->_xTypesState.unassignable = RTI_TRUE;
                                RTICdrLog_exception(
                                    METHOD_NAME, 
                                    &RTI_CDR_LOG_DESERIALIZE_INVALID_ENUMERATOR_ds, 
                                    enum_tmp, 
                                    "Mode");
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

        RTIBool ModePlugin_skip(
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
        ModePlugin_get_serialized_sample_max_size_ex(
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
        ModePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int initial_alignment = current_alignment;

            current_alignment += nec::engineering::ModePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,
                NULL,
                include_encapsulation,
                encapsulation_id, current_alignment);

            return current_alignment - initial_alignment;
        }

        unsigned int ModePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int initial_alignment = current_alignment;

            current_alignment += nec::engineering::ModePlugin_get_serialized_sample_max_size(
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
        ModePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const Mode * sample) 
        {

            unsigned int initial_alignment = current_alignment;

            if (sample==NULL) {
                return 0;
            }

            current_alignment += nec::engineering::ModePlugin_get_serialized_sample_max_size(
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
        ModePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const Mode *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos)
        {
            return  nec::engineering::ModePlugin_serialize(
                endpoint_data, sample, stream, 
                serialize_encapsulation, encapsulation_id, 
                serialize_key, endpoint_plugin_qos);

        }

        RTIBool ModePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            Mode *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {

                return  nec::engineering::ModePlugin_deserialize_sample(
                    endpoint_data, sample, stream, deserialize_encapsulation, 
                    deserialize_key, endpoint_plugin_qos);

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        unsigned int
        ModePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {

            unsigned int initial_alignment = current_alignment;

            current_alignment +=  nec::engineering::ModePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, include_encapsulation,
                encapsulation_id, current_alignment);

            return current_alignment - initial_alignment;
        }

        RTIBool 
        ModePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            Mode *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos)
        {

            return  nec::engineering::ModePlugin_deserialize_sample(
                endpoint_data, sample, stream, deserialize_encapsulation, 
                deserialize_key, endpoint_plugin_qos);

        }

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        void ModePluginSupport_print_data(
            const Mode *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "Mode", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type RotateEngineeringRequest
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        RotateEngineeringRequest*
        RotateEngineeringRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            RotateEngineeringRequest *sample = NULL;

            sample = new (std::nothrow) RotateEngineeringRequest ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::engineering::RotateEngineeringRequest_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        RotateEngineeringRequest *
        RotateEngineeringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            RotateEngineeringRequest *sample = NULL;

            sample = new (std::nothrow) RotateEngineeringRequest ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::engineering::RotateEngineeringRequest_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        RotateEngineeringRequest *
        RotateEngineeringRequestPluginSupport_create_data(void)
        {
            return nec::engineering::RotateEngineeringRequestPluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        RotateEngineeringRequestPluginSupport_destroy_data_w_params(
            RotateEngineeringRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            nec::engineering::RotateEngineeringRequest_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        RotateEngineeringRequestPluginSupport_destroy_data_ex(
            RotateEngineeringRequest *sample,RTIBool deallocate_pointers) {

            nec::engineering::RotateEngineeringRequest_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        RotateEngineeringRequestPluginSupport_destroy_data(
            RotateEngineeringRequest *sample) {

            nec::engineering::RotateEngineeringRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        RotateEngineeringRequestPluginSupport_copy_data(
            RotateEngineeringRequest *dst,
            const RotateEngineeringRequest *src)
        {
            return nec::engineering::RotateEngineeringRequest_copy(dst,(const RotateEngineeringRequest*) src);
        }

        void 
        RotateEngineeringRequestPluginSupport_print_data(
            const RotateEngineeringRequest *sample,
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

            DataTypes::PriorityPluginSupport_print_data(
                (const DataTypes::Priority*) &sample->priority, "priority", indent_level + 1);

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timeNeeded, "timeNeeded", indent_level + 1);

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->duration, "duration", indent_level + 1);

            RTICdrType_printDouble(
                &sample->targetRate, "targetRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->torque, "torque", indent_level + 1);    

        }
        RotateEngineeringRequest *
        RotateEngineeringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
            RotateEngineeringRequest *key = NULL;

            key = new (std::nothrow) RotateEngineeringRequestKeyHolder ;

            nec::engineering::RotateEngineeringRequest_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        RotateEngineeringRequest *
        RotateEngineeringRequestPluginSupport_create_key(void)
        {
            return  nec::engineering::RotateEngineeringRequestPluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        RotateEngineeringRequestPluginSupport_destroy_key_ex(
            RotateEngineeringRequestKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::engineering::RotateEngineeringRequest_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;

        }

        void 
        RotateEngineeringRequestPluginSupport_destroy_key(
            RotateEngineeringRequestKeyHolder *key) {

            nec::engineering::RotateEngineeringRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        RotateEngineeringRequestPlugin_on_participant_attached(
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
        RotateEngineeringRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        RotateEngineeringRequestPlugin_on_endpoint_attached(
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
                nec::engineering::RotateEngineeringRequestPluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::engineering::RotateEngineeringRequestPluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::engineering::RotateEngineeringRequestPluginSupport_create_key ,            
                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::engineering::RotateEngineeringRequestPluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 
            serializedKeyMaxSize =  nec::engineering::RotateEngineeringRequestPlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,endpoint_info,serializedKeyMaxSize))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = nec::engineering::RotateEngineeringRequestPlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::engineering::RotateEngineeringRequestPlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    nec::engineering::RotateEngineeringRequestPlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        RotateEngineeringRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        RotateEngineeringRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *sample,
            void *handle)
        {

            RotateEngineeringRequest_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        RotateEngineeringRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *dst,
            const RotateEngineeringRequest *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::engineering::RotateEngineeringRequestPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        RotateEngineeringRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        RotateEngineeringRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringRequest *sample, 
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

                if(!DataTypes::PriorityPlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Priority*) &sample->priority,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::TimePlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Time*) &sample->timeNeeded,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!DataTypes::TimePlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Time*) &sample->duration,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->targetRate)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->torque)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        RotateEngineeringRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *sample,
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

                    nec::engineering::RotateEngineeringRequest_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                    if(!DataTypes::UuidPlugin_deserialize_sample(
                        endpoint_data,
                        &sample->id,
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
                        &sample->duration,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->targetRate)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->torque)) {
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
        RotateEngineeringRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateEngineeringRequest *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            RotateEngineeringRequestPlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                RotateEngineeringRequestPlugin_get_serialized_sample_size(
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

            result = nec::engineering::RotateEngineeringRequestPlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        RotateEngineeringRequestPlugin_deserialize_from_cdr_buffer(
            RotateEngineeringRequest *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            RotateEngineeringRequest_finalize_optional_members(sample, RTI_TRUE);
            return RotateEngineeringRequestPlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        RotateEngineeringRequestPlugin_data_to_string(
            const RotateEngineeringRequest *sample,
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

            if (!RotateEngineeringRequestPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!RotateEngineeringRequestPlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                RotateEngineeringRequest_get_typecode(), 
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
        RotateEngineeringRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "RotateEngineeringRequestPlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::engineering::RotateEngineeringRequestPlugin_deserialize_sample( 
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
                    "RotateEngineeringRequest");

            }

            return result;

        }

        RTIBool RotateEngineeringRequestPlugin_skip(
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
        RotateEngineeringRequestPlugin_get_serialized_sample_max_size_ex(
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
        RotateEngineeringRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RotateEngineeringRequestPlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        RotateEngineeringRequestPlugin_get_serialized_sample_min_size(
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
        RotateEngineeringRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateEngineeringRequest * sample) 
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

            current_alignment += DataTypes::PriorityPlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Priority*) &sample->priority);

            current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Time*) &sample->timeNeeded);

            current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Time*) &sample->duration);

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
        RotateEngineeringRequestPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool 
        RotateEngineeringRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringRequest *sample, 
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

        RTIBool RotateEngineeringRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *sample, 
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

        RTIBool RotateEngineeringRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::engineering::RotateEngineeringRequestPlugin_deserialize_key_sample(
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
        RotateEngineeringRequestPlugin_get_serialized_key_max_size_ex(
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
        RotateEngineeringRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RotateEngineeringRequestPlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        RotateEngineeringRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *sample,
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
                return RTI_FALSE;
            }       

            if(deserialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return RTI_TRUE;
        }

        RTIBool 
        RotateEngineeringRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequestKeyHolder *dst, 
            const RotateEngineeringRequest *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        RotateEngineeringRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *dst, const
            RotateEngineeringRequestKeyHolder *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   
            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        RotateEngineeringRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateEngineeringRequest *instance)
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

            if (!nec::engineering::RotateEngineeringRequestPlugin_serialize_key(
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

                size = (int)nec::engineering::RotateEngineeringRequestPlugin_get_serialized_sample_size(
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
                if (!nec::engineering::RotateEngineeringRequestPlugin_serialize_key(
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
        RotateEngineeringRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;
            RotateEngineeringRequest * sample=NULL;

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

            sample = (RotateEngineeringRequest *)
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

            if (!nec::engineering::RotateEngineeringRequestPlugin_instance_to_keyhash(
                endpoint_data, keyhash, sample)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *RotateEngineeringRequestPlugin_new(void) 
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
            nec::engineering::RotateEngineeringRequestPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::engineering::RotateEngineeringRequestPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::engineering::RotateEngineeringRequestPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::engineering::RotateEngineeringRequestPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::engineering::RotateEngineeringRequestPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            RotateEngineeringRequestPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            RotateEngineeringRequestPlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            nec::engineering::RotateEngineeringRequestPlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            nec::engineering::RotateEngineeringRequestPlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::engineering::RotateEngineeringRequestPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            nec::engineering::RotateEngineeringRequestPlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            RotateEngineeringRequestPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            RotateEngineeringRequestPlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::engineering::RotateEngineeringRequestPlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::engineering::RotateEngineeringRequestPlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            nec::engineering::RotateEngineeringRequestPlugin_serialize_key;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::engineering::RotateEngineeringRequestPlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            nec::engineering::RotateEngineeringRequestPlugin_deserialize_key_sample;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::engineering::RotateEngineeringRequestPlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::engineering::RotateEngineeringRequestPlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            RotateEngineeringRequestPlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            RotateEngineeringRequestPlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::engineering::RotateEngineeringRequestPlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::engineering::RotateEngineeringRequestPlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::engineering::RotateEngineeringRequest_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            RotateEngineeringRequestPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            RotateEngineeringRequestPlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            nec::engineering::RotateEngineeringRequestPlugin_get_serialized_sample_size;

            plugin->endpointTypeName = RotateEngineeringRequestTYPENAME;

            return plugin;
        }

        void
        RotateEngineeringRequestPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type RotateEngineeringObjective
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        RotateEngineeringObjective*
        RotateEngineeringObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            RotateEngineeringObjective *sample = NULL;

            sample = new (std::nothrow) RotateEngineeringObjective ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::engineering::RotateEngineeringObjective_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        RotateEngineeringObjective *
        RotateEngineeringObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            RotateEngineeringObjective *sample = NULL;

            sample = new (std::nothrow) RotateEngineeringObjective ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::engineering::RotateEngineeringObjective_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        RotateEngineeringObjective *
        RotateEngineeringObjectivePluginSupport_create_data(void)
        {
            return nec::engineering::RotateEngineeringObjectivePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        RotateEngineeringObjectivePluginSupport_destroy_data_w_params(
            RotateEngineeringObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            nec::engineering::RotateEngineeringObjective_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        RotateEngineeringObjectivePluginSupport_destroy_data_ex(
            RotateEngineeringObjective *sample,RTIBool deallocate_pointers) {

            nec::engineering::RotateEngineeringObjective_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        RotateEngineeringObjectivePluginSupport_destroy_data(
            RotateEngineeringObjective *sample) {

            nec::engineering::RotateEngineeringObjectivePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        RotateEngineeringObjectivePluginSupport_copy_data(
            RotateEngineeringObjective *dst,
            const RotateEngineeringObjective *src)
        {
            return nec::engineering::RotateEngineeringObjective_copy(dst,(const RotateEngineeringObjective*) src);
        }

        void 
        RotateEngineeringObjectivePluginSupport_print_data(
            const RotateEngineeringObjective *sample,
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
                (const DataTypes::Time*) &sample->estimatedDuration, "estimatedDuration", indent_level + 1);

            RTICdrType_printDouble(
                &sample->targetRate, "targetRate", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->targetTorque, "targetTorque", indent_level + 1);    

        }
        RotateEngineeringObjective *
        RotateEngineeringObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers){
            RotateEngineeringObjective *key = NULL;

            key = new (std::nothrow) RotateEngineeringObjectiveKeyHolder ;

            nec::engineering::RotateEngineeringObjective_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        RotateEngineeringObjective *
        RotateEngineeringObjectivePluginSupport_create_key(void)
        {
            return  nec::engineering::RotateEngineeringObjectivePluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        RotateEngineeringObjectivePluginSupport_destroy_key_ex(
            RotateEngineeringObjectiveKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::engineering::RotateEngineeringObjective_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;

        }

        void 
        RotateEngineeringObjectivePluginSupport_destroy_key(
            RotateEngineeringObjectiveKeyHolder *key) {

            nec::engineering::RotateEngineeringObjectivePluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        RotateEngineeringObjectivePlugin_on_participant_attached(
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
        RotateEngineeringObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        RotateEngineeringObjectivePlugin_on_endpoint_attached(
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
                nec::engineering::RotateEngineeringObjectivePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::engineering::RotateEngineeringObjectivePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::engineering::RotateEngineeringObjectivePluginSupport_create_key ,            
                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::engineering::RotateEngineeringObjectivePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 
            serializedKeyMaxSize =  nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,endpoint_info,serializedKeyMaxSize))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        RotateEngineeringObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        RotateEngineeringObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *sample,
            void *handle)
        {

            RotateEngineeringObjective_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        RotateEngineeringObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *dst,
            const RotateEngineeringObjective *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::engineering::RotateEngineeringObjectivePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        RotateEngineeringObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringObjective *sample, 
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
                    (const DataTypes::Time*) &sample->estimatedDuration,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->targetRate)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->targetTorque)) {
                    return RTI_FALSE;
                }

            }

            if(serialize_encapsulation) {
                RTICdrStream_restoreAlignment(stream,position);
            }

            return retval;
        }

        RTIBool 
        RotateEngineeringObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *sample,
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

                    nec::engineering::RotateEngineeringObjective_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

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
                        &sample->estimatedDuration,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->targetRate)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->targetTorque)) {
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
        RotateEngineeringObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateEngineeringObjective *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            RotateEngineeringObjectivePlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                RotateEngineeringObjectivePlugin_get_serialized_sample_size(
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

            result = nec::engineering::RotateEngineeringObjectivePlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        RotateEngineeringObjectivePlugin_deserialize_from_cdr_buffer(
            RotateEngineeringObjective *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            RotateEngineeringObjective_finalize_optional_members(sample, RTI_TRUE);
            return RotateEngineeringObjectivePlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        RotateEngineeringObjectivePlugin_data_to_string(
            const RotateEngineeringObjective *sample,
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

            if (!RotateEngineeringObjectivePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!RotateEngineeringObjectivePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                RotateEngineeringObjective_get_typecode(), 
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
        RotateEngineeringObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "RotateEngineeringObjectivePlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::engineering::RotateEngineeringObjectivePlugin_deserialize_sample( 
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
                    "RotateEngineeringObjective");

            }

            return result;

        }

        RTIBool RotateEngineeringObjectivePlugin_skip(
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
        RotateEngineeringObjectivePlugin_get_serialized_sample_max_size_ex(
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

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return  current_alignment - initial_alignment;
        }

        unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RotateEngineeringObjectivePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_sample_min_size(
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
        RotateEngineeringObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateEngineeringObjective * sample) 
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
                current_alignment, (const DataTypes::Time*) &sample->estimatedDuration);

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
        RotateEngineeringObjectivePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool 
        RotateEngineeringObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringObjective *sample, 
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

        RTIBool RotateEngineeringObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *sample, 
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

        RTIBool RotateEngineeringObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::engineering::RotateEngineeringObjectivePlugin_deserialize_key_sample(
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
        RotateEngineeringObjectivePlugin_get_serialized_key_max_size_ex(
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
        RotateEngineeringObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RotateEngineeringObjectivePlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        RotateEngineeringObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *sample,
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
        RotateEngineeringObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjectiveKeyHolder *dst, 
            const RotateEngineeringObjective *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        RotateEngineeringObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *dst, const
            RotateEngineeringObjectiveKeyHolder *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   
            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        RotateEngineeringObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateEngineeringObjective *instance)
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

            if (!nec::engineering::RotateEngineeringObjectivePlugin_serialize_key(
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

                size = (int)nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_sample_size(
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
                if (!nec::engineering::RotateEngineeringObjectivePlugin_serialize_key(
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
        RotateEngineeringObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;
            RotateEngineeringObjective * sample=NULL;

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

            sample = (RotateEngineeringObjective *)
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

            if (!nec::engineering::RotateEngineeringObjectivePlugin_instance_to_keyhash(
                endpoint_data, keyhash, sample)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *RotateEngineeringObjectivePlugin_new(void) 
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
            nec::engineering::RotateEngineeringObjectivePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::engineering::RotateEngineeringObjectivePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::engineering::RotateEngineeringObjectivePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::engineering::RotateEngineeringObjectivePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            RotateEngineeringObjectivePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            RotateEngineeringObjectivePlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            RotateEngineeringObjectivePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            RotateEngineeringObjectivePlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_serialize_key;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_deserialize_key_sample;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            RotateEngineeringObjectivePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            RotateEngineeringObjectivePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::engineering::RotateEngineeringObjective_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            RotateEngineeringObjectivePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            RotateEngineeringObjectivePlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            nec::engineering::RotateEngineeringObjectivePlugin_get_serialized_sample_size;

            plugin->endpointTypeName = RotateEngineeringObjectiveTYPENAME;

            return plugin;
        }

        void
        RotateEngineeringObjectivePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type RotateEngineeringState
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        RotateEngineeringState*
        RotateEngineeringStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params) 
        {
            RotateEngineeringState *sample = NULL;

            sample = new (std::nothrow) RotateEngineeringState ;
            if (sample == NULL) {
                return NULL;
            }

            if (!nec::engineering::RotateEngineeringState_initialize_w_params(sample,alloc_params)) {
                delete  sample;
                sample=NULL;
            }
            return sample; 
        } 

        RotateEngineeringState *
        RotateEngineeringStatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
        {
            RotateEngineeringState *sample = NULL;

            sample = new (std::nothrow) RotateEngineeringState ;

            if(sample == NULL) {
                return NULL;
            }

            if (!nec::engineering::RotateEngineeringState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                delete  sample;
                sample=NULL;
            }

            return sample; 
        }

        RotateEngineeringState *
        RotateEngineeringStatePluginSupport_create_data(void)
        {
            return nec::engineering::RotateEngineeringStatePluginSupport_create_data_ex(RTI_TRUE);
        }

        void 
        RotateEngineeringStatePluginSupport_destroy_data_w_params(
            RotateEngineeringState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params) {

            nec::engineering::RotateEngineeringState_finalize_w_params(sample,dealloc_params);

            delete  sample;
            sample=NULL;
        }

        void 
        RotateEngineeringStatePluginSupport_destroy_data_ex(
            RotateEngineeringState *sample,RTIBool deallocate_pointers) {

            nec::engineering::RotateEngineeringState_finalize_ex(sample,deallocate_pointers);

            delete  sample;
            sample=NULL;
        }

        void 
        RotateEngineeringStatePluginSupport_destroy_data(
            RotateEngineeringState *sample) {

            nec::engineering::RotateEngineeringStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

        }

        RTIBool 
        RotateEngineeringStatePluginSupport_copy_data(
            RotateEngineeringState *dst,
            const RotateEngineeringState *src)
        {
            return nec::engineering::RotateEngineeringState_copy(dst,(const RotateEngineeringState*) src);
        }

        void 
        RotateEngineeringStatePluginSupport_print_data(
            const RotateEngineeringState *sample,
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

            DataTypes::StatusPluginSupport_print_data(
                (const DataTypes::Status*) &sample->status, "status", indent_level + 1);

            DataTypes::TimePluginSupport_print_data(
                (const DataTypes::Time*) &sample->timestamp, "timestamp", indent_level + 1);

            nec::engineering::StatePluginSupport_print_data(
                (const nec::engineering::State*) &sample->state, "state", indent_level + 1);

            nec::engineering::ModePluginSupport_print_data(
                (const nec::engineering::Mode*) &sample->mode, "mode", indent_level + 1);

            RTICdrType_printDouble(
                &sample->actualVelocity, "actualVelocity", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->actualTorque, "actualTorque", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->actualPosition, "actualPosition", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->actualPower, "actualPower", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minVelocity, "minVelocity", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxVelocity, "maxVelocity", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minTorque, "minTorque", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxTorque, "maxTorque", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->minPosition, "minPosition", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->maxPosition, "maxPosition", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->targetVelocity, "targetVelocity", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->targetTorque, "targetTorque", indent_level + 1);    

            RTICdrType_printDouble(
                &sample->targetPosition, "targetPosition", indent_level + 1);    

        }
        RotateEngineeringState *
        RotateEngineeringStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
            RotateEngineeringState *key = NULL;

            key = new (std::nothrow) RotateEngineeringStateKeyHolder ;

            nec::engineering::RotateEngineeringState_initialize_ex(key,allocate_pointers, RTI_TRUE);

            return key;
        }

        RotateEngineeringState *
        RotateEngineeringStatePluginSupport_create_key(void)
        {
            return  nec::engineering::RotateEngineeringStatePluginSupport_create_key_ex(RTI_TRUE);
        }

        void 
        RotateEngineeringStatePluginSupport_destroy_key_ex(
            RotateEngineeringStateKeyHolder *key,RTIBool deallocate_pointers)
        {
            nec::engineering::RotateEngineeringState_finalize_ex(key,deallocate_pointers);

            delete  key;
            key=NULL;

        }

        void 
        RotateEngineeringStatePluginSupport_destroy_key(
            RotateEngineeringStateKeyHolder *key) {

            nec::engineering::RotateEngineeringStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        RotateEngineeringStatePlugin_on_participant_attached(
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
        RotateEngineeringStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {

            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }

        PRESTypePluginEndpointData
        RotateEngineeringStatePlugin_on_endpoint_attached(
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
                nec::engineering::RotateEngineeringStatePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                nec::engineering::RotateEngineeringStatePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                nec::engineering::RotateEngineeringStatePluginSupport_create_key ,            
                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                nec::engineering::RotateEngineeringStatePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 
            serializedKeyMaxSize =  nec::engineering::RotateEngineeringStatePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,endpoint_info,serializedKeyMaxSize))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = nec::engineering::RotateEngineeringStatePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    nec::engineering::RotateEngineeringStatePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    nec::engineering::RotateEngineeringStatePlugin_get_serialized_sample_size,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;    
        }

        void 
        RotateEngineeringStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  

            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        RotateEngineeringStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *sample,
            void *handle)
        {

            RotateEngineeringState_finalize_optional_members(sample, RTI_TRUE);

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        RotateEngineeringStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *dst,
            const RotateEngineeringState *src)
        {
            if (endpoint_data) {} /* To avoid warnings */
            return nec::engineering::RotateEngineeringStatePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        RotateEngineeringStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool 
        RotateEngineeringStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringState *sample, 
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

                if(!DataTypes::StatusPlugin_serialize(
                    endpoint_data,
                    (const DataTypes::Status*) &sample->status,
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

                if(!nec::engineering::StatePlugin_serialize(
                    endpoint_data,
                    (const nec::engineering::State*) &sample->state,
                    stream,
                    RTI_FALSE, encapsulation_id,
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }

                if(!nec::engineering::ModePlugin_serialize(
                    endpoint_data,
                    (const nec::engineering::Mode*) &sample->mode,
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
                    stream, &sample->actualTorque)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->actualPosition)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->actualPower)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minVelocity)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxVelocity)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minTorque)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxTorque)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->minPosition)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->maxPosition)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->targetVelocity)) {
                    return RTI_FALSE;
                }

                if (!RTICdrStream_serializeDouble(
                    stream, &sample->targetTorque)) {
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
        RotateEngineeringStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *sample,
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

                    nec::engineering::RotateEngineeringState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                    if(!DataTypes::UuidPlugin_deserialize_sample(
                        endpoint_data,
                        &sample->id,
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
                    if(!DataTypes::TimePlugin_deserialize_sample(
                        endpoint_data,
                        &sample->timestamp,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if(!nec::engineering::StatePlugin_deserialize_sample(
                        endpoint_data,
                        &sample->state,
                        stream,
                        RTI_FALSE, RTI_TRUE,
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if(!nec::engineering::ModePlugin_deserialize_sample(
                        endpoint_data,
                        &sample->mode,
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
                        stream, &sample->actualTorque)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->actualPosition)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->actualPower)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minVelocity)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxVelocity)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minTorque)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxTorque)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->minPosition)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->maxPosition)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->targetVelocity)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_deserializeDouble(
                        stream, &sample->targetTorque)) {
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

            } catch (std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        RTIBool
        RotateEngineeringStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateEngineeringState *sample)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;

            if (length == NULL) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            RotateEngineeringStatePlugin_get_serialized_sample_max_size(
                NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

            if (buffer == NULL) {
                *length = 
                RotateEngineeringStatePlugin_get_serialized_sample_size(
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

            result = nec::engineering::RotateEngineeringStatePlugin_serialize(
                (PRESTypePluginEndpointData)&epd, sample, &stream, 
                RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                RTI_TRUE, NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        }

        RTIBool
        RotateEngineeringStatePlugin_deserialize_from_cdr_buffer(
            RotateEngineeringState *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            RotateEngineeringState_finalize_optional_members(sample, RTI_TRUE);
            return RotateEngineeringStatePlugin_deserialize_sample( 
                NULL, sample,
                &stream, RTI_TRUE, RTI_TRUE, 
                NULL);
        }

        DDS_ReturnCode_t
        RotateEngineeringStatePlugin_data_to_string(
            const RotateEngineeringState *sample,
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

            if (!RotateEngineeringStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length, 
                sample)) {
                return DDS_RETCODE_ERROR;
            }

            RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
            if (buffer == NULL) {
                return DDS_RETCODE_ERROR;
            }

            if (!RotateEngineeringStatePlugin_serialize_to_cdr_buffer(
                buffer, 
                &length, 
                sample)) {
                RTIOsapiHeap_freeBuffer(buffer);
                return DDS_RETCODE_ERROR;
            }

            data = DDS_DynamicData_new(
                RotateEngineeringState_get_typecode(), 
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
        RotateEngineeringStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos)
        {

            RTIBool result;
            const char *METHOD_NAME = "RotateEngineeringStatePlugin_deserialize";
            if (drop_sample) {} /* To avoid warnings */

            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::engineering::RotateEngineeringStatePlugin_deserialize_sample( 
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
                    "RotateEngineeringState");

            }

            return result;

        }

        RTIBool RotateEngineeringStatePlugin_skip(
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
                if (!DataTypes::StatusPlugin_skip(
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
                if (!nec::engineering::StatePlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }
                if (!nec::engineering::ModePlugin_skip(
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
        RotateEngineeringStatePlugin_get_serialized_sample_max_size_ex(
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

            current_alignment +=DataTypes::StatusPlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            current_alignment +=DataTypes::TimePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            current_alignment +=nec::engineering::StatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

            current_alignment +=nec::engineering::ModePlugin_get_serialized_sample_max_size_ex(
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

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return  current_alignment - initial_alignment;
        }

        unsigned int 
        RotateEngineeringStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RotateEngineeringStatePlugin_get_serialized_sample_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        unsigned int 
        RotateEngineeringStatePlugin_get_serialized_sample_min_size(
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
            current_alignment +=DataTypes::StatusPlugin_get_serialized_sample_min_size(
                endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            current_alignment +=DataTypes::TimePlugin_get_serialized_sample_min_size(
                endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            current_alignment +=nec::engineering::StatePlugin_get_serialized_sample_min_size(
                endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            current_alignment +=nec::engineering::ModePlugin_get_serialized_sample_min_size(
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
        RotateEngineeringStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateEngineeringState * sample) 
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

            current_alignment += DataTypes::StatusPlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Status*) &sample->status);

            current_alignment += DataTypes::TimePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const DataTypes::Time*) &sample->timestamp);

            current_alignment += nec::engineering::StatePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const nec::engineering::State*) &sample->state);

            current_alignment += nec::engineering::ModePlugin_get_serialized_sample_size(
                endpoint_data,RTI_FALSE, encapsulation_id,
                current_alignment, (const nec::engineering::Mode*) &sample->mode);

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

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }
            return current_alignment - initial_alignment;
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        RotateEngineeringStatePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool 
        RotateEngineeringStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringState *sample, 
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

        RTIBool RotateEngineeringStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *sample, 
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

        RTIBool RotateEngineeringStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= nec::engineering::RotateEngineeringStatePlugin_deserialize_key_sample(
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
        RotateEngineeringStatePlugin_get_serialized_key_max_size_ex(
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
        RotateEngineeringStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = RotateEngineeringStatePlugin_get_serialized_key_max_size_ex(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        RotateEngineeringStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *sample,
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
                if (!DataTypes::StatusPlugin_skip(
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

                if (!nec::engineering::StatePlugin_skip(
                    endpoint_data,
                    stream, 
                    RTI_FALSE, RTI_TRUE, 
                    endpoint_plugin_qos)) {
                    goto fin; 
                }

                if (!nec::engineering::ModePlugin_skip(
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
        RotateEngineeringStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringStateKeyHolder *dst, 
            const RotateEngineeringState *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   

            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        RotateEngineeringStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *dst, const
            RotateEngineeringStateKeyHolder *src)
        {

            if (endpoint_data) {} /* To avoid warnings */   
            if (!DataTypes::Uuid_copy(
                &dst->id,(const DataTypes::Uuid*)&src->id)) {
                return RTI_FALSE;
            } 
            return RTI_TRUE;
        }

        RTIBool 
        RotateEngineeringStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateEngineeringState *instance)
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

            if (!nec::engineering::RotateEngineeringStatePlugin_serialize_key(
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

                size = (int)nec::engineering::RotateEngineeringStatePlugin_get_serialized_sample_size(
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
                if (!nec::engineering::RotateEngineeringStatePlugin_serialize_key(
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
        RotateEngineeringStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos) 
        {   
            char * position = NULL;

            RTIBool done = RTI_FALSE;
            RTIBool error = RTI_FALSE;
            RotateEngineeringState * sample=NULL;

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

            sample = (RotateEngineeringState *)
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

            if (!nec::engineering::RotateEngineeringStatePlugin_instance_to_keyhash(
                endpoint_data, keyhash, sample)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *RotateEngineeringStatePlugin_new(void) 
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
            nec::engineering::RotateEngineeringStatePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            nec::engineering::RotateEngineeringStatePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            nec::engineering::RotateEngineeringStatePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            nec::engineering::RotateEngineeringStatePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            nec::engineering::RotateEngineeringStatePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            RotateEngineeringStatePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            RotateEngineeringStatePlugin_destroy_sample;

            plugin->serializeFnc =
            (PRESTypePluginSerializeFunction)
            nec::engineering::RotateEngineeringStatePlugin_serialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction)
            nec::engineering::RotateEngineeringStatePlugin_deserialize;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            nec::engineering::RotateEngineeringStatePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            nec::engineering::RotateEngineeringStatePlugin_get_serialized_sample_min_size;

            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            RotateEngineeringStatePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            RotateEngineeringStatePlugin_return_sample;

            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            nec::engineering::RotateEngineeringStatePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            nec::engineering::RotateEngineeringStatePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            nec::engineering::RotateEngineeringStatePlugin_serialize_key;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            nec::engineering::RotateEngineeringStatePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            nec::engineering::RotateEngineeringStatePlugin_deserialize_key_sample;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            nec::engineering::RotateEngineeringStatePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            nec::engineering::RotateEngineeringStatePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            RotateEngineeringStatePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            RotateEngineeringStatePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            nec::engineering::RotateEngineeringStatePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            nec::engineering::RotateEngineeringStatePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            plugin->typeCode =  (struct RTICdrTypeCode *)nec::engineering::RotateEngineeringState_get_typecode();

            plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            RotateEngineeringStatePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            RotateEngineeringStatePlugin_return_buffer;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            nec::engineering::RotateEngineeringStatePlugin_get_serialized_sample_size;

            plugin->endpointTypeName = RotateEngineeringStateTYPENAME;

            return plugin;
        }

        void
        RotateEngineeringStatePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace engineering  */
} /* namespace nec  */
#undef RTI_CDR_CURRENT_SUBMODULE 
