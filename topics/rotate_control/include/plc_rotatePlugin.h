

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_rotate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_rotatePlugin_1508021044_h
#define plc_rotatePlugin_1508021044_h

#include "plc_rotate.h"

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

        #define PlcRotateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcRotateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcRotateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcRotateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcRotateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcRotateRequest*
        PlcRotateRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcRotateRequest*
        PlcRotateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcRotateRequest*
        PlcRotateRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcRotateRequestPluginSupport_copy_data(
            PlcRotateRequest *out,
            const PlcRotateRequest *in);

        NDDSUSERDllExport extern void 
        PlcRotateRequestPluginSupport_destroy_data_w_params(
            PlcRotateRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcRotateRequestPluginSupport_destroy_data_ex(
            PlcRotateRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcRotateRequestPluginSupport_destroy_data(
            PlcRotateRequest *sample);

        NDDSUSERDllExport extern void 
        PlcRotateRequestPluginSupport_print_data(
            const PlcRotateRequest *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcRotateRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcRotateRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcRotateRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcRotateRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcRotateRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcRotateRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateRequest *out,
            const PlcRotateRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcRotateRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcRotateRequest *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcRotateRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcRotateRequest *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PlcRotateRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PlcRotateRequestPlugin_deserialize_from_cdr_buffer(
            PlcRotateRequest *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcRotateRequestPlugin_data_to_string(
            const PlcRotateRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcRotateRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcRotateRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcRotateRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcRotateRequestPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcRotateRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PlcRotateRequestPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcRotateRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        PlcRotateRequestPlugin_delete(struct PRESTypePlugin *);

        #define PlcRotateStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcRotateStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcRotateStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcRotateStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcRotateStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcRotateState*
        PlcRotateStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcRotateState*
        PlcRotateStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcRotateState*
        PlcRotateStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcRotateStatePluginSupport_copy_data(
            PlcRotateState *out,
            const PlcRotateState *in);

        NDDSUSERDllExport extern void 
        PlcRotateStatePluginSupport_destroy_data_w_params(
            PlcRotateState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcRotateStatePluginSupport_destroy_data_ex(
            PlcRotateState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcRotateStatePluginSupport_destroy_data(
            PlcRotateState *sample);

        NDDSUSERDllExport extern void 
        PlcRotateStatePluginSupport_print_data(
            const PlcRotateState *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcRotateStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcRotateStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcRotateStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcRotateStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcRotateStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcRotateStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateState *out,
            const PlcRotateState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcRotateStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcRotateState *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcRotateStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcRotateState *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PlcRotateStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PlcRotateStatePlugin_deserialize_from_cdr_buffer(
            PlcRotateState *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcRotateStatePlugin_data_to_string(
            const PlcRotateState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcRotateStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcRotateStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcRotateStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcRotateStatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcRotateStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcRotateState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PlcRotateStatePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcRotateStatePlugin_new(void);

        NDDSUSERDllExport extern void
        PlcRotateStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plc_rotatePlugin_1508021044_h */

