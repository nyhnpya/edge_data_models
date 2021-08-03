

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_calibration.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef drilling_calibrationPlugin_1168089437_h
#define drilling_calibrationPlugin_1168089437_h

#include "drilling_calibration.h"

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

namespace nec {
    namespace control {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillingCalibrationRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingCalibrationRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingCalibrationRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingCalibrationRequest.
        */
        typedef  class DrillingCalibrationRequest DrillingCalibrationRequestKeyHolder;

        #define DrillingCalibrationRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define DrillingCalibrationRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingCalibrationRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DrillingCalibrationRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingCalibrationRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingCalibrationRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingCalibrationRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingCalibrationRequest*
        DrillingCalibrationRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingCalibrationRequest*
        DrillingCalibrationRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingCalibrationRequest*
        DrillingCalibrationRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationRequestPluginSupport_copy_data(
            DrillingCalibrationRequest *out,
            const DrillingCalibrationRequest *in);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPluginSupport_destroy_data_w_params(
            DrillingCalibrationRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPluginSupport_destroy_data_ex(
            DrillingCalibrationRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPluginSupport_destroy_data(
            DrillingCalibrationRequest *sample);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPluginSupport_print_data(
            const DrillingCalibrationRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingCalibrationRequest*
        DrillingCalibrationRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingCalibrationRequest*
        DrillingCalibrationRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPluginSupport_destroy_key_ex(
            DrillingCalibrationRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPluginSupport_destroy_key(
            DrillingCalibrationRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingCalibrationRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingCalibrationRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingCalibrationRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingCalibrationRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *out,
            const DrillingCalibrationRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DrillingCalibrationRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingCalibrationRequest *sample); 

        NDDSUSERDllExport extern RTIBool
        DrillingCalibrationRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const DrillingCalibrationRequest *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        DrillingCalibrationRequestPlugin_deserialize_from_cdr_buffer(
            DrillingCalibrationRequest *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingCalibrationRequestPlugin_data_to_string(
            const DrillingCalibrationRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        DrillingCalibrationRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingCalibrationRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingCalibrationRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingCalibrationRequestPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequestKeyHolder *key, 
            const DrillingCalibrationRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationRequest *instance, 
            const DrillingCalibrationRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * DrillingCalibrationRequestPlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingCalibrationRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingCalibrationRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillingCalibrationState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingCalibrationState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingCalibrationState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingCalibrationState.
        */
        typedef  class DrillingCalibrationState DrillingCalibrationStateKeyHolder;

        #define DrillingCalibrationStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define DrillingCalibrationStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingCalibrationStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DrillingCalibrationStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingCalibrationStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingCalibrationStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingCalibrationStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingCalibrationState*
        DrillingCalibrationStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingCalibrationState*
        DrillingCalibrationStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingCalibrationState*
        DrillingCalibrationStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationStatePluginSupport_copy_data(
            DrillingCalibrationState *out,
            const DrillingCalibrationState *in);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePluginSupport_destroy_data_w_params(
            DrillingCalibrationState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePluginSupport_destroy_data_ex(
            DrillingCalibrationState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePluginSupport_destroy_data(
            DrillingCalibrationState *sample);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePluginSupport_print_data(
            const DrillingCalibrationState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingCalibrationState*
        DrillingCalibrationStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingCalibrationState*
        DrillingCalibrationStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePluginSupport_destroy_key_ex(
            DrillingCalibrationStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePluginSupport_destroy_key(
            DrillingCalibrationStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingCalibrationStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingCalibrationStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingCalibrationStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingCalibrationStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *out,
            const DrillingCalibrationState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DrillingCalibrationStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingCalibrationState *sample); 

        NDDSUSERDllExport extern RTIBool
        DrillingCalibrationStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const DrillingCalibrationState *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        DrillingCalibrationStatePlugin_deserialize_from_cdr_buffer(
            DrillingCalibrationState *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingCalibrationStatePlugin_data_to_string(
            const DrillingCalibrationState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        DrillingCalibrationStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingCalibrationStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingCalibrationStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingCalibrationStatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationStateKeyHolder *key, 
            const DrillingCalibrationState *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingCalibrationState *instance, 
            const DrillingCalibrationStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingCalibrationStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * DrillingCalibrationStatePlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingCalibrationStatePlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingCalibrationStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace control  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* drilling_calibrationPlugin_1168089437_h */

