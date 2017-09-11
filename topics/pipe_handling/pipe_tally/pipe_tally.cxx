

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pipe_tally.idl using "rtiddsgen".
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

#include "pipe_tally.h"

#include <new>

namespace nec {
    namespace process {

        /* ========================================================================= */
        const char *PipeTallyStateTYPENAME = "nec::process::PipeTallyState";

        DDS_TypeCode* PipeTallyState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode PipeTallyState_g_tc_serialNumber_string = DDS_INITIALIZE_STRING_TYPECODE((255));
            static DDS_TypeCode PipeTallyState_g_tc_description_string = DDS_INITIALIZE_STRING_TYPECODE((255));
            static DDS_TypeCode_Member PipeTallyState_g_tc_members[15]=
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
                    (char *)"serialNumber",/* Member name */
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
                    (char *)"jointNumber",/* Member name */
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
                    (char *)"standNumber",/* Member name */
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
                    (char *)"weight",/* Member name */
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
                    (char *)"outerDiameter",/* Member name */
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
                    (char *)"innerDiameter",/* Member name */
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
                    (char *)"kellyDown",/* Member name */
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
                    (char *)"length",/* Member name */
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
                    (char *)"pipeLength",/* Member name */
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
                    (char *)"stringLength",/* Member name */
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
                    (char *)"description",/* Member name */
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
                    (char *)"pipeType",/* Member name */
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
                }
            };

            static DDS_TypeCode PipeTallyState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::PipeTallyState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    15, /* Number of members */
                    PipeTallyState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for PipeTallyState*/

            if (is_initialized) {
                return &PipeTallyState_g_tc;
            }

            PipeTallyState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            PipeTallyState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            PipeTallyState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            PipeTallyState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&PipeTallyState_g_tc_serialNumber_string;

            PipeTallyState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

            PipeTallyState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

            PipeTallyState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PipeTallyState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PipeTallyState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PipeTallyState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PipeTallyState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PipeTallyState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PipeTallyState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            PipeTallyState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&PipeTallyState_g_tc_description_string;

            PipeTallyState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)DataTypes::PipeType_get_typecode();

            is_initialized = RTI_TRUE;

            return &PipeTallyState_g_tc;
        }

        RTIBool PipeTallyState_initialize(
            PipeTallyState* sample) {
            return nec::process::PipeTallyState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool PipeTallyState_initialize_ex(
            PipeTallyState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::PipeTallyState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PipeTallyState_initialize_w_params(
            PipeTallyState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if (!DataTypes::Uuid_initialize_w_params(&sample->objectiveId,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            if (allocParams->allocate_memory){
                sample->serialNumber= DDS_String_alloc ((255));
                if (sample->serialNumber == NULL) {
                    return RTI_FALSE;
                }

            } else {
                if (sample->serialNumber!= NULL) { 
                    sample->serialNumber[0] = '\0';
                }
            }

            if (!RTICdrType_initUnsignedLong(&sample->jointNumber)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initUnsignedLong(&sample->standNumber)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->weight)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->outerDiameter)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->innerDiameter)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->kellyDown)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->length)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->pipeLength)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->stringLength)) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory){
                sample->description= DDS_String_alloc ((255));
                if (sample->description == NULL) {
                    return RTI_FALSE;
                }

            } else {
                if (sample->description!= NULL) { 
                    sample->description[0] = '\0';
                }
            }

            if (!DataTypes::PipeType_initialize_w_params(&sample->pipeType,
            allocParams)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        void PipeTallyState_finalize(
            PipeTallyState* sample)
        {

            nec::process::PipeTallyState_finalize_ex(sample,RTI_TRUE);
        }

        void PipeTallyState_finalize_ex(
            PipeTallyState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::PipeTallyState_finalize_w_params(
                sample,&deallocParams);
        }

        void PipeTallyState_finalize_w_params(
            PipeTallyState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Uuid_finalize_w_params(&sample->objectiveId,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            if (sample->serialNumber != NULL) {
                DDS_String_free(sample->serialNumber);
                sample->serialNumber=NULL;

            }

            if (sample->description != NULL) {
                DDS_String_free(sample->description);
                sample->description=NULL;

            }
            DataTypes::PipeType_finalize_w_params(&sample->pipeType,deallocParams);

        }

        void PipeTallyState_finalize_optional_members(
            PipeTallyState* sample, RTIBool deletePointers)
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
            DataTypes::PipeType_finalize_optional_members(&sample->pipeType, deallocParams->delete_pointers);
        }

        RTIBool PipeTallyState_copy(
            PipeTallyState* dst,
            const PipeTallyState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Uuid_copy(
                    &dst->objectiveId,(const DataTypes::Uuid*)&src->objectiveId)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyStringEx (
                    &dst->serialNumber, src->serialNumber, 
                    (255) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyUnsignedLong (
                    &dst->jointNumber, &src->jointNumber)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyUnsignedLong (
                    &dst->standNumber, &src->standNumber)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->weight, &src->weight)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->outerDiameter, &src->outerDiameter)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->innerDiameter, &src->innerDiameter)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->kellyDown, &src->kellyDown)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->length, &src->length)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->pipeLength, &src->pipeLength)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->stringLength, &src->stringLength)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->description, src->description, 
                    (255) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::PipeType_copy(
                    &dst->pipeType,(const DataTypes::PipeType*)&src->pipeType)) {
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
        * Configure and implement 'PipeTallyState' sequence class.
        */
        #define T PipeTallyState
        #define TSeq PipeTallyStateSeq

        #define T_initialize_w_params nec::process::PipeTallyState_initialize_w_params

        #define T_finalize_w_params   nec::process::PipeTallyState_finalize_w_params
        #define T_copy       nec::process::PipeTallyState_copy

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

