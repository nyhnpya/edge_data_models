

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ir_engineering.idl using "rtiddsgen".
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

#include "ir_engineering.h"

#include <new>

namespace nec {
    namespace control {

        /* ========================================================================= */
        const char *GripStateTYPENAME = "nec::control::GripState";

        DDS_TypeCode* GripState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member GripState_g_tc_members[2]=
            {

                {
                    (char *)"Gripped",/* Member name */
                    {
                        0, /* Ignored */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    Gripped, 
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PRIVATE_MEMBER,/* Member visibility */ 

                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"NotGripped",/* Member name */
                    {
                        0, /* Ignored */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    NotGripped, 
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PRIVATE_MEMBER,/* Member visibility */ 

                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode GripState_g_tc =
            {{
                    DDS_TK_ENUM,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::GripState", /* Name */
                    NULL,     /* Base class type code is assigned later */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    2, /* Number of members */
                    GripState_g_tc_members, /* Members */
                    DDS_VM_NONE   /* Type Modifier */        
                }}; /* Type code for GripState*/

            if (is_initialized) {
                return &GripState_g_tc;
            }

            is_initialized = RTI_TRUE;

            return &GripState_g_tc;
        }

        RTIBool GripState_initialize(
            GripState* sample) {
            *sample = Gripped;
            return RTI_TRUE;
        }

        RTIBool GripState_initialize_ex(
            GripState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::GripState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool GripState_initialize_w_params(
            GripState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }
            *sample = Gripped;
            return RTI_TRUE;
        }

        void GripState_finalize(
            GripState* sample)
        {

            if (sample==NULL) {
                return;
            }
        }

        void GripState_finalize_ex(
            GripState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::GripState_finalize_w_params(
                sample,&deallocParams);
        }

        void GripState_finalize_w_params(
            GripState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void GripState_finalize_optional_members(
            GripState* sample, RTIBool deletePointers)
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

        RTIBool GripState_copy(
            GripState* dst,
            const GripState* src)
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
        * Configure and implement 'GripState' sequence class.
        */
        #define T GripState
        #define TSeq GripStateSeq

        #define T_initialize_w_params nec::control::GripState_initialize_w_params

        #define T_finalize_w_params   nec::control::GripState_finalize_w_params
        #define T_copy       nec::control::GripState_copy

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
        const char *PositionTYPENAME = "nec::control::Position";

        DDS_TypeCode* Position_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member Position_g_tc_members[3]=
            {

                {
                    (char *)"x",/* Member name */
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
                    (char *)"y",/* Member name */
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
                    (char *)"z",/* Member name */
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
                }
            };

            static DDS_TypeCode Position_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::Position", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    Position_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for Position*/

            if (is_initialized) {
                return &Position_g_tc;
            }

            Position_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Position_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            Position_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &Position_g_tc;
        }

        RTIBool Position_initialize(
            Position* sample) {
            return nec::control::Position_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool Position_initialize_ex(
            Position* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::Position_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool Position_initialize_w_params(
            Position* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->x)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->y)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->z)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void Position_finalize(
            Position* sample)
        {

            nec::control::Position_finalize_ex(sample,RTI_TRUE);
        }

        void Position_finalize_ex(
            Position* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::Position_finalize_w_params(
                sample,&deallocParams);
        }

        void Position_finalize_w_params(
            Position* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

        }

        void Position_finalize_optional_members(
            Position* sample, RTIBool deletePointers)
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

        RTIBool Position_copy(
            Position* dst,
            const Position* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyDouble (
                    &dst->x, &src->x)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->y, &src->y)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->z, &src->z)) { 
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
        * Configure and implement 'Position' sequence class.
        */
        #define T Position
        #define TSeq PositionSeq

        #define T_initialize_w_params nec::control::Position_initialize_w_params

        #define T_finalize_w_params   nec::control::Position_finalize_w_params
        #define T_copy       nec::control::Position_copy

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
        const char *IrEngineeringStateTYPENAME = "nec::control::IrEngineeringState";

        DDS_TypeCode* IrEngineeringState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member IrEngineeringState_g_tc_members[20]=
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
                    (char *)"lowerClampState",/* Member name */
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
                    (char *)"upperClampState",/* Member name */
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
                    (char *)"spinnerClampState",/* Member name */
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
                    (char *)"systemPressureActual",/* Member name */
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
                    (char *)"makeUpTorqueActual",/* Member name */
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
                    (char *)"upperClampPositionActual",/* Member name */
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
                    (char *)"spinnerOperationActual",/* Member name */
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
                    (char *)"wrenchPositionActual",/* Member name */
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
                    (char *)"verticalVelocityMax",/* Member name */
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
                    (char *)"horizontalVelocityMax",/* Member name */
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
                    (char *)"rotationalVelocityMax",/* Member name */
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
                    (char *)"verticalVelocity",/* Member name */
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
                    (char *)"horizontalVelocity",/* Member name */
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
                }, 
                {
                    (char *)"rotationalVelocity",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"upperClampVelocity",/* Member name */
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
                    NULL/* Ignored */
                }, 
                {
                    (char *)"spinnerOperationVelocity",/* Member name */
                    {
                        18,/* Representation ID */          
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
                    (char *)"wrenchPosition",/* Member name */
                    {
                        19,/* Representation ID */          
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

            static DDS_TypeCode IrEngineeringState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::IrEngineeringState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    20, /* Number of members */
                    IrEngineeringState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for IrEngineeringState*/

            if (is_initialized) {
                return &IrEngineeringState_g_tc;
            }

            IrEngineeringState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            IrEngineeringState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();

            IrEngineeringState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            IrEngineeringState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)nec::control::GripState_get_typecode();

            IrEngineeringState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)nec::control::GripState_get_typecode();

            IrEngineeringState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)nec::control::GripState_get_typecode();

            IrEngineeringState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)nec::control::Position_get_typecode();

