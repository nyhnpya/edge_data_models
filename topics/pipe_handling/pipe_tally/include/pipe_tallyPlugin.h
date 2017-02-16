

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pipe_tally.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef pipe_tallyPlugin_58331204_h
#define pipe_tallyPlugin_58331204_h

#include "pipe_tally.h"

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

namespace PipeHandling {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PipeTally
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PipeTally)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PipeTally must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PipeTally.
    */
    typedef  class PipeTally PipeTallyKeyHolder;

    #define PipeTallyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define PipeTallyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PipeTallyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define PipeTallyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define PipeTallyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define PipeTallyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PipeTallyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PipeTally*
    PipeTallyPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PipeTally*
    PipeTallyPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PipeTally*
    PipeTallyPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPluginSupport_copy_data(
        PipeTally *out,
        const PipeTally *in);

    NDDSUSERDllExport extern void 
    PipeTallyPluginSupport_destroy_data_w_params(
        PipeTally *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PipeTallyPluginSupport_destroy_data_ex(
        PipeTally *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PipeTallyPluginSupport_destroy_data(
        PipeTally *sample);

    NDDSUSERDllExport extern void 
    PipeTallyPluginSupport_print_data(
        const PipeTally *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern PipeTally*
    PipeTallyPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PipeTally*
    PipeTallyPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    PipeTallyPluginSupport_destroy_key_ex(
        PipeTallyKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PipeTallyPluginSupport_destroy_key(
        PipeTallyKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PipeTallyPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PipeTallyPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PipeTallyPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PipeTallyPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PipeTallyPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally *out,
        const PipeTally *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const PipeTally *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    PipeTallyPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PipeTally *sample); 

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    PipeTallyPlugin_deserialize_from_cdr_buffer(
        PipeTally *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    PipeTallyPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    PipeTallyPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    PipeTallyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PipeTallyPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    PipeTallyPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const PipeTally * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PipeTallyPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PipeTallyPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PipeTallyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const PipeTally *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    PipeTallyPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PipeTallyKeyHolder *key, 
        const PipeTally *instance);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        PipeTally *instance, 
        const PipeTallyKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const PipeTally *instance);

    NDDSUSERDllExport extern RTIBool 
    PipeTallyPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PipeTallyPlugin_new(void);

    NDDSUSERDllExport extern void
    PipeTallyPlugin_delete(struct PRESTypePlugin *);

} /* namespace PipeHandling  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* pipe_tallyPlugin_58331204_h */

