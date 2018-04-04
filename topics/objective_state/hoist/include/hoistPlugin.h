

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from hoist.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef hoistPlugin_1013695705_h
#define hoistPlugin_1013695705_h

#include "hoist.h"

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
        * By default, this type is struct HoistRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct HoistRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * HoistRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct HoistRequest.
        */
        typedef  class HoistRequest HoistRequestKeyHolder;

        #define HoistRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define HoistRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define HoistRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define HoistRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define HoistRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define HoistRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define HoistRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern HoistRequest*
        HoistRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern HoistRequest*
        HoistRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern HoistRequest*
        HoistRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPluginSupport_copy_data(
            HoistRequest *out,
            const HoistRequest *in);

        NDDSUSERDllExport extern void 
        HoistRequestPluginSupport_destroy_data_w_params(
            HoistRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        HoistRequestPluginSupport_destroy_data_ex(
            HoistRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        HoistRequestPluginSupport_destroy_data(
            HoistRequest *sample);

        NDDSUSERDllExport extern void 
        HoistRequestPluginSupport_print_data(
            const HoistRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern HoistRequest*
        HoistRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern HoistRequest*
        HoistRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        HoistRequestPluginSupport_destroy_key_ex(
            HoistRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        HoistRequestPluginSupport_destroy_key(
            HoistRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        HoistRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        HoistRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        HoistRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        HoistRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        HoistRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest *out,
            const HoistRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const HoistRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const HoistRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistRequestPlugin_deserialize_from_cdr_buffer(
            HoistRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        HoistRequestPlugin_data_to_string(
            const HoistRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        HoistRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        HoistRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        HoistRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        HoistRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        HoistRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const HoistRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        HoistRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        HoistRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        HoistRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const HoistRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequestKeyHolder *key, 
            const HoistRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            HoistRequest *instance, 
            const HoistRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const HoistRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        HoistRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        HoistRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        HoistRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct HoistObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct HoistObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * HoistObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct HoistObjective.
        */
        typedef  class HoistObjective HoistObjectiveKeyHolder;

        #define HoistObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define HoistObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define HoistObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define HoistObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define HoistObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define HoistObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define HoistObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern HoistObjective*
        HoistObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern HoistObjective*
        HoistObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern HoistObjective*
        HoistObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePluginSupport_copy_data(
            HoistObjective *out,
            const HoistObjective *in);

        NDDSUSERDllExport extern void 
        HoistObjectivePluginSupport_destroy_data_w_params(
            HoistObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        HoistObjectivePluginSupport_destroy_data_ex(
            HoistObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        HoistObjectivePluginSupport_destroy_data(
            HoistObjective *sample);

        NDDSUSERDllExport extern void 
        HoistObjectivePluginSupport_print_data(
            const HoistObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern HoistObjective*
        HoistObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern HoistObjective*
        HoistObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        HoistObjectivePluginSupport_destroy_key_ex(
            HoistObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        HoistObjectivePluginSupport_destroy_key(
            HoistObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        HoistObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        HoistObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        HoistObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        HoistObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        HoistObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective *out,
            const HoistObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const HoistObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const HoistObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistObjectivePlugin_deserialize_from_cdr_buffer(
            HoistObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        HoistObjectivePlugin_data_to_string(
            const HoistObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        HoistObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        HoistObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        HoistObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        HoistObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        HoistObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const HoistObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        HoistObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        HoistObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        HoistObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const HoistObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjectiveKeyHolder *key, 
            const HoistObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            HoistObjective *instance, 
            const HoistObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const HoistObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        HoistObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        HoistObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        HoistObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct HoistState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct HoistState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * HoistState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct HoistState.
        */
        typedef  class HoistState HoistStateKeyHolder;

        #define HoistStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define HoistStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define HoistStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define HoistStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define HoistStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define HoistStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define HoistStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern HoistState*
        HoistStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern HoistState*
        HoistStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern HoistState*
        HoistStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePluginSupport_copy_data(
            HoistState *out,
            const HoistState *in);

        NDDSUSERDllExport extern void 
        HoistStatePluginSupport_destroy_data_w_params(
            HoistState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        HoistStatePluginSupport_destroy_data_ex(
            HoistState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        HoistStatePluginSupport_destroy_data(
            HoistState *sample);

        NDDSUSERDllExport extern void 
        HoistStatePluginSupport_print_data(
            const HoistState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern HoistState*
        HoistStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern HoistState*
        HoistStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        HoistStatePluginSupport_destroy_key_ex(
            HoistStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        HoistStatePluginSupport_destroy_key(
            HoistStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        HoistStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        HoistStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        HoistStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        HoistStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        HoistStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistState *out,
            const HoistState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const HoistState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const HoistState *sample); 

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            HoistState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistStatePlugin_deserialize_from_cdr_buffer(
            HoistState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        HoistStatePlugin_data_to_string(
            const HoistState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        HoistStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        HoistStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        HoistStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        HoistStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        HoistStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const HoistState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        HoistStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        HoistStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        HoistStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const HoistState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            HoistState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        HoistStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            HoistStateKeyHolder *key, 
            const HoistState *instance);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            HoistState *instance, 
            const HoistStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const HoistState *instance);

        NDDSUSERDllExport extern RTIBool 
        HoistStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        HoistStatePlugin_new(void);

        NDDSUSERDllExport extern void
        HoistStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* hoistPlugin_1013695705_h */

