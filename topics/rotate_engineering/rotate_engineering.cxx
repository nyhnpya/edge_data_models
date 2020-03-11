

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
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

#include "rotate_engineering.h"

#ifndef NDDS_STANDALONE_TYPE
#include "rotate_engineeringPlugin.h"
#endif

#include <new>

namespace nec {

    namespace engineering {

        /* ========================================================================= */
        const char *StateTYPENAME = "nec::engineering::State";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* State_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member State_g_tc_members[3]=
            {

                {
                    (char *)"Available",/* Member name */
                    {
                        0, /* Ignored */
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    Available, 
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
                    (char *)"Unavailable",/* Member name */
                    {
                        0, /* Ignored */
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    Unavailable, 
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
                    (char *)"NotSafe",/* Member name */
                    {
                        0, /* Ignored */
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    NotSafe, 
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

            static DDS_TypeCode State_g_tc =
            {{
                    DDS_TK_ENUM, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::engineering::State", /* Name */
                    NULL,     /* Base class type code is assigned later */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    State_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Type Modifier */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for State*/

            if (is_initialized) {
                return &State_g_tc;
            }

            State_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            /* Initialize the values for annotations. */
            State_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            State_g_tc._data._annotations._defaultValue._u.long_value = 0;

            State_g_tc._data._sampleAccessInfo =
            State_get_sample_access_info();
            State_g_tc._data._typePlugin =
            State_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &State_g_tc;
        }

        #define TSeq StateSeq
        #define T State
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *State_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo State_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(StateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                StateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &State_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *State_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static RTIXCdrMemberAccessInfo State_g_memberAccessInfos[1] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo State_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &State_g_sampleAccessInfo;
            }

            State_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

            State_g_sampleAccessInfo.memberAccessInfos = 
            State_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(State);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    State_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    State_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            State_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            State_g_sampleAccessInfo.getMemberValuePointerFcn = 
            State_get_member_value_pointer;

            State_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &State_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *State_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin State_g_typePlugin = 
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
                nec::engineering::State_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::engineering::State_finalize_w_return,
                NULL
            };

            return &State_g_typePlugin;
        }
        #endif

        RTIBool State_initialize(
            State* sample) {
            *sample = Available;
            return RTI_TRUE;
        }

        RTIBool State_initialize_ex(
            State* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::engineering::State_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool State_initialize_w_params(
            State* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }
            *sample = Available;
            return RTI_TRUE;
        }

        RTIBool State_finalize_w_return(
            State* sample)
        {
            if (sample) {} /* To avoid warnings */

            return RTI_TRUE;
        }

        void State_finalize(
            State* sample)
        {

            if (sample==NULL) {
                return;
            }
        }

        void State_finalize_ex(
            State* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::engineering::State_finalize_w_params(
                sample,&deallocParams);
        }

        void State_finalize_w_params(
            State* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void State_finalize_optional_members(
            State* sample, RTIBool deletePointers)
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

        RTIBool State_copy(
            State* dst,
            const State* src)
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
        * Configure and implement 'State' sequence class.
        */
        #define T State
        #define TSeq StateSeq

        #define T_initialize_w_params nec::engineering::State_initialize_w_params

        #define T_finalize_w_params   nec::engineering::State_finalize_w_params
        #define T_copy       nec::engineering::State_copy

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
        const char *ModeTYPENAME = "nec::engineering::Mode";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* Mode_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member Mode_g_tc_members[3]=
            {

                {
                    (char *)"Locka",/* Member name */
                    {
                        0, /* Ignored */
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    Locka, 
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
                    (char *)"Remote",/* Member name */
                    {
                        0, /* Ignored */
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    Remote, 
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
                    (char *)"QuillOscillation",/* Member name */
                    {
                        0, /* Ignored */
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    QuillOscillation, 
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

            static DDS_TypeCode Mode_g_tc =
            {{
                    DDS_TK_ENUM, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::engineering::Mode", /* Name */
                    NULL,     /* Base class type code is assigned later */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    Mode_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Type Modifier */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for Mode*/

            if (is_initialized) {
                return &Mode_g_tc;
            }

            Mode_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            /* Initialize the values for annotations. */
            Mode_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            Mode_g_tc._data._annotations._defaultValue._u.long_value = 0;

            Mode_g_tc._data._sampleAccessInfo =
            Mode_get_sample_access_info();
            Mode_g_tc._data._typePlugin =
            Mode_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &Mode_g_tc;
        }

        #define TSeq ModeSeq
        #define T Mode
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *Mode_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo Mode_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(ModeSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                ModeSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &Mode_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *Mode_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static RTIXCdrMemberAccessInfo Mode_g_memberAccessInfos[1] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo Mode_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &Mode_g_sampleAccessInfo;
            }

            Mode_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

            Mode_g_sampleAccessInfo.memberAccessInfos = 
            Mode_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(Mode);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    Mode_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    Mode_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            Mode_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            Mode_g_sampleAccessInfo.getMemberValuePointerFcn = 
            Mode_get_member_value_pointer;

            Mode_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &Mode_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *Mode_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin Mode_g_typePlugin = 
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
                nec::engineering::Mode_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::engineering::Mode_finalize_w_return,
                NULL
            };

            return &Mode_g_typePlugin;
        }
        #endif

        RTIBool Mode_initialize(
            Mode* sample) {
            *sample = Locka;
            return RTI_TRUE;
        }

        RTIBool Mode_initialize_ex(
            Mode* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::engineering::Mode_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool Mode_initialize_w_params(
            Mode* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }
            *sample = Locka;
            return RTI_TRUE;
        }

        RTIBool Mode_finalize_w_return(
            Mode* sample)
        {
            if (sample) {} /* To avoid warnings */

            return RTI_TRUE;
        }

        void Mode_finalize(
            Mode* sample)
        {

            if (sample==NULL) {
                return;
            }
        }

        void Mode_finalize_ex(
            Mode* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::engineering::Mode_finalize_w_params(
                sample,&deallocParams);
        }

        void Mode_finalize_w_params(
            Mode* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void Mode_finalize_optional_members(
            Mode* sample, RTIBool deletePointers)
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

        RTIBool Mode_copy(
            Mode* dst,
            const Mode* src)
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
        * Configure and implement 'Mode' sequence class.
        */
        #define T Mode
        #define TSeq ModeSeq

        #define T_initialize_w_params nec::engineering::Mode_initialize_w_params

        #define T_finalize_w_params   nec::engineering::Mode_finalize_w_params
        #define T_copy       nec::engineering::Mode_copy

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
        const char *RotateEngineeringRequestTYPENAME = "nec::engineering::RotateEngineeringRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* RotateEngineeringRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RotateEngineeringRequest_g_tc_members[6]=
            {

                {
                    (char *)"id",/* Member name */
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
                    (char *)"priority",/* Member name */
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
                    (char *)"timeNeeded",/* Member name */
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
                    (char *)"duration",/* Member name */
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
                    (char *)"targetRate",/* Member name */
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
                    (char *)"torque",/* Member name */
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

            static DDS_TypeCode RotateEngineeringRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::engineering::RotateEngineeringRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    6, /* Number of members */
                    RotateEngineeringRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for RotateEngineeringRequest*/

            if (is_initialized) {
                return &RotateEngineeringRequest_g_tc;
            }

            RotateEngineeringRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            RotateEngineeringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            RotateEngineeringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();
            RotateEngineeringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            RotateEngineeringRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            RotateEngineeringRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            RotateEngineeringRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            RotateEngineeringRequest_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            RotateEngineeringRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            RotateEngineeringRequest_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

            RotateEngineeringRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringRequest_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringRequest_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringRequest_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringRequest_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringRequest_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringRequest_g_tc._data._sampleAccessInfo =
            RotateEngineeringRequest_get_sample_access_info();
            RotateEngineeringRequest_g_tc._data._typePlugin =
            RotateEngineeringRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &RotateEngineeringRequest_g_tc;
        }

        #define TSeq RotateEngineeringRequestSeq
        #define T RotateEngineeringRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *RotateEngineeringRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo RotateEngineeringRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(RotateEngineeringRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                RotateEngineeringRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &RotateEngineeringRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *RotateEngineeringRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::engineering::RotateEngineeringRequest *sample;

            static RTIXCdrMemberAccessInfo RotateEngineeringRequest_g_memberAccessInfos[6] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo RotateEngineeringRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &RotateEngineeringRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::engineering::RotateEngineeringRequest);
            if (sample == NULL) {
                return NULL;
            }

            RotateEngineeringRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            RotateEngineeringRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->priority - (char *)sample);

            RotateEngineeringRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timeNeeded - (char *)sample);

            RotateEngineeringRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->duration - (char *)sample);

            RotateEngineeringRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetRate - (char *)sample);

            RotateEngineeringRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torque - (char *)sample);

            RotateEngineeringRequest_g_sampleAccessInfo.memberAccessInfos = 
            RotateEngineeringRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(RotateEngineeringRequest);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    RotateEngineeringRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    RotateEngineeringRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            RotateEngineeringRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            RotateEngineeringRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            RotateEngineeringRequest_get_member_value_pointer;

            RotateEngineeringRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &RotateEngineeringRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *RotateEngineeringRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin RotateEngineeringRequest_g_typePlugin = 
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
                nec::engineering::RotateEngineeringRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::engineering::RotateEngineeringRequest_finalize_w_return,
                NULL
            };

            return &RotateEngineeringRequest_g_typePlugin;
        }
        #endif

        RTIBool RotateEngineeringRequest_initialize(
            RotateEngineeringRequest* sample) {
            return nec::engineering::RotateEngineeringRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RotateEngineeringRequest_initialize_ex(
            RotateEngineeringRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::engineering::RotateEngineeringRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RotateEngineeringRequest_initialize_w_params(
            RotateEngineeringRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            sample->priority = DataTypes::Normal;
            if (!DataTypes::Time_initialize_w_params(&sample->timeNeeded,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->duration,
            allocParams)) {
                return RTI_FALSE;
            }

            sample->targetRate = 0.0;

            sample->torque = 0.0;

            return RTI_TRUE;
        }

        RTIBool RotateEngineeringRequest_finalize_w_return(
            RotateEngineeringRequest* sample)
        {
            nec::engineering::RotateEngineeringRequest_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void RotateEngineeringRequest_finalize(
            RotateEngineeringRequest* sample)
        {

            nec::engineering::RotateEngineeringRequest_finalize_ex(sample,RTI_TRUE);
        }

        void RotateEngineeringRequest_finalize_ex(
            RotateEngineeringRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::engineering::RotateEngineeringRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void RotateEngineeringRequest_finalize_w_params(
            RotateEngineeringRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            if (sample->id != NULL) {
                DDS_String_free(sample->id);
                sample->id=NULL;

            }
            DataTypes::Priority_finalize_w_params(&sample->priority,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timeNeeded,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->duration,deallocParams);

        }

        void RotateEngineeringRequest_finalize_optional_members(
            RotateEngineeringRequest* sample, RTIBool deletePointers)
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

            DataTypes::Priority_finalize_optional_members(&sample->priority, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->timeNeeded, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->duration, deallocParams->delete_pointers);
        }

        RTIBool RotateEngineeringRequest_copy(
            RotateEngineeringRequest* dst,
            const RotateEngineeringRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Priority_copy(
                    &dst->priority,(const DataTypes::Priority*)&src->priority)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->timeNeeded,(const DataTypes::Time*)&src->timeNeeded)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->duration,(const DataTypes::Time*)&src->duration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->targetRate, &src->targetRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torque, &src->torque)) { 
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
        * Configure and implement 'RotateEngineeringRequest' sequence class.
        */
        #define T RotateEngineeringRequest
        #define TSeq RotateEngineeringRequestSeq

        #define T_initialize_w_params nec::engineering::RotateEngineeringRequest_initialize_w_params

        #define T_finalize_w_params   nec::engineering::RotateEngineeringRequest_finalize_w_params
        #define T_copy       nec::engineering::RotateEngineeringRequest_copy

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
        const char *RotateEngineeringObjectiveTYPENAME = "nec::engineering::RotateEngineeringObjective";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* RotateEngineeringObjective_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RotateEngineeringObjective_g_tc_members[4]=
            {

                {
                    (char *)"id",/* Member name */
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
                    (char *)"estimatedDuration",/* Member name */
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
                    (char *)"targetRate",/* Member name */
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
                    (char *)"targetTorque",/* Member name */
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
                }
            };

            static DDS_TypeCode RotateEngineeringObjective_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::engineering::RotateEngineeringObjective", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    4, /* Number of members */
                    RotateEngineeringObjective_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for RotateEngineeringObjective*/

            if (is_initialized) {
                return &RotateEngineeringObjective_g_tc;
            }

            RotateEngineeringObjective_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            RotateEngineeringObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            RotateEngineeringObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            RotateEngineeringObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            RotateEngineeringObjective_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            RotateEngineeringObjective_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            RotateEngineeringObjective_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringObjective_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringObjective_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringObjective_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringObjective_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringObjective_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringObjective_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringObjective_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringObjective_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringObjective_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringObjective_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringObjective_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringObjective_g_tc._data._sampleAccessInfo =
            RotateEngineeringObjective_get_sample_access_info();
            RotateEngineeringObjective_g_tc._data._typePlugin =
            RotateEngineeringObjective_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &RotateEngineeringObjective_g_tc;
        }

        #define TSeq RotateEngineeringObjectiveSeq
        #define T RotateEngineeringObjective
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *RotateEngineeringObjective_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo RotateEngineeringObjective_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(RotateEngineeringObjectiveSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                RotateEngineeringObjectiveSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &RotateEngineeringObjective_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *RotateEngineeringObjective_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::engineering::RotateEngineeringObjective *sample;

            static RTIXCdrMemberAccessInfo RotateEngineeringObjective_g_memberAccessInfos[4] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo RotateEngineeringObjective_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &RotateEngineeringObjective_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::engineering::RotateEngineeringObjective);
            if (sample == NULL) {
                return NULL;
            }

            RotateEngineeringObjective_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            RotateEngineeringObjective_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->estimatedDuration - (char *)sample);

            RotateEngineeringObjective_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetRate - (char *)sample);

            RotateEngineeringObjective_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetTorque - (char *)sample);

            RotateEngineeringObjective_g_sampleAccessInfo.memberAccessInfos = 
            RotateEngineeringObjective_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(RotateEngineeringObjective);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    RotateEngineeringObjective_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    RotateEngineeringObjective_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            RotateEngineeringObjective_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            RotateEngineeringObjective_g_sampleAccessInfo.getMemberValuePointerFcn = 
            RotateEngineeringObjective_get_member_value_pointer;

            RotateEngineeringObjective_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &RotateEngineeringObjective_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *RotateEngineeringObjective_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin RotateEngineeringObjective_g_typePlugin = 
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
                nec::engineering::RotateEngineeringObjective_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::engineering::RotateEngineeringObjective_finalize_w_return,
                NULL
            };

