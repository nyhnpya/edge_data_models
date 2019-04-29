

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from wellbore.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef wellborePlugin_1776161843_h
#define wellborePlugin_1776161843_h

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

namespace nec {
    namespace process {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WellboreState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WellboreState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WellboreState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WellboreState.
        */
        typedef  class WellboreState WellboreStateKeyHolder;

        #define WellboreStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define WellboreStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WellboreStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define WellboreStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WellboreStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WellboreStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WellboreStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WellboreState*
        WellboreStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WellboreState*
        WellboreStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WellboreState*
        WellboreStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePluginSupport_copy_data(
            WellboreState *out,
            const WellboreState *in);

        NDDSUSERDllExport extern void 
        WellboreStatePluginSupport_destroy_data_w_params(
            WellboreState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WellboreStatePluginSupport_destroy_data_ex(
            WellboreState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WellboreStatePluginSupport_destroy_data(
            WellboreState *sample);

        NDDSUSERDllExport extern void 
        WellboreStatePluginSupport_print_data(
            const WellboreState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WellboreState*
        WellboreStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WellboreState*
        WellboreStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WellboreStatePluginSupport_destroy_key_ex(
            WellboreStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WellboreStatePluginSupport_destroy_key(
            WellboreStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WellboreStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WellboreStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WellboreStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WellboreStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WellboreStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState *out,
            const WellboreState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const WellboreState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WellboreStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WellboreState *sample); 

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WellboreStatePlugin_deserialize_from_cdr_buffer(
            WellboreState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        WellboreStatePlugin_data_to_string(
            const WellboreState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        WellboreStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        WellboreStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        WellboreStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WellboreStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        WellboreStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const WellboreState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WellboreStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WellboreStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WellboreStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const WellboreState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WellboreStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WellboreStateKeyHolder *key, 
            const WellboreState *instance);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WellboreState *instance, 
            const WellboreStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WellboreState *instance);

        NDDSUSERDllExport extern RTIBool 
        WellboreStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WellboreStatePlugin_new(void);

        NDDSUSERDllExport extern void
        WellboreStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* wellborePlugin_1776161843_h */

