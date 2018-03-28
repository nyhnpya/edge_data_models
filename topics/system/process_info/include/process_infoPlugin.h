

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from process_info.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef process_infoPlugin_1743013001_h
#define process_infoPlugin_1743013001_h

#include "process_info.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace process {
    namespace maintanence {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct ProcessState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct ProcessState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * ProcessState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct ProcessState.
        */
        typedef  class ProcessState ProcessStateKeyHolder;

        #define ProcessStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define ProcessStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define ProcessStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define ProcessStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define ProcessStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define ProcessStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define ProcessStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern ProcessState*
        ProcessStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern ProcessState*
        ProcessStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern ProcessState*
        ProcessStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePluginSupport_copy_data(
            ProcessState *out,
            const ProcessState *in);

        NDDSUSERDllExport extern void 
        ProcessStatePluginSupport_destroy_data_w_params(
            ProcessState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        ProcessStatePluginSupport_destroy_data_ex(
            ProcessState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ProcessStatePluginSupport_destroy_data(
            ProcessState *sample);

        NDDSUSERDllExport extern void 
        ProcessStatePluginSupport_print_data(
            const ProcessState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern ProcessState*
        ProcessStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern ProcessState*
        ProcessStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        ProcessStatePluginSupport_destroy_key_ex(
            ProcessStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ProcessStatePluginSupport_destroy_key(
            ProcessStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        ProcessStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        ProcessStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        ProcessStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        ProcessStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        ProcessStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState *out,
            const ProcessState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const ProcessState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ProcessStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ProcessState *sample); 

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ProcessStatePlugin_deserialize_from_cdr_buffer(
            ProcessState *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern RTIBool
        ProcessStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        ProcessStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        ProcessStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ProcessStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        ProcessStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const ProcessState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        ProcessStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        ProcessStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ProcessStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const ProcessState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ProcessStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ProcessStateKeyHolder *key, 
            const ProcessState *instance);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            ProcessState *instance, 
            const ProcessStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const ProcessState *instance);

        NDDSUSERDllExport extern RTIBool 
        ProcessStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        ProcessStatePlugin_new(void);

        NDDSUSERDllExport extern void
        ProcessStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace maintanence  */
} /* namespace process  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* process_infoPlugin_1743013001_h */

