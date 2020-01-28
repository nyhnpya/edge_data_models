

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from resources.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef resourcesPlugin_995993323_h
#define resourcesPlugin_995993323_h

#include "resources.h"

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

namespace sys {
    namespace process {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct Resources
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct Resources)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * Resources must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct Resources.
        */
        typedef  class Resources ResourcesKeyHolder;

        #define ResourcesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define ResourcesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define ResourcesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define ResourcesPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define ResourcesPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define ResourcesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define ResourcesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Resources*
        ResourcesPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Resources*
        ResourcesPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Resources*
        ResourcesPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        ResourcesPluginSupport_copy_data(
            Resources *out,
            const Resources *in);

        NDDSUSERDllExport extern void 
        ResourcesPluginSupport_destroy_data_w_params(
            Resources *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        ResourcesPluginSupport_destroy_data_ex(
            Resources *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ResourcesPluginSupport_destroy_data(
            Resources *sample);

        NDDSUSERDllExport extern void 
        ResourcesPluginSupport_print_data(
            const Resources *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern Resources*
        ResourcesPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Resources*
        ResourcesPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        ResourcesPluginSupport_destroy_key_ex(
            ResourcesKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ResourcesPluginSupport_destroy_key(
            ResourcesKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        ResourcesPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        ResourcesPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        ResourcesPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        ResourcesPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        ResourcesPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Resources *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        ResourcesPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Resources *out,
            const Resources *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        ResourcesPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Resources *sample); 

        NDDSUSERDllExport extern RTIBool
        ResourcesPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Resources *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        ResourcesPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Resources **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ResourcesPlugin_deserialize_from_cdr_buffer(
            Resources *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        ResourcesPlugin_data_to_string(
            const Resources *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        ResourcesPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        ResourcesPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        ResourcesPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ResourcesPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        ResourcesPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Resources ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        ResourcesPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            ResourcesKeyHolder *key, 
            const Resources *instance);

        NDDSUSERDllExport extern RTIBool 
        ResourcesPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            Resources *instance, 
            const ResourcesKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        ResourcesPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const Resources *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        ResourcesPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *ResourcesPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        ResourcesPlugin_new(void);

        NDDSUSERDllExport extern void
        ResourcesPlugin_delete(struct PRESTypePlugin *);

    } /* namespace process  */
} /* namespace sys  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* resourcesPlugin_995993323_h */

