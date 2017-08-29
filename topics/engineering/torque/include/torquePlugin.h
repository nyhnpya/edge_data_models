

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from torque.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef torquePlugin_1680233190_h
#define torquePlugin_1680233190_h

#include "torque.h"

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
    namespace control {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct TorqueRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct TorqueRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * TorqueRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct TorqueRequest.
        */
        typedef  class TorqueRequest TorqueRequestKeyHolder;

        #define TorqueRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define TorqueRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TorqueRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define TorqueRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define TorqueRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define TorqueRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TorqueRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern TorqueRequest*
        TorqueRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern TorqueRequest*
        TorqueRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TorqueRequest*
        TorqueRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPluginSupport_copy_data(
            TorqueRequest *out,
            const TorqueRequest *in);

        NDDSUSERDllExport extern void 
        TorqueRequestPluginSupport_destroy_data_w_params(
            TorqueRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TorqueRequestPluginSupport_destroy_data_ex(
            TorqueRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TorqueRequestPluginSupport_destroy_data(
            TorqueRequest *sample);

        NDDSUSERDllExport extern void 
        TorqueRequestPluginSupport_print_data(
            const TorqueRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern TorqueRequest*
        TorqueRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TorqueRequest*
        TorqueRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        TorqueRequestPluginSupport_destroy_key_ex(
            TorqueRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TorqueRequestPluginSupport_destroy_key(
            TorqueRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TorqueRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TorqueRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TorqueRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TorqueRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TorqueRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest *out,
            const TorqueRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const TorqueRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const TorqueRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueRequestPlugin_deserialize_from_cdr_buffer(
            TorqueRequest *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        TorqueRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        TorqueRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        TorqueRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TorqueRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        TorqueRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const TorqueRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TorqueRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TorqueRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TorqueRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const TorqueRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequestKeyHolder *key, 
            const TorqueRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            TorqueRequest *instance, 
            const TorqueRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const TorqueRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        TorqueRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TorqueRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        TorqueRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct TorqueObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct TorqueObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * TorqueObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct TorqueObjective.
        */
        typedef  class TorqueObjective TorqueObjectiveKeyHolder;

        #define TorqueObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define TorqueObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TorqueObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define TorqueObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define TorqueObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define TorqueObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TorqueObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern TorqueObjective*
        TorqueObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern TorqueObjective*
        TorqueObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TorqueObjective*
        TorqueObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePluginSupport_copy_data(
            TorqueObjective *out,
            const TorqueObjective *in);

        NDDSUSERDllExport extern void 
        TorqueObjectivePluginSupport_destroy_data_w_params(
            TorqueObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TorqueObjectivePluginSupport_destroy_data_ex(
            TorqueObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TorqueObjectivePluginSupport_destroy_data(
            TorqueObjective *sample);

        NDDSUSERDllExport extern void 
        TorqueObjectivePluginSupport_print_data(
            const TorqueObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern TorqueObjective*
        TorqueObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TorqueObjective*
        TorqueObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        TorqueObjectivePluginSupport_destroy_key_ex(
            TorqueObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TorqueObjectivePluginSupport_destroy_key(
            TorqueObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TorqueObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TorqueObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TorqueObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TorqueObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TorqueObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective *out,
            const TorqueObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const TorqueObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const TorqueObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueObjectivePlugin_deserialize_from_cdr_buffer(
            TorqueObjective *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        TorqueObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        TorqueObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        TorqueObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TorqueObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        TorqueObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const TorqueObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TorqueObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TorqueObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TorqueObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const TorqueObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjectiveKeyHolder *key, 
            const TorqueObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            TorqueObjective *instance, 
            const TorqueObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const TorqueObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        TorqueObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TorqueObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        TorqueObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct TorqueState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct TorqueState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * TorqueState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct TorqueState.
        */
        typedef  class TorqueState TorqueStateKeyHolder;

        #define TorqueStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define TorqueStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TorqueStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define TorqueStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define TorqueStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define TorqueStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TorqueStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern TorqueState*
        TorqueStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern TorqueState*
        TorqueStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TorqueState*
        TorqueStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePluginSupport_copy_data(
            TorqueState *out,
            const TorqueState *in);

        NDDSUSERDllExport extern void 
        TorqueStatePluginSupport_destroy_data_w_params(
            TorqueState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TorqueStatePluginSupport_destroy_data_ex(
            TorqueState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TorqueStatePluginSupport_destroy_data(
            TorqueState *sample);

        NDDSUSERDllExport extern void 
        TorqueStatePluginSupport_print_data(
            const TorqueState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern TorqueState*
        TorqueStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TorqueState*
        TorqueStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        TorqueStatePluginSupport_destroy_key_ex(
            TorqueStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TorqueStatePluginSupport_destroy_key(
            TorqueStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TorqueStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TorqueStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TorqueStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TorqueStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TorqueStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState *out,
            const TorqueState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const TorqueState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const TorqueState *sample); 

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueStatePlugin_deserialize_from_cdr_buffer(
            TorqueState *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        TorqueStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        TorqueStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        TorqueStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TorqueStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        TorqueStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const TorqueState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TorqueStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TorqueStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TorqueStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const TorqueState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TorqueStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            TorqueStateKeyHolder *key, 
            const TorqueState *instance);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            TorqueState *instance, 
            const TorqueStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const TorqueState *instance);

        NDDSUSERDllExport extern RTIBool 
        TorqueStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TorqueStatePlugin_new(void);

        NDDSUSERDllExport extern void
        TorqueStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace control  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* torquePlugin_1680233190_h */

