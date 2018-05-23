

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate_engineering.idl using "rtiddsgen".
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

#include "circulate_engineering.h"

#include <new>

namespace nec {
    namespace control {

        /* ========================================================================= */
        const char *PumpStateEnumTYPENAME = "nec::control::PumpStateEnum";

        DDS_TypeCode* PumpStateEnum_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member PumpStateEnum_g_tc_members[3]=
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"Run",/* Member name */
                    {
                        0, /* Ignored */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    Run, 
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PRIVATE_MEMBER,/* Member visibility */ 

                    1,
                    NULL/* Ignored */
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
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode PumpStateEnum_g_tc =
            {{
                    DDS_TK_ENUM,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::PumpStateEnum", /* Name */
                    NULL,     /* Base class type code is assigned later */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    PumpStateEnum_g_tc_members, /* Members */
                    DDS_VM_NONE   /* Type Modifier */        
                }}; /* Type code for PumpStateEnum*/

            if (is_initialized) {
                return &PumpStateEnum_g_tc;
            }

            is_initialized = RTI_TRUE;

            return &PumpStateEnum_g_tc;
        }

        RTIBool PumpStateEnum_initialize(
            PumpStateEnum* sample) {
            *sample = Available;
            return RTI_TRUE;
        }

        RTIBool PumpStateEnum_initialize_ex(
            PumpStateEnum* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::PumpStateEnum_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool PumpStateEnum_initialize_w_params(
            PumpStateEnum* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

        void PumpStateEnum_finalize(
            PumpStateEnum* sample)
        {

            if (sample==NULL) {
                return;
            }
        }

        void PumpStateEnum_finalize_ex(
            PumpStateEnum* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::PumpStateEnum_finalize_w_params(
                sample,&deallocParams);
        }

        void PumpStateEnum_finalize_w_params(
            PumpStateEnum* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void PumpStateEnum_finalize_optional_members(
            PumpStateEnum* sample, RTIBool deletePointers)
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

        RTIBool PumpStateEnum_copy(
            PumpStateEnum* dst,
            const PumpStateEnum* src)
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
        * Configure and implement 'PumpStateEnum' sequence class.
        */
        #define T PumpStateEnum
        #define TSeq PumpStateEnumSeq

        #define T_initialize_w_params nec::control::PumpStateEnum_initialize_w_params

        #define T_finalize_w_params   nec::control::PumpStateEnum_finalize_w_params
        #define T_copy       nec::control::PumpStateEnum_copy

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
        const char *MudPumpEngineeringRequestTYPENAME = "nec::control::MudPumpEngineeringRequest";

        DDS_TypeCode* MudPumpEngineeringRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode MudPumpEngineeringRequest_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((255));
            static DDS_TypeCode_Member MudPumpEngineeringRequest_g_tc_members[6]=
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
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
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
                    NULL/* Ignored */
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
                    NULL/* Ignored */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"targetState",/* Member name */
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
                    (char *)"targetVelocity",/* Member name */
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

            static DDS_TypeCode MudPumpEngineeringRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::MudPumpEngineeringRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    6, /* Number of members */
                    MudPumpEngineeringRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for MudPumpEngineeringRequest*/

            if (is_initialized) {
                return &MudPumpEngineeringRequest_g_tc;
            }

            MudPumpEngineeringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&MudPumpEngineeringRequest_g_tc_id_string;

            MudPumpEngineeringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();

            MudPumpEngineeringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            MudPumpEngineeringRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            MudPumpEngineeringRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)nec::control::PumpStateEnum_get_typecode();

            MudPumpEngineeringRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &MudPumpEngineeringRequest_g_tc;
        }

        RTIBool MudPumpEngineeringRequest_initialize(
            MudPumpEngineeringRequest* sample) {
            return nec::control::MudPumpEngineeringRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool MudPumpEngineeringRequest_initialize_ex(
            MudPumpEngineeringRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::MudPumpEngineeringRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool MudPumpEngineeringRequest_initialize_w_params(
            MudPumpEngineeringRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory){
                sample->id= DDS_String_alloc ((255));
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }

            } else {
                if (sample->id!= NULL) { 
                    sample->id[0] = '\0';
                }
            }

            if (!DataTypes::Priority_initialize_w_params(&sample->priority,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->timeNeeded,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->duration,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!nec::control::PumpStateEnum_initialize_w_params(&sample->targetState,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->targetVelocity)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void MudPumpEngineeringRequest_finalize(
            MudPumpEngineeringRequest* sample)
        {

            nec::control::MudPumpEngineeringRequest_finalize_ex(sample,RTI_TRUE);
        }

        void MudPumpEngineeringRequest_finalize_ex(
            MudPumpEngineeringRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::MudPumpEngineeringRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void MudPumpEngineeringRequest_finalize_w_params(
            MudPumpEngineeringRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            nec::control::PumpStateEnum_finalize_w_params(&sample->targetState,deallocParams);

        }

        void MudPumpEngineeringRequest_finalize_optional_members(
            MudPumpEngineeringRequest* sample, RTIBool deletePointers)
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
            nec::control::PumpStateEnum_finalize_optional_members(&sample->targetState, deallocParams->delete_pointers);
        }

        RTIBool MudPumpEngineeringRequest_copy(
            MudPumpEngineeringRequest* dst,
            const MudPumpEngineeringRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (255) + 1, RTI_FALSE)){
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
                if (!nec::control::PumpStateEnum_copy(
                    &dst->targetState,(const nec::control::PumpStateEnum*)&src->targetState)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->targetVelocity, &src->targetVelocity)) { 
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
        * Configure and implement 'MudPumpEngineeringRequest' sequence class.
        */
        #define T MudPumpEngineeringRequest
        #define TSeq MudPumpEngineeringRequestSeq

        #define T_initialize_w_params nec::control::MudPumpEngineeringRequest_initialize_w_params

        #define T_finalize_w_params   nec::control::MudPumpEngineeringRequest_finalize_w_params
        #define T_copy       nec::control::MudPumpEngineeringRequest_copy

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
        const char *MudPumpEngineeringStateTYPENAME = "nec::control::MudPumpEngineeringState";

        DDS_TypeCode* MudPumpEngineeringState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode MudPumpEngineeringState_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((255));
            static DDS_TypeCode_Member MudPumpEngineeringState_g_tc_members[9]=
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
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"actualState",/* Member name */
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
                    (char *)"actualVelocity",/* Member name */
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
                    (char *)"actualPower",/* Member name */
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
                    (char *)"minVelocity",/* Member name */
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
                    (char *)"maxVelocity",/* Member name */
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
                    (char *)"maxPower",/* Member name */
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
                    (char *)"targetState",/* Member name */
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
                    (char *)"targetVelocity",/* Member name */
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
                }
            };

            static DDS_TypeCode MudPumpEngineeringState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::MudPumpEngineeringState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    9, /* Number of members */
                    MudPumpEngineeringState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for MudPumpEngineeringState*/

            if (is_initialized) {
                return &MudPumpEngineeringState_g_tc;
            }

            MudPumpEngineeringState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&MudPumpEngineeringState_g_tc_id_string;

            MudPumpEngineeringState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)nec::control::PumpStateEnum_get_typecode();

            MudPumpEngineeringState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            MudPumpEngineeringState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            MudPumpEngineeringState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            MudPumpEngineeringState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            MudPumpEngineeringState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            MudPumpEngineeringState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)nec::control::PumpStateEnum_get_typecode();

