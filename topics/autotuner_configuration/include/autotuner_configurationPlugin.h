

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autotuner_configurationPlugin_985795544_h
#define autotuner_configurationPlugin_985795544_h

#include "autotuner_configuration.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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

            #define ModelStateStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define ModelStateStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ModelStateStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ModelStateStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ModelStateStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ModelStateState*
            ModelStateStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ModelStateState*
            ModelStateStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ModelStateState*
            ModelStateStatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ModelStateStatePluginSupport_copy_data(
                ModelStateState *out,
                const ModelStateState *in);

            NDDSUSERDllExport extern void 
            ModelStateStatePluginSupport_destroy_data_w_params(
                ModelStateState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ModelStateStatePluginSupport_destroy_data_ex(
                ModelStateState *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ModelStateStatePluginSupport_destroy_data(
                ModelStateState *sample);

            NDDSUSERDllExport extern void 
            ModelStateStatePluginSupport_print_data(
                const ModelStateState *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ModelStateStatePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ModelStateStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ModelStateStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ModelStateStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ModelStateStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateState *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ModelStateStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateState *out,
                const ModelStateState *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ModelStateStatePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ModelStateState *sample); 

            NDDSUSERDllExport extern RTIBool
            ModelStateStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const ModelStateState *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            ModelStateStatePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ModelStateStatePlugin_deserialize_from_cdr_buffer(
                ModelStateState *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            ModelStateStatePlugin_data_to_string(
                const ModelStateState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            ModelStateStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ModelStateStatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ModelStateStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ModelStateStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ModelStateStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ModelStateState ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *ModelStateStatePlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ModelStateStatePlugin_new(void);

            NDDSUSERDllExport extern void
            ModelStateStatePlugin_delete(struct PRESTypePlugin *);

            #define DiffpTuningRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define DiffpTuningRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DiffpTuningRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DiffpTuningRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DiffpTuningRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DiffpTuningRequest*
            DiffpTuningRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DiffpTuningRequest*
            DiffpTuningRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DiffpTuningRequest*
            DiffpTuningRequestPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningRequestPluginSupport_copy_data(
                DiffpTuningRequest *out,
                const DiffpTuningRequest *in);

            NDDSUSERDllExport extern void 
            DiffpTuningRequestPluginSupport_destroy_data_w_params(
                DiffpTuningRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DiffpTuningRequestPluginSupport_destroy_data_ex(
                DiffpTuningRequest *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DiffpTuningRequestPluginSupport_destroy_data(
                DiffpTuningRequest *sample);

            NDDSUSERDllExport extern void 
            DiffpTuningRequestPluginSupport_print_data(
                const DiffpTuningRequest *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DiffpTuningRequestPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DiffpTuningRequestPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DiffpTuningRequestPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DiffpTuningRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DiffpTuningRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningRequest *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningRequest *out,
                const DiffpTuningRequest *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DiffpTuningRequestPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DiffpTuningRequest *sample); 

            NDDSUSERDllExport extern RTIBool
            DiffpTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const DiffpTuningRequest *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningRequestPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningRequest **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DiffpTuningRequestPlugin_deserialize_from_cdr_buffer(
                DiffpTuningRequest *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            DiffpTuningRequestPlugin_data_to_string(
                const DiffpTuningRequest *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            DiffpTuningRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DiffpTuningRequestPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DiffpTuningRequestPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DiffpTuningRequestPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningRequest ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *DiffpTuningRequestPlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DiffpTuningRequestPlugin_new(void);

            NDDSUSERDllExport extern void
            DiffpTuningRequestPlugin_delete(struct PRESTypePlugin *);

            #define DiffpTuningStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define DiffpTuningStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DiffpTuningStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DiffpTuningStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DiffpTuningStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DiffpTuningState*
            DiffpTuningStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DiffpTuningState*
            DiffpTuningStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DiffpTuningState*
            DiffpTuningStatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningStatePluginSupport_copy_data(
                DiffpTuningState *out,
                const DiffpTuningState *in);

            NDDSUSERDllExport extern void 
            DiffpTuningStatePluginSupport_destroy_data_w_params(
                DiffpTuningState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DiffpTuningStatePluginSupport_destroy_data_ex(
                DiffpTuningState *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DiffpTuningStatePluginSupport_destroy_data(
                DiffpTuningState *sample);

            NDDSUSERDllExport extern void 
            DiffpTuningStatePluginSupport_print_data(
                const DiffpTuningState *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DiffpTuningStatePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DiffpTuningStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DiffpTuningStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DiffpTuningStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DiffpTuningStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningState *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningState *out,
                const DiffpTuningState *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DiffpTuningStatePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DiffpTuningState *sample); 

            NDDSUSERDllExport extern RTIBool
            DiffpTuningStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const DiffpTuningState *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningStatePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DiffpTuningStatePlugin_deserialize_from_cdr_buffer(
                DiffpTuningState *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            DiffpTuningStatePlugin_data_to_string(
                const DiffpTuningState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            DiffpTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DiffpTuningStatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DiffpTuningStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DiffpTuningStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DiffpTuningStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DiffpTuningState ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *DiffpTuningStatePlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DiffpTuningStatePlugin_new(void);

            NDDSUSERDllExport extern void
            DiffpTuningStatePlugin_delete(struct PRESTypePlugin *);

            #define WobTuningRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define WobTuningRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WobTuningRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WobTuningRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WobTuningRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WobTuningRequest*
            WobTuningRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WobTuningRequest*
            WobTuningRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WobTuningRequest*
            WobTuningRequestPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WobTuningRequestPluginSupport_copy_data(
                WobTuningRequest *out,
                const WobTuningRequest *in);

            NDDSUSERDllExport extern void 
            WobTuningRequestPluginSupport_destroy_data_w_params(
                WobTuningRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WobTuningRequestPluginSupport_destroy_data_ex(
                WobTuningRequest *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WobTuningRequestPluginSupport_destroy_data(
                WobTuningRequest *sample);

            NDDSUSERDllExport extern void 
            WobTuningRequestPluginSupport_print_data(
                const WobTuningRequest *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WobTuningRequestPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WobTuningRequestPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WobTuningRequestPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WobTuningRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WobTuningRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningRequest *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WobTuningRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningRequest *out,
                const WobTuningRequest *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WobTuningRequestPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WobTuningRequest *sample); 

            NDDSUSERDllExport extern RTIBool
            WobTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const WobTuningRequest *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            WobTuningRequestPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningRequest **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WobTuningRequestPlugin_deserialize_from_cdr_buffer(
                WobTuningRequest *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            WobTuningRequestPlugin_data_to_string(
                const WobTuningRequest *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            WobTuningRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WobTuningRequestPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WobTuningRequestPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WobTuningRequestPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WobTuningRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningRequest ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *WobTuningRequestPlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WobTuningRequestPlugin_new(void);

            NDDSUSERDllExport extern void
            WobTuningRequestPlugin_delete(struct PRESTypePlugin *);

            #define WobTuningStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define WobTuningStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WobTuningStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WobTuningStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WobTuningStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WobTuningState*
            WobTuningStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WobTuningState*
            WobTuningStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WobTuningState*
            WobTuningStatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WobTuningStatePluginSupport_copy_data(
                WobTuningState *out,
                const WobTuningState *in);

            NDDSUSERDllExport extern void 
            WobTuningStatePluginSupport_destroy_data_w_params(
                WobTuningState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WobTuningStatePluginSupport_destroy_data_ex(
                WobTuningState *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WobTuningStatePluginSupport_destroy_data(
                WobTuningState *sample);

            NDDSUSERDllExport extern void 
            WobTuningStatePluginSupport_print_data(
                const WobTuningState *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WobTuningStatePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WobTuningStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WobTuningStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WobTuningStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WobTuningStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningState *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WobTuningStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningState *out,
                const WobTuningState *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WobTuningStatePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WobTuningState *sample); 

            NDDSUSERDllExport extern RTIBool
            WobTuningStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const WobTuningState *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            WobTuningStatePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WobTuningStatePlugin_deserialize_from_cdr_buffer(
                WobTuningState *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            WobTuningStatePlugin_data_to_string(
                const WobTuningState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            WobTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WobTuningStatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WobTuningStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WobTuningStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WobTuningStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WobTuningState ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *WobTuningStatePlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WobTuningStatePlugin_new(void);

            NDDSUSERDllExport extern void
            WobTuningStatePlugin_delete(struct PRESTypePlugin *);

            #define TorqueTuningRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define TorqueTuningRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TorqueTuningRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TorqueTuningRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TorqueTuningRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TorqueTuningRequest*
            TorqueTuningRequestPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TorqueTuningRequest*
            TorqueTuningRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TorqueTuningRequest*
            TorqueTuningRequestPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningRequestPluginSupport_copy_data(
                TorqueTuningRequest *out,
                const TorqueTuningRequest *in);

            NDDSUSERDllExport extern void 
            TorqueTuningRequestPluginSupport_destroy_data_w_params(
                TorqueTuningRequest *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TorqueTuningRequestPluginSupport_destroy_data_ex(
                TorqueTuningRequest *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TorqueTuningRequestPluginSupport_destroy_data(
                TorqueTuningRequest *sample);

            NDDSUSERDllExport extern void 
            TorqueTuningRequestPluginSupport_print_data(
                const TorqueTuningRequest *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TorqueTuningRequestPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TorqueTuningRequestPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TorqueTuningRequestPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TorqueTuningRequestPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TorqueTuningRequestPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningRequest *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningRequestPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningRequest *out,
                const TorqueTuningRequest *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TorqueTuningRequestPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TorqueTuningRequest *sample); 

            NDDSUSERDllExport extern RTIBool
            TorqueTuningRequestPlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const TorqueTuningRequest *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningRequestPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningRequest **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TorqueTuningRequestPlugin_deserialize_from_cdr_buffer(
                TorqueTuningRequest *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            TorqueTuningRequestPlugin_data_to_string(
                const TorqueTuningRequest *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            TorqueTuningRequestPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TorqueTuningRequestPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TorqueTuningRequestPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TorqueTuningRequestPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningRequestPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningRequest ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *TorqueTuningRequestPlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TorqueTuningRequestPlugin_new(void);

            NDDSUSERDllExport extern void
            TorqueTuningRequestPlugin_delete(struct PRESTypePlugin *);

            #define TorqueTuningStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

            #define TorqueTuningStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TorqueTuningStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TorqueTuningStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TorqueTuningStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TorqueTuningState*
            TorqueTuningStatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TorqueTuningState*
            TorqueTuningStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TorqueTuningState*
            TorqueTuningStatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningStatePluginSupport_copy_data(
                TorqueTuningState *out,
                const TorqueTuningState *in);

            NDDSUSERDllExport extern void 
            TorqueTuningStatePluginSupport_destroy_data_w_params(
                TorqueTuningState *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TorqueTuningStatePluginSupport_destroy_data_ex(
                TorqueTuningState *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TorqueTuningStatePluginSupport_destroy_data(
                TorqueTuningState *sample);

            NDDSUSERDllExport extern void 
            TorqueTuningStatePluginSupport_print_data(
                const TorqueTuningState *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TorqueTuningStatePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TorqueTuningStatePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TorqueTuningStatePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TorqueTuningStatePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TorqueTuningStatePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningState *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningStatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningState *out,
                const TorqueTuningState *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TorqueTuningStatePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TorqueTuningState *sample); 

            NDDSUSERDllExport extern RTIBool
            TorqueTuningStatePlugin_serialize_to_cdr_buffer_ex(
                char *buffer,
                unsigned int *length,
                const TorqueTuningState *sample,
                DDS_DataRepresentationId_t representation);

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningStatePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningState **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TorqueTuningStatePlugin_deserialize_from_cdr_buffer(
                TorqueTuningState *sample,
                const char * buffer,
                unsigned int length);    
            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport extern DDS_ReturnCode_t
            TorqueTuningStatePlugin_data_to_string(
                const TorqueTuningState *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    
            #endif

            NDDSUSERDllExport extern unsigned int 
            TorqueTuningStatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TorqueTuningStatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TorqueTuningStatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TorqueTuningStatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TorqueTuningStatePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TorqueTuningState ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern
            struct RTIXCdrInterpreterPrograms *TorqueTuningStatePlugin_get_programs();

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TorqueTuningStatePlugin_new(void);

            NDDSUSERDllExport extern void
            TorqueTuningStatePlugin_delete(struct PRESTypePlugin *);

        } /* namespace AutoTunerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* autotuner_configurationPlugin_985795544_h */

