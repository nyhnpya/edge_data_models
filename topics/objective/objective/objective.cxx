

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objective.idl using "rtiddsgen".
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

#include "objective.h"

namespace process {
    namespace plan {

        /* ========================================================================= */
        const char *ObjectiveStateTYPENAME = "process::plan::ObjectiveState";

        DDS_TypeCode* ObjectiveState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member ObjectiveState_g_tc_members[4]=
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
                    (char *)"parentId",/* Member name */
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
                    (char *)"objective",/* Member name */
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
                }
            };

            static DDS_TypeCode ObjectiveState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"process::plan::ObjectiveState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    4, /* Number of members */
                    ObjectiveState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for ObjectiveState*/

            if (is_initialized) {
                return &ObjectiveState_g_tc;
            }

            ObjectiveState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            ObjectiveState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            ObjectiveState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            ObjectiveState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Objective_get_typecode();

            is_initialized = RTI_TRUE;

            return &ObjectiveState_g_tc;
        }

        RTIBool ObjectiveState_initialize(
            ObjectiveState* sample) {
            return process::plan::ObjectiveState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool ObjectiveState_initialize_ex(
            ObjectiveState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return process::plan::ObjectiveState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool ObjectiveState_initialize_w_params(
            ObjectiveState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (allocParams) {} /* To avoid warnings */

            if (!DataTypes::Uuid_initialize_w_params(&sample->id,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Uuid_initialize_w_params(&sample->parentId,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Objective_initialize_w_params(&sample->objective,
            allocParams)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        void ObjectiveState_finalize(
            ObjectiveState* sample)
        {

            process::plan::ObjectiveState_finalize_ex(sample,RTI_TRUE);
        }

        void ObjectiveState_finalize_ex(
            ObjectiveState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            process::plan::ObjectiveState_finalize_w_params(
                sample,&deallocParams);
        }

        void ObjectiveState_finalize_w_params(
            ObjectiveState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }
            if (deallocParams) {} /* To avoid warnings */

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Uuid_finalize_w_params(&sample->parentId,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            DataTypes::Objective_finalize_w_params(&sample->objective,deallocParams);

        }

        void ObjectiveState_finalize_optional_members(
            ObjectiveState* sample, RTIBool deletePointers)
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
            DataTypes::Uuid_finalize_optional_members(&sample->parentId, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
            DataTypes::Objective_finalize_optional_members(&sample->objective, deallocParams->delete_pointers);
        }

        RTIBool ObjectiveState_copy(
            ObjectiveState* dst,
            const ObjectiveState* src)
        {

            if (!DataTypes::Uuid_copy(
                &dst->id, &src->id)) {
                return RTI_FALSE;
            } 
            if (!DataTypes::Uuid_copy(
                &dst->parentId, &src->parentId)) {
                return RTI_FALSE;
            } 
            if (!DataTypes::Time_copy(
                &dst->timestamp, &src->timestamp)) {
                return RTI_FALSE;
            } 
            if (!DataTypes::Objective_copy(
                &dst->objective, &src->objective)) {
                return RTI_FALSE;
            } 

            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'ObjectiveState' sequence class.
        */
        #define T ObjectiveState
        #define TSeq ObjectiveStateSeq
        #define T_initialize_w_params process::plan::ObjectiveState_initialize_w_params
        #define T_finalize_w_params   process::plan::ObjectiveState_finalize_w_params
        #define T_copy       process::plan::ObjectiveState_copy

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

