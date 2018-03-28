

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill_simulation.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drill_simulationPlugin_1660684592_h
#define drill_simulationPlugin_1660684592_h

#include "drill_simulation.h"

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

namespace Simulation {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AutoDrillerRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AutoDrillerRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AutoDrillerRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AutoDrillerRequest.
    */
    typedef  class AutoDrillerRequest AutoDrillerRequestKeyHolder;

    #define AutoDrillerRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define AutoDrillerRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define AutoDrillerRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define AutoDrillerRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define AutoDrillerRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define AutoDrillerRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define AutoDrillerRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern AutoDrillerRequest*
    AutoDrillerRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern AutoDrillerRequest*
    AutoDrillerRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AutoDrillerRequest*
    AutoDrillerRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPluginSupport_copy_data(
        AutoDrillerRequest *out,
        const AutoDrillerRequest *in);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPluginSupport_destroy_data_w_params(
        AutoDrillerRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPluginSupport_destroy_data_ex(
        AutoDrillerRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPluginSupport_destroy_data(
        AutoDrillerRequest *sample);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPluginSupport_print_data(
        const AutoDrillerRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern AutoDrillerRequest*
    AutoDrillerRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AutoDrillerRequest*
    AutoDrillerRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPluginSupport_destroy_key_ex(
        AutoDrillerRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPluginSupport_destroy_key(
        AutoDrillerRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    AutoDrillerRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    AutoDrillerRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    AutoDrillerRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    AutoDrillerRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest *out,
        const AutoDrillerRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const AutoDrillerRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const AutoDrillerRequest *sample); 

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerRequestPlugin_deserialize_from_cdr_buffer(
        AutoDrillerRequest *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    AutoDrillerRequestPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerRequestPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerRequestPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    AutoDrillerRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const AutoDrillerRequest * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    AutoDrillerRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerRequestPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const AutoDrillerRequest *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequestKeyHolder *key, 
        const AutoDrillerRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerRequest *instance, 
        const AutoDrillerRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const AutoDrillerRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    AutoDrillerRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    AutoDrillerRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AutoDrillerObjective
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AutoDrillerObjective)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AutoDrillerObjective must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AutoDrillerObjective.
    */
    typedef  class AutoDrillerObjective AutoDrillerObjectiveKeyHolder;

    #define AutoDrillerObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define AutoDrillerObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define AutoDrillerObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define AutoDrillerObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define AutoDrillerObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define AutoDrillerObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define AutoDrillerObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern AutoDrillerObjective*
    AutoDrillerObjectivePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern AutoDrillerObjective*
    AutoDrillerObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AutoDrillerObjective*
    AutoDrillerObjectivePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePluginSupport_copy_data(
        AutoDrillerObjective *out,
        const AutoDrillerObjective *in);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePluginSupport_destroy_data_w_params(
        AutoDrillerObjective *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePluginSupport_destroy_data_ex(
        AutoDrillerObjective *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePluginSupport_destroy_data(
        AutoDrillerObjective *sample);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePluginSupport_print_data(
        const AutoDrillerObjective *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern AutoDrillerObjective*
    AutoDrillerObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AutoDrillerObjective*
    AutoDrillerObjectivePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePluginSupport_destroy_key_ex(
        AutoDrillerObjectiveKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePluginSupport_destroy_key(
        AutoDrillerObjectiveKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    AutoDrillerObjectivePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    AutoDrillerObjectivePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    AutoDrillerObjectivePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    AutoDrillerObjectivePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective *out,
        const AutoDrillerObjective *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const AutoDrillerObjective *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerObjectivePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const AutoDrillerObjective *sample); 

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerObjectivePlugin_deserialize_from_cdr_buffer(
        AutoDrillerObjective *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    AutoDrillerObjectivePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerObjectivePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerObjectivePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerObjectivePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    AutoDrillerObjectivePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const AutoDrillerObjective * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    AutoDrillerObjectivePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerObjectivePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerObjectivePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const AutoDrillerObjective *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerObjectivePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjectiveKeyHolder *key, 
        const AutoDrillerObjective *instance);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerObjective *instance, 
        const AutoDrillerObjectiveKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const AutoDrillerObjective *instance);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerObjectivePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    AutoDrillerObjectivePlugin_new(void);

    NDDSUSERDllExport extern void
    AutoDrillerObjectivePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AutoDrillerState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AutoDrillerState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AutoDrillerState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AutoDrillerState.
    */
    typedef  class AutoDrillerState AutoDrillerStateKeyHolder;

    #define AutoDrillerStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define AutoDrillerStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define AutoDrillerStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define AutoDrillerStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define AutoDrillerStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define AutoDrillerStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define AutoDrillerStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern AutoDrillerState*
    AutoDrillerStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern AutoDrillerState*
    AutoDrillerStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AutoDrillerState*
    AutoDrillerStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePluginSupport_copy_data(
        AutoDrillerState *out,
        const AutoDrillerState *in);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePluginSupport_destroy_data_w_params(
        AutoDrillerState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePluginSupport_destroy_data_ex(
        AutoDrillerState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePluginSupport_destroy_data(
        AutoDrillerState *sample);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePluginSupport_print_data(
        const AutoDrillerState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern AutoDrillerState*
    AutoDrillerStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AutoDrillerState*
    AutoDrillerStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePluginSupport_destroy_key_ex(
        AutoDrillerStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePluginSupport_destroy_key(
        AutoDrillerStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    AutoDrillerStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    AutoDrillerStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    AutoDrillerStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    AutoDrillerStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState *out,
        const AutoDrillerState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const AutoDrillerState *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const AutoDrillerState *sample); 

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerStatePlugin_deserialize_from_cdr_buffer(
        AutoDrillerState *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    AutoDrillerStatePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerStatePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerStatePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    AutoDrillerStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const AutoDrillerState * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    AutoDrillerStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerStatePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AutoDrillerStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const AutoDrillerState *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    AutoDrillerStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerStateKeyHolder *key, 
        const AutoDrillerState *instance);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        AutoDrillerState *instance, 
        const AutoDrillerStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const AutoDrillerState *instance);

    NDDSUSERDllExport extern RTIBool 
    AutoDrillerStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    AutoDrillerStatePlugin_new(void);

    NDDSUSERDllExport extern void
    AutoDrillerStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace Simulation  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* drill_simulationPlugin_1660684592_h */

