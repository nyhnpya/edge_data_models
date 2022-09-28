

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_circulate.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_circulatePlugin_1662823208_h
#define plc_circulatePlugin_1662823208_h

#include "plc_circulate.h"

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

        #define PlcCirculateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcCirculateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcCirculateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcCirculateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcCirculateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcCirculateRequest*
        PlcCirculateRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcCirculateRequest*
        PlcCirculateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcCirculateRequest*
        PlcCirculateRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcCirculateRequestPluginSupport_copy_data(
            PlcCirculateRequest *out,
            const PlcCirculateRequest *in);

        NDDSUSERDllExport extern void 
        PlcCirculateRequestPluginSupport_destroy_data_w_params(
            PlcCirculateRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcCirculateRequestPluginSupport_destroy_data_ex(
            PlcCirculateRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcCirculateRequestPluginSupport_destroy_data(
            PlcCirculateRequest *sample);

        NDDSUSERDllExport extern void 
        PlcCirculateRequestPluginSupport_print_data(
            const PlcCirculateRequest *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcCirculateRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcCirculateRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcCirculateRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcCirculateRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcCirculateRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcCirculateRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcCirculateRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcCirculateRequest *out,
            const PlcCirculateRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcCirculateRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcCirculateRequest *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcCirculateRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcCirculateRequest *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PlcCirculateRequestPlugin_deserialize_from_cdr_buffer(
            PlcCirculateRequest *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcCirculateRequestPlugin_data_to_string(
            const PlcCirculateRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcCirculateRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcCirculateRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcCirculateRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcCirculateRequestPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcCirculateRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcCirculateRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PlcCirculateRequestPlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcCirculateRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        PlcCirculateRequestPlugin_delete(struct PRESTypePlugin *);

        #define PlcCirculateStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcCirculateStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcCirculateStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcCirculateStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcCirculateStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcCirculateState*
        PlcCirculateStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcCirculateState*
        PlcCirculateStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcCirculateState*
        PlcCirculateStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcCirculateStatePluginSupport_copy_data(
            PlcCirculateState *out,
            const PlcCirculateState *in);

        NDDSUSERDllExport extern void 
        PlcCirculateStatePluginSupport_destroy_data_w_params(
            PlcCirculateState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcCirculateStatePluginSupport_destroy_data_ex(
            PlcCirculateState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcCirculateStatePluginSupport_destroy_data(
            PlcCirculateState *sample);

        NDDSUSERDllExport extern void 
        PlcCirculateStatePluginSupport_print_data(
            const PlcCirculateState *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcCirculateStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcCirculateStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcCirculateStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcCirculateStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcCirculateStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcCirculateState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcCirculateStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcCirculateState *out,
            const PlcCirculateState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcCirculateStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcCirculateState *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcCirculateStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcCirculateState *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PlcCirculateStatePlugin_deserialize_from_cdr_buffer(
            PlcCirculateState *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcCirculateStatePlugin_data_to_string(
            const PlcCirculateState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcCirculateStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcCirculateStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcCirculateStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcCirculateStatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcCirculateStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcCirculateState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PlcCirculateStatePlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcCirculateStatePlugin_new(void);

        NDDSUSERDllExport extern void
        PlcCirculateStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plc_circulatePlugin_1662823208_h */

