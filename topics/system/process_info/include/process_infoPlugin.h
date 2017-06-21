

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from process_info.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef process_infoPlugin_1743012901_h
#define process_infoPlugin_1743012901_h

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

namespace ProcessMonitor {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ProcessInfo
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ProcessInfo)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ProcessInfo must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ProcessInfo.
    */
    typedef  class ProcessInfo ProcessInfoKeyHolder;

    #define ProcessInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define ProcessInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ProcessInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define ProcessInfoPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ProcessInfoPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ProcessInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ProcessInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ProcessInfo*
    ProcessInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ProcessInfo*
    ProcessInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ProcessInfo*
    ProcessInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPluginSupport_copy_data(
        ProcessInfo *out,
        const ProcessInfo *in);

    NDDSUSERDllExport extern void 
    ProcessInfoPluginSupport_destroy_data_w_params(
        ProcessInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ProcessInfoPluginSupport_destroy_data_ex(
        ProcessInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ProcessInfoPluginSupport_destroy_data(
        ProcessInfo *sample);

    NDDSUSERDllExport extern void 
    ProcessInfoPluginSupport_print_data(
        const ProcessInfo *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ProcessInfo*
    ProcessInfoPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ProcessInfo*
    ProcessInfoPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ProcessInfoPluginSupport_destroy_key_ex(
        ProcessInfoKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ProcessInfoPluginSupport_destroy_key(
        ProcessInfoKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ProcessInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ProcessInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ProcessInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ProcessInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ProcessInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo *out,
        const ProcessInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const ProcessInfo *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ProcessInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ProcessInfo *sample); 

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ProcessInfoPlugin_deserialize_from_cdr_buffer(
        ProcessInfo *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    ProcessInfoPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    ProcessInfoPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    ProcessInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ProcessInfoPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    ProcessInfoPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const ProcessInfo * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ProcessInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ProcessInfoPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ProcessInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const ProcessInfo *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ProcessInfoPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfoKeyHolder *key, 
        const ProcessInfo *instance);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ProcessInfo *instance, 
        const ProcessInfoKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const ProcessInfo *instance);

    NDDSUSERDllExport extern RTIBool 
    ProcessInfoPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ProcessInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    ProcessInfoPlugin_delete(struct PRESTypePlugin *);

} /* namespace ProcessMonitor  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* process_infoPlugin_1743012901_h */

