

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

#include <new>

namespace Configuration {

    /* ========================================================================= */
    const char *config_typeTYPENAME = "Configuration::config_type";

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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode config_type_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::config_type", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                config_type_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for config_type*/

        if (is_initialized) {
            return &config_type_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &config_type_g_tc;
    }

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

        } catch (std::bad_alloc&) {
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode io_mode_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::io_mode", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                io_mode_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for io_mode*/

        if (is_initialized) {
            return &io_mode_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &io_mode_g_tc;
    }

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

        } catch (std::bad_alloc&) {
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode plant_type_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::plant_type", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                11, /* Number of members */
                plant_type_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for plant_type*/

        if (is_initialized) {
            return &plant_type_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &plant_type_g_tc;
    }

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

        } catch (std::bad_alloc&) {
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode protocol_t_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::protocol_t", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                protocol_t_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for protocol_t*/

        if (is_initialized) {
            return &protocol_t_g_tc;
        }

        protocol_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&protocol_t_g_tc_protocolId_string;

        protocol_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&protocol_t_g_tc_protocol_string;

        protocol_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&protocol_t_g_tc_endpoint_string;

        is_initialized = RTI_TRUE;

        return &protocol_t_g_tc;
    }

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

        if (allocParams->allocate_memory){
            sample->protocolId= DDS_String_alloc ((255));
            if (sample->protocolId == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->protocolId!= NULL) { 
                sample->protocolId[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->protocol= DDS_String_alloc ((255));
            if (sample->protocol == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->protocol!= NULL) { 
                sample->protocol[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->endpoint= DDS_String_alloc ((255));
            if (sample->endpoint == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->endpoint!= NULL) { 
                sample->endpoint[0] = '\0';
            }
        }

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

        } catch (std::bad_alloc&) {
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode interface_t_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::interface_t", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                6, /* Number of members */
                interface_t_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for interface_t*/

        if (is_initialized) {
            return &interface_t_g_tc;
        }

        interface_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Configuration::io_mode_get_typecode();

        interface_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_ddsInterface_string;

        interface_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_protocolId_string;

        interface_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_baseAddress_string;

        interface_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_size_string;

        interface_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&interface_t_g_tc_frequency_string;

        is_initialized = RTI_TRUE;

        return &interface_t_g_tc;
    }

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

        if (!Configuration::io_mode_initialize_w_params(&sample->mode,
        allocParams)) {
            return RTI_FALSE;
        }
        if (allocParams->allocate_memory){
            sample->ddsInterface= DDS_String_alloc ((255));
            if (sample->ddsInterface == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->ddsInterface!= NULL) { 
                sample->ddsInterface[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->protocolId= DDS_String_alloc ((255));
            if (sample->protocolId == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->protocolId!= NULL) { 
                sample->protocolId[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->baseAddress= DDS_String_alloc ((255));
            if (sample->baseAddress == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->baseAddress!= NULL) { 
                sample->baseAddress[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->size= DDS_String_alloc ((255));
            if (sample->size == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->size!= NULL) { 
                sample->size[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->frequency= DDS_String_alloc ((255));
            if (sample->frequency == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->frequency!= NULL) { 
                sample->frequency[0] = '\0';
            }
        }

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

        } catch (std::bad_alloc&) {
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode tag_t_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::tag_t", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                8, /* Number of members */
                tag_t_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for tag_t*/

        if (is_initialized) {
            return &tag_t_g_tc;
        }

        tag_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_ddsInterface_string;

        tag_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_edgeType_string;

        tag_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_edgeUnit_string;

        tag_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_ioType_string;

        tag_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_ioUnit_string;

        tag_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_convertUnit_string;

        tag_t_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_floatEpsilon_string;

        tag_t_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&tag_t_g_tc_tag_string;

        is_initialized = RTI_TRUE;

        return &tag_t_g_tc;
    }

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

        if (allocParams->allocate_memory){
            sample->ddsInterface= DDS_String_alloc ((255));
            if (sample->ddsInterface == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->ddsInterface!= NULL) { 
                sample->ddsInterface[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->edgeType= DDS_String_alloc ((255));
            if (sample->edgeType == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->edgeType!= NULL) { 
                sample->edgeType[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->edgeUnit= DDS_String_alloc ((255));
            if (sample->edgeUnit == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->edgeUnit!= NULL) { 
                sample->edgeUnit[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->ioType= DDS_String_alloc ((255));
            if (sample->ioType == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->ioType!= NULL) { 
                sample->ioType[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->ioUnit= DDS_String_alloc ((255));
            if (sample->ioUnit == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->ioUnit!= NULL) { 
                sample->ioUnit[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->convertUnit= DDS_String_alloc ((255));
            if (sample->convertUnit == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->convertUnit!= NULL) { 
                sample->convertUnit[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->floatEpsilon= DDS_String_alloc ((255));
            if (sample->floatEpsilon == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->floatEpsilon!= NULL) { 
                sample->floatEpsilon[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->tag= DDS_String_alloc ((255));
            if (sample->tag == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->tag!= NULL) { 
                sample->tag[0] = '\0';
            }
        }

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

        } catch (std::bad_alloc&) {
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode config_data_g_tc =
        {{
                DDS_TK_UNION,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::config_data", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                config_data_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for config_data*/

        if (is_initialized) {
            return &config_data_g_tc;
        }

        config_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Configuration::protocol_t_get_typecode();

        config_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Configuration::interface_t_get_typecode();

        config_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Configuration::tag_t_get_typecode();

        /* Discriminator type code */
        config_data_g_tc._data._typeCode = (RTICdrTypeCode *)Configuration::config_type_get_typecode();

        is_initialized = RTI_TRUE;

        return &config_data_g_tc;
    }

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

        } catch (std::bad_alloc&) {
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
                NULL/* Ignored */
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
                NULL/* Ignored */
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
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode Item_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::Item", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                Item_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for Item*/

        if (is_initialized) {
            return &Item_g_tc;
        }

        Item_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Item_g_tc_key_string;

        Item_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Configuration::config_type_get_typecode();

        Item_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Configuration::config_data_get_typecode();

        is_initialized = RTI_TRUE;

        return &Item_g_tc;
    }

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

        if (allocParams->allocate_memory){
            sample->key= DDS_String_alloc ((255));
            if (sample->key == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->key!= NULL) { 
                sample->key[0] = '\0';
            }
        }

        if (!Configuration::config_type_initialize_w_params(&sample->configType,
        allocParams)) {
            return RTI_FALSE;
        }
        if (!Configuration::config_data_initialize_w_params(&sample->configData,
        allocParams)) {
            return RTI_FALSE;
        }
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

        } catch (std::bad_alloc&) {
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

