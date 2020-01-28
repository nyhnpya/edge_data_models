

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "configuration.h"

#ifndef NDDS_STANDALONE_TYPE
#include "configurationPlugin.h"
#endif

#include <new>

namespace Configuration {

    /* ========================================================================= */
    const char *config_typeTYPENAME = "Configuration::config_type";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* config_type_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member config_type_g_tc_members[3]=
        {

            {
                (char *)"PROTOCOL",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                PROTOCOL, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"INTERFACE",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                INTERFACE, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"TAG",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                TAG, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode config_type_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::config_type", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                config_type_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for config_type*/

        if (is_initialized) {
            return &config_type_g_tc;
        }

        config_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        config_type_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        config_type_g_tc._data._annotations._defaultValue._u.long_value = 0;

        config_type_g_tc._data._sampleAccessInfo =
        config_type_get_sample_access_info();
        config_type_g_tc._data._typePlugin =
        config_type_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &config_type_g_tc;
    }

    #define TSeq config_typeSeq
    #define T config_type
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *config_type_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo config_type_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(config_typeSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            config_typeSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &config_type_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *config_type_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo config_type_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo config_type_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &config_type_g_sampleAccessInfo;
        }

        config_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        config_type_g_sampleAccessInfo.memberAccessInfos = 
        config_type_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(config_type);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                config_type_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                config_type_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        config_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        config_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
        config_type_get_member_value_pointer;

        config_type_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &config_type_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *config_type_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin config_type_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::config_type_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::config_type_finalize_w_return,
            NULL
        };

