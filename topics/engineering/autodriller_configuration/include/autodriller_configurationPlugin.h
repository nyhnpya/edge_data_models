

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autodriller_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autodriller_configurationPlugin_730533907_h
#define autodriller_configurationPlugin_730533907_h

#include "autodriller_configuration.h"

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

namespace AutoDrillerConfiguration {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct HmiRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct HmiRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * HmiRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct HmiRequest.
    */
    typedef  class HmiRequest HmiRequestKeyHolder;

    #define HmiRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define HmiRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define HmiRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define HmiRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define HmiRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define HmiRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define HmiRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern HmiRequest*
    HmiRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern HmiRequest*
    HmiRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HmiRequest*
    HmiRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPluginSupport_copy_data(
        HmiRequest *out,
        const HmiRequest *in);

    NDDSUSERDllExport extern void 
    HmiRequestPluginSupport_destroy_data_w_params(
        HmiRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    HmiRequestPluginSupport_destroy_data_ex(
        HmiRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HmiRequestPluginSupport_destroy_data(
        HmiRequest *sample);

    NDDSUSERDllExport extern void 
    HmiRequestPluginSupport_print_data(
        const HmiRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern HmiRequest*
    HmiRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HmiRequest*
    HmiRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    HmiRequestPluginSupport_destroy_key_ex(
        HmiRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HmiRequestPluginSupport_destroy_key(
        HmiRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    HmiRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    HmiRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    HmiRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    HmiRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    HmiRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *out,
        const HmiRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const HmiRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    HmiRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HmiRequest *sample); 

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    HmiRequestPlugin_deserialize_from_cdr_buffer(
        HmiRequest *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    HmiRequestPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    HmiRequestPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    HmiRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    HmiRequestPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    HmiRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const HmiRequest * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    HmiRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    HmiRequestPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    HmiRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const HmiRequest *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    HmiRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequestKeyHolder *key, 
        const HmiRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HmiRequest *instance, 
        const HmiRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const HmiRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    HmiRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    HmiRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    HmiRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct HmiState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct HmiState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * HmiState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct HmiState.
    */
    typedef  class HmiState HmiStateKeyHolder;

    #define HmiStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define HmiStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define HmiStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define HmiStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define HmiStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define HmiStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define HmiStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern HmiState*
    HmiStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern HmiState*
    HmiStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HmiState*
    HmiStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePluginSupport_copy_data(
        HmiState *out,
        const HmiState *in);

    NDDSUSERDllExport extern void 
    HmiStatePluginSupport_destroy_data_w_params(
        HmiState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    HmiStatePluginSupport_destroy_data_ex(
        HmiState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HmiStatePluginSupport_destroy_data(
        HmiState *sample);

    NDDSUSERDllExport extern void 
    HmiStatePluginSupport_print_data(
        const HmiState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern HmiState*
    HmiStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern HmiState*
    HmiStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    HmiStatePluginSupport_destroy_key_ex(
        HmiStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HmiStatePluginSupport_destroy_key(
        HmiStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    HmiStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    HmiStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    HmiStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    HmiStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    HmiStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *out,
        const HmiState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const HmiState *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    HmiStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const HmiState *sample); 

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        HmiState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    HmiStatePlugin_deserialize_from_cdr_buffer(
        HmiState *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    HmiStatePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    HmiStatePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    HmiStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    HmiStatePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    HmiStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const HmiState * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    HmiStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    HmiStatePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    HmiStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const HmiState *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        HmiState * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    HmiStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HmiStateKeyHolder *key, 
        const HmiState *instance);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        HmiState *instance, 
        const HmiStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const HmiState *instance);

    NDDSUSERDllExport extern RTIBool 
    HmiStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    HmiStatePlugin_new(void);

    NDDSUSERDllExport extern void
    HmiStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace AutoDrillerConfiguration  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* autodriller_configurationPlugin_730533907_h */