            return &RotateEngineeringObjective_g_typePlugin;
        }
        #endif

        RTIBool RotateEngineeringObjective_initialize(
            RotateEngineeringObjective* sample) {
            return nec::engineering::RotateEngineeringObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RotateEngineeringObjective_initialize_ex(
            RotateEngineeringObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::engineering::RotateEngineeringObjective_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RotateEngineeringObjective_initialize_w_params(
            RotateEngineeringObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
            allocParams)) {
                return RTI_FALSE;
            }

            sample->targetRate = 0.0;

            sample->targetTorque = 0.0;

            return RTI_TRUE;
        }

        RTIBool RotateEngineeringObjective_finalize_w_return(
            RotateEngineeringObjective* sample)
        {
            nec::engineering::RotateEngineeringObjective_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void RotateEngineeringObjective_finalize(
            RotateEngineeringObjective* sample)
        {

            nec::engineering::RotateEngineeringObjective_finalize_ex(sample,RTI_TRUE);
        }

        void RotateEngineeringObjective_finalize_ex(
            RotateEngineeringObjective* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::engineering::RotateEngineeringObjective_finalize_w_params(
                sample,&deallocParams);
        }

        void RotateEngineeringObjective_finalize_w_params(
            RotateEngineeringObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            if (sample->id != NULL) {
                DDS_String_free(sample->id);
                sample->id=NULL;

            }
            DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

        }

        void RotateEngineeringObjective_finalize_optional_members(
            RotateEngineeringObjective* sample, RTIBool deletePointers)
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

            DataTypes::Time_finalize_optional_members(&sample->estimatedDuration, deallocParams->delete_pointers);
        }

