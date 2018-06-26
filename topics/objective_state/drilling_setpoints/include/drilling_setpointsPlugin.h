

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_setpoints.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drilling_setpointsPlugin_937584715_h
#define drilling_setpointsPlugin_937584715_h

#include "drilling_setpoints.h"

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

namespace process {
    namespace plan {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DrillingSetpoints
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DrillingSetpoints)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DrillingSetpoints must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DrillingSetpoints.
        */
        typedef  class DrillingSetpoints DrillingSetpointsKeyHolder;

        #define DrillingSetpointsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define DrillingSetpointsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DrillingSetpointsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define DrillingSetpointsPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DrillingSetpointsPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DrillingSetpointsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DrillingSetpointsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DrillingSetpoints*
        DrillingSetpointsPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DrillingSetpoints*
        DrillingSetpointsPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingSetpoints*
        DrillingSetpointsPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPluginSupport_copy_data(
            DrillingSetpoints *out,
            const DrillingSetpoints *in);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPluginSupport_destroy_data_w_params(
            DrillingSetpoints *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPluginSupport_destroy_data_ex(
            DrillingSetpoints *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPluginSupport_destroy_data(
            DrillingSetpoints *sample);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPluginSupport_print_data(
            const DrillingSetpoints *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DrillingSetpoints*
        DrillingSetpointsPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DrillingSetpoints*
        DrillingSetpointsPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPluginSupport_destroy_key_ex(
            DrillingSetpointsKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPluginSupport_destroy_key(
            DrillingSetpointsKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DrillingSetpointsPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DrillingSetpointsPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DrillingSetpointsPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DrillingSetpointsPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints *out,
            const DrillingSetpoints *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingSetpoints *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingSetpointsPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DrillingSetpoints *sample); 

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingSetpointsPlugin_deserialize_from_cdr_buffer(
            DrillingSetpoints *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DrillingSetpointsPlugin_data_to_string(
            const DrillingSetpoints *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        DrillingSetpointsPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        DrillingSetpointsPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        DrillingSetpointsPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingSetpointsPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        DrillingSetpointsPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const DrillingSetpoints * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DrillingSetpointsPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DrillingSetpointsPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DrillingSetpointsPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const DrillingSetpoints *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DrillingSetpointsPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpointsKeyHolder *key, 
            const DrillingSetpoints *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DrillingSetpoints *instance, 
            const DrillingSetpointsKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DrillingSetpoints *instance);

        NDDSUSERDllExport extern RTIBool 
        DrillingSetpointsPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DrillingSetpointsPlugin_new(void);

        NDDSUSERDllExport extern void
        DrillingSetpointsPlugin_delete(struct PRESTypePlugin *);

    } /* namespace plan  */
} /* namespace process  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* drilling_setpointsPlugin_937584715_h */

