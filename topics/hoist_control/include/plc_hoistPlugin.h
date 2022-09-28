

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_hoist.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_hoistPlugin_1752499246_h
#define plc_hoistPlugin_1752499246_h

#include "plc_hoist.h"

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

        #define PlcHoistRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcHoistRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcHoistRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcHoistRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcHoistRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcHoistRequest*
        PlcHoistRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcHoistRequest*
        PlcHoistRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcHoistRequest*
        PlcHoistRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcHoistRequestPluginSupport_copy_data(
            PlcHoistRequest *out,
            const PlcHoistRequest *in);

        NDDSUSERDllExport extern void 
        PlcHoistRequestPluginSupport_destroy_data_w_params(
            PlcHoistRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcHoistRequestPluginSupport_destroy_data_ex(
            PlcHoistRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcHoistRequestPluginSupport_destroy_data(
            PlcHoistRequest *sample);

        NDDSUSERDllExport extern void 
        PlcHoistRequestPluginSupport_print_data(
            const PlcHoistRequest *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcHoistRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcHoistRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcHoistRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcHoistRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcHoistRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcHoistRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcHoistRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcHoistRequest *out,
            const PlcHoistRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcHoistRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcHoistRequest *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcHoistRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcHoistRequest *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PlcHoistRequestPlugin_deserialize_from_cdr_buffer(
            PlcHoistRequest *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcHoistRequestPlugin_data_to_string(
            const PlcHoistRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcHoistRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcHoistRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcHoistRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcHoistRequestPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcHoistRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcHoistRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PlcHoistRequestPlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcHoistRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        PlcHoistRequestPlugin_delete(struct PRESTypePlugin *);

        #define PlcHoistStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PlcHoistStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PlcHoistStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PlcHoistStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PlcHoistStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PlcHoistState*
        PlcHoistStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PlcHoistState*
        PlcHoistStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PlcHoistState*
        PlcHoistStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PlcHoistStatePluginSupport_copy_data(
            PlcHoistState *out,
            const PlcHoistState *in);

        NDDSUSERDllExport extern void 
        PlcHoistStatePluginSupport_destroy_data_w_params(
            PlcHoistState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PlcHoistStatePluginSupport_destroy_data_ex(
            PlcHoistState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PlcHoistStatePluginSupport_destroy_data(
            PlcHoistState *sample);

        NDDSUSERDllExport extern void 
        PlcHoistStatePluginSupport_print_data(
            const PlcHoistState *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PlcHoistStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PlcHoistStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PlcHoistStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PlcHoistStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PlcHoistStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcHoistState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PlcHoistStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PlcHoistState *out,
            const PlcHoistState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PlcHoistStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PlcHoistState *sample); 

        NDDSUSERDllExport extern RTIBool
        PlcHoistStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PlcHoistState *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PlcHoistStatePlugin_deserialize_from_cdr_buffer(
            PlcHoistState *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PlcHoistStatePlugin_data_to_string(
            const PlcHoistState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PlcHoistStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PlcHoistStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PlcHoistStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PlcHoistStatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PlcHoistStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PlcHoistState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PlcHoistStatePlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PlcHoistStatePlugin_new(void);

        NDDSUSERDllExport extern void
        PlcHoistStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace plc  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plc_hoistPlugin_1752499246_h */

