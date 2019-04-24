

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_drillPlugin_1908030757_h
#define plc_drillPlugin_1908030757_h

#include "plc_drill.h"

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

namespace plc {
    namespace process {

        #define DrillRequestTopicPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillRequestTopicPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillRequestTopicPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillRequestTopicPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillRequestTopicPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillRequestTopic*
        DrillRequestTopicPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillRequestTopic*
        DrillRequestTopicPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillRequestTopic*
        DrillRequestTopicPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPluginSupport_copy_data(
            DrillRequestTopic *out,
            const DrillRequestTopic *in);

        NDDSUSERDllExport extern void 
        DrillRequestTopicPluginSupport_destroy_data_w_params(
            DrillRequestTopic *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillRequestTopicPluginSupport_destroy_data_ex(
            DrillRequestTopic *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillRequestTopicPluginSupport_destroy_data(
            DrillRequestTopic *sample);

        NDDSUSERDllExport extern void 
        DrillRequestTopicPluginSupport_print_data(
            const DrillRequestTopic *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillRequestTopicPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillRequestTopicPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillRequestTopicPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillRequestTopicPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillRequestTopicPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic *out,
            const DrillRequestTopic *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillRequestTopic *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillRequestTopicPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillRequestTopic *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillRequestTopicPlugin_deserialize_from_cdr_buffer(
            DrillRequestTopic *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillRequestTopicPlugin_data_to_string(
            const DrillRequestTopic *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillRequestTopicPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestTopicPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillRequestTopicPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestTopicPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillRequestTopicPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillRequestTopic * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillRequestTopicPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestTopicPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestTopicPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillRequestTopic *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestTopicPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillRequestTopicPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequestTopic *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillRequestTopicPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillRequestTopicPlugin_delete(struct PRESTypePlugin *);

        #define DrillStateTopicPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillStateTopicPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillStateTopicPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillStateTopicPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillStateTopicPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillStateTopic*
        DrillStateTopicPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillStateTopic*
        DrillStateTopicPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillStateTopic*
        DrillStateTopicPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPluginSupport_copy_data(
            DrillStateTopic *out,
            const DrillStateTopic *in);

        NDDSUSERDllExport extern void 
        DrillStateTopicPluginSupport_destroy_data_w_params(
            DrillStateTopic *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillStateTopicPluginSupport_destroy_data_ex(
            DrillStateTopic *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillStateTopicPluginSupport_destroy_data(
            DrillStateTopic *sample);

        NDDSUSERDllExport extern void 
        DrillStateTopicPluginSupport_print_data(
            const DrillStateTopic *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillStateTopicPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillStateTopicPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillStateTopicPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillStateTopicPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillStateTopicPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic *out,
            const DrillStateTopic *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillStateTopic *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillStateTopicPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillStateTopic *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillStateTopicPlugin_deserialize_from_cdr_buffer(
            DrillStateTopic *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillStateTopicPlugin_data_to_string(
            const DrillStateTopic *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillStateTopicPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillStateTopicPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillStateTopicPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillStateTopicPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillStateTopicPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillStateTopic * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillStateTopicPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillStateTopicPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillStateTopicPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillStateTopic *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillStateTopicPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillStateTopicPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillStateTopic *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillStateTopicPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillStateTopicPlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plc_drillPlugin_1908030757_h */

