

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef autotuner_configurationPlugin_985792920_h
#define autotuner_configurationPlugin_985792920_h

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
            struct RTIXCdrInterpreterPrograms * ModelStatePlugin_get_programs(void);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ModelStatePlugin_new(void);

            NDDSUSERDllExport extern void
            ModelStatePlugin_delete(struct PRESTypePlugin *);

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
            struct RTIXCdrInterpreterPrograms * DiffpTuningStatePlugin_get_programs(void);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DiffpTuningStatePlugin_new(void);

            NDDSUSERDllExport extern void
            DiffpTuningStatePlugin_delete(struct PRESTypePlugin *);

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
            struct RTIXCdrInterpreterPrograms * WobTuningStatePlugin_get_programs(void);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WobTuningStatePlugin_new(void);

            NDDSUSERDllExport extern void
            WobTuningStatePlugin_delete(struct PRESTypePlugin *);

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
            struct RTIXCdrInterpreterPrograms * TorqueTuningStatePlugin_get_programs(void);

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

#endif /* autotuner_configurationPlugin_985792920_h */

