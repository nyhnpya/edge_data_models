

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from base_data_types.idl using "rtiddsgen".
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

#include "base_data_types.h"

#include <new>

namespace DataTypes {

    /* ========================================================================= */

    DDS_TypeCode* Uuid_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode Uuid_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((36));

        static DDS_TypeCode Uuid_g_tc =
        {{
                DDS_TK_ALIAS, /* Kind*/
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Ignored */
                (char *)"DataTypes::Uuid", /* Name */
                NULL, /* Content type code is assigned later */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                DDS_VM_NONE /* Ignored */
            }}; /* Type code for  Uuid */

        if (is_initialized) {
            return &Uuid_g_tc;
        }

        Uuid_g_tc._data._typeCode =  (RTICdrTypeCode *)&Uuid_g_tc_string;

        is_initialized = RTI_TRUE;

        return &Uuid_g_tc;
    }

    RTIBool Uuid_initialize(
        Uuid* sample) {
        return DataTypes::Uuid_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool Uuid_initialize_ex(
        Uuid* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return DataTypes::Uuid_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Uuid_initialize_w_params(
        Uuid* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory){
            (*sample)= DDS_String_alloc ((36));
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }

        } else {
            if ((*sample)!= NULL) { 
                (*sample)[0] = '\0';
            }
        }

        return RTI_TRUE;
    }

    void Uuid_finalize(
        Uuid* sample)
    {

        DataTypes::Uuid_finalize_ex(sample,RTI_TRUE);
    }

    void Uuid_finalize_ex(
        Uuid* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        DataTypes::Uuid_finalize_w_params(
            sample,&deallocParams);
    }

    void Uuid_finalize_w_params(
        Uuid* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        if ((*sample) != NULL) {
            DDS_String_free((*sample));
            (*sample)=NULL;

        }
    }

    void Uuid_finalize_optional_members(
        Uuid* sample, RTIBool deletePointers)
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

    RTIBool Uuid_copy(
        Uuid* dst,
        const Uuid* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &(*dst), (*src), 
                (36) + 1, RTI_FALSE)){
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
    * Configure and implement 'Uuid' sequence class.
    */
    #define T Uuid
    #define TSeq UuidSeq

    #define T_initialize_w_params DataTypes::Uuid_initialize_w_params

    #define T_finalize_w_params   DataTypes::Uuid_finalize_w_params
    #define T_copy       DataTypes::Uuid_copy

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
    const char *TimeTYPENAME = "DataTypes::Time";

    DDS_TypeCode* Time_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member Time_g_tc_members[2]=
        {

            {
                (char *)"sec",/* Member name */
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
                (char *)"nanosec",/* Member name */
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
            }
        };

        static DDS_TypeCode Time_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Time", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                Time_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for Time*/

        if (is_initialized) {
            return &Time_g_tc;
        }

        Time_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

        Time_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

        is_initialized = RTI_TRUE;

        return &Time_g_tc;
    }

    RTIBool Time_initialize(
        Time* sample) {
        return DataTypes::Time_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool Time_initialize_ex(
        Time* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return DataTypes::Time_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Time_initialize_w_params(
        Time* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initLong(&sample->sec)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initUnsignedLong(&sample->nanosec)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    void Time_finalize(
        Time* sample)
    {

        DataTypes::Time_finalize_ex(sample,RTI_TRUE);
    }

    void Time_finalize_ex(
        Time* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        DataTypes::Time_finalize_w_params(
            sample,&deallocParams);
    }

    void Time_finalize_w_params(
        Time* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void Time_finalize_optional_members(
        Time* sample, RTIBool deletePointers)
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

    RTIBool Time_copy(
        Time* dst,
        const Time* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyLong (
                &dst->sec, &src->sec)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyUnsignedLong (
                &dst->nanosec, &src->nanosec)) { 
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
    * Configure and implement 'Time' sequence class.
    */
    #define T Time
    #define TSeq TimeSeq

    #define T_initialize_w_params DataTypes::Time_initialize_w_params

    #define T_finalize_w_params   DataTypes::Time_finalize_w_params
    #define T_copy       DataTypes::Time_copy

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
    const char *PriorityTYPENAME = "DataTypes::Priority";

    DDS_TypeCode* Priority_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member Priority_g_tc_members[3]=
        {

            {
                (char *)"Normal",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Normal, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"High",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                High, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"Critical",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Critical, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode Priority_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Priority", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                Priority_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for Priority*/

        if (is_initialized) {
            return &Priority_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &Priority_g_tc;
    }

    RTIBool Priority_initialize(
        Priority* sample) {
        *sample = Normal;
        return RTI_TRUE;
    }

    RTIBool Priority_initialize_ex(
        Priority* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return DataTypes::Priority_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Priority_initialize_w_params(
        Priority* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = Normal;
        return RTI_TRUE;
    }

    void Priority_finalize(
        Priority* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void Priority_finalize_ex(
        Priority* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        DataTypes::Priority_finalize_w_params(
            sample,&deallocParams);
    }

    void Priority_finalize_w_params(
        Priority* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void Priority_finalize_optional_members(
        Priority* sample, RTIBool deletePointers)
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

    RTIBool Priority_copy(
        Priority* dst,
        const Priority* src)
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
    * Configure and implement 'Priority' sequence class.
    */
    #define T Priority
    #define TSeq PrioritySeq

    #define T_initialize_w_params DataTypes::Priority_initialize_w_params

    #define T_finalize_w_params   DataTypes::Priority_finalize_w_params
    #define T_copy       DataTypes::Priority_copy

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
    const char *SurveyQualityTYPENAME = "DataTypes::SurveyQuality";

    DDS_TypeCode* SurveyQuality_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member SurveyQuality_g_tc_members[2]=
        {

            {
                (char *)"Definitive",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Definitive, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"Inconclusive",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Inconclusive, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode SurveyQuality_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::SurveyQuality", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                SurveyQuality_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for SurveyQuality*/

        if (is_initialized) {
            return &SurveyQuality_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &SurveyQuality_g_tc;
    }

    RTIBool SurveyQuality_initialize(
        SurveyQuality* sample) {
        *sample = Definitive;
        return RTI_TRUE;
    }

    RTIBool SurveyQuality_initialize_ex(
        SurveyQuality* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return DataTypes::SurveyQuality_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool SurveyQuality_initialize_w_params(
        SurveyQuality* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = Definitive;
        return RTI_TRUE;
    }

    void SurveyQuality_finalize(
        SurveyQuality* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void SurveyQuality_finalize_ex(
        SurveyQuality* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        DataTypes::SurveyQuality_finalize_w_params(
            sample,&deallocParams);
    }

    void SurveyQuality_finalize_w_params(
        SurveyQuality* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void SurveyQuality_finalize_optional_members(
        SurveyQuality* sample, RTIBool deletePointers)
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

    RTIBool SurveyQuality_copy(
        SurveyQuality* dst,
        const SurveyQuality* src)
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
    * Configure and implement 'SurveyQuality' sequence class.
    */
    #define T SurveyQuality
    #define TSeq SurveyQualitySeq

    #define T_initialize_w_params DataTypes::SurveyQuality_initialize_w_params

    #define T_finalize_w_params   DataTypes::SurveyQuality_finalize_w_params
    #define T_copy       DataTypes::SurveyQuality_copy

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
    const char *StatusTYPENAME = "DataTypes::Status";

    DDS_TypeCode* Status_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member Status_g_tc_members[2]=
        {

            {
                (char *)"Fault",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Fault, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"Good",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Good, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode Status_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Status", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                Status_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for Status*/

        if (is_initialized) {
            return &Status_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &Status_g_tc;
    }

    RTIBool Status_initialize(
        Status* sample) {
        *sample = Fault;
        return RTI_TRUE;
    }

    RTIBool Status_initialize_ex(
        Status* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return DataTypes::Status_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Status_initialize_w_params(
        Status* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = Fault;
        return RTI_TRUE;
    }

    void Status_finalize(
        Status* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void Status_finalize_ex(
        Status* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        DataTypes::Status_finalize_w_params(
            sample,&deallocParams);
    }

    void Status_finalize_w_params(
        Status* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void Status_finalize_optional_members(
        Status* sample, RTIBool deletePointers)
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

    RTIBool Status_copy(
        Status* dst,
        const Status* src)
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
    * Configure and implement 'Status' sequence class.
    */
    #define T Status
    #define TSeq StatusSeq

    #define T_initialize_w_params DataTypes::Status_initialize_w_params

    #define T_finalize_w_params   DataTypes::Status_finalize_w_params
    #define T_copy       DataTypes::Status_copy

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
    const char *PipeTypeTYPENAME = "DataTypes::PipeType";

    DDS_TypeCode* PipeType_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member PipeType_g_tc_members[3]=
        {

            {
                (char *)"DrillCollar",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                DrillCollar, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"HeavyWeight",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                HeavyWeight, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"DrillPipe",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                DrillPipe, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode PipeType_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::PipeType", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                PipeType_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for PipeType*/

        if (is_initialized) {
            return &PipeType_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &PipeType_g_tc;
    }

    RTIBool PipeType_initialize(
        PipeType* sample) {
        *sample = DrillCollar;
        return RTI_TRUE;
    }

    RTIBool PipeType_initialize_ex(
        PipeType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return DataTypes::PipeType_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool PipeType_initialize_w_params(
        PipeType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = DrillCollar;
        return RTI_TRUE;
    }

    void PipeType_finalize(
        PipeType* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void PipeType_finalize_ex(
        PipeType* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        DataTypes::PipeType_finalize_w_params(
            sample,&deallocParams);
    }

    void PipeType_finalize_w_params(
        PipeType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void PipeType_finalize_optional_members(
        PipeType* sample, RTIBool deletePointers)
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

    RTIBool PipeType_copy(
        PipeType* dst,
        const PipeType* src)
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
    * Configure and implement 'PipeType' sequence class.
    */
    #define T PipeType
    #define TSeq PipeTypeSeq

    #define T_initialize_w_params DataTypes::PipeType_initialize_w_params

    #define T_finalize_w_params   DataTypes::PipeType_finalize_w_params
    #define T_copy       DataTypes::PipeType_copy

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
    const char *ObjectiveTYPENAME = "DataTypes::Objective";

    DDS_TypeCode* Objective_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member Objective_g_tc_members[6]=
        {

            {
                (char *)"None",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                None, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"Casing",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Casing, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"CleaningHole",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                CleaningHole, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"Drilling",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Drilling, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"AutoReaming",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                AutoReaming, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }, 
            {
                (char *)"Tripping",/* Member name */
                {
                    0, /* Ignored */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                Tripping, 
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PRIVATE_MEMBER,/* Member visibility */ 

                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode Objective_g_tc =
        {{
                DDS_TK_ENUM,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Objective", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                6, /* Number of members */
                Objective_g_tc_members, /* Members */
                DDS_VM_NONE   /* Type Modifier */        
            }}; /* Type code for Objective*/

        if (is_initialized) {
            return &Objective_g_tc;
        }

        is_initialized = RTI_TRUE;

        return &Objective_g_tc;
    }

    RTIBool Objective_initialize(
        Objective* sample) {
        *sample = None;
        return RTI_TRUE;
    }

    RTIBool Objective_initialize_ex(
        Objective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return DataTypes::Objective_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Objective_initialize_w_params(
        Objective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }
        *sample = None;
        return RTI_TRUE;
    }

    void Objective_finalize(
        Objective* sample)
    {

        if (sample==NULL) {
            return;
        }
    }

    void Objective_finalize_ex(
        Objective* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        DataTypes::Objective_finalize_w_params(
            sample,&deallocParams);
    }

    void Objective_finalize_w_params(
        Objective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

    }

    void Objective_finalize_optional_members(
        Objective* sample, RTIBool deletePointers)
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

    RTIBool Objective_copy(
        Objective* dst,
        const Objective* src)
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
    * Configure and implement 'Objective' sequence class.
    */
    #define T Objective
    #define TSeq ObjectiveSeq

    #define T_initialize_w_params DataTypes::Objective_initialize_w_params

    #define T_finalize_w_params   DataTypes::Objective_finalize_w_params
    #define T_copy       DataTypes::Objective_copy

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
} /* namespace DataTypes  */

