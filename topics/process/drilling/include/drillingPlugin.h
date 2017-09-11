

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drillingPlugin_1428081284_h
#define drillingPlugin_1428081284_h

#include "drilling.h"

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
        * By default, this type is struct DrillingRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingRequest.
        */
        typedef  class DrillingRequest DrillingRequestKeyHolder;

        #define DrillingRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillingRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillingRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingRequest*
        DrillingRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingRequest*
        DrillingRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingRequest*
        DrillingRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPluginSupport_copy_data(
            DrillingRequest *out,
            const DrillingRequest *in);

        NDDSUSERDllExport extern void 
        DrillingRequestPluginSupport_destroy_data_w_params(
            DrillingRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingRequestPluginSupport_destroy_data_ex(
            DrillingRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingRequestPluginSupport_destroy_data(
            DrillingRequest *sample);

        NDDSUSERDllExport extern void 
        DrillingRequestPluginSupport_print_data(
            const DrillingRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingRequest*
        DrillingRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingRequest*
        DrillingRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingRequestPluginSupport_destroy_key_ex(
            DrillingRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingRequestPluginSupport_destroy_key(
            DrillingRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest *out,
            const DrillingRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingRequestPlugin_deserialize_from_cdr_buffer(
            DrillingRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingRequestPlugin_data_to_string(
            const DrillingRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillingRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillingRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillingRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillingRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequestKeyHolder *key, 
            const DrillingRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingRequest *instance, 
            const DrillingRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillingObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingObjective.
        */
        typedef  class DrillingObjective DrillingObjectiveKeyHolder;

        #define DrillingObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillingObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillingObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingObjective*
        DrillingObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingObjective*
        DrillingObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingObjective*
        DrillingObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePluginSupport_copy_data(
            DrillingObjective *out,
            const DrillingObjective *in);

        NDDSUSERDllExport extern void 
        DrillingObjectivePluginSupport_destroy_data_w_params(
            DrillingObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingObjectivePluginSupport_destroy_data_ex(
            DrillingObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingObjectivePluginSupport_destroy_data(
            DrillingObjective *sample);

        NDDSUSERDllExport extern void 
        DrillingObjectivePluginSupport_print_data(
            const DrillingObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingObjective*
        DrillingObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingObjective*
        DrillingObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingObjectivePluginSupport_destroy_key_ex(
            DrillingObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingObjectivePluginSupport_destroy_key(
            DrillingObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective *out,
            const DrillingObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingObjectivePlugin_deserialize_from_cdr_buffer(
            DrillingObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingObjectivePlugin_data_to_string(
            const DrillingObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillingObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillingObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillingObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillingObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjectiveKeyHolder *key, 
            const DrillingObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingObjective *instance, 
            const DrillingObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillingState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingState.
        */
        typedef  class DrillingState DrillingStateKeyHolder;

        #define DrillingStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillingStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillingStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingState*
        DrillingStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingState*
        DrillingStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingState*
        DrillingStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePluginSupport_copy_data(
            DrillingState *out,
            const DrillingState *in);

        NDDSUSERDllExport extern void 
        DrillingStatePluginSupport_destroy_data_w_params(
            DrillingState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingStatePluginSupport_destroy_data_ex(
            DrillingState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingStatePluginSupport_destroy_data(
            DrillingState *sample);

        NDDSUSERDllExport extern void 
        DrillingStatePluginSupport_print_data(
            const DrillingState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingState*
        DrillingStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingState*
        DrillingStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingStatePluginSupport_destroy_key_ex(
            DrillingStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingStatePluginSupport_destroy_key(
            DrillingStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState *out,
            const DrillingState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingState *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingStatePlugin_deserialize_from_cdr_buffer(
            DrillingState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingStatePlugin_data_to_string(
            const DrillingState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillingStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillingStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillingStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillingStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingStateKeyHolder *key, 
            const DrillingState *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingState *instance, 
            const DrillingStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingState *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingStatePlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* drillingPlugin_1428081284_h */

