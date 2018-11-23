

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from resources.idl using "rtiddsgen".
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

#include "resources.h"

#include <new>

namespace sys {
    namespace process {

        /* ========================================================================= */
        const char *ResourcesTYPENAME = "sys::process::Resources";

        DDS_TypeCode* Resources_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode Resources_g_tc_processName_string = DDS_INITIALIZE_STRING_TYPECODE((255));
            static DDS_TypeCode Resources_g_tc_osName_string = DDS_INITIALIZE_STRING_TYPECODE((255));
            static DDS_TypeCode Resources_g_tc_appVersion_string = DDS_INITIALIZE_STRING_TYPECODE((255));
            static DDS_TypeCode_Member Resources_g_tc_members[16]=
            {

                {
                    (char *)"timestamp",/* Member name */
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
                    (char *)"processName",/* Member name */
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
                    RTI_CDR_KEY_MEMBER , /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"pid",/* Member name */
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
                    (char *)"upTime",/* Member name */
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
                    (char *)"cpuPercent",/* Member name */
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
                    (char *)"minCpuPercent",/* Member name */
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
                    (char *)"maxCpuPercent",/* Member name */
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
                    (char *)"vmPeak",/* Member name */
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
                }, 
                {
                    (char *)"vmSize",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"vmSwap",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"vmMaxSwap",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"numThreads",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"minNumThreads",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"maxNumThreads",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"osName",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"appVersion",/* Member name */
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
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode Resources_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"sys::process::Resources", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    16, /* Number of members */
                    Resources_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for Resources*/

            if (is_initialized) {
                return &Resources_g_tc;
            }

            Resources_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            Resources_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Resources_g_tc_processName_string;

            Resources_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            Resources_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Resources_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            Resources_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            Resources_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            Resources_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&Resources_g_tc_osName_string;

            Resources_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&Resources_g_tc_appVersion_string;

            is_initialized = RTI_TRUE;

            return &Resources_g_tc;
        }

        RTIBool Resources_initialize(
            Resources* sample) {
            return sys::process::Resources_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool Resources_initialize_ex(
            Resources* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return sys::process::Resources_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool Resources_initialize_w_params(
            Resources* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            if (allocParams->allocate_memory){
                sample->processName= DDS_String_alloc ((255));
                if (sample->processName == NULL) {
                    return RTI_FALSE;
                }

            } else {
                if (sample->processName!= NULL) { 
                    sample->processName[0] = '\0';
                }
            }

            if (!RTICdrType_initLong(&sample->pid)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->upTime)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->cpuPercent)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->minCpuPercent)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->maxCpuPercent)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->vmPeak)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->vmSize)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->vmSwap)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->vmMaxSwap)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initLong(&sample->numThreads)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initLong(&sample->minNumThreads)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initLong(&sample->maxNumThreads)) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory){
                sample->osName= DDS_String_alloc ((255));
                if (sample->osName == NULL) {
                    return RTI_FALSE;
                }

            } else {
                if (sample->osName!= NULL) { 
                    sample->osName[0] = '\0';
                }
            }

            if (allocParams->allocate_memory){
                sample->appVersion= DDS_String_alloc ((255));
                if (sample->appVersion == NULL) {
                    return RTI_FALSE;
                }

            } else {
                if (sample->appVersion!= NULL) { 
                    sample->appVersion[0] = '\0';
                }
            }

            return RTI_TRUE;
        }

        void Resources_finalize(
            Resources* sample)
        {

            sys::process::Resources_finalize_ex(sample,RTI_TRUE);
        }

        void Resources_finalize_ex(
            Resources* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            sys::process::Resources_finalize_w_params(
                sample,&deallocParams);
        }

        void Resources_finalize_w_params(
            Resources* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            if (sample->processName != NULL) {
                DDS_String_free(sample->processName);
                sample->processName=NULL;

            }

            if (sample->osName != NULL) {
                DDS_String_free(sample->osName);
                sample->osName=NULL;

            }
            if (sample->appVersion != NULL) {
                DDS_String_free(sample->appVersion);
                sample->appVersion=NULL;

            }
        }

        void Resources_finalize_optional_members(
            Resources* sample, RTIBool deletePointers)
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

            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        }

        RTIBool Resources_copy(
            Resources* dst,
            const Resources* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyStringEx (
                    &dst->processName, src->processName, 
                    (255) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->pid, &src->pid)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->upTime, &src->upTime)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->cpuPercent, &src->cpuPercent)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minCpuPercent, &src->minCpuPercent)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxCpuPercent, &src->maxCpuPercent)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmPeak, &src->vmPeak)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmSize, &src->vmSize)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmSwap, &src->vmSwap)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmMaxSwap, &src->vmMaxSwap)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->numThreads, &src->numThreads)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->minNumThreads, &src->minNumThreads)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->maxNumThreads, &src->maxNumThreads)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->osName, src->osName, 
                    (255) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->appVersion, src->appVersion, 
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
        * Configure and implement 'Resources' sequence class.
        */
        #define T Resources
        #define TSeq ResourcesSeq

        #define T_initialize_w_params sys::process::Resources_initialize_w_params

        #define T_finalize_w_params   sys::process::Resources_finalize_w_params
        #define T_copy       sys::process::Resources_copy

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
    } /* namespace process  */
} /* namespace sys  */

