

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef circulate_engineeringPlugin_1124573629_h
#define circulate_engineeringPlugin_1124573629_h

#include "circulate_engineering.h"

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

namespace nec {
    namespace control {

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PumpStateEnumPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const PumpStateEnum *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PumpStateEnumPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            PumpStateEnum *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PumpStateEnumPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        PumpStateEnumPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        PumpStateEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PumpStateEnumPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        PumpStateEnumPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const PumpStateEnum * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PumpStateEnumPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PumpStateEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PumpStateEnumPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const PumpStateEnum *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PumpStateEnumPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            PumpStateEnum * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PumpStateEnumPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            PumpStateEnum *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        PumpStateEnumPluginSupport_print_data(
            const PumpStateEnum *sample, const char *desc, int indent_level);

        #define MudPumpEngineeringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define MudPumpEngineeringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define MudPumpEngineeringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define MudPumpEngineeringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define MudPumpEngineeringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern MudPumpEngineeringRequest*
        MudPumpEngineeringRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern MudPumpEngineeringRequest*
        MudPumpEngineeringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern MudPumpEngineeringRequest*
        MudPumpEngineeringRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPluginSupport_copy_data(
            MudPumpEngineeringRequest *out,
            const MudPumpEngineeringRequest *in);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringRequestPluginSupport_destroy_data_w_params(
            MudPumpEngineeringRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringRequestPluginSupport_destroy_data_ex(
            MudPumpEngineeringRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringRequestPluginSupport_destroy_data(
            MudPumpEngineeringRequest *sample);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringRequestPluginSupport_print_data(
            const MudPumpEngineeringRequest *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        MudPumpEngineeringRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        MudPumpEngineeringRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        MudPumpEngineeringRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringRequest *out,
            const MudPumpEngineeringRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const MudPumpEngineeringRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const MudPumpEngineeringRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringRequestPlugin_deserialize_from_cdr_buffer(
            MudPumpEngineeringRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        MudPumpEngineeringRequestPlugin_data_to_string(
            const MudPumpEngineeringRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        MudPumpEngineeringRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const MudPumpEngineeringRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        MudPumpEngineeringRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const MudPumpEngineeringRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        MudPumpEngineeringRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        MudPumpEngineeringRequestPlugin_delete(struct PRESTypePlugin *);

        #define MudPumpEngineeringStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define MudPumpEngineeringStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define MudPumpEngineeringStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define MudPumpEngineeringStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define MudPumpEngineeringStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern MudPumpEngineeringState*
        MudPumpEngineeringStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern MudPumpEngineeringState*
        MudPumpEngineeringStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern MudPumpEngineeringState*
        MudPumpEngineeringStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePluginSupport_copy_data(
            MudPumpEngineeringState *out,
            const MudPumpEngineeringState *in);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringStatePluginSupport_destroy_data_w_params(
            MudPumpEngineeringState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringStatePluginSupport_destroy_data_ex(
            MudPumpEngineeringState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringStatePluginSupport_destroy_data(
            MudPumpEngineeringState *sample);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringStatePluginSupport_print_data(
            const MudPumpEngineeringState *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        MudPumpEngineeringStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        MudPumpEngineeringStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        MudPumpEngineeringStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        MudPumpEngineeringStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringState *out,
            const MudPumpEngineeringState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const MudPumpEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const MudPumpEngineeringState *sample); 

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringStatePlugin_deserialize_from_cdr_buffer(
            MudPumpEngineeringState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        MudPumpEngineeringStatePlugin_data_to_string(
            const MudPumpEngineeringState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        MudPumpEngineeringStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const MudPumpEngineeringState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        MudPumpEngineeringStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        MudPumpEngineeringStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const MudPumpEngineeringState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MudPumpEngineeringStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        MudPumpEngineeringStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            MudPumpEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        MudPumpEngineeringStatePlugin_new(void);

        NDDSUSERDllExport extern void
        MudPumpEngineeringStatePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct CirculateEngineeringRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct CirculateEngineeringRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * CirculateEngineeringRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct CirculateEngineeringRequest.
        */
        typedef  class CirculateEngineeringRequest CirculateEngineeringRequestKeyHolder;

        #define CirculateEngineeringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define CirculateEngineeringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CirculateEngineeringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define CirculateEngineeringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define CirculateEngineeringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define CirculateEngineeringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define CirculateEngineeringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern CirculateEngineeringRequest*
        CirculateEngineeringRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern CirculateEngineeringRequest*
        CirculateEngineeringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateEngineeringRequest*
        CirculateEngineeringRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPluginSupport_copy_data(
            CirculateEngineeringRequest *out,
            const CirculateEngineeringRequest *in);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPluginSupport_destroy_data_w_params(
            CirculateEngineeringRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPluginSupport_destroy_data_ex(
            CirculateEngineeringRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPluginSupport_destroy_data(
            CirculateEngineeringRequest *sample);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPluginSupport_print_data(
            const CirculateEngineeringRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern CirculateEngineeringRequest*
        CirculateEngineeringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateEngineeringRequest*
        CirculateEngineeringRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPluginSupport_destroy_key_ex(
            CirculateEngineeringRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPluginSupport_destroy_key(
            CirculateEngineeringRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        CirculateEngineeringRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        CirculateEngineeringRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        CirculateEngineeringRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        CirculateEngineeringRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest *out,
            const CirculateEngineeringRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateEngineeringRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const CirculateEngineeringRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringRequestPlugin_deserialize_from_cdr_buffer(
            CirculateEngineeringRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        CirculateEngineeringRequestPlugin_data_to_string(
            const CirculateEngineeringRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        CirculateEngineeringRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const CirculateEngineeringRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        CirculateEngineeringRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateEngineeringRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequestKeyHolder *key, 
            const CirculateEngineeringRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringRequest *instance, 
            const CirculateEngineeringRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateEngineeringRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CirculateEngineeringRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        CirculateEngineeringRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct CirculateEngineeringState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct CirculateEngineeringState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * CirculateEngineeringState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct CirculateEngineeringState.
        */
        typedef  class CirculateEngineeringState CirculateEngineeringStateKeyHolder;

        #define CirculateEngineeringStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define CirculateEngineeringStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CirculateEngineeringStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define CirculateEngineeringStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define CirculateEngineeringStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define CirculateEngineeringStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define CirculateEngineeringStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern CirculateEngineeringState*
        CirculateEngineeringStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern CirculateEngineeringState*
        CirculateEngineeringStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateEngineeringState*
        CirculateEngineeringStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePluginSupport_copy_data(
            CirculateEngineeringState *out,
            const CirculateEngineeringState *in);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePluginSupport_destroy_data_w_params(
            CirculateEngineeringState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePluginSupport_destroy_data_ex(
            CirculateEngineeringState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePluginSupport_destroy_data(
            CirculateEngineeringState *sample);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePluginSupport_print_data(
            const CirculateEngineeringState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern CirculateEngineeringState*
        CirculateEngineeringStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CirculateEngineeringState*
        CirculateEngineeringStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePluginSupport_destroy_key_ex(
            CirculateEngineeringStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePluginSupport_destroy_key(
            CirculateEngineeringStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        CirculateEngineeringStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        CirculateEngineeringStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        CirculateEngineeringStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        CirculateEngineeringStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState *out,
            const CirculateEngineeringState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const CirculateEngineeringState *sample); 

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringStatePlugin_deserialize_from_cdr_buffer(
            CirculateEngineeringState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        CirculateEngineeringStatePlugin_data_to_string(
            const CirculateEngineeringState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        CirculateEngineeringStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const CirculateEngineeringState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        CirculateEngineeringStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CirculateEngineeringStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const CirculateEngineeringState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CirculateEngineeringStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringStateKeyHolder *key, 
            const CirculateEngineeringState *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            CirculateEngineeringState *instance, 
            const CirculateEngineeringStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const CirculateEngineeringState *instance);

        NDDSUSERDllExport extern RTIBool 
        CirculateEngineeringStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CirculateEngineeringStatePlugin_new(void);

        NDDSUSERDllExport extern void
        CirculateEngineeringStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace control  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* circulate_engineeringPlugin_1124573629_h */

