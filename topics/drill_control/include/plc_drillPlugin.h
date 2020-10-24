

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_drillPlugin_1908030870_h
#define plc_drillPlugin_1908030870_h

#include "plc_drill.h"

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

namespace plc {
    namespace process {

        #define DrillRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define DrillRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DrillRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillRequest*
        DrillRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPluginSupport_copy_data(
            DrillRequest *out,
            const DrillRequest *in);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_data_w_params(
            DrillRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_data_ex(
            DrillRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_destroy_data(
            DrillRequest *sample);

        NDDSUSERDllExport extern void 
        DrillRequestPluginSupport_print_data(
            const DrillRequest *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest *out,
            const DrillRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DrillRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillRequest *sample); 

        NDDSUSERDllExport extern RTIBool
        DrillRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const DrillRequest *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillRequestPlugin_deserialize_from_cdr_buffer(
            DrillRequest *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillRequestPlugin_data_to_string(
            const DrillRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillRequestPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *DrillRequestPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillRequestPlugin_delete(struct PRESTypePlugin *);

        #define DrillStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define DrillStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DrillStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillState*
        DrillStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePluginSupport_copy_data(
            DrillState *out,
            const DrillState *in);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_data_w_params(
            DrillState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_data_ex(
            DrillState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_destroy_data(
            DrillState *sample);

        NDDSUSERDllExport extern void 
        DrillStatePluginSupport_print_data(
            const DrillState *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillState *out,
            const DrillState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DrillStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillState *sample); 

        NDDSUSERDllExport extern RTIBool
        DrillStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const DrillState *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillStatePlugin_deserialize_from_cdr_buffer(
            DrillState *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillStatePlugin_data_to_string(
            const DrillState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillStatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *DrillStatePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillStatePlugin_new(void);

        NDDSUSERDllExport extern void
        DrillStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plc_drillPlugin_1908030870_h */

