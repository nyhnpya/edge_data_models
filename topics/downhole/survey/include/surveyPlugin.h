

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from survey.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef surveyPlugin_675099319_h
#define surveyPlugin_675099319_h

#include "survey.h"

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
        * By default, this type is struct SurveyRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct SurveyRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * SurveyRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct SurveyRequest.
        */
        typedef  class SurveyRequest SurveyRequestKeyHolder;

        #define SurveyRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define SurveyRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define SurveyRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define SurveyRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define SurveyRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define SurveyRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define SurveyRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern SurveyRequest*
        SurveyRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern SurveyRequest*
        SurveyRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SurveyRequest*
        SurveyRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPluginSupport_copy_data(
            SurveyRequest *out,
            const SurveyRequest *in);

        NDDSUSERDllExport extern void 
        SurveyRequestPluginSupport_destroy_data_w_params(
            SurveyRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        SurveyRequestPluginSupport_destroy_data_ex(
            SurveyRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SurveyRequestPluginSupport_destroy_data(
            SurveyRequest *sample);

        NDDSUSERDllExport extern void 
        SurveyRequestPluginSupport_print_data(
            const SurveyRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern SurveyRequest*
        SurveyRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SurveyRequest*
        SurveyRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        SurveyRequestPluginSupport_destroy_key_ex(
            SurveyRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SurveyRequestPluginSupport_destroy_key(
            SurveyRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        SurveyRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        SurveyRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        SurveyRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        SurveyRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        SurveyRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest *out,
            const SurveyRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const SurveyRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const SurveyRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyRequestPlugin_deserialize_from_cdr_buffer(
            SurveyRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        SurveyRequestPlugin_data_to_string(
            const SurveyRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        SurveyRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        SurveyRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        SurveyRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SurveyRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        SurveyRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const SurveyRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        SurveyRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        SurveyRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SurveyRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const SurveyRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequestKeyHolder *key, 
            const SurveyRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            SurveyRequest *instance, 
            const SurveyRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const SurveyRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        SurveyRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        SurveyRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        SurveyRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct SurveyObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct SurveyObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * SurveyObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct SurveyObjective.
        */
        typedef  class SurveyObjective SurveyObjectiveKeyHolder;

        #define SurveyObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define SurveyObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define SurveyObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define SurveyObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define SurveyObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define SurveyObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define SurveyObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern SurveyObjective*
        SurveyObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern SurveyObjective*
        SurveyObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SurveyObjective*
        SurveyObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePluginSupport_copy_data(
            SurveyObjective *out,
            const SurveyObjective *in);

        NDDSUSERDllExport extern void 
        SurveyObjectivePluginSupport_destroy_data_w_params(
            SurveyObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        SurveyObjectivePluginSupport_destroy_data_ex(
            SurveyObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SurveyObjectivePluginSupport_destroy_data(
            SurveyObjective *sample);

        NDDSUSERDllExport extern void 
        SurveyObjectivePluginSupport_print_data(
            const SurveyObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern SurveyObjective*
        SurveyObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SurveyObjective*
        SurveyObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        SurveyObjectivePluginSupport_destroy_key_ex(
            SurveyObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SurveyObjectivePluginSupport_destroy_key(
            SurveyObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        SurveyObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        SurveyObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        SurveyObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        SurveyObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        SurveyObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective *out,
            const SurveyObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const SurveyObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const SurveyObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyObjectivePlugin_deserialize_from_cdr_buffer(
            SurveyObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        SurveyObjectivePlugin_data_to_string(
            const SurveyObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        SurveyObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        SurveyObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        SurveyObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SurveyObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        SurveyObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const SurveyObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        SurveyObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        SurveyObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SurveyObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const SurveyObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjectiveKeyHolder *key, 
            const SurveyObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            SurveyObjective *instance, 
            const SurveyObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const SurveyObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        SurveyObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        SurveyObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        SurveyObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct SurveyState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct SurveyState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * SurveyState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct SurveyState.
        */
        typedef  class SurveyState SurveyStateKeyHolder;

        #define SurveyStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define SurveyStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define SurveyStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define SurveyStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define SurveyStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define SurveyStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define SurveyStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern SurveyState*
        SurveyStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern SurveyState*
        SurveyStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SurveyState*
        SurveyStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePluginSupport_copy_data(
            SurveyState *out,
            const SurveyState *in);

        NDDSUSERDllExport extern void 
        SurveyStatePluginSupport_destroy_data_w_params(
            SurveyState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        SurveyStatePluginSupport_destroy_data_ex(
            SurveyState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SurveyStatePluginSupport_destroy_data(
            SurveyState *sample);

        NDDSUSERDllExport extern void 
        SurveyStatePluginSupport_print_data(
            const SurveyState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern SurveyState*
        SurveyStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SurveyState*
        SurveyStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        SurveyStatePluginSupport_destroy_key_ex(
            SurveyStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SurveyStatePluginSupport_destroy_key(
            SurveyStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        SurveyStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        SurveyStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        SurveyStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        SurveyStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        SurveyStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState *out,
            const SurveyState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const SurveyState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const SurveyState *sample); 

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyStatePlugin_deserialize_from_cdr_buffer(
            SurveyState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        SurveyStatePlugin_data_to_string(
            const SurveyState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        SurveyStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        SurveyStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        SurveyStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SurveyStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        SurveyStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const SurveyState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        SurveyStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        SurveyStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SurveyStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const SurveyState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SurveyStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SurveyStateKeyHolder *key, 
            const SurveyState *instance);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            SurveyState *instance, 
            const SurveyStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const SurveyState *instance);

        NDDSUSERDllExport extern RTIBool 
        SurveyStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        SurveyStatePlugin_new(void);

        NDDSUSERDllExport extern void
        SurveyStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* surveyPlugin_675099319_h */

