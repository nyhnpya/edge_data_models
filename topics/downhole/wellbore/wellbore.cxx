

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
        const char *WellboreTYPENAME = "nec::process::Wellbore";

        DDS_TypeCode* Wellbore_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member Wellbore_g_tc_members[7]=
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

            static DDS_TypeCode Wellbore_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::Wellbore", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    7, /* Number of members */
                    Wellbore_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for Wellbore*/

            if (is_initialized) {
                return &Wellbore_g_tc;
            }

            Wellbore_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            Wellbore_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            Wellbore_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            Wellbore_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Wellbore_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Wellbore_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Wellbore_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &Wellbore_g_tc;
        }

        RTIBool Wellbore_initialize(
            Wellbore* sample) {
            return nec::process::Wellbore_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool Wellbore_initialize_ex(
            Wellbore* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::Wellbore_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool Wellbore_initialize_w_params(
            Wellbore* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        void Wellbore_finalize(
            Wellbore* sample)
        {

            nec::process::Wellbore_finalize_ex(sample,RTI_TRUE);
        }

        void Wellbore_finalize_ex(
            Wellbore* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::Wellbore_finalize_w_params(
                sample,&deallocParams);
        }

        void Wellbore_finalize_w_params(
            Wellbore* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }
            if (deallocParams) {} /* To avoid warnings */

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        }

        void Wellbore_finalize_optional_members(
            Wellbore* sample, RTIBool deletePointers)
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

        RTIBool Wellbore_copy(
            Wellbore* dst,
            const Wellbore* src)
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
        * Configure and implement 'Wellbore' sequence class.
        */
        #define T Wellbore
        #define TSeq WellboreSeq
        #define T_initialize_w_params nec::process::Wellbore_initialize_w_params
        #define T_finalize_w_params   nec::process::Wellbore_finalize_w_params
        #define T_copy       nec::process::Wellbore_copy

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

