

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autodriller_configuration.idl using "rtiddsgen".
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

#include "autodriller_configuration.h"

namespace nec {
    namespace control {

        /* ========================================================================= */
        const char *HmiRequestTYPENAME = "nec::control::HmiRequest";

        DDS_TypeCode* HmiRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member HmiRequest_g_tc_members[14]=
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
                    (char *)"timestamp",/* Member name */
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
                    (char *)"mode",/* Member name */
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
                    (char *)"modeController",/* Member name */
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
                    (char *)"modelTwoDifferentialPressureRequestK",/* Member name */
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
                    (char *)"modelTwoDifferentialPressureRequestTau",/* Member name */
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
                    (char *)"modelTwoRateOfPenetrationRequestK",/* Member name */
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
                    (char *)"modelTwoRateOfPenetrationRequestTau",/* Member name */
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
                    (char *)"modelTwoTorqueRequestK",/* Member name */
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
                    (char *)"modelTwoTorqueRequestTau",/* Member name */
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
                    (char *)"modelTwoWeightOnBitRequestK",/* Member name */
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
                    (char *)"modelTwoWeightOnBitRequestTau",/* Member name */
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
                    (char *)"status",/* Member name */
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
                    (char *)"tuningEnable",/* Member name */
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
                }
            };

            static DDS_TypeCode HmiRequest_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::HmiRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    14, /* Number of members */
                    HmiRequest_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for HmiRequest*/

            if (is_initialized) {
                return &HmiRequest_g_tc;
            }

            HmiRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            HmiRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            HmiRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            HmiRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiRequest_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            HmiRequest_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            is_initialized = RTI_TRUE;

            return &HmiRequest_g_tc;
        }

        RTIBool HmiRequest_initialize(
            HmiRequest* sample) {
            return nec::control::HmiRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool HmiRequest_initialize_ex(
            HmiRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::HmiRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool HmiRequest_initialize_w_params(
            HmiRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (allocParams) {} /* To avoid warnings */

            if (!DataTypes::Uuid_initialize_w_params(&sample->id,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initLong(&sample->mode)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modeController)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoDifferentialPressureRequestK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoDifferentialPressureRequestTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoRateOfPenetrationRequestK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoRateOfPenetrationRequestTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoTorqueRequestK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoTorqueRequestTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoWeightOnBitRequestK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->modelTwoWeightOnBitRequestTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initLong(&sample->status)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initBoolean(&sample->tuningEnable)) {
                return RTI_FALSE;
            }     

            return RTI_TRUE;
        }

        void HmiRequest_finalize(
            HmiRequest* sample)
        {

            nec::control::HmiRequest_finalize_ex(sample,RTI_TRUE);
        }

        void HmiRequest_finalize_ex(
            HmiRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::HmiRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void HmiRequest_finalize_w_params(
            HmiRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }
            if (deallocParams) {} /* To avoid warnings */

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        }

        void HmiRequest_finalize_optional_members(
            HmiRequest* sample, RTIBool deletePointers)
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
            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        }

        RTIBool HmiRequest_copy(
            HmiRequest* dst,
            const HmiRequest* src)
        {

            if (!DataTypes::Uuid_copy(
                &dst->id, &src->id)) {
                return RTI_FALSE;
            } 
            if (!DataTypes::Time_copy(
                &dst->timestamp, &src->timestamp)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyLong (
                &dst->mode, &src->mode)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modeController, &src->modeController)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoDifferentialPressureRequestK, &src->modelTwoDifferentialPressureRequestK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoDifferentialPressureRequestTau, &src->modelTwoDifferentialPressureRequestTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoRateOfPenetrationRequestK, &src->modelTwoRateOfPenetrationRequestK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoRateOfPenetrationRequestTau, &src->modelTwoRateOfPenetrationRequestTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoTorqueRequestK, &src->modelTwoTorqueRequestK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoTorqueRequestTau, &src->modelTwoTorqueRequestTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoWeightOnBitRequestK, &src->modelTwoWeightOnBitRequestK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->modelTwoWeightOnBitRequestTau, &src->modelTwoWeightOnBitRequestTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyLong (
                &dst->status, &src->status)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyBoolean (
                &dst->tuningEnable, &src->tuningEnable)) { 
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'HmiRequest' sequence class.
        */
        #define T HmiRequest
        #define TSeq HmiRequestSeq
        #define T_initialize_w_params nec::control::HmiRequest_initialize_w_params
        #define T_finalize_w_params   nec::control::HmiRequest_finalize_w_params
        #define T_copy       nec::control::HmiRequest_copy

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
        const char *HmiStateTYPENAME = "nec::control::HmiState";

        DDS_TypeCode* HmiState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member HmiState_g_tc_members[78]=
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
                    (char *)"timestamp",/* Member name */
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
                    (char *)"mode",/* Member name */
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
                    (char *)"modeController",/* Member name */
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
                    (char *)"pipeInnerDiameter",/* Member name */
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
                    (char *)"pipeOuterDiameter",/* Member name */
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
                    (char *)"slopeFilter",/* Member name */
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
                    (char *)"tauMax",/* Member name */
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
                    (char *)"tauMin",/* Member name */
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
                    (char *)"tauMultiplier",/* Member name */
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
                    (char *)"differentialPressureInitializeK",/* Member name */
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
                    (char *)"differentialPressureInitializeTau",/* Member name */
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
                    (char *)"differentialPressureInitializePreFilter",/* Member name */
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
                    (char *)"differentialPressureR1",/* Member name */
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
                    (char *)"differentialPressureR2",/* Member name */
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
                    (char *)"rateOfPenetrationInitializeK",/* Member name */
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
                    (char *)"rateOfPenetrationInitializeTau",/* Member name */
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
                    (char *)"rateOfPenetrationInitializePreFilter",/* Member name */
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
                    (char *)"rateOfPenetrationInitializeR1",/* Member name */
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
                    (char *)"rateOfPenetrationInitializeR2",/* Member name */
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
                }, 
                {
                    (char *)"torqueInitializeK",/* Member name */
                    {
                        20,/* Representation ID */          
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
                    (char *)"torqueInitializeTau",/* Member name */
                    {
                        21,/* Representation ID */          
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
                    (char *)"torqueInitializePreFilter",/* Member name */
                    {
                        22,/* Representation ID */          
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
                    (char *)"torqueInitializeR1",/* Member name */
                    {
                        23,/* Representation ID */          
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
                    (char *)"torqueInitializeR2",/* Member name */
                    {
                        24,/* Representation ID */          
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
                    (char *)"weightOnBitInitializeK",/* Member name */
                    {
                        25,/* Representation ID */          
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
                    (char *)"weightOnBitInitializeTau",/* Member name */
                    {
                        26,/* Representation ID */          
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
                    (char *)"weightOnBitInitializePreFilter",/* Member name */
                    {
                        27,/* Representation ID */          
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
                    (char *)"weightOnBitInitializeR1",/* Member name */
                    {
                        28,/* Representation ID */          
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
                    (char *)"weightOnBitInitializeR2",/* Member name */
                    {
                        29,/* Representation ID */          
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
                    (char *)"devMin",/* Member name */
                    {
                        30,/* Representation ID */          
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
                    (char *)"intervalMin",/* Member name */
                    {
                        31,/* Representation ID */          
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
                    (char *)"differentialPressureFilter",/* Member name */
                    {
                        32,/* Representation ID */          
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
                    (char *)"differentialPressureKcMax",/* Member name */
                    {
                        33,/* Representation ID */          
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
                    (char *)"differentialPressureKcMin",/* Member name */
                    {
                        34,/* Representation ID */          
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
                    (char *)"differentialPressureTdMax",/* Member name */
                    {
                        35,/* Representation ID */          
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
                    (char *)"differentialPressureTdMin",/* Member name */
                    {
                        36,/* Representation ID */          
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
                    (char *)"differentialPressureTiMax",/* Member name */
                    {
                        37,/* Representation ID */          
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
                    (char *)"differentialPressureTiMin",/* Member name */
                    {
                        38,/* Representation ID */          
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
                    (char *)"differentialPressureD",/* Member name */
                    {
                        39,/* Representation ID */          
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
                    (char *)"differentialPressureEps",/* Member name */
                    {
                        40,/* Representation ID */          
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
                    (char *)"differentialPressureEpsManual",/* Member name */
                    {
                        41,/* Representation ID */          
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
                    (char *)"differentialPressureF",/* Member name */
                    {
                        42,/* Representation ID */          
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
                    (char *)"rateOfPenetrationFilter",/* Member name */
                    {
                        43,/* Representation ID */          
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
                    (char *)"rateOfPenetrationKcMax",/* Member name */
                    {
                        44,/* Representation ID */          
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
                    (char *)"rateOfPenetrationKcMin",/* Member name */
                    {
                        45,/* Representation ID */          
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
                    (char *)"rateOfPenetrationTdMax",/* Member name */
                    {
                        46,/* Representation ID */          
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
                    (char *)"rateOfPenetrationTdMin",/* Member name */
                    {
                        47,/* Representation ID */          
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
                    (char *)"rateOfPenetrationTiMax",/* Member name */
                    {
                        48,/* Representation ID */          
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
                    (char *)"rateOfPenetrationTiMin",/* Member name */
                    {
                        49,/* Representation ID */          
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
                    (char *)"rateOfPenetrationD",/* Member name */
                    {
                        50,/* Representation ID */          
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
                    (char *)"rateOfPenetrationEps",/* Member name */
                    {
                        51,/* Representation ID */          
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
                    (char *)"rateOfPenetrationEpsManual",/* Member name */
                    {
                        52,/* Representation ID */          
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
                    (char *)"rateOfPenetrationF",/* Member name */
                    {
                        53,/* Representation ID */          
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
                    (char *)"weightOnBitFilter",/* Member name */
                    {
                        54,/* Representation ID */          
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
                    (char *)"weightOnBitKcMax",/* Member name */
                    {
                        55,/* Representation ID */          
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
                    (char *)"weightOnBitKcMin",/* Member name */
                    {
                        56,/* Representation ID */          
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
                    (char *)"weightOnBitTdMax",/* Member name */
                    {
                        57,/* Representation ID */          
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
                    (char *)"weightOnBitTdMin",/* Member name */
                    {
                        58,/* Representation ID */          
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
                    (char *)"weightOnBitTiMax",/* Member name */
                    {
                        59,/* Representation ID */          
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
                    (char *)"weightOnBitTiMin",/* Member name */
                    {
                        60,/* Representation ID */          
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
                    (char *)"weightOnBitD",/* Member name */
                    {
                        61,/* Representation ID */          
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
                    (char *)"weightOnBitEps",/* Member name */
                    {
                        62,/* Representation ID */          
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
                    (char *)"weightOnBitEpsManual",/* Member name */
                    {
                        63,/* Representation ID */          
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
                    (char *)"weightOnBitF",/* Member name */
                    {
                        64,/* Representation ID */          
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
                    (char *)"torqueFilter",/* Member name */
                    {
                        65,/* Representation ID */          
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
                    (char *)"torqueKcMax",/* Member name */
                    {
                        66,/* Representation ID */          
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
                    (char *)"torqueKcMin",/* Member name */
                    {
                        67,/* Representation ID */          
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
                    (char *)"torqueTdMax",/* Member name */
                    {
                        68,/* Representation ID */          
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
                    (char *)"torqueTdMin",/* Member name */
                    {
                        69,/* Representation ID */          
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
                    (char *)"torqueTiMax",/* Member name */
                    {
                        70,/* Representation ID */          
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
                    (char *)"torqueTiMin",/* Member name */
                    {
                        71,/* Representation ID */          
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
                    (char *)"torqueD",/* Member name */
                    {
                        72,/* Representation ID */          
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
                    (char *)"torqueEps",/* Member name */
                    {
                        73,/* Representation ID */          
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
                    (char *)"torqueEpsManual",/* Member name */
                    {
                        74,/* Representation ID */          
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
                    (char *)"torqueF",/* Member name */
                    {
                        75,/* Representation ID */          
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
                    (char *)"status",/* Member name */
                    {
                        76,/* Representation ID */          
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
                    (char *)"tuningEnabled",/* Member name */
                    {
                        77,/* Representation ID */          
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

            static DDS_TypeCode HmiState_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::HmiState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    78, /* Number of members */
                    HmiState_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for HmiState*/

            if (is_initialized) {
                return &HmiState_g_tc;
            }

            HmiState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

            HmiState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

            HmiState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            HmiState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            HmiState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            HmiState_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[44]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[45]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[46]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[47]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[48]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[49]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[50]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[51]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[52]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            HmiState_g_tc_members[53]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[54]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[55]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[56]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[57]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[58]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[59]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[60]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[61]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[62]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[63]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            HmiState_g_tc_members[64]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[65]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[66]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[67]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[68]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[69]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[70]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[71]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[72]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[73]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[74]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            HmiState_g_tc_members[75]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            HmiState_g_tc_members[76]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            HmiState_g_tc_members[77]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

            is_initialized = RTI_TRUE;

            return &HmiState_g_tc;
        }

        RTIBool HmiState_initialize(
            HmiState* sample) {
            return nec::control::HmiState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool HmiState_initialize_ex(
            HmiState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::HmiState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool HmiState_initialize_w_params(
            HmiState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (allocParams) {} /* To avoid warnings */

            if (!DataTypes::Uuid_initialize_w_params(&sample->id,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }

            if (!RTICdrType_initLong(&sample->mode)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initLong(&sample->modeController)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->pipeInnerDiameter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->pipeOuterDiameter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->slopeFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->tauMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->tauMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->tauMultiplier)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureInitializeK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureInitializeTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureInitializePreFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureR1)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureR2)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationInitializeK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationInitializeTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationInitializePreFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationInitializeR1)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationInitializeR2)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueInitializeK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueInitializeTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueInitializePreFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueInitializeR1)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueInitializeR2)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitInitializeK)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitInitializeTau)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitInitializePreFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitInitializeR1)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitInitializeR2)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->devMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->intervalMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureKcMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureKcMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureTdMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureTdMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureTiMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureTiMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureD)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureEps)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initBoolean(&sample->differentialPressureEpsManual)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->differentialPressureF)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationKcMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationKcMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationTdMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationTdMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationTiMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationTiMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationD)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationEps)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initBoolean(&sample->rateOfPenetrationEpsManual)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->rateOfPenetrationF)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitKcMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitKcMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitTdMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitTdMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitTiMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitTiMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitD)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitEps)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initBoolean(&sample->weightOnBitEpsManual)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->weightOnBitF)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueFilter)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueKcMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueKcMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueTdMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueTdMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueTiMax)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueTiMin)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueD)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueEps)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initBoolean(&sample->torqueEpsManual)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initDouble(&sample->torqueF)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initLong(&sample->status)) {
                return RTI_FALSE;
            }     

            if (!RTICdrType_initBoolean(&sample->tuningEnabled)) {
                return RTI_FALSE;
            }     

            return RTI_TRUE;
        }

        void HmiState_finalize(
            HmiState* sample)
        {

            nec::control::HmiState_finalize_ex(sample,RTI_TRUE);
        }

        void HmiState_finalize_ex(
            HmiState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::HmiState_finalize_w_params(
                sample,&deallocParams);
        }

        void HmiState_finalize_w_params(
            HmiState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }
            if (deallocParams) {} /* To avoid warnings */

            DataTypes::Uuid_finalize_w_params(&sample->id,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        }

        void HmiState_finalize_optional_members(
            HmiState* sample, RTIBool deletePointers)
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
            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        }

        RTIBool HmiState_copy(
            HmiState* dst,
            const HmiState* src)
        {

            if (!DataTypes::Uuid_copy(
                &dst->id, &src->id)) {
                return RTI_FALSE;
            } 
            if (!DataTypes::Time_copy(
                &dst->timestamp, &src->timestamp)) {
                return RTI_FALSE;
            } 
            if (!RTICdrType_copyLong (
                &dst->mode, &src->mode)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyLong (
                &dst->modeController, &src->modeController)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->pipeInnerDiameter, &src->pipeInnerDiameter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->pipeOuterDiameter, &src->pipeOuterDiameter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->slopeFilter, &src->slopeFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->tauMax, &src->tauMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->tauMin, &src->tauMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->tauMultiplier, &src->tauMultiplier)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureInitializeK, &src->differentialPressureInitializeK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureInitializeTau, &src->differentialPressureInitializeTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureInitializePreFilter, &src->differentialPressureInitializePreFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureR1, &src->differentialPressureR1)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureR2, &src->differentialPressureR2)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationInitializeK, &src->rateOfPenetrationInitializeK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationInitializeTau, &src->rateOfPenetrationInitializeTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationInitializePreFilter, &src->rateOfPenetrationInitializePreFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationInitializeR1, &src->rateOfPenetrationInitializeR1)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationInitializeR2, &src->rateOfPenetrationInitializeR2)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueInitializeK, &src->torqueInitializeK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueInitializeTau, &src->torqueInitializeTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueInitializePreFilter, &src->torqueInitializePreFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueInitializeR1, &src->torqueInitializeR1)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueInitializeR2, &src->torqueInitializeR2)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitInitializeK, &src->weightOnBitInitializeK)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitInitializeTau, &src->weightOnBitInitializeTau)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitInitializePreFilter, &src->weightOnBitInitializePreFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitInitializeR1, &src->weightOnBitInitializeR1)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitInitializeR2, &src->weightOnBitInitializeR2)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->devMin, &src->devMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->intervalMin, &src->intervalMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureFilter, &src->differentialPressureFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureKcMax, &src->differentialPressureKcMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureKcMin, &src->differentialPressureKcMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureTdMax, &src->differentialPressureTdMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureTdMin, &src->differentialPressureTdMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureTiMax, &src->differentialPressureTiMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureTiMin, &src->differentialPressureTiMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureD, &src->differentialPressureD)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureEps, &src->differentialPressureEps)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyBoolean (
                &dst->differentialPressureEpsManual, &src->differentialPressureEpsManual)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->differentialPressureF, &src->differentialPressureF)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationFilter, &src->rateOfPenetrationFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationKcMax, &src->rateOfPenetrationKcMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationKcMin, &src->rateOfPenetrationKcMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationTdMax, &src->rateOfPenetrationTdMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationTdMin, &src->rateOfPenetrationTdMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationTiMax, &src->rateOfPenetrationTiMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationTiMin, &src->rateOfPenetrationTiMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationD, &src->rateOfPenetrationD)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationEps, &src->rateOfPenetrationEps)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyBoolean (
                &dst->rateOfPenetrationEpsManual, &src->rateOfPenetrationEpsManual)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->rateOfPenetrationF, &src->rateOfPenetrationF)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitFilter, &src->weightOnBitFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitKcMax, &src->weightOnBitKcMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitKcMin, &src->weightOnBitKcMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitTdMax, &src->weightOnBitTdMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitTdMin, &src->weightOnBitTdMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitTiMax, &src->weightOnBitTiMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitTiMin, &src->weightOnBitTiMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitD, &src->weightOnBitD)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitEps, &src->weightOnBitEps)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyBoolean (
                &dst->weightOnBitEpsManual, &src->weightOnBitEpsManual)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->weightOnBitF, &src->weightOnBitF)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueFilter, &src->torqueFilter)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueKcMax, &src->torqueKcMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueKcMin, &src->torqueKcMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueTdMax, &src->torqueTdMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueTdMin, &src->torqueTdMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueTiMax, &src->torqueTiMax)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueTiMin, &src->torqueTiMin)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueD, &src->torqueD)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueEps, &src->torqueEps)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyBoolean (
                &dst->torqueEpsManual, &src->torqueEpsManual)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyDouble (
                &dst->torqueF, &src->torqueF)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyLong (
                &dst->status, &src->status)) { 
                return RTI_FALSE;
            }
            if (!RTICdrType_copyBoolean (
                &dst->tuningEnabled, &src->tuningEnabled)) { 
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'HmiState' sequence class.
        */
        #define T HmiState
        #define TSeq HmiStateSeq
        #define T_initialize_w_params nec::control::HmiState_initialize_w_params
        #define T_finalize_w_params   nec::control::HmiState_finalize_w_params
        #define T_copy       nec::control::HmiState_copy

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

