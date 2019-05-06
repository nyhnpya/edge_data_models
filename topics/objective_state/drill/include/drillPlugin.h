

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drillPlugin_1648144461_h
#define drillPlugin_1648144461_h

#include "drill.h"

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
        * By default, this type is struct DrillRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillRequest.
        */
        typedef  class DrillRequest DrillRequestKeyHolder;

        #define DrillRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPluginSupport_copy_data(
            DrillRequest *out,
            const DrillRequest *in);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_data_w_params(
            DrillRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_data_ex(
            DrillRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_data(
            DrillRequest *sample);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_print_data(
            const DrillRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_key_ex(
            DrillRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_key(
            DrillRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *out,
            const DrillRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillRequestPlugin_deserialize_from_cdr_buffer(
            DrillRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillRequestPlugin_data_to_string(
            const DrillRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestKeyHolder *key, 
            const DrillRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *instance, 
            const DrillRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillObjective.
        */
        typedef  class DrillObjective DrillObjectiveKeyHolder;

        #define DrillObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillObjective*
        DrillObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillObjective*
        DrillObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillObjective*
        DrillObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePluginSupport_copy_data(
            DrillObjective *out,
            const DrillObjective *in);

        NDDSUSERDllExport extern void 
        DrillObjectivePluginSupport_destroy_data_w_params(
            DrillObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillObjectivePluginSupport_destroy_data_ex(
            DrillObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillObjectivePluginSupport_destroy_data(
            DrillObjective *sample);

        NDDSUSERDllExport extern void 
        DrillObjectivePluginSupport_print_data(
            const DrillObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillObjective*
        DrillObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillObjective*
        DrillObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillObjectivePluginSupport_destroy_key_ex(
            DrillObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillObjectivePluginSupport_destroy_key(
            DrillObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective *out,
            const DrillObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillObjectivePlugin_deserialize_from_cdr_buffer(
            DrillObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillObjectivePlugin_data_to_string(
            const DrillObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjectiveKeyHolder *key, 
            const DrillObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillObjective *instance, 
            const DrillObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        DrillObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillState.
        */
        typedef  class DrillState DrillStateKeyHolder;

        #define DrillStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePluginSupport_copy_data(
            DrillState *out,
            const DrillState *in);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_data_w_params(
            DrillState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_data_ex(
            DrillState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_data(
            DrillState *sample);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_print_data(
            const DrillState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_key_ex(
            DrillStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_key(
            DrillStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *out,
            const DrillState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillState *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillStatePlugin_deserialize_from_cdr_buffer(
            DrillState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillStatePlugin_data_to_string(
            const DrillState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateKeyHolder *key, 
            const DrillState *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *instance, 
            const DrillStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillState *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillStatePlugin_new(void);

        NDDSUSERDllExport extern void
        DrillStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* drillPlugin_1648144461_h */

