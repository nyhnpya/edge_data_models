

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef rotate_engineeringPlugin_182432028_h
#define rotate_engineeringPlugin_182432028_h

#include "rotate_engineering.h"

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
        * By default, this type is struct RotateEngineeringRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct RotateEngineeringRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * RotateEngineeringRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct RotateEngineeringRequest.
        */
        typedef  class RotateEngineeringRequest RotateEngineeringRequestKeyHolder;

        #define RotateEngineeringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateEngineeringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateEngineeringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateEngineeringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define RotateEngineeringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define RotateEngineeringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define RotateEngineeringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RotateEngineeringRequest*
        RotateEngineeringRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern RotateEngineeringRequest*
        RotateEngineeringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateEngineeringRequest*
        RotateEngineeringRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPluginSupport_copy_data(
            RotateEngineeringRequest *out,
            const RotateEngineeringRequest *in);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPluginSupport_destroy_data_w_params(
            RotateEngineeringRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPluginSupport_destroy_data_ex(
            RotateEngineeringRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPluginSupport_destroy_data(
            RotateEngineeringRequest *sample);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPluginSupport_print_data(
            const RotateEngineeringRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern RotateEngineeringRequest*
        RotateEngineeringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateEngineeringRequest*
        RotateEngineeringRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPluginSupport_destroy_key_ex(
            RotateEngineeringRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPluginSupport_destroy_key(
            RotateEngineeringRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        RotateEngineeringRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        RotateEngineeringRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        RotateEngineeringRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        RotateEngineeringRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *out,
            const RotateEngineeringRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateEngineeringRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringRequestPlugin_deserialize_from_cdr_buffer(
            RotateEngineeringRequest *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        RotateEngineeringRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateEngineeringRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        RotateEngineeringRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequestKeyHolder *key, 
            const RotateEngineeringRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringRequest *instance, 
            const RotateEngineeringRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateEngineeringRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateEngineeringRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        RotateEngineeringRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct RotateEngineeringObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct RotateEngineeringObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * RotateEngineeringObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct RotateEngineeringObjective.
        */
        typedef  class RotateEngineeringObjective RotateEngineeringObjectiveKeyHolder;

        #define RotateEngineeringObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateEngineeringObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateEngineeringObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateEngineeringObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define RotateEngineeringObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define RotateEngineeringObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define RotateEngineeringObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RotateEngineeringObjective*
        RotateEngineeringObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern RotateEngineeringObjective*
        RotateEngineeringObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateEngineeringObjective*
        RotateEngineeringObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePluginSupport_copy_data(
            RotateEngineeringObjective *out,
            const RotateEngineeringObjective *in);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePluginSupport_destroy_data_w_params(
            RotateEngineeringObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePluginSupport_destroy_data_ex(
            RotateEngineeringObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePluginSupport_destroy_data(
            RotateEngineeringObjective *sample);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePluginSupport_print_data(
            const RotateEngineeringObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern RotateEngineeringObjective*
        RotateEngineeringObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateEngineeringObjective*
        RotateEngineeringObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePluginSupport_destroy_key_ex(
            RotateEngineeringObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePluginSupport_destroy_key(
            RotateEngineeringObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        RotateEngineeringObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        RotateEngineeringObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        RotateEngineeringObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        RotateEngineeringObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *out,
            const RotateEngineeringObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateEngineeringObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringObjectivePlugin_deserialize_from_cdr_buffer(
            RotateEngineeringObjective *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        RotateEngineeringObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateEngineeringObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        RotateEngineeringObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjectiveKeyHolder *key, 
            const RotateEngineeringObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringObjective *instance, 
            const RotateEngineeringObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateEngineeringObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateEngineeringObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        RotateEngineeringObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct RotateEngineeringState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct RotateEngineeringState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * RotateEngineeringState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct RotateEngineeringState.
        */
        typedef  class RotateEngineeringState RotateEngineeringStateKeyHolder;

        #define RotateEngineeringStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateEngineeringStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateEngineeringStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateEngineeringStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define RotateEngineeringStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define RotateEngineeringStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define RotateEngineeringStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RotateEngineeringState*
        RotateEngineeringStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern RotateEngineeringState*
        RotateEngineeringStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateEngineeringState*
        RotateEngineeringStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePluginSupport_copy_data(
            RotateEngineeringState *out,
            const RotateEngineeringState *in);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePluginSupport_destroy_data_w_params(
            RotateEngineeringState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePluginSupport_destroy_data_ex(
            RotateEngineeringState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePluginSupport_destroy_data(
            RotateEngineeringState *sample);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePluginSupport_print_data(
            const RotateEngineeringState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern RotateEngineeringState*
        RotateEngineeringStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateEngineeringState*
        RotateEngineeringStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePluginSupport_destroy_key_ex(
            RotateEngineeringStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePluginSupport_destroy_key(
            RotateEngineeringStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        RotateEngineeringStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        RotateEngineeringStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        RotateEngineeringStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        RotateEngineeringStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *out,
            const RotateEngineeringState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateEngineeringState *sample); 

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringStatePlugin_deserialize_from_cdr_buffer(
            RotateEngineeringState *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        RotateEngineeringStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateEngineeringState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        RotateEngineeringStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateEngineeringStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateEngineeringState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateEngineeringStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringStateKeyHolder *key, 
            const RotateEngineeringState *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateEngineeringState *instance, 
            const RotateEngineeringStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateEngineeringState *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateEngineeringStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateEngineeringStatePlugin_new(void);

        NDDSUSERDllExport extern void
        RotateEngineeringStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace control  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* rotate_engineeringPlugin_182432028_h */

