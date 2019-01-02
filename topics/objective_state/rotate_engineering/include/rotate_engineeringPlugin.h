

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef rotate_engineeringPlugin_182435578_h
#define rotate_engineeringPlugin_182435578_h

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
    namespace engineering {

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        StatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const State *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        StatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            State *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        StatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        StatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        StatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        StatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        StatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const State * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        StatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        StatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        StatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const State *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        StatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            State * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        StatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            State *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        StatePluginSupport_print_data(
            const State *sample, const char *desc, int indent_level);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        ModePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const Mode *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ModePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            Mode *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ModePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        ModePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        ModePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ModePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        ModePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const Mode * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        ModePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ModePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        ModePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const Mode *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ModePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            Mode * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ModePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            Mode *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        ModePluginSupport_print_data(
            const Mode *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct RotateRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct RotateRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * RotateRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct RotateRequest.
        */
        typedef  class RotateRequest RotateRequestKeyHolder;

        #define RotateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define RotateRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

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

        NDDSUSERDllExport extern RotateRequest*
        RotateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateRequest*
        RotateRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        RotateRequestPluginSupport_destroy_key_ex(
            RotateRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateRequestPluginSupport_destroy_key(
            RotateRequestKeyHolder *key);

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

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequestKeyHolder *key, 
            const RotateRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateRequest *instance, 
            const RotateRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        RotateRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct RotateObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct RotateObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * RotateObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct RotateObjective.
        */
        typedef  class RotateObjective RotateObjectiveKeyHolder;

        #define RotateObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define RotateObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define RotateObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define RotateObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RotateObjective*
        RotateObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern RotateObjective*
        RotateObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateObjective*
        RotateObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePluginSupport_copy_data(
            RotateObjective *out,
            const RotateObjective *in);

        NDDSUSERDllExport extern void 
        RotateObjectivePluginSupport_destroy_data_w_params(
            RotateObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        RotateObjectivePluginSupport_destroy_data_ex(
            RotateObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateObjectivePluginSupport_destroy_data(
            RotateObjective *sample);

        NDDSUSERDllExport extern void 
        RotateObjectivePluginSupport_print_data(
            const RotateObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern RotateObjective*
        RotateObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateObjective*
        RotateObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        RotateObjectivePluginSupport_destroy_key_ex(
            RotateObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateObjectivePluginSupport_destroy_key(
            RotateObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        RotateObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        RotateObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        RotateObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        RotateObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        RotateObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective *out,
            const RotateObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const RotateObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const RotateObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateObjectivePlugin_deserialize_from_cdr_buffer(
            RotateObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        RotateObjectivePlugin_data_to_string(
            const RotateObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        RotateObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        RotateObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        RotateObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        RotateObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const RotateObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        RotateObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        RotateObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RotateObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const RotateObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        RotateObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjectiveKeyHolder *key, 
            const RotateObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateObjective *instance, 
            const RotateObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        RotateObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct RotateState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct RotateState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * RotateState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct RotateState.
        */
        typedef  class RotateState RotateStateKeyHolder;

        #define RotateStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define RotateStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RotateStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define RotateStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define RotateStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

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

        NDDSUSERDllExport extern RotateState*
        RotateStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RotateState*
        RotateStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        RotateStatePluginSupport_destroy_key_ex(
            RotateStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RotateStatePluginSupport_destroy_key(
            RotateStateKeyHolder *key);

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

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            RotateStateKeyHolder *key, 
            const RotateState *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            RotateState *instance, 
            const RotateStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const RotateState *instance);

        NDDSUSERDllExport extern RTIBool 
        RotateStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        RotateStatePlugin_new(void);

        NDDSUSERDllExport extern void
        RotateStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace engineering  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* rotate_engineeringPlugin_182435578_h */

