

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autotuner_configurationPlugin_985793073_h
#define autotuner_configurationPlugin_985793073_h

#include "autotuner_configuration.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "base_data_typesPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace Shell {
    namespace Hmi {
        namespace AutoTunerConfiguration {

            #define ModelStateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define ModelStateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ModelStateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ModelStateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ModelStateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ModelStateRequest*
            ModelStateRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ModelStateRequest*
            ModelStateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ModelStateRequest*
            ModelStateRequestPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ModelStateRequestPluginSupport_copy_data(
                ModelStateRequest *out,
                const ModelStateRequest *in);

            NDDSUSERDllExport extern void 
            ModelStateRequestPluginSupport_destroy_data_w_params(
                ModelStateRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ModelStateRequestPluginSupport_destroy_data_ex(
                ModelStateRequest *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ModelStateRequestPluginSupport_destroy_data(
                ModelStateRequest *sample);

            NDDSUSERDllExport extern void 
            ModelStateRequestPluginSupport_print_data(
                const ModelStateRequest *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ModelStateRequestPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ModelStateRequestPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ModelStateRequestPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ModelStateRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ModelStateRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateRequest *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ModelStateRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateRequest *out,
                const ModelStateRequest *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ModelStateRequestPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ModelStateRequest *sample); 

            NDDSUSERDllExport extern RTIBool
            ModelStateRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const ModelStateRequest *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            ModelStateRequestPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateRequest **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ModelStateRequestPlugin_deserialize_from_cdr_buffer(
                ModelStateRequest *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            ModelStateRequestPlugin_data_to_string(
                const ModelStateRequest *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            ModelStateRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ModelStateRequestPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ModelStateRequestPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ModelStateRequestPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ModelStateRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateRequest ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *ModelStateRequestPlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ModelStateRequestPlugin_new(void);

            NDDSUSERDllExport extern void
            ModelStateRequestPlugin_delete(struct PRESTypePlugin *);

            #define ModelStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define ModelStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ModelStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ModelStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ModelStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ModelState*
            ModelStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ModelState*
            ModelStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ModelState*
            ModelStatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ModelStatePluginSupport_copy_data(
                ModelState *out,
                const ModelState *in);

            NDDSUSERDllExport extern void 
            ModelStatePluginSupport_destroy_data_w_params(
                ModelState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ModelStatePluginSupport_destroy_data_ex(
                ModelState *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ModelStatePluginSupport_destroy_data(
                ModelState *sample);

            NDDSUSERDllExport extern void 
            ModelStatePluginSupport_print_data(
                const ModelState *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ModelStatePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ModelStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ModelStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ModelStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ModelStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelState *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ModelStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelState *out,
                const ModelState *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ModelStatePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ModelState *sample); 

            NDDSUSERDllExport extern RTIBool
            ModelStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const ModelState *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            ModelStatePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ModelState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ModelStatePlugin_deserialize_from_cdr_buffer(
                ModelState *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            ModelStatePlugin_data_to_string(
                const ModelState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            ModelStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ModelStatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ModelStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ModelStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ModelStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ModelState ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *ModelStatePlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ModelStatePlugin_new(void);

            NDDSUSERDllExport extern void
            ModelStatePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct AutoTunerTuningConfiguration
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct AutoTunerTuningConfiguration)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * AutoTunerTuningConfiguration must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct AutoTunerTuningConfiguration.
            */
            typedef  class AutoTunerTuningConfiguration AutoTunerTuningConfigurationKeyHolder;

            #define AutoTunerTuningConfigurationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define AutoTunerTuningConfigurationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AutoTunerTuningConfigurationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AutoTunerTuningConfigurationPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define AutoTunerTuningConfigurationPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define AutoTunerTuningConfigurationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AutoTunerTuningConfigurationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AutoTunerTuningConfiguration*
            AutoTunerTuningConfigurationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AutoTunerTuningConfiguration*
            AutoTunerTuningConfigurationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AutoTunerTuningConfiguration*
            AutoTunerTuningConfigurationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPluginSupport_copy_data(
                AutoTunerTuningConfiguration *out,
                const AutoTunerTuningConfiguration *in);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPluginSupport_destroy_data_w_params(
                AutoTunerTuningConfiguration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPluginSupport_destroy_data_ex(
                AutoTunerTuningConfiguration *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPluginSupport_destroy_data(
                AutoTunerTuningConfiguration *sample);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPluginSupport_print_data(
                const AutoTunerTuningConfiguration *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern AutoTunerTuningConfiguration*
            AutoTunerTuningConfigurationPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AutoTunerTuningConfiguration*
            AutoTunerTuningConfigurationPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPluginSupport_destroy_key_ex(
                AutoTunerTuningConfigurationKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPluginSupport_destroy_key(
                AutoTunerTuningConfigurationKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AutoTunerTuningConfigurationPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AutoTunerTuningConfigurationPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AutoTunerTuningConfigurationPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AutoTunerTuningConfigurationPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration *out,
                const AutoTunerTuningConfiguration *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AutoTunerTuningConfigurationPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AutoTunerTuningConfiguration *sample); 

            NDDSUSERDllExport extern RTIBool
            AutoTunerTuningConfigurationPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const AutoTunerTuningConfiguration *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AutoTunerTuningConfigurationPlugin_deserialize_from_cdr_buffer(
                AutoTunerTuningConfiguration *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            AutoTunerTuningConfigurationPlugin_data_to_string(
                const AutoTunerTuningConfiguration *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            AutoTunerTuningConfigurationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AutoTunerTuningConfigurationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AutoTunerTuningConfigurationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AutoTunerTuningConfigurationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfigurationKeyHolder *key, 
                const AutoTunerTuningConfiguration *instance);

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AutoTunerTuningConfiguration *instance, 
                const AutoTunerTuningConfigurationKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPlugin_instance_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                DDS_KeyHash_t *keyhash,
                const AutoTunerTuningConfiguration *instance,
                RTIEncapsulationId encapsulationId);

            NDDSUSERDllExport extern RTIBool 
            AutoTunerTuningConfigurationPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *AutoTunerTuningConfigurationPlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AutoTunerTuningConfigurationPlugin_new(void);

            NDDSUSERDllExport extern void
            AutoTunerTuningConfigurationPlugin_delete(struct PRESTypePlugin *);

        } /* namespace AutoTunerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* autotuner_configurationPlugin_985793073_h */

