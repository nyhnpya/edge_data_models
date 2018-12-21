

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef circulatePlugin_1746882207_h
#define circulatePlugin_1746882207_h

#include "circulate.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "base_data_typesPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace plc {
    namespace process {

        #define CirculateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define CirculateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CirculateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define CirculateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define CirculateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern CirculateRequest*
        CirculateRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern CirculateRequest*
        CirculateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateRequest*
        CirculateRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPluginSupport_copy_data(
            CirculateRequest *out,
            const CirculateRequest *in);

        NDDSUSERDllExport extern void 
        CirculateRequestPluginSupport_destroy_data_w_params(
            CirculateRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        CirculateRequestPluginSupport_destroy_data_ex(
            CirculateRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateRequestPluginSupport_destroy_data(
            CirculateRequest *sample);

        NDDSUSERDllExport extern void 
        CirculateRequestPluginSupport_print_data(
            const CirculateRequest *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        CirculateRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        CirculateRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        CirculateRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        CirculateRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        CirculateRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *out,
            const CirculateRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const CirculateRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateRequestPlugin_deserialize_from_cdr_buffer(
            CirculateRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        CirculateRequestPlugin_data_to_string(
            const CirculateRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        CirculateRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        CirculateRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        CirculateRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        CirculateRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const CirculateRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        CirculateRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        CirculateRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CirculateRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        CirculateRequestPlugin_delete(struct PRESTypePlugin *);

        #define CirculateStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define CirculateStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CirculateStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define CirculateStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define CirculateStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern CirculateState*
        CirculateStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern CirculateState*
        CirculateStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateState*
        CirculateStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePluginSupport_copy_data(
            CirculateState *out,
            const CirculateState *in);

        NDDSUSERDllExport extern void 
        CirculateStatePluginSupport_destroy_data_w_params(
            CirculateState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        CirculateStatePluginSupport_destroy_data_ex(
            CirculateState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateStatePluginSupport_destroy_data(
            CirculateState *sample);

        NDDSUSERDllExport extern void 
        CirculateStatePluginSupport_print_data(
            const CirculateState *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        CirculateStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        CirculateStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        CirculateStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        CirculateStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        CirculateStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *out,
            const CirculateState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const CirculateState *sample); 

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateStatePlugin_deserialize_from_cdr_buffer(
            CirculateState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        CirculateStatePlugin_data_to_string(
            const CirculateState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        CirculateStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        CirculateStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        CirculateStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        CirculateStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const CirculateState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        CirculateStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        CirculateStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CirculateStatePlugin_new(void);

        NDDSUSERDllExport extern void
        CirculateStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* circulatePlugin_1746882207_h */

