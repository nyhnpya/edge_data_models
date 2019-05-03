

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_limits.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drilling_limitsPlugin_429958659_h
#define drilling_limitsPlugin_429958659_h

#include "drilling_limits.h"

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

namespace process {
    namespace plan {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillingLimitsRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingLimitsRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingLimitsRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingLimitsRequest.
        */
        typedef  class DrillingLimitsRequest DrillingLimitsRequestKeyHolder;

        #define DrillingLimitsRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillingLimitsRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingLimitsRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillingLimitsRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingLimitsRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingLimitsRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingLimitsRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingLimitsRequest*
        DrillingLimitsRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingLimitsRequest*
        DrillingLimitsRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingLimitsRequest*
        DrillingLimitsRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPluginSupport_copy_data(
            DrillingLimitsRequest *out,
            const DrillingLimitsRequest *in);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPluginSupport_destroy_data_w_params(
            DrillingLimitsRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPluginSupport_destroy_data_ex(
            DrillingLimitsRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPluginSupport_destroy_data(
            DrillingLimitsRequest *sample);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPluginSupport_print_data(
            const DrillingLimitsRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingLimitsRequest*
        DrillingLimitsRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingLimitsRequest*
        DrillingLimitsRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPluginSupport_destroy_key_ex(
            DrillingLimitsRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPluginSupport_destroy_key(
            DrillingLimitsRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingLimitsRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingLimitsRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingLimitsRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingLimitsRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest *out,
            const DrillingLimitsRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingLimitsRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingLimitsRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsRequestPlugin_deserialize_from_cdr_buffer(
            DrillingLimitsRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingLimitsRequestPlugin_data_to_string(
            const DrillingLimitsRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillingLimitsRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingLimitsRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingLimitsRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingLimitsRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequestKeyHolder *key, 
            const DrillingLimitsRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsRequest *instance, 
            const DrillingLimitsRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingLimitsRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingLimitsRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingLimitsRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillingLimitsState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingLimitsState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingLimitsState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingLimitsState.
        */
        typedef  class DrillingLimitsState DrillingLimitsStateKeyHolder;

        #define DrillingLimitsStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillingLimitsStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingLimitsStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillingLimitsStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingLimitsStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingLimitsStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingLimitsStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingLimitsState*
        DrillingLimitsStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingLimitsState*
        DrillingLimitsStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingLimitsState*
        DrillingLimitsStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePluginSupport_copy_data(
            DrillingLimitsState *out,
            const DrillingLimitsState *in);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePluginSupport_destroy_data_w_params(
            DrillingLimitsState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePluginSupport_destroy_data_ex(
            DrillingLimitsState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePluginSupport_destroy_data(
            DrillingLimitsState *sample);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePluginSupport_print_data(
            const DrillingLimitsState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingLimitsState*
        DrillingLimitsStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingLimitsState*
        DrillingLimitsStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePluginSupport_destroy_key_ex(
            DrillingLimitsStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePluginSupport_destroy_key(
            DrillingLimitsStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingLimitsStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingLimitsStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingLimitsStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingLimitsStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState *out,
            const DrillingLimitsState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingLimitsState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingLimitsState *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsStatePlugin_deserialize_from_cdr_buffer(
            DrillingLimitsState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingLimitsStatePlugin_data_to_string(
            const DrillingLimitsState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillingLimitsStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingLimitsState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingLimitsStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingLimitsStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingLimitsState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingLimitsStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsStateKeyHolder *key, 
            const DrillingLimitsState *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingLimitsState *instance, 
            const DrillingLimitsStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingLimitsState *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingLimitsStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingLimitsStatePlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingLimitsStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace plan  */
} /* namespace process  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* drilling_limitsPlugin_429958659_h */

