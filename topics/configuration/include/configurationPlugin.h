

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef configurationPlugin_301632859_h
#define configurationPlugin_301632859_h

#include "configuration.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace Configuration {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    config_typePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const config_type *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    config_typePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_type *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    config_typePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    config_typePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    config_typePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    config_typePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    config_typePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const config_type * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    config_typePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    config_typePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    config_typePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const config_type *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    config_typePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_type * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    config_typePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        config_type *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    config_typePluginSupport_print_data(
        const config_type *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    plant_typePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const plant_type *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    plant_typePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        plant_type *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    plant_typePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    plant_typePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    plant_typePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    plant_typePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    plant_typePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const plant_type * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    plant_typePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    plant_typePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    plant_typePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const plant_type *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    plant_typePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        plant_type * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    plant_typePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        plant_type *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    plant_typePluginSupport_print_data(
        const plant_type *sample, const char *desc, int indent_level);

    #define protocol_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define protocol_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define protocol_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define protocol_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define protocol_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern protocol_t*
    protocol_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern protocol_t*
    protocol_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern protocol_t*
    protocol_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    protocol_tPluginSupport_copy_data(
        protocol_t *out,
        const protocol_t *in);

    NDDSUSERDllExport extern void 
    protocol_tPluginSupport_destroy_data_w_params(
        protocol_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    protocol_tPluginSupport_destroy_data_ex(
        protocol_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    protocol_tPluginSupport_destroy_data(
        protocol_t *sample);

    NDDSUSERDllExport extern void 
    protocol_tPluginSupport_print_data(
        const protocol_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    protocol_tPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    protocol_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    protocol_tPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    protocol_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    protocol_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    protocol_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *out,
        const protocol_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    protocol_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const protocol_t *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    protocol_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    protocol_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const protocol_t *sample); 

    NDDSUSERDllExport extern RTIBool 
    protocol_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    protocol_tPlugin_deserialize_from_cdr_buffer(
        protocol_t *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    protocol_tPlugin_data_to_string(
        const protocol_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    protocol_tPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    protocol_tPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    protocol_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    protocol_tPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    protocol_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const protocol_t * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    protocol_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    protocol_tPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    protocol_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    protocol_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const protocol_t *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    protocol_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    protocol_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    protocol_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        protocol_t *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    protocol_tPlugin_new(void);

    NDDSUSERDllExport extern void
    protocol_tPlugin_delete(struct PRESTypePlugin *);

    #define interface_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define interface_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define interface_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define interface_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define interface_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern interface_t*
    interface_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern interface_t*
    interface_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern interface_t*
    interface_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    interface_tPluginSupport_copy_data(
        interface_t *out,
        const interface_t *in);

    NDDSUSERDllExport extern void 
    interface_tPluginSupport_destroy_data_w_params(
        interface_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    interface_tPluginSupport_destroy_data_ex(
        interface_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    interface_tPluginSupport_destroy_data(
        interface_t *sample);

    NDDSUSERDllExport extern void 
    interface_tPluginSupport_print_data(
        const interface_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    interface_tPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    interface_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    interface_tPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    interface_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    interface_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    interface_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *out,
        const interface_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    interface_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const interface_t *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    interface_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    interface_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const interface_t *sample); 

    NDDSUSERDllExport extern RTIBool 
    interface_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        interface_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    interface_tPlugin_deserialize_from_cdr_buffer(
        interface_t *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    interface_tPlugin_data_to_string(
        const interface_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    interface_tPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    interface_tPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    interface_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    interface_tPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    interface_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const interface_t * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    interface_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    interface_tPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    interface_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    interface_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const interface_t *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    interface_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        interface_t * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    interface_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        interface_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    interface_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        interface_t *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    interface_tPlugin_new(void);

    NDDSUSERDllExport extern void
    interface_tPlugin_delete(struct PRESTypePlugin *);

    #define config_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define config_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define config_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define config_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define config_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern config_data*
    config_dataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern config_data*
    config_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern config_data*
    config_dataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    config_dataPluginSupport_copy_data(
        config_data *out,
        const config_data *in);

    NDDSUSERDllExport extern void 
    config_dataPluginSupport_destroy_data_w_params(
        config_data *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    config_dataPluginSupport_destroy_data_ex(
        config_data *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    config_dataPluginSupport_destroy_data(
        config_data *sample);

    NDDSUSERDllExport extern void 
    config_dataPluginSupport_print_data(
        const config_data *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    config_dataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    config_dataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    config_dataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    config_dataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    config_dataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    config_dataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data *out,
        const config_data *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    config_dataPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const config_data *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    config_dataPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    config_dataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const config_data *sample); 

    NDDSUSERDllExport extern RTIBool 
    config_dataPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        config_data **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    config_dataPlugin_deserialize_from_cdr_buffer(
        config_data *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    config_dataPlugin_data_to_string(
        const config_data *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    config_dataPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    config_dataPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    config_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    config_dataPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    config_dataPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const config_data * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    config_dataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    config_dataPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    config_dataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    config_dataPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const config_data *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    config_dataPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        config_data * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    config_dataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        config_data ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    config_dataPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        config_data *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    config_dataPlugin_new(void);

    NDDSUSERDllExport extern void
    config_dataPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Item
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Item)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Item must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Item.
    */
    typedef  class Item ItemKeyHolder;

    #define ItemPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define ItemPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ItemPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define ItemPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ItemPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ItemPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ItemPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Item*
    ItemPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Item*
    ItemPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Item*
    ItemPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ItemPluginSupport_copy_data(
        Item *out,
        const Item *in);

    NDDSUSERDllExport extern void 
    ItemPluginSupport_destroy_data_w_params(
        Item *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ItemPluginSupport_destroy_data_ex(
        Item *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ItemPluginSupport_destroy_data(
        Item *sample);

    NDDSUSERDllExport extern void 
    ItemPluginSupport_print_data(
        const Item *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Item*
    ItemPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Item*
    ItemPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ItemPluginSupport_destroy_key_ex(
        ItemKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ItemPluginSupport_destroy_key(
        ItemKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ItemPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ItemPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ItemPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ItemPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ItemPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item *out,
        const Item *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Item *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ItemPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Item *sample); 

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Item **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ItemPlugin_deserialize_from_cdr_buffer(
        Item *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ItemPlugin_data_to_string(
        const Item *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    ItemPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    ItemPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    ItemPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ItemPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    ItemPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Item * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ItemPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ItemPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ItemPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Item *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Item * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Item ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ItemPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Item *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ItemKeyHolder *key, 
        const Item *instance);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Item *instance, 
        const ItemKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const Item *instance);

    NDDSUSERDllExport extern RTIBool 
    ItemPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ItemPlugin_new(void);

    NDDSUSERDllExport extern void
    ItemPlugin_delete(struct PRESTypePlugin *);

} /* namespace Configuration  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* configurationPlugin_301632859_h */

