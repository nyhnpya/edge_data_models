

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from wellbore.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef wellborePlugin_1776161552_h
#define wellborePlugin_1776161552_h

#include "wellbore.h"

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

namespace Downhole {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Wellbore
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Wellbore)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Wellbore must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Wellbore.
    */
    typedef  class Wellbore WellboreKeyHolder;

    #define WellborePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define WellborePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define WellborePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define WellborePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define WellborePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define WellborePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define WellborePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Wellbore*
    WellborePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Wellbore*
    WellborePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Wellbore*
    WellborePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    WellborePluginSupport_copy_data(
        Wellbore *out,
        const Wellbore *in);

    NDDSUSERDllExport extern void 
    WellborePluginSupport_destroy_data_w_params(
        Wellbore *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    WellborePluginSupport_destroy_data_ex(
        Wellbore *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    WellborePluginSupport_destroy_data(
        Wellbore *sample);

    NDDSUSERDllExport extern void 
    WellborePluginSupport_print_data(
        const Wellbore *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Wellbore*
    WellborePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Wellbore*
    WellborePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    WellborePluginSupport_destroy_key_ex(
        WellboreKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    WellborePluginSupport_destroy_key(
        WellboreKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    WellborePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    WellborePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    WellborePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    WellborePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    WellborePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore *out,
        const Wellbore *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Wellbore *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    WellborePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Wellbore *sample); 

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    WellborePlugin_deserialize_from_cdr_buffer(
        Wellbore *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    WellborePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    WellborePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    WellborePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    WellborePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    WellborePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Wellbore * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    WellborePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    WellborePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    WellborePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Wellbore *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    WellborePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        WellboreKeyHolder *key, 
        const Wellbore *instance);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Wellbore *instance, 
        const WellboreKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const Wellbore *instance);

    NDDSUSERDllExport extern RTIBool 
    WellborePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    WellborePlugin_new(void);

    NDDSUSERDllExport extern void
    WellborePlugin_delete(struct PRESTypePlugin *);

} /* namespace Downhole  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* wellborePlugin_1776161552_h */

