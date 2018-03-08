

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from slips.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef slipsPlugin_441129141_h
#define slipsPlugin_441129141_h

#include "slips.h"

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

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        SlipsStateEnumPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsStateEnum *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsStateEnumPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsStateEnum *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsStateEnumPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        SlipsStateEnumPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        SlipsStateEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsStateEnumPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        SlipsStateEnumPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const SlipsStateEnum * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        SlipsStateEnumPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsStateEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SlipsStateEnumPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsStateEnum *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsStateEnumPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsStateEnum * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsStateEnumPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsStateEnum *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        SlipsStateEnumPluginSupport_print_data(
            const SlipsStateEnum *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct SlipsRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct SlipsRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * SlipsRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct SlipsRequest.
        */
        typedef  class SlipsRequest SlipsRequestKeyHolder;

        #define SlipsRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define SlipsRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define SlipsRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define SlipsRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define SlipsRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define SlipsRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define SlipsRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern SlipsRequest*
        SlipsRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern SlipsRequest*
        SlipsRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SlipsRequest*
        SlipsRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPluginSupport_copy_data(
            SlipsRequest *out,
            const SlipsRequest *in);

        NDDSUSERDllExport extern void 
        SlipsRequestPluginSupport_destroy_data_w_params(
            SlipsRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        SlipsRequestPluginSupport_destroy_data_ex(
            SlipsRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SlipsRequestPluginSupport_destroy_data(
            SlipsRequest *sample);

        NDDSUSERDllExport extern void 
        SlipsRequestPluginSupport_print_data(
            const SlipsRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern SlipsRequest*
        SlipsRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SlipsRequest*
        SlipsRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        SlipsRequestPluginSupport_destroy_key_ex(
            SlipsRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SlipsRequestPluginSupport_destroy_key(
            SlipsRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        SlipsRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        SlipsRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        SlipsRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        SlipsRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        SlipsRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest *out,
            const SlipsRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const SlipsRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsRequestPlugin_deserialize_from_cdr_buffer(
            SlipsRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        SlipsRequestPlugin_data_to_string(
            const SlipsRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        SlipsRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        SlipsRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        SlipsRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        SlipsRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const SlipsRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        SlipsRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        SlipsRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequestKeyHolder *key, 
            const SlipsRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            SlipsRequest *instance, 
            const SlipsRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const SlipsRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        SlipsRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        SlipsRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        SlipsRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct SlipsObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct SlipsObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * SlipsObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct SlipsObjective.
        */
        typedef  class SlipsObjective SlipsObjectiveKeyHolder;

        #define SlipsObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define SlipsObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define SlipsObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define SlipsObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define SlipsObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define SlipsObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define SlipsObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern SlipsObjective*
        SlipsObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern SlipsObjective*
        SlipsObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SlipsObjective*
        SlipsObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePluginSupport_copy_data(
            SlipsObjective *out,
            const SlipsObjective *in);

        NDDSUSERDllExport extern void 
        SlipsObjectivePluginSupport_destroy_data_w_params(
            SlipsObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        SlipsObjectivePluginSupport_destroy_data_ex(
            SlipsObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SlipsObjectivePluginSupport_destroy_data(
            SlipsObjective *sample);

        NDDSUSERDllExport extern void 
        SlipsObjectivePluginSupport_print_data(
            const SlipsObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern SlipsObjective*
        SlipsObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SlipsObjective*
        SlipsObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        SlipsObjectivePluginSupport_destroy_key_ex(
            SlipsObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SlipsObjectivePluginSupport_destroy_key(
            SlipsObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        SlipsObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        SlipsObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        SlipsObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        SlipsObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        SlipsObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective *out,
            const SlipsObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const SlipsObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsObjectivePlugin_deserialize_from_cdr_buffer(
            SlipsObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        SlipsObjectivePlugin_data_to_string(
            const SlipsObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        SlipsObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        SlipsObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        SlipsObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        SlipsObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const SlipsObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        SlipsObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        SlipsObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjectiveKeyHolder *key, 
            const SlipsObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            SlipsObjective *instance, 
            const SlipsObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const SlipsObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        SlipsObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        SlipsObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        SlipsObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct SlipsState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct SlipsState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * SlipsState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct SlipsState.
        */
        typedef  class SlipsState SlipsStateKeyHolder;

        #define SlipsStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define SlipsStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define SlipsStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define SlipsStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define SlipsStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define SlipsStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define SlipsStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern SlipsState*
        SlipsStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern SlipsState*
        SlipsStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SlipsState*
        SlipsStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePluginSupport_copy_data(
            SlipsState *out,
            const SlipsState *in);

        NDDSUSERDllExport extern void 
        SlipsStatePluginSupport_destroy_data_w_params(
            SlipsState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        SlipsStatePluginSupport_destroy_data_ex(
            SlipsState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SlipsStatePluginSupport_destroy_data(
            SlipsState *sample);

        NDDSUSERDllExport extern void 
        SlipsStatePluginSupport_print_data(
            const SlipsState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern SlipsState*
        SlipsStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SlipsState*
        SlipsStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        SlipsStatePluginSupport_destroy_key_ex(
            SlipsStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SlipsStatePluginSupport_destroy_key(
            SlipsStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        SlipsStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        SlipsStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        SlipsStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        SlipsStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        SlipsStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState *out,
            const SlipsState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const SlipsState *sample); 

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsStatePlugin_deserialize_from_cdr_buffer(
            SlipsState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        SlipsStatePlugin_data_to_string(
            const SlipsState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        SlipsStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        SlipsStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        SlipsStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        SlipsStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const SlipsState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        SlipsStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        SlipsStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SlipsStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const SlipsState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SlipsStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            SlipsStateKeyHolder *key, 
            const SlipsState *instance);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            SlipsState *instance, 
            const SlipsStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const SlipsState *instance);

        NDDSUSERDllExport extern RTIBool 
        SlipsStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        SlipsStatePlugin_new(void);

        NDDSUSERDllExport extern void
        SlipsStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace control  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* slipsPlugin_441129141_h */

