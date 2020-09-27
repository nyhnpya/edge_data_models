

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_drillPlugin_1908030917_h
#define plc_drillPlugin_1908030917_h

#include "plc_drill.h"

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

namespace plc {
    namespace process {

        #define PlcDrillRequestTopicPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcDrillRequestTopicPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcDrillRequestTopicPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcDrillRequestTopicPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcDrillRequestTopicPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcDrillRequestTopic*
        PlcDrillRequestTopicPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcDrillRequestTopic*
        PlcDrillRequestTopicPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcDrillRequestTopic*
        PlcDrillRequestTopicPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcDrillRequestTopicPluginSupport_copy_data(
            PlcDrillRequestTopic *out,
            const PlcDrillRequestTopic *in);

        NDDSUSERDllExport extern void 
        PlcDrillRequestTopicPluginSupport_destroy_data_w_params(
            PlcDrillRequestTopic *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcDrillRequestTopicPluginSupport_destroy_data_ex(
            PlcDrillRequestTopic *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcDrillRequestTopicPluginSupport_destroy_data(
            PlcDrillRequestTopic *sample);

        NDDSUSERDllExport extern void 
        PlcDrillRequestTopicPluginSupport_print_data(
            const PlcDrillRequestTopic *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcDrillRequestTopicPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcDrillRequestTopicPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcDrillRequestTopicPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcDrillRequestTopicPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcDrillRequestTopicPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillRequestTopic *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcDrillRequestTopicPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillRequestTopic *out,
            const PlcDrillRequestTopic *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcDrillRequestTopicPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcDrillRequestTopic *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcDrillRequestTopicPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcDrillRequestTopic *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PlcDrillRequestTopicPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillRequestTopic **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PlcDrillRequestTopicPlugin_deserialize_from_cdr_buffer(
            PlcDrillRequestTopic *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcDrillRequestTopicPlugin_data_to_string(
            const PlcDrillRequestTopic *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcDrillRequestTopicPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcDrillRequestTopicPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcDrillRequestTopicPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcDrillRequestTopicPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcDrillRequestTopicPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillRequestTopic ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PlcDrillRequestTopicPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcDrillRequestTopicPlugin_new(void);

        NDDSUSERDllExport extern void
        PlcDrillRequestTopicPlugin_delete(struct PRESTypePlugin *);

        #define PlcDrillStateTopicPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcDrillStateTopicPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcDrillStateTopicPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcDrillStateTopicPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcDrillStateTopicPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcDrillStateTopic*
        PlcDrillStateTopicPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcDrillStateTopic*
        PlcDrillStateTopicPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcDrillStateTopic*
        PlcDrillStateTopicPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcDrillStateTopicPluginSupport_copy_data(
            PlcDrillStateTopic *out,
            const PlcDrillStateTopic *in);

        NDDSUSERDllExport extern void 
        PlcDrillStateTopicPluginSupport_destroy_data_w_params(
            PlcDrillStateTopic *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcDrillStateTopicPluginSupport_destroy_data_ex(
            PlcDrillStateTopic *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcDrillStateTopicPluginSupport_destroy_data(
            PlcDrillStateTopic *sample);

        NDDSUSERDllExport extern void 
        PlcDrillStateTopicPluginSupport_print_data(
            const PlcDrillStateTopic *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcDrillStateTopicPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcDrillStateTopicPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcDrillStateTopicPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcDrillStateTopicPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcDrillStateTopicPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillStateTopic *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcDrillStateTopicPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillStateTopic *out,
            const PlcDrillStateTopic *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcDrillStateTopicPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcDrillStateTopic *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcDrillStateTopicPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcDrillStateTopic *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PlcDrillStateTopicPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillStateTopic **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PlcDrillStateTopicPlugin_deserialize_from_cdr_buffer(
            PlcDrillStateTopic *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcDrillStateTopicPlugin_data_to_string(
            const PlcDrillStateTopic *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcDrillStateTopicPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcDrillStateTopicPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcDrillStateTopicPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcDrillStateTopicPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcDrillStateTopicPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcDrillStateTopic ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PlcDrillStateTopicPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcDrillStateTopicPlugin_new(void);

        NDDSUSERDllExport extern void
        PlcDrillStateTopicPlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plc_drillPlugin_1908030917_h */

