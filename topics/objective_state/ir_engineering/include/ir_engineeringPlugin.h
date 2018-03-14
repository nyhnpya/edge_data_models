

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ir_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ir_engineeringPlugin_1886880695_h
#define ir_engineeringPlugin_1886880695_h

#include "ir_engineering.h"

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
        GripStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const GripState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        GripStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            GripState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        GripStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        GripStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        GripStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        GripStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        GripStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const GripState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        GripStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        GripStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        GripStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const GripState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        GripStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            GripState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        GripStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            GripState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        GripStatePluginSupport_print_data(
            const GripState *sample, const char *desc, int indent_level);

        #define PositionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define PositionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PositionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define PositionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PositionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Position*
        PositionPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Position*
        PositionPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Position*
        PositionPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PositionPluginSupport_copy_data(
            Position *out,
            const Position *in);

        NDDSUSERDllExport extern void 
        PositionPluginSupport_destroy_data_w_params(
            Position *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PositionPluginSupport_destroy_data_ex(
            Position *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PositionPluginSupport_destroy_data(
            Position *sample);

        NDDSUSERDllExport extern void 
        PositionPluginSupport_print_data(
            const Position *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PositionPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PositionPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PositionPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PositionPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PositionPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Position *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PositionPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Position *out,
            const Position *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PositionPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const Position *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PositionPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            Position *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PositionPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Position *sample); 

        NDDSUSERDllExport extern RTIBool 
        PositionPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Position **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PositionPlugin_deserialize_from_cdr_buffer(
            Position *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PositionPlugin_data_to_string(
            const Position *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        PositionPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        PositionPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        PositionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PositionPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        PositionPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const Position * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PositionPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PositionPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PositionPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PositionPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const Position *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PositionPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            Position * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        PositionPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Position ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PositionPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            Position *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PositionPlugin_new(void);

        NDDSUSERDllExport extern void
        PositionPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct IrEngineeringState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct IrEngineeringState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * IrEngineeringState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct IrEngineeringState.
        */
        typedef  class IrEngineeringState IrEngineeringStateKeyHolder;

        #define IrEngineeringStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define IrEngineeringStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define IrEngineeringStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define IrEngineeringStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define IrEngineeringStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define IrEngineeringStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define IrEngineeringStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern IrEngineeringState*
        IrEngineeringStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern IrEngineeringState*
        IrEngineeringStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IrEngineeringState*
        IrEngineeringStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePluginSupport_copy_data(
            IrEngineeringState *out,
            const IrEngineeringState *in);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePluginSupport_destroy_data_w_params(
            IrEngineeringState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePluginSupport_destroy_data_ex(
            IrEngineeringState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePluginSupport_destroy_data(
            IrEngineeringState *sample);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePluginSupport_print_data(
            const IrEngineeringState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern IrEngineeringState*
        IrEngineeringStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IrEngineeringState*
        IrEngineeringStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePluginSupport_destroy_key_ex(
            IrEngineeringStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePluginSupport_destroy_key(
            IrEngineeringStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        IrEngineeringStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        IrEngineeringStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        IrEngineeringStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        IrEngineeringStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState *out,
            const IrEngineeringState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const IrEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IrEngineeringStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const IrEngineeringState *sample); 

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IrEngineeringStatePlugin_deserialize_from_cdr_buffer(
            IrEngineeringState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        IrEngineeringStatePlugin_data_to_string(
            const IrEngineeringState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        IrEngineeringStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        IrEngineeringStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        IrEngineeringStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IrEngineeringStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        IrEngineeringStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const IrEngineeringState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        IrEngineeringStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        IrEngineeringStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IrEngineeringStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const IrEngineeringState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IrEngineeringStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringStateKeyHolder *key, 
            const IrEngineeringState *instance);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            IrEngineeringState *instance, 
            const IrEngineeringStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const IrEngineeringState *instance);

        NDDSUSERDllExport extern RTIBool 
        IrEngineeringStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        IrEngineeringStatePlugin_new(void);

        NDDSUSERDllExport extern void
        IrEngineeringStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace control  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ir_engineeringPlugin_1886880695_h */

