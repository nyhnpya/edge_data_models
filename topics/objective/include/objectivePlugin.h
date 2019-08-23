

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objective.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef objectivePlugin_1315698183_h
#define objectivePlugin_1315698183_h

#include "objective.h"

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
        * By default, this type is struct ObjectiveState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct ObjectiveState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * ObjectiveState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct ObjectiveState.
        */
        typedef  class ObjectiveState ObjectiveStateKeyHolder;

        #define ObjectiveStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define ObjectiveStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define ObjectiveStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define ObjectiveStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define ObjectiveStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define ObjectiveStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define ObjectiveStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern ObjectiveState*
        ObjectiveStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern ObjectiveState*
        ObjectiveStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern ObjectiveState*
        ObjectiveStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePluginSupport_copy_data(
            ObjectiveState *out,
            const ObjectiveState *in);

        NDDSUSERDllExport extern void 
        ObjectiveStatePluginSupport_destroy_data_w_params(
            ObjectiveState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        ObjectiveStatePluginSupport_destroy_data_ex(
            ObjectiveState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ObjectiveStatePluginSupport_destroy_data(
            ObjectiveState *sample);

        NDDSUSERDllExport extern void 
        ObjectiveStatePluginSupport_print_data(
            const ObjectiveState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern ObjectiveState*
        ObjectiveStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern ObjectiveState*
        ObjectiveStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        ObjectiveStatePluginSupport_destroy_key_ex(
            ObjectiveStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ObjectiveStatePluginSupport_destroy_key(
            ObjectiveStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        ObjectiveStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        ObjectiveStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        ObjectiveStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        ObjectiveStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        ObjectiveStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *out,
            const ObjectiveState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const ObjectiveState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ObjectiveStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ObjectiveState *sample); 

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ObjectiveStatePlugin_deserialize_from_cdr_buffer(
            ObjectiveState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        ObjectiveStatePlugin_data_to_string(
            const ObjectiveState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        ObjectiveStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        ObjectiveStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        ObjectiveStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ObjectiveStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        ObjectiveStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const ObjectiveState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        ObjectiveStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        ObjectiveStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ObjectiveStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const ObjectiveState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ObjectiveStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveStateKeyHolder *key, 
            const ObjectiveState *instance);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            ObjectiveState *instance, 
            const ObjectiveStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const ObjectiveState *instance);

        NDDSUSERDllExport extern RTIBool 
        ObjectiveStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        ObjectiveStatePlugin_new(void);

        NDDSUSERDllExport extern void
        ObjectiveStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace plan  */
} /* namespace process  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* objectivePlugin_1315698183_h */

