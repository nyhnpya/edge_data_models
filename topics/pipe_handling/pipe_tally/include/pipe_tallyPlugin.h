

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pipe_tally.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef pipe_tallyPlugin_58331459_h
#define pipe_tallyPlugin_58331459_h

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

namespace nec {
    namespace process {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct PipeTallyState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct PipeTallyState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * PipeTallyState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct PipeTallyState.
        */
        typedef  class PipeTallyState PipeTallyStateKeyHolder;

        #define PipeTallyStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define PipeTallyStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PipeTallyStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define PipeTallyStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define PipeTallyStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define PipeTallyStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PipeTallyStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PipeTallyState*
        PipeTallyStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PipeTallyState*
        PipeTallyStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PipeTallyState*
        PipeTallyStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePluginSupport_copy_data(
            PipeTallyState *out,
            const PipeTallyState *in);

        NDDSUSERDllExport extern void 
        PipeTallyStatePluginSupport_destroy_data_w_params(
            PipeTallyState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PipeTallyStatePluginSupport_destroy_data_ex(
            PipeTallyState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PipeTallyStatePluginSupport_destroy_data(
            PipeTallyState *sample);

        NDDSUSERDllExport extern void 
        PipeTallyStatePluginSupport_print_data(
            const PipeTallyState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern PipeTallyState*
        PipeTallyStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PipeTallyState*
        PipeTallyStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        PipeTallyStatePluginSupport_destroy_key_ex(
            PipeTallyStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PipeTallyStatePluginSupport_destroy_key(
            PipeTallyStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PipeTallyStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PipeTallyStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PipeTallyStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PipeTallyStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PipeTallyStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *out,
            const PipeTallyState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const PipeTallyState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PipeTallyStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PipeTallyState *sample); 

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PipeTallyStatePlugin_deserialize_from_cdr_buffer(
            PipeTallyState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PipeTallyStatePlugin_data_to_string(
            const PipeTallyState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        PipeTallyStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        PipeTallyStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        PipeTallyStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PipeTallyStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        PipeTallyStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const PipeTallyState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PipeTallyStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PipeTallyStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PipeTallyStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const PipeTallyState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PipeTallyStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyStateKeyHolder *key, 
            const PipeTallyState *instance);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            PipeTallyState *instance, 
            const PipeTallyStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const PipeTallyState *instance);

        NDDSUSERDllExport extern RTIBool 
        PipeTallyStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PipeTallyStatePlugin_new(void);

        NDDSUSERDllExport extern void
        PipeTallyStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* pipe_tallyPlugin_58331459_h */

