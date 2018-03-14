

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ibop.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ibopPlugin_1624717976_h
#define ibopPlugin_1624717976_h

#include "ibop.h"

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
        IbopStateEnumPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const IbopStateEnum *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopStateEnumPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopStateEnum *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopStateEnumPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        IbopStateEnumPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        IbopStateEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopStateEnumPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        IbopStateEnumPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const IbopStateEnum * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        IbopStateEnumPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopStateEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        IbopStateEnumPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const IbopStateEnum *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopStateEnumPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopStateEnum * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopStateEnumPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopStateEnum *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        IbopStateEnumPluginSupport_print_data(
            const IbopStateEnum *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct IbopRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct IbopRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * IbopRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct IbopRequest.
        */
        typedef  class IbopRequest IbopRequestKeyHolder;

        #define IbopRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define IbopRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define IbopRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define IbopRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define IbopRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define IbopRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define IbopRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern IbopRequest*
        IbopRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern IbopRequest*
        IbopRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IbopRequest*
        IbopRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPluginSupport_copy_data(
            IbopRequest *out,
            const IbopRequest *in);

        NDDSUSERDllExport extern void 
        IbopRequestPluginSupport_destroy_data_w_params(
            IbopRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        IbopRequestPluginSupport_destroy_data_ex(
            IbopRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IbopRequestPluginSupport_destroy_data(
            IbopRequest *sample);

        NDDSUSERDllExport extern void 
        IbopRequestPluginSupport_print_data(
            const IbopRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern IbopRequest*
        IbopRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IbopRequest*
        IbopRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        IbopRequestPluginSupport_destroy_key_ex(
            IbopRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IbopRequestPluginSupport_destroy_key(
            IbopRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        IbopRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        IbopRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        IbopRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        IbopRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        IbopRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest *out,
            const IbopRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const IbopRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const IbopRequest *sample); 

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopRequestPlugin_deserialize_from_cdr_buffer(
            IbopRequest *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        IbopRequestPlugin_data_to_string(
            const IbopRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        IbopRequestPlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        IbopRequestPlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        IbopRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopRequestPlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        IbopRequestPlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const IbopRequest * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        IbopRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        IbopRequestPlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const IbopRequest *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopRequestPlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequestKeyHolder *key, 
            const IbopRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            IbopRequest *instance, 
            const IbopRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const IbopRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        IbopRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        IbopRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        IbopRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct IbopObjective
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct IbopObjective)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * IbopObjective must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct IbopObjective.
        */
        typedef  class IbopObjective IbopObjectiveKeyHolder;

        #define IbopObjectivePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define IbopObjectivePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define IbopObjectivePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define IbopObjectivePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define IbopObjectivePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define IbopObjectivePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define IbopObjectivePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern IbopObjective*
        IbopObjectivePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern IbopObjective*
        IbopObjectivePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IbopObjective*
        IbopObjectivePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePluginSupport_copy_data(
            IbopObjective *out,
            const IbopObjective *in);

        NDDSUSERDllExport extern void 
        IbopObjectivePluginSupport_destroy_data_w_params(
            IbopObjective *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        IbopObjectivePluginSupport_destroy_data_ex(
            IbopObjective *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IbopObjectivePluginSupport_destroy_data(
            IbopObjective *sample);

        NDDSUSERDllExport extern void 
        IbopObjectivePluginSupport_print_data(
            const IbopObjective *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern IbopObjective*
        IbopObjectivePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IbopObjective*
        IbopObjectivePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        IbopObjectivePluginSupport_destroy_key_ex(
            IbopObjectiveKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IbopObjectivePluginSupport_destroy_key(
            IbopObjectiveKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        IbopObjectivePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        IbopObjectivePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        IbopObjectivePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        IbopObjectivePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        IbopObjectivePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective *out,
            const IbopObjective *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const IbopObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopObjectivePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const IbopObjective *sample); 

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopObjectivePlugin_deserialize_from_cdr_buffer(
            IbopObjective *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        IbopObjectivePlugin_data_to_string(
            const IbopObjective *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        IbopObjectivePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        IbopObjectivePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        IbopObjectivePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopObjectivePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        IbopObjectivePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const IbopObjective * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        IbopObjectivePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        IbopObjectivePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopObjectivePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const IbopObjective *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopObjectivePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjectiveKeyHolder *key, 
            const IbopObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            IbopObjective *instance, 
            const IbopObjectiveKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const IbopObjective *instance);

        NDDSUSERDllExport extern RTIBool 
        IbopObjectivePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        IbopObjectivePlugin_new(void);

        NDDSUSERDllExport extern void
        IbopObjectivePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct IbopState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct IbopState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * IbopState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct IbopState.
        */
        typedef  class IbopState IbopStateKeyHolder;

        #define IbopStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
        #define IbopStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define IbopStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

        #define IbopStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define IbopStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define IbopStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define IbopStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern IbopState*
        IbopStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern IbopState*
        IbopStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IbopState*
        IbopStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePluginSupport_copy_data(
            IbopState *out,
            const IbopState *in);

        NDDSUSERDllExport extern void 
        IbopStatePluginSupport_destroy_data_w_params(
            IbopState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        IbopStatePluginSupport_destroy_data_ex(
            IbopState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IbopStatePluginSupport_destroy_data(
            IbopState *sample);

        NDDSUSERDllExport extern void 
        IbopStatePluginSupport_print_data(
            const IbopState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern IbopState*
        IbopStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern IbopState*
        IbopStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        IbopStatePluginSupport_destroy_key_ex(
            IbopStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        IbopStatePluginSupport_destroy_key(
            IbopStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        IbopStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        IbopStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        IbopStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        IbopStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        IbopStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopState *out,
            const IbopState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_serialize(
            PRESTypePluginEndpointData endpoint_data,
            const IbopState *sample,
            struct RTICdrStream *stream, 
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_deserialize_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopState *sample, 
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const IbopState *sample); 

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            IbopState **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopStatePlugin_deserialize_from_cdr_buffer(
            IbopState *sample,
            const char * buffer,
            unsigned int length);    
        NDDSUSERDllExport extern DDS_ReturnCode_t
        IbopStatePlugin_data_to_string(
            const IbopState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    

        NDDSUSERDllExport extern RTIBool
        IbopStatePlugin_skip(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            RTIBool skip_encapsulation,  
            RTIBool skip_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern unsigned int 
        IbopStatePlugin_get_serialized_sample_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);    

        NDDSUSERDllExport extern unsigned int 
        IbopStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopStatePlugin_get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int
        IbopStatePlugin_get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const IbopState * sample);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        IbopStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        IbopStatePlugin_get_serialized_key_max_size_ex(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool * overflow,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        IbopStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_serialize_key(
            PRESTypePluginEndpointData endpoint_data,
            const IbopState *sample,
            struct RTICdrStream *stream,
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_deserialize_key_sample(
            PRESTypePluginEndpointData endpoint_data,
            IbopState * sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        IbopStatePlugin_serialized_sample_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopState *sample,
            struct RTICdrStream *stream, 
            RTIBool deserialize_encapsulation,  
            RTIBool deserialize_key, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            IbopStateKeyHolder *key, 
            const IbopState *instance);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            IbopState *instance, 
            const IbopStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const IbopState *instance);

        NDDSUSERDllExport extern RTIBool 
        IbopStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        IbopStatePlugin_new(void);

        NDDSUSERDllExport extern void
        IbopStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace control  */
} /* namespace nec  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ibopPlugin_1624717976_h */

