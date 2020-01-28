

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

#include "base_data_types.h"

#ifndef NDDS_STANDALONE_TYPE
#include "base_data_typesPlugin.h"
#endif

#include <new>

namespace DataTypes {

    /* ========================================================================= */

    #ifndef NDDS_STANDALONE_TYPE
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
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for  Uuid */

        if (is_initialized) {
            return &Uuid_g_tc;
        }

        Uuid_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        Uuid_g_tc._data._typeCode =  (RTICdrTypeCode *)&Uuid_g_tc_string;

        /* Initialize the values for member annotations. */
        Uuid_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
        Uuid_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

        Uuid_g_tc._data._sampleAccessInfo =
        Uuid_get_sample_access_info();
        Uuid_g_tc._data._typePlugin =
        Uuid_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Uuid_g_tc;
    }

    #define TSeq UuidSeq
    #define T Uuid
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Uuid_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Uuid_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(UuidSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            UuidSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Uuid_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Uuid_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo Uuid_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Uuid_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Uuid_g_sampleAccessInfo;
        }

        Uuid_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        Uuid_g_sampleAccessInfo.memberAccessInfos = 
        Uuid_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Uuid);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                Uuid_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                Uuid_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Uuid_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Uuid_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Uuid_get_member_value_pointer;

        Uuid_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Uuid_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Uuid_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Uuid_g_typePlugin = 
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
            DataTypes::Uuid_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            DataTypes::Uuid_finalize_w_return,
            NULL
        };

        return &Uuid_g_typePlugin;
    }
    #endif

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

        if (allocParams->allocate_memory) {
            (*sample) = DDS_String_alloc((36));
            RTICdrType_copyStringEx(
                &(*sample),
                "",
                (36),
                RTI_FALSE);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        } else {
            if ((*sample) != NULL) {
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (36),
                    RTI_FALSE);
                if ((*sample) == NULL) {
                    return RTI_FALSE;
                }
            }
        }

        return RTI_TRUE;
    }

    RTIBool Uuid_finalize_w_return(
        Uuid* sample)
    {
        DataTypes::Uuid_finalize_ex(sample, RTI_TRUE);

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

        } catch (const std::bad_alloc&) {
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

    #ifndef NDDS_STANDALONE_TYPE
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode Time_g_tc =
        {{
                DDS_TK_STRUCT, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Time", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                Time_g_tc_members, /* Members */
                DDS_VM_NONE, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for Time*/

        if (is_initialized) {
            return &Time_g_tc;
        }

        Time_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        Time_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
        Time_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;

        /* Initialize the values for member annotations. */
        Time_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
        Time_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
        Time_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
        Time_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
        Time_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
        Time_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

        Time_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
        Time_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
        Time_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
        Time_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
        Time_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
        Time_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

        Time_g_tc._data._sampleAccessInfo =
        Time_get_sample_access_info();
        Time_g_tc._data._typePlugin =
        Time_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Time_g_tc;
    }

    #define TSeq TimeSeq
    #define T Time
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Time_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Time_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(TimeSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            TimeSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Time_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Time_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        DataTypes::Time *sample;

        static RTIXCdrMemberAccessInfo Time_g_memberAccessInfos[2] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Time_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Time_g_sampleAccessInfo;
        }

        RTIXCdrHeap_allocateStruct(
            &sample, 
            DataTypes::Time);
        if (sample == NULL) {
            return NULL;
        }

        Time_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->sec - (char *)sample);

        Time_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
        (RTIXCdrUnsignedLong) ((char *)&sample->nanosec - (char *)sample);

        Time_g_sampleAccessInfo.memberAccessInfos = 
        Time_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Time);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                Time_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                Time_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Time_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Time_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Time_get_member_value_pointer;

        Time_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        RTIXCdrHeap_freeStruct(sample);
        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Time_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Time_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Time_g_typePlugin = 
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
            DataTypes::Time_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            DataTypes::Time_finalize_w_return,
            NULL
        };

        return &Time_g_typePlugin;
    }
    #endif

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

        sample->sec = 0;

        sample->nanosec = 0u;

        return RTI_TRUE;
    }

    RTIBool Time_finalize_w_return(
        Time* sample)
    {
        DataTypes::Time_finalize_ex(sample, RTI_TRUE);

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

        } catch (const std::bad_alloc&) {
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

    #ifndef NDDS_STANDALONE_TYPE
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode Priority_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Priority", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                Priority_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for Priority*/

        if (is_initialized) {
            return &Priority_g_tc;
        }

        Priority_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        Priority_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        Priority_g_tc._data._annotations._defaultValue._u.long_value = 0;

        Priority_g_tc._data._sampleAccessInfo =
        Priority_get_sample_access_info();
        Priority_g_tc._data._typePlugin =
        Priority_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Priority_g_tc;
    }

    #define TSeq PrioritySeq
    #define T Priority
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Priority_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Priority_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(PrioritySeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            PrioritySeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Priority_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Priority_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo Priority_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Priority_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Priority_g_sampleAccessInfo;
        }

        Priority_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        Priority_g_sampleAccessInfo.memberAccessInfos = 
        Priority_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Priority);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                Priority_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                Priority_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Priority_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Priority_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Priority_get_member_value_pointer;

        Priority_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Priority_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Priority_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Priority_g_typePlugin = 
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
            DataTypes::Priority_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            DataTypes::Priority_finalize_w_return,
            NULL
        };

        return &Priority_g_typePlugin;
    }
    #endif

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

    RTIBool Priority_finalize_w_return(
        Priority* sample)
    {
        if (sample) {} /* To avoid warnings */

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

        } catch (const std::bad_alloc&) {
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

    #ifndef NDDS_STANDALONE_TYPE
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode SurveyQuality_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::SurveyQuality", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                SurveyQuality_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for SurveyQuality*/

        if (is_initialized) {
            return &SurveyQuality_g_tc;
        }

        SurveyQuality_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        SurveyQuality_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        SurveyQuality_g_tc._data._annotations._defaultValue._u.long_value = 0;

        SurveyQuality_g_tc._data._sampleAccessInfo =
        SurveyQuality_get_sample_access_info();
        SurveyQuality_g_tc._data._typePlugin =
        SurveyQuality_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &SurveyQuality_g_tc;
    }

    #define TSeq SurveyQualitySeq
    #define T SurveyQuality
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *SurveyQuality_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo SurveyQuality_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(SurveyQualitySeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            SurveyQualitySeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &SurveyQuality_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *SurveyQuality_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo SurveyQuality_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo SurveyQuality_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &SurveyQuality_g_sampleAccessInfo;
        }

        SurveyQuality_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        SurveyQuality_g_sampleAccessInfo.memberAccessInfos = 
        SurveyQuality_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(SurveyQuality);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                SurveyQuality_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                SurveyQuality_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        SurveyQuality_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        SurveyQuality_g_sampleAccessInfo.getMemberValuePointerFcn = 
        SurveyQuality_get_member_value_pointer;

        SurveyQuality_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &SurveyQuality_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *SurveyQuality_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin SurveyQuality_g_typePlugin = 
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
            DataTypes::SurveyQuality_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            DataTypes::SurveyQuality_finalize_w_return,
            NULL
        };

        return &SurveyQuality_g_typePlugin;
    }
    #endif

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

    RTIBool SurveyQuality_finalize_w_return(
        SurveyQuality* sample)
    {
        if (sample) {} /* To avoid warnings */

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

        } catch (const std::bad_alloc&) {
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

    #ifndef NDDS_STANDALONE_TYPE
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode Status_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Status", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                Status_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for Status*/

        if (is_initialized) {
            return &Status_g_tc;
        }

        Status_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        Status_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        Status_g_tc._data._annotations._defaultValue._u.long_value = 0;

        Status_g_tc._data._sampleAccessInfo =
        Status_get_sample_access_info();
        Status_g_tc._data._typePlugin =
        Status_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Status_g_tc;
    }

    #define TSeq StatusSeq
    #define T Status
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Status_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Status_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(StatusSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            StatusSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Status_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Status_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo Status_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Status_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Status_g_sampleAccessInfo;
        }

        Status_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        Status_g_sampleAccessInfo.memberAccessInfos = 
        Status_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Status);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                Status_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                Status_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Status_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Status_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Status_get_member_value_pointer;

        Status_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Status_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Status_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Status_g_typePlugin = 
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
            DataTypes::Status_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            DataTypes::Status_finalize_w_return,
            NULL
        };

        return &Status_g_typePlugin;
    }
    #endif

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

    RTIBool Status_finalize_w_return(
        Status* sample)
    {
        if (sample) {} /* To avoid warnings */

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

        } catch (const std::bad_alloc&) {
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

    #ifndef NDDS_STANDALONE_TYPE
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode PipeType_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::PipeType", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                3, /* Number of members */
                PipeType_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for PipeType*/

        if (is_initialized) {
            return &PipeType_g_tc;
        }

        PipeType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        PipeType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        PipeType_g_tc._data._annotations._defaultValue._u.long_value = 0;

        PipeType_g_tc._data._sampleAccessInfo =
        PipeType_get_sample_access_info();
        PipeType_g_tc._data._typePlugin =
        PipeType_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &PipeType_g_tc;
    }

    #define TSeq PipeTypeSeq
    #define T PipeType
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *PipeType_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo PipeType_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(PipeTypeSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            PipeTypeSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &PipeType_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *PipeType_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo PipeType_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo PipeType_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &PipeType_g_sampleAccessInfo;
        }

        PipeType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        PipeType_g_sampleAccessInfo.memberAccessInfos = 
        PipeType_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(PipeType);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                PipeType_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                PipeType_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        PipeType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        PipeType_g_sampleAccessInfo.getMemberValuePointerFcn = 
        PipeType_get_member_value_pointer;

        PipeType_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &PipeType_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *PipeType_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin PipeType_g_typePlugin = 
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
            DataTypes::PipeType_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            DataTypes::PipeType_finalize_w_return,
            NULL
        };

        return &PipeType_g_typePlugin;
    }
    #endif

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

    RTIBool PipeType_finalize_w_return(
        PipeType* sample)
    {
        if (sample) {} /* To avoid warnings */

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

        } catch (const std::bad_alloc&) {
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

    #ifndef NDDS_STANDALONE_TYPE
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
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
                NULL, /* Ignored */
                RTICdrTypeCodeAnnotations_INITIALIZER
            }
        };

        static DDS_TypeCode Objective_g_tc =
        {{
                DDS_TK_ENUM, /* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"DataTypes::Objective", /* Name */
                NULL,     /* Base class type code is assigned later */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                6, /* Number of members */
                Objective_g_tc_members, /* Members */
                DDS_VM_NONE, /* Type Modifier */
                RTICdrTypeCodeAnnotations_INITIALIZER,
                DDS_BOOLEAN_TRUE, /* _isCopyable */
                NULL, /* _sampleAccessInfo: assigned later */
                NULL /* _typePlugin: assigned later */
            }}; /* Type code for Objective*/

        if (is_initialized) {
            return &Objective_g_tc;
        }

        Objective_g_tc._data._annotations._allowedDataRepresentationMask = 5;

        /* Initialize the values for annotations. */
        Objective_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
        Objective_g_tc._data._annotations._defaultValue._u.long_value = 0;

        Objective_g_tc._data._sampleAccessInfo =
        Objective_get_sample_access_info();
        Objective_g_tc._data._typePlugin =
        Objective_get_type_plugin_info();    

        is_initialized = RTI_TRUE;

        return &Objective_g_tc;
    }

    #define TSeq ObjectiveSeq
    #define T Objective
    #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
    #undef T
    #undef TSeq

    RTIXCdrSampleAccessInfo *Objective_get_sample_seq_access_info()
    {
        static RTIXCdrSampleAccessInfo Objective_g_seqSampleAccessInfo = {
            RTI_XCDR_TYPE_BINDING_CPP, \
            {sizeof(ObjectiveSeq),0,0,0}, \
            RTI_XCDR_FALSE, \
            DDS_Sequence_get_member_value_pointer, \
            ObjectiveSeq_set_member_element_count, \
            NULL, \
            NULL, \
            NULL \
        };

        return &Objective_g_seqSampleAccessInfo;
    }

    RTIXCdrSampleAccessInfo *Objective_get_sample_access_info()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static RTIXCdrMemberAccessInfo Objective_g_memberAccessInfos[1] =
        {RTIXCdrMemberAccessInfo_INITIALIZER};

        static RTIXCdrSampleAccessInfo Objective_g_sampleAccessInfo = 
        RTIXCdrSampleAccessInfo_INITIALIZER;

        if (is_initialized) {
            return (RTIXCdrSampleAccessInfo*) &Objective_g_sampleAccessInfo;
        }

        Objective_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

        Objective_g_sampleAccessInfo.memberAccessInfos = 
        Objective_g_memberAccessInfos;

        {
            size_t candidateTypeSize = sizeof(Objective);

            if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                Objective_g_sampleAccessInfo.typeSize[0] =
                RTIXCdrUnsignedLong_MAX;
            } else {
                Objective_g_sampleAccessInfo.typeSize[0] =
                (RTIXCdrUnsignedLong) candidateTypeSize;
            }
        }

        Objective_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
        RTI_XCDR_TRUE;

        Objective_g_sampleAccessInfo.getMemberValuePointerFcn = 
        Objective_get_member_value_pointer;

        Objective_g_sampleAccessInfo.languageBinding = 
        RTI_XCDR_TYPE_BINDING_CPP ;

        is_initialized = RTI_TRUE;
        return (RTIXCdrSampleAccessInfo*) &Objective_g_sampleAccessInfo;
    }

    RTIXCdrTypePlugin *Objective_get_type_plugin_info()
    {
        static RTIXCdrTypePlugin Objective_g_typePlugin = 
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
            DataTypes::Objective_initialize_ex,
            NULL,
            (RTIXCdrTypePluginFinalizeSampleFunction)
            DataTypes::Objective_finalize_w_return,
            NULL
        };

        return &Objective_g_typePlugin;
    }
    #endif

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

    RTIBool Objective_finalize_w_return(
        Objective* sample)
    {
        if (sample) {} /* To avoid warnings */

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

        } catch (const std::bad_alloc&) {
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

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<DataTypes::Time>::get() 
        {
            return (const RTIXCdrTypeCode *) DataTypes::Time_get_typecode();
        }

    } 
}
#endif
