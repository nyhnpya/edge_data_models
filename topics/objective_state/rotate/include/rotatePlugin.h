

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef rotatePlugin_79876161_h
#define rotatePlugin_79876161_h

#include "rotate.h"

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

        #define RotateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define RotateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RotateRequest*
        RotateRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern RotateRequest*
        RotateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateRequest*
        RotateRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPluginSupport_copy_data(
            RotateRequest *out,
            const RotateRequest *in);

        NDDSUSERDllExport extern void 
        RotateRequestPluginSupport_destroy_data_w_params(
            RotateRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        RotateRequestPluginSupport_destroy_data_ex(
            RotateRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateRequestPluginSupport_destroy_data(
            RotateRequest *sample);

        NDDSUSERDllExport extern void 
        RotateRequestPluginSupport_print_data(
            const RotateRequest *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        RotateRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        RotateRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        RotateRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        RotateRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        RotateRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest *out,
            const RotateRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateRequestPlugin_deserialize_from_cdr_buffer(
            RotateRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        RotateRequestPlugin_data_to_string(
            const RotateRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        RotateRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        RotateRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        RotateRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        RotateRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        RotateRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        RotateRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        RotateRequestPlugin_delete(struct PRESTypePlugin *);

        #define RotateStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define RotateStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RotateState*
        RotateStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern RotateState*
        RotateStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateState*
        RotateStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePluginSupport_copy_data(
            RotateState *out,
            const RotateState *in);

        NDDSUSERDllExport extern void 
        RotateStatePluginSupport_destroy_data_w_params(
            RotateState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        RotateStatePluginSupport_destroy_data_ex(
            RotateState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateStatePluginSupport_destroy_data(
            RotateState *sample);

        NDDSUSERDllExport extern void 
        RotateStatePluginSupport_print_data(
            const RotateState *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        RotateStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        RotateStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        RotateStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        RotateStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        RotateStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateState *out,
            const RotateState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateState *sample); 

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateStatePlugin_deserialize_from_cdr_buffer(
            RotateState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        RotateStatePlugin_data_to_string(
            const RotateState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        RotateStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        RotateStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        RotateStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        RotateStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        RotateStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        RotateStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateStatePlugin_new(void);

        NDDSUSERDllExport extern void
        RotateStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* rotatePlugin_79876161_h */