            MudPumpEngineeringState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &MudPumpEngineeringState_g_tc;
        }

        RTIBool MudPumpEngineeringState_initialize(
            MudPumpEngineeringState* sample) {
            return nec::control::MudPumpEngineeringState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool MudPumpEngineeringState_initialize_ex(
            MudPumpEngineeringState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::MudPumpEngineeringState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool MudPumpEngineeringState_initialize_w_params(
            MudPumpEngineeringState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory){
                sample->id= DDS_String_alloc ((255));
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }

            } else {
                if (sample->id!= NULL) { 
                    sample->id[0] = '\0';
                }
            }

            if (!nec::control::PumpStateEnum_initialize_w_params(&sample->actualState,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->actualVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->actualPower)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->minVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->maxVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->maxPower)) {
                return RTI_FALSE;
            }

            if (!nec::control::PumpStateEnum_initialize_w_params(&sample->targetState,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->targetVelocity)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void MudPumpEngineeringState_finalize(
            MudPumpEngineeringState* sample)
        {

            nec::control::MudPumpEngineeringState_finalize_ex(sample,RTI_TRUE);
        }

        void MudPumpEngineeringState_finalize_ex(
            MudPumpEngineeringState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::MudPumpEngineeringState_finalize_w_params(
                sample,&deallocParams);
        }

        void MudPumpEngineeringState_finalize_w_params(
            MudPumpEngineeringState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
            nec::control::PumpStateEnum_finalize_w_params(&sample->actualState,deallocParams);

            nec::control::PumpStateEnum_finalize_w_params(&sample->targetState,deallocParams);

        }

        void MudPumpEngineeringState_finalize_optional_members(
            MudPumpEngineeringState* sample, RTIBool deletePointers)
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

            nec::control::PumpStateEnum_finalize_optional_members(&sample->actualState, deallocParams->delete_pointers);
            nec::control::PumpStateEnum_finalize_optional_members(&sample->targetState, deallocParams->delete_pointers);
        }

