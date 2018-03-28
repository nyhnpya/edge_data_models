

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef circulatePlugin_1746883224_h
#define circulatePlugin_1746883224_h

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

namespace nec {
    namespace process {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct CirculateRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct CirculateRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * CirculateRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct CirculateRequest.
        */
        typedef  class CirculateRequest CirculateRequestKeyHolder;

        #define CirculateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define CirculateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CirculateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define CirculateRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define CirculateRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

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

        NDDSUSERDllExport extern CirculateRequest*
        CirculateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateRequest*
        CirculateRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        CirculateRequestPluginSupport_destroy_key_ex(
            CirculateRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateRequestPluginSupport_destroy_key(
            CirculateRequestKeyHolder *key);

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

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequestKeyHolder *key, 
            const CirculateRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateRequest *instance, 
            const CirculateRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CirculateRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        CirculateRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct CirculateObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct CirculateObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * CirculateObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct CirculateObjective.
        */
        typedef  class CirculateObjective CirculateObjectiveKeyHolder;

        #define CirculateObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define CirculateObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CirculateObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define CirculateObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define CirculateObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define CirculateObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define CirculateObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern CirculateObjective*
        CirculateObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern CirculateObjective*
        CirculateObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateObjective*
        CirculateObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePluginSupport_copy_data(
            CirculateObjective *out,
            const CirculateObjective *in);

        NDDSUSERDllExport extern void 
        CirculateObjectivePluginSupport_destroy_data_w_params(
            CirculateObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        CirculateObjectivePluginSupport_destroy_data_ex(
            CirculateObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateObjectivePluginSupport_destroy_data(
            CirculateObjective *sample);

        NDDSUSERDllExport extern void 
        CirculateObjectivePluginSupport_print_data(
            const CirculateObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern CirculateObjective*
        CirculateObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateObjective*
        CirculateObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        CirculateObjectivePluginSupport_destroy_key_ex(
            CirculateObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateObjectivePluginSupport_destroy_key(
            CirculateObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        CirculateObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        CirculateObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        CirculateObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        CirculateObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        CirculateObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *out,
            const CirculateObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const CirculateObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateObjectivePlugin_deserialize_from_cdr_buffer(
            CirculateObjective *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        CirculateObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        CirculateObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        CirculateObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        CirculateObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const CirculateObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        CirculateObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        CirculateObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjectiveKeyHolder *key, 
            const CirculateObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateObjective *instance, 
            const CirculateObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CirculateObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        CirculateObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct CirculateState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct CirculateState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * CirculateState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct CirculateState.
        */
        typedef  class CirculateState CirculateStateKeyHolder;

        #define CirculateStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define CirculateStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CirculateStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define CirculateStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define CirculateStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

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

        NDDSUSERDllExport extern CirculateState*
        CirculateStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateState*
        CirculateStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        CirculateStatePluginSupport_destroy_key_ex(
            CirculateStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateStatePluginSupport_destroy_key(
            CirculateStateKeyHolder *key);

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

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateStateKeyHolder *key, 
            const CirculateState *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateState *instance, 
            const CirculateStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateState *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CirculateStatePlugin_new(void);

        NDDSUSERDllExport extern void
        CirculateStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* circulatePlugin_1746883224_h */