        return &config_type_g_typePlugin;
    }
    #endif

    RTIBool config_type_initialize(
        config_type* sample) {
        *sample = PROTOCOL;
        return RTI_TRUE;
    }

    RTIBool config_type_initialize_ex(
        config_type* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::config_type_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool config_type_initialize_w_params(
        config_type* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = PROTOCOL;
        return RTI_TRUE;
    }

    RTIBool config_type_finalize_w_return(
        config_type* sample)
    {
        if (sample) {} /* To avoid warnings */

        return RTI_TRUE;
    }

    void config_type_finalize(
        config_type* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void config_type_finalize_ex(
        config_type* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::config_type_finalize_w_params(
            sample,&deallocParams);
    }

    void config_type_finalize_w_params(
        config_type* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void config_type_finalize_optional_members(
        config_type* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool config_type_copy(
        config_type* dst,
        const config_type* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'config_type' sequence class.
    */
    #define T config_type
    #define TSeq config_typeSeq

    #define T_initialize_w_params Configuration::config_type_initialize_w_params

    #define T_finalize_w_params   Configuration::config_type_finalize_w_params
    #define T_copy       Configuration::config_type_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *io_modeTYPENAME = "Configuration::io_mode";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* io_mode_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member io_mode_g_tc_members[2]=
        {

            {
                (char *)"READ",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                READ, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"WRITE",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                WRITE, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode io_mode_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::io_mode", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                io_mode_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for io_mode*/

        if (is_initialized) {
            return &io_mode_g_tc;
        }

        io_mode_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        io_mode_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        io_mode_g_tc._data._annotations._defaultValue._u.long_value = 0;

        io_mode_g_tc._data._sampleAccessInfo =
        io_mode_get_sample_access_info();
        io_mode_g_tc._data._typePlugin =
        io_mode_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &io_mode_g_tc;
    }

    #define TSeq io_modeSeq
    #define T io_mode
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *io_mode_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo io_mode_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(io_modeSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            io_modeSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &io_mode_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *io_mode_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo io_mode_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo io_mode_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &io_mode_g_sampleAccessInfo;
        }

        io_mode_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        io_mode_g_sampleAccessInfo.memberAccessInfos = 
        io_mode_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(io_mode);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                io_mode_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                io_mode_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        io_mode_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        io_mode_g_sampleAccessInfo.getMemberValuePointerFcn = 
        io_mode_get_member_value_pointer;

        io_mode_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &io_mode_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *io_mode_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin io_mode_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::io_mode_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::io_mode_finalize_w_return,
            NULL
        };

        return &io_mode_g_typePlugin;
    }
    #endif

    RTIBool io_mode_initialize(
        io_mode* sample) {
        *sample = READ;
        return RTI_TRUE;
    }

    RTIBool io_mode_initialize_ex(
        io_mode* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::io_mode_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool io_mode_initialize_w_params(
        io_mode* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = READ;
        return RTI_TRUE;
    }

    RTIBool io_mode_finalize_w_return(
        io_mode* sample)
    {
        if (sample) {} /* To avoid warnings */

        return RTI_TRUE;
    }

    void io_mode_finalize(
        io_mode* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void io_mode_finalize_ex(
        io_mode* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::io_mode_finalize_w_params(
            sample,&deallocParams);
    }

    void io_mode_finalize_w_params(
        io_mode* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void io_mode_finalize_optional_members(
        io_mode* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool io_mode_copy(
        io_mode* dst,
        const io_mode* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'io_mode' sequence class.
    */
    #define T io_mode
    #define TSeq io_modeSeq

    #define T_initialize_w_params Configuration::io_mode_initialize_w_params

    #define T_finalize_w_params   Configuration::io_mode_finalize_w_params
    #define T_copy       Configuration::io_mode_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *plant_typeTYPENAME = "Configuration::plant_type";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* plant_type_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member plant_type_g_tc_members[11]=
        {

            {
                (char *)"BOOLEAN",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                BOOLEAN, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"INT8",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                INT8, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"UNSIGNEDINT8",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                UNSIGNEDINT8, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"INT16",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                INT16, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"UNSIGNEDINT16",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                UNSIGNEDINT16, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"INT32",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                INT32, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"UNSIGNEDINT32",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                UNSIGNEDINT32, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"INT64",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                INT64, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"UNSIGNEDINT64",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                UNSIGNEDINT64, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"FLOAT",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                FLOAT, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"DOUBLE",/* Member name */
                {
                    0, /* Ignored */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                DOUBLE, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode plant_type_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::plant_type", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                11, /* Number of members */
                plant_type_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for plant_type*/

        if (is_initialized) {
            return &plant_type_g_tc;
        }

        plant_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        plant_type_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        plant_type_g_tc._data._annotations._defaultValue._u.long_value = 0;

        plant_type_g_tc._data._sampleAccessInfo =
        plant_type_get_sample_access_info();
        plant_type_g_tc._data._typePlugin =
        plant_type_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &plant_type_g_tc;
    }

    #define TSeq plant_typeSeq
    #define T plant_type
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *plant_type_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo plant_type_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(plant_typeSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            plant_typeSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &plant_type_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *plant_type_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo plant_type_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo plant_type_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &plant_type_g_sampleAccessInfo;
        }

        plant_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        plant_type_g_sampleAccessInfo.memberAccessInfos = 
        plant_type_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(plant_type);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                plant_type_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                plant_type_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        plant_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        plant_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
        plant_type_get_member_value_pointer;

        plant_type_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &plant_type_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *plant_type_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin plant_type_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::plant_type_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::plant_type_finalize_w_return,
            NULL
        };

        return &plant_type_g_typePlugin;
    }
    #endif

    RTIBool plant_type_initialize(
        plant_type* sample) {
        *sample = BOOLEAN;
        return RTI_TRUE;
    }

    RTIBool plant_type_initialize_ex(
        plant_type* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::plant_type_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool plant_type_initialize_w_params(
        plant_type* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = BOOLEAN;
        return RTI_TRUE;
    }

    RTIBool plant_type_finalize_w_return(
        plant_type* sample)
    {
        if (sample) {} /* To avoid warnings */

        return RTI_TRUE;
    }

    void plant_type_finalize(
        plant_type* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void plant_type_finalize_ex(
        plant_type* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::plant_type_finalize_w_params(
            sample,&deallocParams);
    }

    void plant_type_finalize_w_params(
        plant_type* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void plant_type_finalize_optional_members(
        plant_type* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool plant_type_copy(
        plant_type* dst,
        const plant_type* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'plant_type' sequence class.
    */
    #define T plant_type
    #define TSeq plant_typeSeq

    #define T_initialize_w_params Configuration::plant_type_initialize_w_params

    #define T_finalize_w_params   Configuration::plant_type_finalize_w_params
    #define T_copy       Configuration::plant_type_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *protocol_tTYPENAME = "Configuration::protocol_t";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* protocol_t_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode protocol_t_g_tc_protocolId_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode protocol_t_g_tc_protocol_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode protocol_t_g_tc_endpoint_string = DDS_INITIALIZE_STRING_TYPECODE((255));

        static DDS_TypeCode_Member protocol_t_g_tc_members[3]=
        {

            {
                (char *)"protocolId",/* Member name */
                {
                    0,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"protocol",/* Member name */
                {
                    1,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"endpoint",/* Member name */
                {
                    2,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode protocol_t_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::protocol_t", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                protocol_t_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for protocol_t*/

        if (is_initialized) {
            return &protocol_t_g_tc;
        }

        protocol_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        protocol_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&protocol_t_g_tc_protocolId_string;
        protocol_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&protocol_t_g_tc_protocol_string;
        protocol_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&protocol_t_g_tc_endpoint_string;

        /* Initialize the values for member annotations. */
        protocol_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        protocol_t_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        protocol_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        protocol_t_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        protocol_t_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        protocol_t_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        protocol_t_g_tc._data._sampleAccessInfo =
        protocol_t_get_sample_access_info();
        protocol_t_g_tc._data._typePlugin =
        protocol_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &protocol_t_g_tc;
    }

    #define TSeq protocol_tSeq
    #define T protocol_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *protocol_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo protocol_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(protocol_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            protocol_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &protocol_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *protocol_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Configuration::protocol_t *sample;

        static RTIXCdrMemberAccessInfo protocol_t_g_memberAccessInfos[3] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo protocol_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &protocol_t_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Configuration::protocol_t);
        if (sample == NULL) {
            return NULL;
        }

        protocol_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->protocolId - (char *)sample);

        protocol_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->protocol - (char *)sample);

        protocol_t_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->endpoint - (char *)sample);

        protocol_t_g_sampleAccessInfo.memberAccessInfos = 
        protocol_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(protocol_t);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                protocol_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                protocol_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        protocol_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        protocol_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        protocol_t_get_member_value_pointer;

        protocol_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &protocol_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *protocol_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin protocol_t_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::protocol_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::protocol_t_finalize_w_return,
            NULL
        };

        return &protocol_t_g_typePlugin;
    }
    #endif

    RTIBool protocol_t_initialize(
        protocol_t* sample) {
        return Configuration::protocol_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool protocol_t_initialize_ex(
        protocol_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::protocol_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool protocol_t_initialize_w_params(
        protocol_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            sample->protocolId = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->protocolId,
                "",
                (255),
                RTI_FALSE);
            if (sample->protocolId == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->protocolId != NULL) {
                RTICdrType_copyStringEx(
                    &sample->protocolId,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->protocolId == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->protocol = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->protocol,
                "",
                (255),
                RTI_FALSE);
            if (sample->protocol == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->protocol != NULL) {
                RTICdrType_copyStringEx(
                    &sample->protocol,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->protocol == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->endpoint = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->endpoint,
                "",
                (255),
                RTI_FALSE);
            if (sample->endpoint == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->endpoint != NULL) {
                RTICdrType_copyStringEx(
                    &sample->endpoint,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->endpoint == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool protocol_t_finalize_w_return(
        protocol_t* sample)
    {
        Configuration::protocol_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void protocol_t_finalize(
        protocol_t* sample)
    {

        Configuration::protocol_t_finalize_ex(sample,RTI_TRUE);
    }

    void protocol_t_finalize_ex(
        protocol_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::protocol_t_finalize_w_params(
            sample,&deallocParams);
    }

    void protocol_t_finalize_w_params(
        protocol_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        if (sample->protocolId != NULL) {
            DDS_String_free(sample->protocolId);
            sample->protocolId=NULL;

        }
        if (sample->protocol != NULL) {
            DDS_String_free(sample->protocol);
            sample->protocol=NULL;

        }
        if (sample->endpoint != NULL) {
            DDS_String_free(sample->endpoint);
            sample->endpoint=NULL;

        }
    }

    void protocol_t_finalize_optional_members(
        protocol_t* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool protocol_t_copy(
        protocol_t* dst,
        const protocol_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &dst->protocolId, src->protocolId, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->protocol, src->protocol, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->endpoint, src->endpoint, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }

            return RTI_TRUE;

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'protocol_t' sequence class.
    */
    #define T protocol_t
    #define TSeq protocol_tSeq

    #define T_initialize_w_params Configuration::protocol_t_initialize_w_params

    #define T_finalize_w_params   Configuration::protocol_t_finalize_w_params
    #define T_copy       Configuration::protocol_t_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *interface_tTYPENAME = "Configuration::interface_t";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* interface_t_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode interface_t_g_tc_ddsInterface_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode interface_t_g_tc_protocolId_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode interface_t_g_tc_baseAddress_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode interface_t_g_tc_size_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode interface_t_g_tc_frequency_string = DDS_INITIALIZE_STRING_TYPECODE((255));

        static DDS_TypeCode_Member interface_t_g_tc_members[6]=
        {

            {
                (char *)"mode",/* Member name */
                {
                    0,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"ddsInterface",/* Member name */
                {
                    1,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"protocolId",/* Member name */
                {
                    2,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"baseAddress",/* Member name */
                {
                    3,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"size",/* Member name */
                {
                    4,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"frequency",/* Member name */
                {
                    5,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode interface_t_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::interface_t", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                6, /* Number of members */
                interface_t_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for interface_t*/

        if (is_initialized) {
            return &interface_t_g_tc;
        }

        interface_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        interface_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Configuration::io_mode_get_typecode();
        interface_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_ddsInterface_string;
        interface_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_protocolId_string;
        interface_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_baseAddress_string;
        interface_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_size_string;
        interface_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_frequency_string;

        /* Initialize the values for member annotations. */
        interface_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        interface_t_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

        interface_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        interface_t_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        interface_t_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        interface_t_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        interface_t_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        interface_t_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        interface_t_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        interface_t_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        interface_t_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        interface_t_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        interface_t_g_tc._data._sampleAccessInfo =
        interface_t_get_sample_access_info();
        interface_t_g_tc._data._typePlugin =
        interface_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &interface_t_g_tc;
    }

    #define TSeq interface_tSeq
    #define T interface_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *interface_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo interface_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(interface_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            interface_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &interface_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *interface_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Configuration::interface_t *sample;

        static RTIXCdrMemberAccessInfo interface_t_g_memberAccessInfos[6] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo interface_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &interface_t_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Configuration::interface_t);
        if (sample == NULL) {
            return NULL;
        }

        interface_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

        interface_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->ddsInterface - (char *)sample);

        interface_t_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->protocolId - (char *)sample);

        interface_t_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->baseAddress - (char *)sample);

        interface_t_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->size - (char *)sample);

        interface_t_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->frequency - (char *)sample);

        interface_t_g_sampleAccessInfo.memberAccessInfos = 
        interface_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(interface_t);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                interface_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                interface_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        interface_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        interface_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        interface_t_get_member_value_pointer;

        interface_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &interface_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *interface_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin interface_t_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::interface_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::interface_t_finalize_w_return,
            NULL
        };

        return &interface_t_g_typePlugin;
    }
    #endif

    RTIBool interface_t_initialize(
        interface_t* sample) {
        return Configuration::interface_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool interface_t_initialize_ex(
        interface_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::interface_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool interface_t_initialize_w_params(
        interface_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        sample->mode = Configuration::READ;

        if (allocParams->allocate_memory) {
            sample->ddsInterface = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->ddsInterface,
                "",
                (255),
                RTI_FALSE);
            if (sample->ddsInterface == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->ddsInterface != NULL) {
                RTICdrType_copyStringEx(
                    &sample->ddsInterface,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->ddsInterface == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->protocolId = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->protocolId,
                "",
                (255),
                RTI_FALSE);
            if (sample->protocolId == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->protocolId != NULL) {
                RTICdrType_copyStringEx(
                    &sample->protocolId,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->protocolId == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->baseAddress = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->baseAddress,
                "",
                (255),
                RTI_FALSE);
            if (sample->baseAddress == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->baseAddress != NULL) {
                RTICdrType_copyStringEx(
                    &sample->baseAddress,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->baseAddress == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->size = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->size,
                "",
                (255),
                RTI_FALSE);
            if (sample->size == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->size != NULL) {
                RTICdrType_copyStringEx(
                    &sample->size,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->size == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->frequency = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->frequency,
                "",
                (255),
                RTI_FALSE);
            if (sample->frequency == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->frequency != NULL) {
                RTICdrType_copyStringEx(
                    &sample->frequency,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->frequency == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool interface_t_finalize_w_return(
        interface_t* sample)
    {
        Configuration::interface_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void interface_t_finalize(
        interface_t* sample)
    {

        Configuration::interface_t_finalize_ex(sample,RTI_TRUE);
    }

    void interface_t_finalize_ex(
        interface_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::interface_t_finalize_w_params(
            sample,&deallocParams);
    }

    void interface_t_finalize_w_params(
        interface_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        Configuration::io_mode_finalize_w_params(&sample->mode,deallocParams);

        if (sample->ddsInterface != NULL) {
            DDS_String_free(sample->ddsInterface);
            sample->ddsInterface=NULL;

        }
        if (sample->protocolId != NULL) {
            DDS_String_free(sample->protocolId);
            sample->protocolId=NULL;

        }
        if (sample->baseAddress != NULL) {
            DDS_String_free(sample->baseAddress);
            sample->baseAddress=NULL;

        }
        if (sample->size != NULL) {
            DDS_String_free(sample->size);
            sample->size=NULL;

        }
        if (sample->frequency != NULL) {
            DDS_String_free(sample->frequency);
            sample->frequency=NULL;

        }
    }

    void interface_t_finalize_optional_members(
        interface_t* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

        Configuration::io_mode_finalize_optional_members(&sample->mode, deallocParams->delete_pointers);
    }

    RTIBool interface_t_copy(
        interface_t* dst,
        const interface_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!Configuration::io_mode_copy(
                &dst->mode,(const Configuration::io_mode*)&src->mode)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyStringEx (
                &dst->ddsInterface, src->ddsInterface, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->protocolId, src->protocolId, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->baseAddress, src->baseAddress, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->size, src->size, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->frequency, src->frequency, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }

            return RTI_TRUE;

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'interface_t' sequence class.
    */
    #define T interface_t
    #define TSeq interface_tSeq

    #define T_initialize_w_params Configuration::interface_t_initialize_w_params

    #define T_finalize_w_params   Configuration::interface_t_finalize_w_params
    #define T_copy       Configuration::interface_t_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *tag_tTYPENAME = "Configuration::tag_t";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* tag_t_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode tag_t_g_tc_ddsInterface_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode tag_t_g_tc_edgeType_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode tag_t_g_tc_edgeUnit_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode tag_t_g_tc_ioType_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode tag_t_g_tc_ioUnit_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode tag_t_g_tc_convertUnit_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode tag_t_g_tc_floatEpsilon_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode tag_t_g_tc_tag_string = DDS_INITIALIZE_STRING_TYPECODE((255));

        static DDS_TypeCode_Member tag_t_g_tc_members[8]=
        {

            {
                (char *)"ddsInterface",/* Member name */
                {
                    0,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"edgeType",/* Member name */
                {
                    1,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"edgeUnit",/* Member name */
                {
                    2,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"ioType",/* Member name */
                {
                    3,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"ioUnit",/* Member name */
                {
                    4,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"convertUnit",/* Member name */
                {
                    5,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"floatEpsilon",/* Member name */
                {
                    6,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"tag",/* Member name */
                {
                    7,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode tag_t_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::tag_t", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                8, /* Number of members */
                tag_t_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for tag_t*/

        if (is_initialized) {
            return &tag_t_g_tc;
        }

        tag_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        tag_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_ddsInterface_string;
        tag_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_edgeType_string;
        tag_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_edgeUnit_string;
        tag_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_ioType_string;
        tag_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_ioUnit_string;
        tag_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_convertUnit_string;
        tag_t_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_floatEpsilon_string;
        tag_t_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_tag_string;

        /* Initialize the values for member annotations. */
        tag_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[6]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        tag_t_g_tc_members[7]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        tag_t_g_tc._data._sampleAccessInfo =
        tag_t_get_sample_access_info();
        tag_t_g_tc._data._typePlugin =
        tag_t_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &tag_t_g_tc;
    }

    #define TSeq tag_tSeq
    #define T tag_t
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *tag_t_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo tag_t_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(tag_tSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            tag_tSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &tag_t_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *tag_t_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Configuration::tag_t *sample;

        static RTIXCdrMemberAccessInfo tag_t_g_memberAccessInfos[8] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo tag_t_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &tag_t_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Configuration::tag_t);
        if (sample == NULL) {
            return NULL;
        }

        tag_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->ddsInterface - (char *)sample);

        tag_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->edgeType - (char *)sample);

        tag_t_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->edgeUnit - (char *)sample);

        tag_t_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->ioType - (char *)sample);

        tag_t_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->ioUnit - (char *)sample);

        tag_t_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->convertUnit - (char *)sample);

        tag_t_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->floatEpsilon - (char *)sample);

        tag_t_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->tag - (char *)sample);

        tag_t_g_sampleAccessInfo.memberAccessInfos = 
        tag_t_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(tag_t);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                tag_t_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                tag_t_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        tag_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        tag_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
        tag_t_get_member_value_pointer;

        tag_t_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &tag_t_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *tag_t_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin tag_t_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::tag_t_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::tag_t_finalize_w_return,
            NULL
        };

        return &tag_t_g_typePlugin;
    }
    #endif

    RTIBool tag_t_initialize(
        tag_t* sample) {
        return Configuration::tag_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool tag_t_initialize_ex(
        tag_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::tag_t_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool tag_t_initialize_w_params(
        tag_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            sample->ddsInterface = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->ddsInterface,
                "",
                (255),
                RTI_FALSE);
            if (sample->ddsInterface == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->ddsInterface != NULL) {
                RTICdrType_copyStringEx(
                    &sample->ddsInterface,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->ddsInterface == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->edgeType = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->edgeType,
                "",
                (255),
                RTI_FALSE);
            if (sample->edgeType == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->edgeType != NULL) {
                RTICdrType_copyStringEx(
                    &sample->edgeType,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->edgeType == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->edgeUnit = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->edgeUnit,
                "",
                (255),
                RTI_FALSE);
            if (sample->edgeUnit == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->edgeUnit != NULL) {
                RTICdrType_copyStringEx(
                    &sample->edgeUnit,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->edgeUnit == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->ioType = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->ioType,
                "",
                (255),
                RTI_FALSE);
            if (sample->ioType == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->ioType != NULL) {
                RTICdrType_copyStringEx(
                    &sample->ioType,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->ioType == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->ioUnit = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->ioUnit,
                "",
                (255),
                RTI_FALSE);
            if (sample->ioUnit == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->ioUnit != NULL) {
                RTICdrType_copyStringEx(
                    &sample->ioUnit,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->ioUnit == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->convertUnit = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->convertUnit,
                "",
                (255),
                RTI_FALSE);
            if (sample->convertUnit == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->convertUnit != NULL) {
                RTICdrType_copyStringEx(
                    &sample->convertUnit,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->convertUnit == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->floatEpsilon = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->floatEpsilon,
                "",
                (255),
                RTI_FALSE);
            if (sample->floatEpsilon == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->floatEpsilon != NULL) {
                RTICdrType_copyStringEx(
                    &sample->floatEpsilon,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->floatEpsilon == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        if (allocParams->allocate_memory) {
            sample->tag = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->tag,
                "",
                (255),
                RTI_FALSE);
            if (sample->tag == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->tag != NULL) {
                RTICdrType_copyStringEx(
                    &sample->tag,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->tag == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool tag_t_finalize_w_return(
        tag_t* sample)
    {
        Configuration::tag_t_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void tag_t_finalize(
        tag_t* sample)
    {

        Configuration::tag_t_finalize_ex(sample,RTI_TRUE);
    }

    void tag_t_finalize_ex(
        tag_t* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::tag_t_finalize_w_params(
            sample,&deallocParams);
    }

    void tag_t_finalize_w_params(
        tag_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        if (sample->ddsInterface != NULL) {
            DDS_String_free(sample->ddsInterface);
            sample->ddsInterface=NULL;

        }
        if (sample->edgeType != NULL) {
            DDS_String_free(sample->edgeType);
            sample->edgeType=NULL;

        }
        if (sample->edgeUnit != NULL) {
            DDS_String_free(sample->edgeUnit);
            sample->edgeUnit=NULL;

        }
        if (sample->ioType != NULL) {
            DDS_String_free(sample->ioType);
            sample->ioType=NULL;

        }
        if (sample->ioUnit != NULL) {
            DDS_String_free(sample->ioUnit);
            sample->ioUnit=NULL;

        }
        if (sample->convertUnit != NULL) {
            DDS_String_free(sample->convertUnit);
            sample->convertUnit=NULL;

        }
        if (sample->floatEpsilon != NULL) {
            DDS_String_free(sample->floatEpsilon);
            sample->floatEpsilon=NULL;

        }
        if (sample->tag != NULL) {
            DDS_String_free(sample->tag);
            sample->tag=NULL;

        }
    }

    void tag_t_finalize_optional_members(
        tag_t* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool tag_t_copy(
        tag_t* dst,
        const tag_t* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &dst->ddsInterface, src->ddsInterface, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->edgeType, src->edgeType, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->edgeUnit, src->edgeUnit, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->ioType, src->ioType, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->ioUnit, src->ioUnit, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->convertUnit, src->convertUnit, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->floatEpsilon, src->floatEpsilon, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!RTICdrType_copyStringEx (
                &dst->tag, src->tag, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }

            return RTI_TRUE;

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'tag_t' sequence class.
    */
    #define T tag_t
    #define TSeq tag_tSeq

    #define T_initialize_w_params Configuration::tag_t_initialize_w_params

    #define T_finalize_w_params   Configuration::tag_t_finalize_w_params
    #define T_copy       Configuration::tag_t_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *config_dataTYPENAME = "Configuration::config_data";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* config_data_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member config_data_g_tc_members[3]=
        {

            {
                (char *)"protocolSpec",/* Member name */
                {
                    1,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                1, /* Number of labels */
                (Configuration::PROTOCOL), /* First label Cpp (Configuration::PROTOCOL) */
                NULL, /* Labels (it is NULL when there is only one label)*/
                RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"interfaceSpec",/* Member name */
                {
                    2,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                1, /* Number of labels */
                (Configuration::INTERFACE), /* First label Cpp (Configuration::INTERFACE) */
                NULL, /* Labels (it is NULL when there is only one label)*/
                RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"tagSpec",/* Member name */
                {
                    3,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                1, /* Number of labels */
                (Configuration::TAG), /* First label Cpp (Configuration::TAG) */
                NULL, /* Labels (it is NULL when there is only one label)*/
                RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode config_data_g_tc =
        {{
                DDS_TK_UNION, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::config_data", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                config_data_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for config_data*/

        if (is_initialized) {
            return &config_data_g_tc;
        }

        config_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        config_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Configuration::protocol_t_get_typecode();
        config_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Configuration::interface_t_get_typecode();
        config_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Configuration::tag_t_get_typecode();

        /* Initialize the values for member annotations. */

        /* Discriminator type code */
        config_data_g_tc._data._typeCode = (RTICdrTypeCode *)Configuration::config_type_get_typecode();

        config_data_g_tc._data._sampleAccessInfo =
        config_data_get_sample_access_info();
        config_data_g_tc._data._typePlugin =
        config_data_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &config_data_g_tc;
    }

    #define TSeq config_dataSeq
    #define T config_data
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *config_data_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo config_data_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(config_dataSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            config_dataSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &config_data_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *config_data_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Configuration::config_data *sample;

        static RTIXCdrMemberAccessInfo config_data_g_memberAccessInfos[4] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo config_data_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &config_data_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Configuration::config_data);
        if (sample == NULL) {
            return NULL;
        }

        config_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->_d - (char *)sample);

        config_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->_u.protocolSpec - (char *)sample);

        config_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->_u.interfaceSpec - (char *)sample);

        config_data_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->_u.tagSpec - (char *)sample);

        config_data_g_sampleAccessInfo.memberAccessInfos = 
        config_data_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(config_data);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                config_data_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                config_data_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        config_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        config_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
        config_data_get_member_value_pointer;

        config_data_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &config_data_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *config_data_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin config_data_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::config_data_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::config_data_finalize_w_return,
            NULL
        };

        return &config_data_g_typePlugin;
    }
    #endif

    DDS_LongLong config_data_getDefaultDiscriminator(){

        return 0;
    }

    RTIBool config_data_initialize(
        config_data* sample) {
        return Configuration::config_data_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool config_data_initialize_ex(
        config_data* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::config_data_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool config_data_initialize_w_params(
        config_data* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        sample->_d = (Configuration::config_type)config_data_getDefaultDiscriminator();
        if (!Configuration::protocol_t_initialize_w_params(&sample->_u.protocolSpec,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!Configuration::interface_t_initialize_w_params(&sample->_u.interfaceSpec,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!Configuration::tag_t_initialize_w_params(&sample->_u.tagSpec,
        allocParams)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool config_data_finalize_w_return(
        config_data* sample)
    {
        Configuration::config_data_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void config_data_finalize(
        config_data* sample)
    {

        Configuration::config_data_finalize_ex(sample,RTI_TRUE);
    }

    void config_data_finalize_ex(
        config_data* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::config_data_finalize_w_params(
            sample,&deallocParams);
    }

    void config_data_finalize_w_params(
        config_data* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        Configuration::protocol_t_finalize_w_params(&sample->_u.protocolSpec,deallocParams);

        Configuration::interface_t_finalize_w_params(&sample->_u.interfaceSpec,deallocParams);

        Configuration::tag_t_finalize_w_params(&sample->_u.tagSpec,deallocParams);

    }

    void config_data_finalize_optional_members(
        config_data* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

        switch(sample->_d) {
            case (Configuration::PROTOCOL):
                {
                    Configuration::protocol_t_finalize_optional_members(&sample->_u.protocolSpec, deallocParams->delete_pointers);
            } break ;
            case (Configuration::INTERFACE):
                {
                    Configuration::interface_t_finalize_optional_members(&sample->_u.interfaceSpec, deallocParams->delete_pointers);
            } break ;
            case (Configuration::TAG):
                {
                    Configuration::tag_t_finalize_optional_members(&sample->_u.tagSpec, deallocParams->delete_pointers);
            } break ;
        }
    }

    RTIBool config_data_copy(
        config_data* dst,
        const config_data* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!Configuration::config_type_copy(
                &dst->_d,(const Configuration::config_type*)&src->_d)) {
                return RTI_FALSE;
            } 

            switch(src->_d) {

                case (Configuration::PROTOCOL):
                    {
                        if (!Configuration::protocol_t_copy(
                            &dst->_u.protocolSpec,(const Configuration::protocol_t*)&src->_u.protocolSpec)) {
                            return RTI_FALSE;
                    } 
                } break ;
                case (Configuration::INTERFACE):
                    {
                        if (!Configuration::interface_t_copy(
                            &dst->_u.interfaceSpec,(const Configuration::interface_t*)&src->_u.interfaceSpec)) {
                            return RTI_FALSE;
                    } 
                } break ;
                case (Configuration::TAG):
                    {
                        if (!Configuration::tag_t_copy(
                            &dst->_u.tagSpec,(const Configuration::tag_t*)&src->_u.tagSpec)) {
                            return RTI_FALSE;
                    } 
                } break ;

            }
            return RTI_TRUE;

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'config_data' sequence class.
    */
    #define T config_data
    #define TSeq config_dataSeq

    #define T_initialize_w_params Configuration::config_data_initialize_w_params

    #define T_finalize_w_params   Configuration::config_data_finalize_w_params
    #define T_copy       Configuration::config_data_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

    /* ========================================================================= */
    const char *ItemTYPENAME = "Configuration::Item";

    #ifndef NDDS_STANDALONE_TYPE
    DDS_TypeCode* Item_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode Item_g_tc_key_string = DDS_INITIALIZE_STRING_TYPECODE((255));

        static DDS_TypeCode_Member Item_g_tc_members[3]=
        {

            {
                (char *)"key",/* Member name */
                {
                    0,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_KEY_MEMBER , /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"configType",/* Member name */
                {
                    1,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }, 
            {
                (char *)"configData",/* Member name */
                {
                    2,/* Representation ID */
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode Item_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::Item", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                Item_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for Item*/

        if (is_initialized) {
            return &Item_g_tc;
        }

        Item_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        Item_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Item_g_tc_key_string;
        Item_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Configuration::config_type_get_typecode();
        Item_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Configuration::config_data_get_typecode();

        /* Initialize the values for member annotations. */
        Item_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        Item_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        Item_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        Item_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

        Item_g_tc._data._sampleAccessInfo =
        Item_get_sample_access_info();
        Item_g_tc._data._typePlugin =
        Item_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Item_g_tc;
    }

    #define TSeq ItemSeq
    #define T Item
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Item_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Item_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(ItemSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            ItemSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Item_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Item_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        Configuration::Item *sample;

        static RTIXCdrMemberAccessInfo Item_g_memberAccessInfos[3] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Item_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Item_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            Configuration::Item);
        if (sample == NULL) {
            return NULL;
        }

        Item_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->key - (char *)sample);

        Item_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->configType - (char *)sample);

        Item_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->configData - (char *)sample);

        Item_g_sampleAccessInfo.memberAccessInfos = 
        Item_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Item);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                Item_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                Item_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Item_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Item_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Item_get_member_value_pointer;

        Item_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Item_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Item_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Item_g_typePlugin = 
        {
            NULL, /* serialize */
            NULL, /* serialize_key */
            NULL, /* deserialize_sample */
            NULL, /* deserialize_key_sample */
            NULL, /* skip */
            NULL, /* get_serialized_sample_size */
            NULL, /* get_serialized_sample_max_size_ex */
            NULL, /* get_serialized_key_max_size_ex */
            NULL, /* get_serialized_sample_min_size */
            NULL, /* serialized_sample_to_key */
            (RTIXCdrTypePluginInitializeSampleFunction) 
            Configuration::Item_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            Configuration::Item_finalize_w_return,
            NULL
        };

        return &Item_g_typePlugin;
    }
    #endif

    RTIBool Item_initialize(
        Item* sample) {
        return Configuration::Item_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool Item_initialize_ex(
        Item* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::Item_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Item_initialize_w_params(
        Item* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory) {
            sample->key = DDS_String_alloc((255));
            RTICdrType_copyStringEx(
                &sample->key,
                "",
                (255),
                RTI_FALSE);
            if (sample->key == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->key != NULL) {
                RTICdrType_copyStringEx(
                    &sample->key,
                    "",
                    (255),
                    RTI_FALSE);
                if (sample->key == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        sample->configType = Configuration::PROTOCOL;
        if (!Configuration::config_data_initialize_w_params(&sample->configData,
        allocParams)) {
            return RTI_FALSE;
        }
        return RTI_TRUE;
    }

    RTIBool Item_finalize_w_return(
        Item* sample)
    {
        Configuration::Item_finalize_ex(sample, RTI_TRUE);

        return RTI_TRUE;
    }

    void Item_finalize(
        Item* sample)
    {

        Configuration::Item_finalize_ex(sample,RTI_TRUE);
    }

    void Item_finalize_ex(
        Item* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::Item_finalize_w_params(
            sample,&deallocParams);
    }

    void Item_finalize_w_params(
        Item* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        if (sample->key != NULL) {
            DDS_String_free(sample->key);
            sample->key=NULL;

        }
        Configuration::config_type_finalize_w_params(&sample->configType,deallocParams);

        Configuration::config_data_finalize_w_params(&sample->configData,deallocParams);

    }

    void Item_finalize_optional_members(
        Item* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

        Configuration::config_type_finalize_optional_members(&sample->configType, deallocParams->delete_pointers);
        Configuration::config_data_finalize_optional_members(&sample->configData, deallocParams->delete_pointers);
    }

    RTIBool Item_copy(
        Item* dst,
        const Item* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &dst->key, src->key, 
                (255) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }
            if (!Configuration::config_type_copy(
                &dst->configType,(const Configuration::config_type*)&src->configType)) {
                return RTI_FALSE;
            } 
            if (!Configuration::config_data_copy(
                &dst->configData,(const Configuration::config_data*)&src->configData)) {
                return RTI_FALSE;
            } 

            return RTI_TRUE;

        } catch (const std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'Item' sequence class.
    */
    #define T Item
    #define TSeq ItemSeq

    #define T_initialize_w_params Configuration::Item_initialize_w_params

    #define T_finalize_w_params   Configuration::Item_finalize_w_params
    #define T_copy       Configuration::Item_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T

} /* namespace Configuration  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Configuration::protocol_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Configuration::protocol_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Configuration::interface_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Configuration::interface_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Configuration::tag_t>::get() 
        {
            return (const RTIXCdrTypeCode *) Configuration::tag_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Configuration::config_data>::get() 
        {
            return (const RTIXCdrTypeCode *) Configuration::config_data_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<Configuration::Item>::get() 
        {
            return (const RTIXCdrTypeCode *) Configuration::Item_get_typecode();
        }

    } 
}
#endif