            IrEngineeringState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            IrEngineeringState_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)nec::control::Position_get_typecode();

            is_initialized = RTI_TRUE;

            return &IrEngineeringState_g_tc;
        }

        RTIBool IrEngineeringState_initialize(
            IrEngineeringState* sample) {
            return nec::control::IrEngineeringState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool IrEngineeringState_initialize_ex(
            IrEngineeringState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::IrEngineeringState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool IrEngineeringState_initialize_w_params(
            IrEngineeringState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
            if (!DataTypes::Status_initialize_w_params(&sample->status,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!nec::control::GripState_initialize_w_params(&sample->lowerClampState,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!nec::control::GripState_initialize_w_params(&sample->upperClampState,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!nec::control::GripState_initialize_w_params(&sample->spinnerClampState,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->systemPressureActual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->makeUpTorqueActual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->upperClampPositionActual)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->spinnerOperationActual)) {
                return RTI_FALSE;
            }

            if (!nec::control::Position_initialize_w_params(&sample->wrenchPositionActual,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->verticalVelocityMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->horizontalVelocityMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->rotationalVelocityMax)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->verticalVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->horizontalVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->rotationalVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->upperClampVelocity)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initDouble(&sample->spinnerOperationVelocity)) {
                return RTI_FALSE;
            }

            if (!nec::control::Position_initialize_w_params(&sample->wrenchPosition,
            allocParams)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        void IrEngineeringState_finalize(
            IrEngineeringState* sample)
        {

            nec::control::IrEngineeringState_finalize_ex(sample,RTI_TRUE);
        }

        void IrEngineeringState_finalize_ex(
            IrEngineeringState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::IrEngineeringState_finalize_w_params(
                sample,&deallocParams);
        }

        void IrEngineeringState_finalize_w_params(
            IrEngineeringState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            nec::control::GripState_finalize_w_params(&sample->lowerClampState,deallocParams);

            nec::control::GripState_finalize_w_params(&sample->upperClampState,deallocParams);

            nec::control::GripState_finalize_w_params(&sample->spinnerClampState,deallocParams);

            nec::control::Position_finalize_w_params(&sample->wrenchPositionActual,deallocParams);

            nec::control::Position_finalize_w_params(&sample->wrenchPosition,deallocParams);

        }

        void IrEngineeringState_finalize_optional_members(
            IrEngineeringState* sample, RTIBool deletePointers)
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
            DataTypes::Status_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
            nec::control::GripState_finalize_optional_members(&sample->lowerClampState, deallocParams->delete_pointers);
            nec::control::GripState_finalize_optional_members(&sample->upperClampState, deallocParams->delete_pointers);
            nec::control::GripState_finalize_optional_members(&sample->spinnerClampState, deallocParams->delete_pointers);
            nec::control::Position_finalize_optional_members(&sample->wrenchPositionActual, deallocParams->delete_pointers);
            nec::control::Position_finalize_optional_members(&sample->wrenchPosition, deallocParams->delete_pointers);
        }

        RTIBool IrEngineeringState_copy(
            IrEngineeringState* dst,
            const IrEngineeringState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Uuid_copy(
                    &dst->id,(const DataTypes::Uuid*)&src->id)) {
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
                if (!nec::control::GripState_copy(
                    &dst->lowerClampState,(const nec::control::GripState*)&src->lowerClampState)) {
                    return RTI_FALSE;
                } 
                if (!nec::control::GripState_copy(
                    &dst->upperClampState,(const nec::control::GripState*)&src->upperClampState)) {
                    return RTI_FALSE;
                } 
                if (!nec::control::GripState_copy(
                    &dst->spinnerClampState,(const nec::control::GripState*)&src->spinnerClampState)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->systemPressureActual, &src->systemPressureActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->makeUpTorqueActual, &src->makeUpTorqueActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->upperClampPositionActual, &src->upperClampPositionActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->spinnerOperationActual, &src->spinnerOperationActual)) { 
                    return RTI_FALSE;
                }
                if (!nec::control::Position_copy(
                    &dst->wrenchPositionActual,(const nec::control::Position*)&src->wrenchPositionActual)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->verticalVelocityMax, &src->verticalVelocityMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->horizontalVelocityMax, &src->horizontalVelocityMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->rotationalVelocityMax, &src->rotationalVelocityMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->verticalVelocity, &src->verticalVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->horizontalVelocity, &src->horizontalVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->rotationalVelocity, &src->rotationalVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->upperClampVelocity, &src->upperClampVelocity)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->spinnerOperationVelocity, &src->spinnerOperationVelocity)) { 
                    return RTI_FALSE;
                }
                if (!nec::control::Position_copy(
                    &dst->wrenchPosition,(const nec::control::Position*)&src->wrenchPosition)) {
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
        * Configure and implement 'IrEngineeringState' sequence class.
        */
        #define T IrEngineeringState
        #define TSeq IrEngineeringStateSeq

        #define T_initialize_w_params nec::control::IrEngineeringState_initialize_w_params

        #define T_finalize_w_params   nec::control::IrEngineeringState_finalize_w_params
        #define T_copy       nec::control::IrEngineeringState_copy

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

