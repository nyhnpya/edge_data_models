

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from wellbore.idl using "rtiddsgen".
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

#include "wellbore.h"

namespace nec {
    namespace process {

        /* ========================================================================= */
        const char *WellboreStateTYPENAME = "nec::process::WellboreState";

        DDS_TypeCode* WellboreState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member WellboreState_g_tc_members[7]=
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
                    (char *)"objectiveId",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"holeDepth",/* Member name */
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
                    (char *)"measuredDepth",/* Member name */
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
                    (char *)"trueVerticalDepth",/* Member name */
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
                    (char *)"bitDepth",/* Member name */
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
                }
            };

            static DDS_TypeCode WellboreState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::WellboreState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    7, /* Number of members */
                    WellboreState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for WellboreState*/

            if (is_initialized) {
                return &WellboreState_g_tc;
            }

            WellboreState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            WellboreState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            WellboreState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            WellboreState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            WellboreState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            WellboreState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            WellboreState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &WellboreState_g_tc;
        }

        RTIBool WellboreState_initialize(
            WellboreState* sample) {
            return nec::process::WellboreState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool WellboreState_initialize_ex(
            WellboreState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::WellboreState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool WellboreState_initialize_w_params(
            WellboreState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (allocParams) {} /* To avoid warnings */

            if (!DataTypes::Uuid_initialize_w_params(&sample->id,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Uuid_initialize_w_params(&sample->objectiveId,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->holeDepth)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->measuredDepth)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->trueVerticalDepth)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->bitDepth)) {
                return RTI_FALSE;
            }     

            return RTI_TRUE;
        }

        void WellboreState_finalize(
            WellboreState* sample)
        {

            nec::process::WellboreState_finalize_ex(sample,RTI_TRUE);
        }

        void WellboreState_finalize_ex(
            WellboreState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::WellboreState_finalize_w_params(
                sample,&deallocParams);
        }

        void WellboreState_finalize_w_params(
            WellboreState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }
            if (deallocParams) {} /* To avoid warnings */

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        }

        void WellboreState_finalize_optional_members(
            WellboreState* sample, RTIBool deletePointers)
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
            DataTypes::Uuid_finalize_optional_members(&sample->objectiveId, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        }

        RTIBool WellboreState_copy(
            WellboreState* dst,
            const WellboreState* src)
        {

            if (!DataTypes::Uuid_copy(
                &dst->id, &src->id)) {
                return RTI_FALSE;
            } 
            if (!DataTypes::Uuid_copy(
                &dst->objectiveId, &src->objectiveId)) {
                return RTI_FALSE;
            } 
            if (!DataTypes::Time_copy(
                &dst->timestamp, &src->timestamp)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyDouble (
                &dst->holeDepth, &src->holeDepth)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->measuredDepth, &src->measuredDepth)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->trueVerticalDepth, &src->trueVerticalDepth)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->bitDepth, &src->bitDepth)) { 
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'WellboreState' sequence class.
        */
        #define T WellboreState
        #define TSeq WellboreStateSeq
        #define T_initialize_w_params nec::process::WellboreState_initialize_w_params
        #define T_finalize_w_params   nec::process::WellboreState_finalize_w_params
        #define T_copy       nec::process::WellboreState_copy

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
} /* namespace nec  */

