

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_setpoints.idl using "rtiddsgen".
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

#include "drilling_setpoints.h"

#include <new>

namespace process {
    namespace plan {

        /* ========================================================================= */
        const char *DrillingSetpointsTYPENAME = "process::plan::DrillingSetpoints";

        DDS_TypeCode* DrillingSetpoints_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillingSetpoints_g_tc_members[13]=
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"startDepth",/* Member name */
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
                    (char *)"endDepth",/* Member name */
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
                    (char *)"ropMin",/* Member name */
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
                    (char *)"ropMax",/* Member name */
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
                    (char *)"wobMin",/* Member name */
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
                    (char *)"wobMax",/* Member name */
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
                    (char *)"deltaPMin",/* Member name */
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
                    (char *)"deltaPMax",/* Member name */
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
                    (char *)"torqueMin",/* Member name */
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
                    (char *)"torqueMax",/* Member name */
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
                    (char *)"rotateMin",/* Member name */
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
                    (char *)"rotateMax",/* Member name */
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
                }
            };

            static DDS_TypeCode DrillingSetpoints_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"process::plan::DrillingSetpoints", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    13, /* Number of members */
                    DrillingSetpoints_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for DrillingSetpoints*/

            if (is_initialized) {
                return &DrillingSetpoints_g_tc;
            }

            DrillingSetpoints_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            DrillingSetpoints_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            DrillingSetpoints_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &DrillingSetpoints_g_tc;
        }

        RTIBool DrillingSetpoints_initialize(
            DrillingSetpoints* sample) {
            return process::plan::DrillingSetpoints_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillingSetpoints_initialize_ex(
            DrillingSetpoints* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return process::plan::DrillingSetpoints_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillingSetpoints_initialize_w_params(
            DrillingSetpoints* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!DataTypes::Uuid_initialize_w_params(&sample->id,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->startDepth)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->endDepth)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->ropMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->ropMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->wobMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->wobMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->deltaPMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->deltaPMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->torqueMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->torqueMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->rotateMin)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->rotateMax)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void DrillingSetpoints_finalize(
            DrillingSetpoints* sample)
        {

            process::plan::DrillingSetpoints_finalize_ex(sample,RTI_TRUE);
        }

        void DrillingSetpoints_finalize_ex(
            DrillingSetpoints* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            process::plan::DrillingSetpoints_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillingSetpoints_finalize_w_params(
            DrillingSetpoints* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

        }

        void DrillingSetpoints_finalize_optional_members(
            DrillingSetpoints* sample, RTIBool deletePointers)
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

            DataTypes::Uuid_finalize_optional_members(&sample->id, deallocParams->delete_pointers);
        }

        RTIBool DrillingSetpoints_copy(
            DrillingSetpoints* dst,
            const DrillingSetpoints* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->startDepth, &src->startDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->endDepth, &src->endDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ropMin, &src->ropMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ropMax, &src->ropMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobMin, &src->wobMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobMax, &src->wobMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->deltaPMin, &src->deltaPMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->deltaPMax, &src->deltaPMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueMin, &src->torqueMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueMax, &src->torqueMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->rotateMin, &src->rotateMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->rotateMax, &src->rotateMax)) { 
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
        * Configure and implement 'DrillingSetpoints' sequence class.
        */
        #define T DrillingSetpoints
        #define TSeq DrillingSetpointsSeq

        #define T_initialize_w_params process::plan::DrillingSetpoints_initialize_w_params

        #define T_finalize_w_params   process::plan::DrillingSetpoints_finalize_w_params
        #define T_copy       process::plan::DrillingSetpoints_copy

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
    } /* namespace plan  */
} /* namespace process  */

