

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef roptimizer_configurationPlugin_360071559_h
#define roptimizer_configurationPlugin_360071559_h

#include "roptimizer_configuration.h"

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

namespace Shell {
    namespace Hmi {
        namespace RoptimizerConfiguration {

            #define RoptimizerConfigurationRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define RoptimizerConfigurationRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RoptimizerConfigurationRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define RoptimizerConfigurationRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RoptimizerConfigurationRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RoptimizerConfigurationRequest*
            RoptimizerConfigurationRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RoptimizerConfigurationRequest*
            RoptimizerConfigurationRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RoptimizerConfigurationRequest*
            RoptimizerConfigurationRequestPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPluginSupport_copy_data(
                RoptimizerConfigurationRequest *out,
                const RoptimizerConfigurationRequest *in);

            NDDSUSERDllExport extern void 
            RoptimizerConfigurationRequestPluginSupport_destroy_data_w_params(
                RoptimizerConfigurationRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RoptimizerConfigurationRequestPluginSupport_destroy_data_ex(
                RoptimizerConfigurationRequest *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RoptimizerConfigurationRequestPluginSupport_destroy_data(
                RoptimizerConfigurationRequest *sample);

            NDDSUSERDllExport extern void 
            RoptimizerConfigurationRequestPluginSupport_print_data(
                const RoptimizerConfigurationRequest *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RoptimizerConfigurationRequestPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RoptimizerConfigurationRequestPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RoptimizerConfigurationRequestPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RoptimizerConfigurationRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RoptimizerConfigurationRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerConfigurationRequest *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerConfigurationRequest *out,
                const RoptimizerConfigurationRequest *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPlugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const RoptimizerConfigurationRequest *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPlugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerConfigurationRequest *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RoptimizerConfigurationRequestPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RoptimizerConfigurationRequest *sample); 

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerConfigurationRequest **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RoptimizerConfigurationRequestPlugin_deserialize_from_cdr_buffer(
                RoptimizerConfigurationRequest *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            RoptimizerConfigurationRequestPlugin_data_to_string(
                const RoptimizerConfigurationRequest *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            RoptimizerConfigurationRequestPlugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerConfigurationRequestPlugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            RoptimizerConfigurationRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerConfigurationRequestPlugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            RoptimizerConfigurationRequestPlugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const RoptimizerConfigurationRequest * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RoptimizerConfigurationRequestPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerConfigurationRequestPlugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerConfigurationRequestPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPlugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const RoptimizerConfigurationRequest *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPlugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerConfigurationRequest * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerConfigurationRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerConfigurationRequest ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RoptimizerConfigurationRequestPlugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerConfigurationRequest *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RoptimizerConfigurationRequestPlugin_new(void);

            NDDSUSERDllExport extern void
            RoptimizerConfigurationRequestPlugin_delete(struct PRESTypePlugin *);

            #define RoptimizerSteadyStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define RoptimizerSteadyStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RoptimizerSteadyStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define RoptimizerSteadyStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RoptimizerSteadyStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RoptimizerSteadyState*
            RoptimizerSteadyStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RoptimizerSteadyState*
            RoptimizerSteadyStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RoptimizerSteadyState*
            RoptimizerSteadyStatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePluginSupport_copy_data(
                RoptimizerSteadyState *out,
                const RoptimizerSteadyState *in);

            NDDSUSERDllExport extern void 
            RoptimizerSteadyStatePluginSupport_destroy_data_w_params(
                RoptimizerSteadyState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RoptimizerSteadyStatePluginSupport_destroy_data_ex(
                RoptimizerSteadyState *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RoptimizerSteadyStatePluginSupport_destroy_data(
                RoptimizerSteadyState *sample);

            NDDSUSERDllExport extern void 
            RoptimizerSteadyStatePluginSupport_print_data(
                const RoptimizerSteadyState *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RoptimizerSteadyStatePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RoptimizerSteadyStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RoptimizerSteadyStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RoptimizerSteadyStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RoptimizerSteadyStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerSteadyState *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerSteadyState *out,
                const RoptimizerSteadyState *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePlugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const RoptimizerSteadyState *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePlugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerSteadyState *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RoptimizerSteadyStatePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RoptimizerSteadyState *sample); 

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerSteadyState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RoptimizerSteadyStatePlugin_deserialize_from_cdr_buffer(
                RoptimizerSteadyState *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            RoptimizerSteadyStatePlugin_data_to_string(
                const RoptimizerSteadyState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            RoptimizerSteadyStatePlugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerSteadyStatePlugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            RoptimizerSteadyStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerSteadyStatePlugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            RoptimizerSteadyStatePlugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const RoptimizerSteadyState * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RoptimizerSteadyStatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerSteadyStatePlugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RoptimizerSteadyStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePlugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const RoptimizerSteadyState *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePlugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerSteadyState * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RoptimizerSteadyStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerSteadyState ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RoptimizerSteadyStatePlugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RoptimizerSteadyState *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RoptimizerSteadyStatePlugin_new(void);

            NDDSUSERDllExport extern void
            RoptimizerSteadyStatePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RoptimizerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* roptimizer_configurationPlugin_360071559_h */

