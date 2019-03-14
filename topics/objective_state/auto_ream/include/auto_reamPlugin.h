

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from auto_ream.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef auto_reamPlugin_426528474_h
#define auto_reamPlugin_426528474_h

#include "auto_ream.h"

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
        * By default, this type is struct AutoReamRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct AutoReamRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * AutoReamRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct AutoReamRequest.
        */
        typedef  class AutoReamRequest AutoReamRequestKeyHolder;

        #define AutoReamRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define AutoReamRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define AutoReamRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define AutoReamRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define AutoReamRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define AutoReamRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define AutoReamRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern AutoReamRequest*
        AutoReamRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern AutoReamRequest*
        AutoReamRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern AutoReamRequest*
        AutoReamRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPluginSupport_copy_data(
            AutoReamRequest *out,
            const AutoReamRequest *in);

        NDDSUSERDllExport extern void 
        AutoReamRequestPluginSupport_destroy_data_w_params(
            AutoReamRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        AutoReamRequestPluginSupport_destroy_data_ex(
            AutoReamRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        AutoReamRequestPluginSupport_destroy_data(
            AutoReamRequest *sample);

        NDDSUSERDllExport extern void 
        AutoReamRequestPluginSupport_print_data(
            const AutoReamRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern AutoReamRequest*
        AutoReamRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern AutoReamRequest*
        AutoReamRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        AutoReamRequestPluginSupport_destroy_key_ex(
            AutoReamRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        AutoReamRequestPluginSupport_destroy_key(
            AutoReamRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        AutoReamRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        AutoReamRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        AutoReamRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        AutoReamRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        AutoReamRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest *out,
            const AutoReamRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const AutoReamRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const AutoReamRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamRequestPlugin_deserialize_from_cdr_buffer(
            AutoReamRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        AutoReamRequestPlugin_data_to_string(
            const AutoReamRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        AutoReamRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        AutoReamRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        AutoReamRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        AutoReamRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        AutoReamRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const AutoReamRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        AutoReamRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        AutoReamRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        AutoReamRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const AutoReamRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequestKeyHolder *key, 
            const AutoReamRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamRequest *instance, 
            const AutoReamRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const AutoReamRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        AutoReamRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        AutoReamRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        AutoReamRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct AutoReamObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct AutoReamObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * AutoReamObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct AutoReamObjective.
        */
        typedef  class AutoReamObjective AutoReamObjectiveKeyHolder;

        #define AutoReamObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define AutoReamObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define AutoReamObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define AutoReamObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define AutoReamObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define AutoReamObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define AutoReamObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern AutoReamObjective*
        AutoReamObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern AutoReamObjective*
        AutoReamObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern AutoReamObjective*
        AutoReamObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePluginSupport_copy_data(
            AutoReamObjective *out,
            const AutoReamObjective *in);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePluginSupport_destroy_data_w_params(
            AutoReamObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePluginSupport_destroy_data_ex(
            AutoReamObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePluginSupport_destroy_data(
            AutoReamObjective *sample);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePluginSupport_print_data(
            const AutoReamObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern AutoReamObjective*
        AutoReamObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern AutoReamObjective*
        AutoReamObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePluginSupport_destroy_key_ex(
            AutoReamObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePluginSupport_destroy_key(
            AutoReamObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        AutoReamObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        AutoReamObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        AutoReamObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        AutoReamObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective *out,
            const AutoReamObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const AutoReamObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const AutoReamObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamObjectivePlugin_deserialize_from_cdr_buffer(
            AutoReamObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        AutoReamObjectivePlugin_data_to_string(
            const AutoReamObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        AutoReamObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        AutoReamObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        AutoReamObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        AutoReamObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        AutoReamObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const AutoReamObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        AutoReamObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        AutoReamObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        AutoReamObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const AutoReamObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjectiveKeyHolder *key, 
            const AutoReamObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamObjective *instance, 
            const AutoReamObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const AutoReamObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        AutoReamObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        AutoReamObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        AutoReamObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct AutoReamState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct AutoReamState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * AutoReamState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct AutoReamState.
        */
        typedef  class AutoReamState AutoReamStateKeyHolder;

        #define AutoReamStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define AutoReamStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define AutoReamStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define AutoReamStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define AutoReamStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define AutoReamStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define AutoReamStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern AutoReamState*
        AutoReamStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern AutoReamState*
        AutoReamStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern AutoReamState*
        AutoReamStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePluginSupport_copy_data(
            AutoReamState *out,
            const AutoReamState *in);

        NDDSUSERDllExport extern void 
        AutoReamStatePluginSupport_destroy_data_w_params(
            AutoReamState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        AutoReamStatePluginSupport_destroy_data_ex(
            AutoReamState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        AutoReamStatePluginSupport_destroy_data(
            AutoReamState *sample);

        NDDSUSERDllExport extern void 
        AutoReamStatePluginSupport_print_data(
            const AutoReamState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern AutoReamState*
        AutoReamStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern AutoReamState*
        AutoReamStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        AutoReamStatePluginSupport_destroy_key_ex(
            AutoReamStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        AutoReamStatePluginSupport_destroy_key(
            AutoReamStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        AutoReamStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        AutoReamStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        AutoReamStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        AutoReamStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        AutoReamStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState *out,
            const AutoReamState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const AutoReamState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const AutoReamState *sample); 

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamStatePlugin_deserialize_from_cdr_buffer(
            AutoReamState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        AutoReamStatePlugin_data_to_string(
            const AutoReamState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        AutoReamStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        AutoReamStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        AutoReamStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        AutoReamStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        AutoReamStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const AutoReamState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        AutoReamStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        AutoReamStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        AutoReamStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const AutoReamState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        AutoReamStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamStateKeyHolder *key, 
            const AutoReamState *instance);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            AutoReamState *instance, 
            const AutoReamStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const AutoReamState *instance);

        NDDSUSERDllExport extern RTIBool 
        AutoReamStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        AutoReamStatePlugin_new(void);

        NDDSUSERDllExport extern void
        AutoReamStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* auto_reamPlugin_426528474_h */