        RTIBool RotateEngineeringObjective_copy(
            RotateEngineeringObjective* dst,
            const RotateEngineeringObjective* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Time_copy(
                    &dst->estimatedDuration,(const DataTypes::Time*)&src->estimatedDuration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->targetRate, &src->targetRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->targetTorque, &src->targetTorque)) { 
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
        * Configure and implement 'RotateEngineeringObjective' sequence class.
        */
        #define T RotateEngineeringObjective
        #define TSeq RotateEngineeringObjectiveSeq

        #define T_initialize_w_params nec::engineering::RotateEngineeringObjective_initialize_w_params

        #define T_finalize_w_params   nec::engineering::RotateEngineeringObjective_finalize_w_params
        #define T_copy       nec::engineering::RotateEngineeringObjective_copy

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
        const char *RotateEngineeringStateTYPENAME = "nec::engineering::RotateEngineeringState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* RotateEngineeringState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RotateEngineeringState_g_tc_members[18]=
            {

                {
                    (char *)"id",/* Member name */
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
                    (char *)"status",/* Member name */
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
                    (char *)"timestamp",/* Member name */
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
                    (char *)"state",/* Member name */
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
                    (char *)"mode",/* Member name */
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
                    (char *)"actualVelocity",/* Member name */
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
                    (char *)"actualTorque",/* Member name */
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
                    (char *)"actualPosition",/* Member name */
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
                }, 
                {
                    (char *)"actualPower",/* Member name */
                    {
                        8,/* Representation ID */
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
                    (char *)"minVelocity",/* Member name */
                    {
                        9,/* Representation ID */
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
                    (char *)"maxVelocity",/* Member name */
                    {
                        10,/* Representation ID */
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
                    (char *)"minTorque",/* Member name */
                    {
                        11,/* Representation ID */
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
                    (char *)"maxTorque",/* Member name */
                    {
                        12,/* Representation ID */
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
                    (char *)"minPosition",/* Member name */
                    {
                        13,/* Representation ID */
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
                    (char *)"maxPosition",/* Member name */
                    {
                        14,/* Representation ID */
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
                    (char *)"targetVelocity",/* Member name */
                    {
                        15,/* Representation ID */
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
                    (char *)"targetTorque",/* Member name */
                    {
                        16,/* Representation ID */
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
                    (char *)"targetPosition",/* Member name */
                    {
                        17,/* Representation ID */
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

            static DDS_TypeCode RotateEngineeringState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::engineering::RotateEngineeringState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    18, /* Number of members */
                    RotateEngineeringState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for RotateEngineeringState*/

            if (is_initialized) {
                return &RotateEngineeringState_g_tc;
            }

            RotateEngineeringState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            RotateEngineeringState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            RotateEngineeringState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();
            RotateEngineeringState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            RotateEngineeringState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)nec::engineering::State_get_typecode();
            RotateEngineeringState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)nec::engineering::Mode_get_typecode();
            RotateEngineeringState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RotateEngineeringState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            RotateEngineeringState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            RotateEngineeringState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            RotateEngineeringState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            RotateEngineeringState_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

            RotateEngineeringState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            RotateEngineeringState_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

            RotateEngineeringState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            RotateEngineeringState_g_tc_members[4]._annotations._defaultValue._u.enumerated_value = 0;

            RotateEngineeringState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[15]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
            RotateEngineeringState_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RotateEngineeringState_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RotateEngineeringState_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RotateEngineeringState_g_tc._data._sampleAccessInfo =
            RotateEngineeringState_get_sample_access_info();
            RotateEngineeringState_g_tc._data._typePlugin =
            RotateEngineeringState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &RotateEngineeringState_g_tc;
        }

        #define TSeq RotateEngineeringStateSeq
        #define T RotateEngineeringState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *RotateEngineeringState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo RotateEngineeringState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(RotateEngineeringStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                RotateEngineeringStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &RotateEngineeringState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *RotateEngineeringState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::engineering::RotateEngineeringState *sample;

            static RTIXCdrMemberAccessInfo RotateEngineeringState_g_memberAccessInfos[18] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo RotateEngineeringState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &RotateEngineeringState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::engineering::RotateEngineeringState);
            if (sample == NULL) {
                return NULL;
            }

            RotateEngineeringState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->state - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualVelocity - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualTorque - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualPosition - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualPower - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minVelocity - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxVelocity - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minTorque - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxTorque - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minPosition - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxPosition - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetVelocity - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetTorque - (char *)sample);

            RotateEngineeringState_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetPosition - (char *)sample);

            RotateEngineeringState_g_sampleAccessInfo.memberAccessInfos = 
            RotateEngineeringState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(RotateEngineeringState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    RotateEngineeringState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    RotateEngineeringState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            RotateEngineeringState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            RotateEngineeringState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            RotateEngineeringState_get_member_value_pointer;

            RotateEngineeringState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &RotateEngineeringState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *RotateEngineeringState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin RotateEngineeringState_g_typePlugin = 
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
                nec::engineering::RotateEngineeringState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::engineering::RotateEngineeringState_finalize_w_return,
                NULL
            };

            return &RotateEngineeringState_g_typePlugin;
        }
        #endif

        RTIBool RotateEngineeringState_initialize(
            RotateEngineeringState* sample) {
            return nec::engineering::RotateEngineeringState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RotateEngineeringState_initialize_ex(
            RotateEngineeringState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::engineering::RotateEngineeringState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RotateEngineeringState_initialize_w_params(
            RotateEngineeringState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            sample->status = DataTypes::Fault;
            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            sample->state = nec::engineering::Available;
            sample->mode = nec::engineering::Locka;

            sample->actualVelocity = 0.0;

            sample->actualTorque = 0.0;

            sample->actualPosition = 0.0;

            sample->actualPower = 0.0;

            sample->minVelocity = 0.0;

            sample->maxVelocity = 0.0;

            sample->minTorque = 0.0;

            sample->maxTorque = 0.0;

            sample->minPosition = 0.0;

            sample->maxPosition = 0.0;

            sample->targetVelocity = 0.0;

            sample->targetTorque = 0.0;

            sample->targetPosition = 0.0;

            return RTI_TRUE;
        }

        RTIBool RotateEngineeringState_finalize_w_return(
            RotateEngineeringState* sample)
        {
            nec::engineering::RotateEngineeringState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void RotateEngineeringState_finalize(
            RotateEngineeringState* sample)
        {

            nec::engineering::RotateEngineeringState_finalize_ex(sample,RTI_TRUE);
        }

        void RotateEngineeringState_finalize_ex(
            RotateEngineeringState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::engineering::RotateEngineeringState_finalize_w_params(
                sample,&deallocParams);
        }

        void RotateEngineeringState_finalize_w_params(
            RotateEngineeringState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            if (sample->id != NULL) {
                DDS_String_free(sample->id);
                sample->id=NULL;

            }
            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            nec::engineering::State_finalize_w_params(&sample->state,deallocParams);

            nec::engineering::Mode_finalize_w_params(&sample->mode,deallocParams);

        }

        void RotateEngineeringState_finalize_optional_members(
            RotateEngineeringState* sample, RTIBool deletePointers)
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

            DataTypes::Status_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
            nec::engineering::State_finalize_optional_members(&sample->state, deallocParams->delete_pointers);
            nec::engineering::Mode_finalize_optional_members(&sample->mode, deallocParams->delete_pointers);
        }

        RTIBool RotateEngineeringState_copy(
            RotateEngineeringState* dst,
            const RotateEngineeringState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Status_copy(
                    &dst->status,(const DataTypes::Status*)&src->status)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!nec::engineering::State_copy(
                    &dst->state,(const nec::engineering::State*)&src->state)) {
                    return RTI_FALSE;
                } 
                if (!nec::engineering::Mode_copy(
                    &dst->mode,(const nec::engineering::Mode*)&src->mode)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->actualVelocity, &src->actualVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->actualTorque, &src->actualTorque)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->actualPosition, &src->actualPosition)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->actualPower, &src->actualPower)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minVelocity, &src->minVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxVelocity, &src->maxVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minTorque, &src->minTorque)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxTorque, &src->maxTorque)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minPosition, &src->minPosition)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxPosition, &src->maxPosition)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->targetVelocity, &src->targetVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->targetTorque, &src->targetTorque)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->targetPosition, &src->targetPosition)) { 
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
        * Configure and implement 'RotateEngineeringState' sequence class.
        */
        #define T RotateEngineeringState
        #define TSeq RotateEngineeringStateSeq

        #define T_initialize_w_params nec::engineering::RotateEngineeringState_initialize_w_params

        #define T_finalize_w_params   nec::engineering::RotateEngineeringState_finalize_w_params
        #define T_copy       nec::engineering::RotateEngineeringState_copy

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

    } /* namespace engineering  */

} /* namespace nec  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<nec::engineering::RotateEngineeringRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::engineering::RotateEngineeringRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::engineering::RotateEngineeringObjective>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::engineering::RotateEngineeringObjective_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::engineering::RotateEngineeringState>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::engineering::RotateEngineeringState_get_typecode();
        }

    } 
}
#endif