        RTIBool MudPumpEngineeringState_copy(
            MudPumpEngineeringState* dst,
            const MudPumpEngineeringState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (255) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!nec::control::PumpStateEnum_copy(
                    &dst->actualState,(const nec::control::PumpStateEnum*)&src->actualState)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->actualVelocity, &src->actualVelocity)) { 
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
                    &dst->maxPower, &src->maxPower)) { 
                    return RTI_FALSE;
                }
                if (!nec::control::PumpStateEnum_copy(
                    &dst->targetState,(const nec::control::PumpStateEnum*)&src->targetState)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->targetVelocity, &src->targetVelocity)) { 
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
        * Configure and implement 'MudPumpEngineeringState' sequence class.
        */
        #define T MudPumpEngineeringState
        #define TSeq MudPumpEngineeringStateSeq

        #define T_initialize_w_params nec::control::MudPumpEngineeringState_initialize_w_params

        #define T_finalize_w_params   nec::control::MudPumpEngineeringState_finalize_w_params
        #define T_copy       nec::control::MudPumpEngineeringState_copy

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
        const char *CirculateEngineeringRequestTYPENAME = "nec::control::CirculateEngineeringRequest";

        DDS_TypeCode* CirculateEngineeringRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode CirculateEngineeringRequest_g_tc_targetPumps_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((nec::control::MaxNumberOfPumps)),NULL);
            static DDS_TypeCode_Member CirculateEngineeringRequest_g_tc_members[2]=
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
                    (char *)"targetPumps",/* Member name */
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

            static DDS_TypeCode CirculateEngineeringRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::CirculateEngineeringRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    2, /* Number of members */
                    CirculateEngineeringRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for CirculateEngineeringRequest*/

            if (is_initialized) {
                return &CirculateEngineeringRequest_g_tc;
            }

            CirculateEngineeringRequest_g_tc_targetPumps_sequence._data._typeCode = (RTICdrTypeCode *)nec::control::MudPumpEngineeringRequest_get_typecode();

            CirculateEngineeringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            CirculateEngineeringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& CirculateEngineeringRequest_g_tc_targetPumps_sequence;

            is_initialized = RTI_TRUE;

            return &CirculateEngineeringRequest_g_tc;
        }

        RTIBool CirculateEngineeringRequest_initialize(
            CirculateEngineeringRequest* sample) {
            return nec::control::CirculateEngineeringRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool CirculateEngineeringRequest_initialize_ex(
            CirculateEngineeringRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::CirculateEngineeringRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool CirculateEngineeringRequest_initialize_w_params(
            CirculateEngineeringRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            void* buffer = NULL;
            if (buffer) {} /* To avoid warnings */

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
            if (allocParams->allocate_memory) {
                nec::control::MudPumpEngineeringRequestSeq_initialize(&sample->targetPumps );
                nec::control::MudPumpEngineeringRequestSeq_set_element_allocation_params(&sample->targetPumps ,allocParams);
                nec::control::MudPumpEngineeringRequestSeq_set_absolute_maximum(&sample->targetPumps , ((nec::control::MaxNumberOfPumps)));
                if (!nec::control::MudPumpEngineeringRequestSeq_set_maximum(&sample->targetPumps, ((nec::control::MaxNumberOfPumps)))) {
                    return RTI_FALSE;
                }
            } else { 
                nec::control::MudPumpEngineeringRequestSeq_set_length(&sample->targetPumps, 0);
            }
            return RTI_TRUE;
        }

        void CirculateEngineeringRequest_finalize(
            CirculateEngineeringRequest* sample)
        {

            nec::control::CirculateEngineeringRequest_finalize_ex(sample,RTI_TRUE);
        }

        void CirculateEngineeringRequest_finalize_ex(
            CirculateEngineeringRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::CirculateEngineeringRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void CirculateEngineeringRequest_finalize_w_params(
            CirculateEngineeringRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            nec::control::MudPumpEngineeringRequestSeq_set_element_deallocation_params(
                &sample->targetPumps,deallocParams);
            nec::control::MudPumpEngineeringRequestSeq_finalize(&sample->targetPumps);

        }

        void CirculateEngineeringRequest_finalize_optional_members(
            CirculateEngineeringRequest* sample, RTIBool deletePointers)
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
            {
                DDS_UnsignedLong i, length;
                length = nec::control::MudPumpEngineeringRequestSeq_get_length(
                    &sample->targetPumps);

                for (i = 0; i < length; i++) {
                    nec::control::MudPumpEngineeringRequest_finalize_optional_members(
                        nec::control::MudPumpEngineeringRequestSeq_get_reference(
                            &sample->targetPumps, i), deallocParams->delete_pointers);
                }
            }  

        }

        RTIBool CirculateEngineeringRequest_copy(
            CirculateEngineeringRequest* dst,
            const CirculateEngineeringRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
                    return RTI_FALSE;
                } 
                if (!nec::control::MudPumpEngineeringRequestSeq_copy(&dst->targetPumps ,
                &src->targetPumps )) {
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
        * Configure and implement 'CirculateEngineeringRequest' sequence class.
        */
        #define T CirculateEngineeringRequest
        #define TSeq CirculateEngineeringRequestSeq

        #define T_initialize_w_params nec::control::CirculateEngineeringRequest_initialize_w_params

        #define T_finalize_w_params   nec::control::CirculateEngineeringRequest_finalize_w_params
        #define T_copy       nec::control::CirculateEngineeringRequest_copy

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
        const char *CirculateEngineeringStateTYPENAME = "nec::control::CirculateEngineeringState";

        DDS_TypeCode* CirculateEngineeringState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode CirculateEngineeringState_g_tc_actualPumps_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((nec::control::MaxNumberOfPumps)),NULL);
            static DDS_TypeCode_Member CirculateEngineeringState_g_tc_members[4]=
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
                    (char *)"actualPumps",/* Member name */
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

            static DDS_TypeCode CirculateEngineeringState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::CirculateEngineeringState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    4, /* Number of members */
                    CirculateEngineeringState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for CirculateEngineeringState*/

            if (is_initialized) {
                return &CirculateEngineeringState_g_tc;
            }

            CirculateEngineeringState_g_tc_actualPumps_sequence._data._typeCode = (RTICdrTypeCode *)nec::control::MudPumpEngineeringState_get_typecode();

            CirculateEngineeringState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            CirculateEngineeringState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            CirculateEngineeringState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            CirculateEngineeringState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& CirculateEngineeringState_g_tc_actualPumps_sequence;

            is_initialized = RTI_TRUE;

            return &CirculateEngineeringState_g_tc;
        }

        RTIBool CirculateEngineeringState_initialize(
            CirculateEngineeringState* sample) {
            return nec::control::CirculateEngineeringState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool CirculateEngineeringState_initialize_ex(
            CirculateEngineeringState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::CirculateEngineeringState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool CirculateEngineeringState_initialize_w_params(
            CirculateEngineeringState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            void* buffer = NULL;
            if (buffer) {} /* To avoid warnings */

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
            if (allocParams->allocate_memory) {
                nec::control::MudPumpEngineeringStateSeq_initialize(&sample->actualPumps );
                nec::control::MudPumpEngineeringStateSeq_set_element_allocation_params(&sample->actualPumps ,allocParams);
                nec::control::MudPumpEngineeringStateSeq_set_absolute_maximum(&sample->actualPumps , ((nec::control::MaxNumberOfPumps)));
                if (!nec::control::MudPumpEngineeringStateSeq_set_maximum(&sample->actualPumps, ((nec::control::MaxNumberOfPumps)))) {
                    return RTI_FALSE;
                }
            } else { 
                nec::control::MudPumpEngineeringStateSeq_set_length(&sample->actualPumps, 0);
            }
            return RTI_TRUE;
        }

        void CirculateEngineeringState_finalize(
            CirculateEngineeringState* sample)
        {

            nec::control::CirculateEngineeringState_finalize_ex(sample,RTI_TRUE);
        }

        void CirculateEngineeringState_finalize_ex(
            CirculateEngineeringState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::CirculateEngineeringState_finalize_w_params(
                sample,&deallocParams);
        }

        void CirculateEngineeringState_finalize_w_params(
            CirculateEngineeringState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            nec::control::MudPumpEngineeringStateSeq_set_element_deallocation_params(
                &sample->actualPumps,deallocParams);
            nec::control::MudPumpEngineeringStateSeq_finalize(&sample->actualPumps);

        }

        void CirculateEngineeringState_finalize_optional_members(
            CirculateEngineeringState* sample, RTIBool deletePointers)
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
            {
                DDS_UnsignedLong i, length;
                length = nec::control::MudPumpEngineeringStateSeq_get_length(
                    &sample->actualPumps);

                for (i = 0; i < length; i++) {
                    nec::control::MudPumpEngineeringState_finalize_optional_members(
                        nec::control::MudPumpEngineeringStateSeq_get_reference(
                            &sample->actualPumps, i), deallocParams->delete_pointers);
                }
            }  

        }

        RTIBool CirculateEngineeringState_copy(
            CirculateEngineeringState* dst,
            const CirculateEngineeringState* src)
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
                if (!nec::control::MudPumpEngineeringStateSeq_copy(&dst->actualPumps ,
                &src->actualPumps )) {
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
        * Configure and implement 'CirculateEngineeringState' sequence class.
        */
        #define T CirculateEngineeringState
        #define TSeq CirculateEngineeringStateSeq

        #define T_initialize_w_params nec::control::CirculateEngineeringState_initialize_w_params

        #define T_finalize_w_params   nec::control::CirculateEngineeringState_finalize_w_params
        #define T_copy       nec::control::CirculateEngineeringState_copy

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
    } /* namespace control  */
} /* namespace nec  */

