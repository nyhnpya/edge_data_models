

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
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

#include "autotuner_configuration.h"

namespace AutoTunerConfiguration {

    /* ========================================================================= */
    const char *ModelStateRequestTYPENAME = "AutoTunerConfiguration::ModelStateRequest";

    DDS_TypeCode* ModelStateRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member ModelStateRequest_g_tc_members[9]=
        {

            {
                (char *)"modelReset",/* Member name */
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
                (char *)"pipeInnerDiameter",/* Member name */
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
                (char *)"pipeOuterDiameter",/* Member name */
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
                (char *)"slopeFilter",/* Member name */
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
                (char *)"tauMax",/* Member name */
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
                (char *)"tauMin",/* Member name */
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
                (char *)"tauMultiplier",/* Member name */
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
                (char *)"maxDeviation",/* Member name */
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
                (char *)"minInterval",/* Member name */
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

        static DDS_TypeCode ModelStateRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::ModelStateRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                9, /* Number of members */
                ModelStateRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for ModelStateRequest*/

        if (is_initialized) {
            return &ModelStateRequest_g_tc;
        }

        ModelStateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        ModelStateRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &ModelStateRequest_g_tc;
    }

    RTIBool ModelStateRequest_initialize(
        ModelStateRequest* sample) {
        return AutoTunerConfiguration::ModelStateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool ModelStateRequest_initialize_ex(
        ModelStateRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::ModelStateRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool ModelStateRequest_initialize_w_params(
        ModelStateRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initBoolean(&sample->modelReset)) {
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

        if (!RTICdrType_initDouble(&sample->maxDeviation)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->minInterval)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void ModelStateRequest_finalize(
        ModelStateRequest* sample)
    {

        AutoTunerConfiguration::ModelStateRequest_finalize_ex(sample,RTI_TRUE);
    }

    void ModelStateRequest_finalize_ex(
        ModelStateRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::ModelStateRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void ModelStateRequest_finalize_w_params(
        ModelStateRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void ModelStateRequest_finalize_optional_members(
        ModelStateRequest* sample, RTIBool deletePointers)
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

    RTIBool ModelStateRequest_copy(
        ModelStateRequest* dst,
        const ModelStateRequest* src)
    {

        if (!RTICdrType_copyBoolean (
            &dst->modelReset, &src->modelReset)) { 
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
            &dst->maxDeviation, &src->maxDeviation)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minInterval, &src->minInterval)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'ModelStateRequest' sequence class.
    */
    #define T ModelStateRequest
    #define TSeq ModelStateRequestSeq
    #define T_initialize_w_params AutoTunerConfiguration::ModelStateRequest_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::ModelStateRequest_finalize_w_params
    #define T_copy       AutoTunerConfiguration::ModelStateRequest_copy

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
    const char *ModelStateStateTYPENAME = "AutoTunerConfiguration::ModelStateState";

    DDS_TypeCode* ModelStateState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member ModelStateState_g_tc_members[9]=
        {

            {
                (char *)"pipeInnerDiameter",/* Member name */
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
                (char *)"pipeOuterDiameter",/* Member name */
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
                (char *)"slopeFilter",/* Member name */
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
                (char *)"tauMax",/* Member name */
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
                (char *)"tauMin",/* Member name */
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
                (char *)"tauMultiplier",/* Member name */
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
                (char *)"maxDeviation",/* Member name */
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
                (char *)"minInterval",/* Member name */
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
                (char *)"tunerEnabled",/* Member name */
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

        static DDS_TypeCode ModelStateState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::ModelStateState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                9, /* Number of members */
                ModelStateState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for ModelStateState*/

        if (is_initialized) {
            return &ModelStateState_g_tc;
        }

        ModelStateState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        ModelStateState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        is_initialized = RTI_TRUE;

        return &ModelStateState_g_tc;
    }

    RTIBool ModelStateState_initialize(
        ModelStateState* sample) {
        return AutoTunerConfiguration::ModelStateState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool ModelStateState_initialize_ex(
        ModelStateState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::ModelStateState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool ModelStateState_initialize_w_params(
        ModelStateState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

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

        if (!RTICdrType_initDouble(&sample->maxDeviation)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->minInterval)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->tunerEnabled)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void ModelStateState_finalize(
        ModelStateState* sample)
    {

        AutoTunerConfiguration::ModelStateState_finalize_ex(sample,RTI_TRUE);
    }

    void ModelStateState_finalize_ex(
        ModelStateState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::ModelStateState_finalize_w_params(
            sample,&deallocParams);
    }

    void ModelStateState_finalize_w_params(
        ModelStateState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void ModelStateState_finalize_optional_members(
        ModelStateState* sample, RTIBool deletePointers)
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

    RTIBool ModelStateState_copy(
        ModelStateState* dst,
        const ModelStateState* src)
    {

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
            &dst->maxDeviation, &src->maxDeviation)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minInterval, &src->minInterval)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->tunerEnabled, &src->tunerEnabled)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'ModelStateState' sequence class.
    */
    #define T ModelStateState
    #define TSeq ModelStateStateSeq
    #define T_initialize_w_params AutoTunerConfiguration::ModelStateState_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::ModelStateState_finalize_w_params
    #define T_copy       AutoTunerConfiguration::ModelStateState_copy

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
    const char *DiffpTuningRequestTYPENAME = "AutoTunerConfiguration::DiffpTuningRequest";

    DDS_TypeCode* DiffpTuningRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DiffpTuningRequest_g_tc_members[9]=
        {

            {
                (char *)"diffPFilter",/* Member name */
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
                (char *)"diffPD",/* Member name */
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
                (char *)"diffPF",/* Member name */
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
                (char *)"diffPEps",/* Member name */
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
                (char *)"diffPEpsManual",/* Member name */
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
                (char *)"diffPKcMin",/* Member name */
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
                (char *)"diffPKcMax",/* Member name */
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
                (char *)"diffPTiMin",/* Member name */
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
                (char *)"diffPTiMax",/* Member name */
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

        static DDS_TypeCode DiffpTuningRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::DiffpTuningRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                9, /* Number of members */
                DiffpTuningRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for DiffpTuningRequest*/

        if (is_initialized) {
            return &DiffpTuningRequest_g_tc;
        }

        DiffpTuningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DiffpTuningRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &DiffpTuningRequest_g_tc;
    }

    RTIBool DiffpTuningRequest_initialize(
        DiffpTuningRequest* sample) {
        return AutoTunerConfiguration::DiffpTuningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DiffpTuningRequest_initialize_ex(
        DiffpTuningRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::DiffpTuningRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DiffpTuningRequest_initialize_w_params(
        DiffpTuningRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initDouble(&sample->diffPFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPD)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPF)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPEps)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->diffPEpsManual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPKcMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPKcMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPTiMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPTiMax)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void DiffpTuningRequest_finalize(
        DiffpTuningRequest* sample)
    {

        AutoTunerConfiguration::DiffpTuningRequest_finalize_ex(sample,RTI_TRUE);
    }

    void DiffpTuningRequest_finalize_ex(
        DiffpTuningRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::DiffpTuningRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void DiffpTuningRequest_finalize_w_params(
        DiffpTuningRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void DiffpTuningRequest_finalize_optional_members(
        DiffpTuningRequest* sample, RTIBool deletePointers)
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

    RTIBool DiffpTuningRequest_copy(
        DiffpTuningRequest* dst,
        const DiffpTuningRequest* src)
    {

        if (!RTICdrType_copyDouble (
            &dst->diffPFilter, &src->diffPFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPD, &src->diffPD)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPF, &src->diffPF)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPEps, &src->diffPEps)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->diffPEpsManual, &src->diffPEpsManual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPKcMin, &src->diffPKcMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPKcMax, &src->diffPKcMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPTiMin, &src->diffPTiMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPTiMax, &src->diffPTiMax)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'DiffpTuningRequest' sequence class.
    */
    #define T DiffpTuningRequest
    #define TSeq DiffpTuningRequestSeq
    #define T_initialize_w_params AutoTunerConfiguration::DiffpTuningRequest_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::DiffpTuningRequest_finalize_w_params
    #define T_copy       AutoTunerConfiguration::DiffpTuningRequest_copy

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
    const char *DiffpTuningStateTYPENAME = "AutoTunerConfiguration::DiffpTuningState";

    DDS_TypeCode* DiffpTuningState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member DiffpTuningState_g_tc_members[14]=
        {

            {
                (char *)"diffPFilter",/* Member name */
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
                (char *)"diffPD",/* Member name */
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
                (char *)"diffPF",/* Member name */
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
                (char *)"diffPEps",/* Member name */
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
                (char *)"diffPEpsManual",/* Member name */
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
                (char *)"diffPKcMin",/* Member name */
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
                (char *)"diffPKcMax",/* Member name */
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
                (char *)"diffPTiMin",/* Member name */
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
                (char *)"diffPTiMax",/* Member name */
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
                (char *)"diffpInitK",/* Member name */
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
                (char *)"diffpInitTau",/* Member name */
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
                (char *)"diffpInitPreFilter",/* Member name */
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
                (char *)"diffpR1",/* Member name */
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
                (char *)"diffpR2",/* Member name */
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

        static DDS_TypeCode DiffpTuningState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::DiffpTuningState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                14, /* Number of members */
                DiffpTuningState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for DiffpTuningState*/

        if (is_initialized) {
            return &DiffpTuningState_g_tc;
        }

        DiffpTuningState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        DiffpTuningState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        DiffpTuningState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &DiffpTuningState_g_tc;
    }

    RTIBool DiffpTuningState_initialize(
        DiffpTuningState* sample) {
        return AutoTunerConfiguration::DiffpTuningState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool DiffpTuningState_initialize_ex(
        DiffpTuningState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::DiffpTuningState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool DiffpTuningState_initialize_w_params(
        DiffpTuningState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initDouble(&sample->diffPFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPD)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPF)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPEps)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->diffPEpsManual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPKcMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPKcMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPTiMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffPTiMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffpInitK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffpInitTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffpInitPreFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffpR1)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->diffpR2)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void DiffpTuningState_finalize(
        DiffpTuningState* sample)
    {

        AutoTunerConfiguration::DiffpTuningState_finalize_ex(sample,RTI_TRUE);
    }

    void DiffpTuningState_finalize_ex(
        DiffpTuningState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::DiffpTuningState_finalize_w_params(
            sample,&deallocParams);
    }

    void DiffpTuningState_finalize_w_params(
        DiffpTuningState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void DiffpTuningState_finalize_optional_members(
        DiffpTuningState* sample, RTIBool deletePointers)
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

    RTIBool DiffpTuningState_copy(
        DiffpTuningState* dst,
        const DiffpTuningState* src)
    {

        if (!RTICdrType_copyDouble (
            &dst->diffPFilter, &src->diffPFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPD, &src->diffPD)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPF, &src->diffPF)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPEps, &src->diffPEps)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->diffPEpsManual, &src->diffPEpsManual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPKcMin, &src->diffPKcMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPKcMax, &src->diffPKcMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPTiMin, &src->diffPTiMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffPTiMax, &src->diffPTiMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffpInitK, &src->diffpInitK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffpInitTau, &src->diffpInitTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffpInitPreFilter, &src->diffpInitPreFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffpR1, &src->diffpR1)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->diffpR2, &src->diffpR2)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'DiffpTuningState' sequence class.
    */
    #define T DiffpTuningState
    #define TSeq DiffpTuningStateSeq
    #define T_initialize_w_params AutoTunerConfiguration::DiffpTuningState_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::DiffpTuningState_finalize_w_params
    #define T_copy       AutoTunerConfiguration::DiffpTuningState_copy

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
    const char *WobTuningRequestTYPENAME = "AutoTunerConfiguration::WobTuningRequest";

    DDS_TypeCode* WobTuningRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member WobTuningRequest_g_tc_members[9]=
        {

            {
                (char *)"wobFilter",/* Member name */
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
                (char *)"wobD",/* Member name */
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
                (char *)"wobF",/* Member name */
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
                (char *)"wobEps",/* Member name */
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
                (char *)"wobEpsManual",/* Member name */
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
                (char *)"wobKcMin",/* Member name */
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
                (char *)"wobKcMax",/* Member name */
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
                (char *)"wobTiMin",/* Member name */
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
                (char *)"wobTiMax",/* Member name */
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

        static DDS_TypeCode WobTuningRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::WobTuningRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                9, /* Number of members */
                WobTuningRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for WobTuningRequest*/

        if (is_initialized) {
            return &WobTuningRequest_g_tc;
        }

        WobTuningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        WobTuningRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &WobTuningRequest_g_tc;
    }

    RTIBool WobTuningRequest_initialize(
        WobTuningRequest* sample) {
        return AutoTunerConfiguration::WobTuningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool WobTuningRequest_initialize_ex(
        WobTuningRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::WobTuningRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool WobTuningRequest_initialize_w_params(
        WobTuningRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initDouble(&sample->wobFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobD)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobF)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobEps)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->wobEpsManual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobKcMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobKcMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobTiMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobTiMax)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void WobTuningRequest_finalize(
        WobTuningRequest* sample)
    {

        AutoTunerConfiguration::WobTuningRequest_finalize_ex(sample,RTI_TRUE);
    }

    void WobTuningRequest_finalize_ex(
        WobTuningRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::WobTuningRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void WobTuningRequest_finalize_w_params(
        WobTuningRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void WobTuningRequest_finalize_optional_members(
        WobTuningRequest* sample, RTIBool deletePointers)
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

    RTIBool WobTuningRequest_copy(
        WobTuningRequest* dst,
        const WobTuningRequest* src)
    {

        if (!RTICdrType_copyDouble (
            &dst->wobFilter, &src->wobFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobD, &src->wobD)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobF, &src->wobF)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobEps, &src->wobEps)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->wobEpsManual, &src->wobEpsManual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobKcMin, &src->wobKcMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobKcMax, &src->wobKcMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobTiMin, &src->wobTiMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobTiMax, &src->wobTiMax)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'WobTuningRequest' sequence class.
    */
    #define T WobTuningRequest
    #define TSeq WobTuningRequestSeq
    #define T_initialize_w_params AutoTunerConfiguration::WobTuningRequest_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::WobTuningRequest_finalize_w_params
    #define T_copy       AutoTunerConfiguration::WobTuningRequest_copy

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
    const char *WobTuningStateTYPENAME = "AutoTunerConfiguration::WobTuningState";

    DDS_TypeCode* WobTuningState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member WobTuningState_g_tc_members[14]=
        {

            {
                (char *)"wobFilter",/* Member name */
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
                (char *)"wobD",/* Member name */
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
                (char *)"wobF",/* Member name */
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
                (char *)"wobEps",/* Member name */
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
                (char *)"wobEpsManual",/* Member name */
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
                (char *)"wobKcMin",/* Member name */
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
                (char *)"wobKcMax",/* Member name */
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
                (char *)"wobTiMin",/* Member name */
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
                (char *)"wobTiMax",/* Member name */
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
                (char *)"wobInitK",/* Member name */
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
                (char *)"wobInitTau",/* Member name */
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
                (char *)"wobInitPreFilter",/* Member name */
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
                (char *)"wobR1",/* Member name */
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
                (char *)"wobR2",/* Member name */
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

        static DDS_TypeCode WobTuningState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::WobTuningState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                14, /* Number of members */
                WobTuningState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for WobTuningState*/

        if (is_initialized) {
            return &WobTuningState_g_tc;
        }

        WobTuningState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        WobTuningState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        WobTuningState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &WobTuningState_g_tc;
    }

    RTIBool WobTuningState_initialize(
        WobTuningState* sample) {
        return AutoTunerConfiguration::WobTuningState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool WobTuningState_initialize_ex(
        WobTuningState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::WobTuningState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool WobTuningState_initialize_w_params(
        WobTuningState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initDouble(&sample->wobFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobD)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobF)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobEps)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->wobEpsManual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobKcMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobKcMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobTiMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobTiMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobInitK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobInitTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobInitPreFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobR1)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobR2)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void WobTuningState_finalize(
        WobTuningState* sample)
    {

        AutoTunerConfiguration::WobTuningState_finalize_ex(sample,RTI_TRUE);
    }

    void WobTuningState_finalize_ex(
        WobTuningState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::WobTuningState_finalize_w_params(
            sample,&deallocParams);
    }

    void WobTuningState_finalize_w_params(
        WobTuningState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void WobTuningState_finalize_optional_members(
        WobTuningState* sample, RTIBool deletePointers)
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

    RTIBool WobTuningState_copy(
        WobTuningState* dst,
        const WobTuningState* src)
    {

        if (!RTICdrType_copyDouble (
            &dst->wobFilter, &src->wobFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobD, &src->wobD)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobF, &src->wobF)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobEps, &src->wobEps)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->wobEpsManual, &src->wobEpsManual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobKcMin, &src->wobKcMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobKcMax, &src->wobKcMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobTiMin, &src->wobTiMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobTiMax, &src->wobTiMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobInitK, &src->wobInitK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobInitTau, &src->wobInitTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobInitPreFilter, &src->wobInitPreFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobR1, &src->wobR1)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobR2, &src->wobR2)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'WobTuningState' sequence class.
    */
    #define T WobTuningState
    #define TSeq WobTuningStateSeq
    #define T_initialize_w_params AutoTunerConfiguration::WobTuningState_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::WobTuningState_finalize_w_params
    #define T_copy       AutoTunerConfiguration::WobTuningState_copy

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
    const char *TorqueTuningRequestTYPENAME = "AutoTunerConfiguration::TorqueTuningRequest";

    DDS_TypeCode* TorqueTuningRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member TorqueTuningRequest_g_tc_members[9]=
        {

            {
                (char *)"torqueFilter",/* Member name */
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
                (char *)"torqueD",/* Member name */
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
                (char *)"torqueF",/* Member name */
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
                (char *)"torqueEps",/* Member name */
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
                (char *)"torqueEpsManual",/* Member name */
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
                (char *)"torqueKcMin",/* Member name */
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
                (char *)"torqueKcMax",/* Member name */
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
                (char *)"torqueTiMin",/* Member name */
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
                (char *)"torqueTiMax",/* Member name */
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

        static DDS_TypeCode TorqueTuningRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::TorqueTuningRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                9, /* Number of members */
                TorqueTuningRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for TorqueTuningRequest*/

        if (is_initialized) {
            return &TorqueTuningRequest_g_tc;
        }

        TorqueTuningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        TorqueTuningRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &TorqueTuningRequest_g_tc;
    }

    RTIBool TorqueTuningRequest_initialize(
        TorqueTuningRequest* sample) {
        return AutoTunerConfiguration::TorqueTuningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool TorqueTuningRequest_initialize_ex(
        TorqueTuningRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::TorqueTuningRequest_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool TorqueTuningRequest_initialize_w_params(
        TorqueTuningRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initDouble(&sample->torqueFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueD)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueF)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueEps)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->torqueEpsManual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueKcMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueKcMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueTiMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueTiMax)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void TorqueTuningRequest_finalize(
        TorqueTuningRequest* sample)
    {

        AutoTunerConfiguration::TorqueTuningRequest_finalize_ex(sample,RTI_TRUE);
    }

    void TorqueTuningRequest_finalize_ex(
        TorqueTuningRequest* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::TorqueTuningRequest_finalize_w_params(
            sample,&deallocParams);
    }

    void TorqueTuningRequest_finalize_w_params(
        TorqueTuningRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void TorqueTuningRequest_finalize_optional_members(
        TorqueTuningRequest* sample, RTIBool deletePointers)
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

    RTIBool TorqueTuningRequest_copy(
        TorqueTuningRequest* dst,
        const TorqueTuningRequest* src)
    {

        if (!RTICdrType_copyDouble (
            &dst->torqueFilter, &src->torqueFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueD, &src->torqueD)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueF, &src->torqueF)) { 
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
            &dst->torqueKcMin, &src->torqueKcMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueKcMax, &src->torqueKcMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueTiMin, &src->torqueTiMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueTiMax, &src->torqueTiMax)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'TorqueTuningRequest' sequence class.
    */
    #define T TorqueTuningRequest
    #define TSeq TorqueTuningRequestSeq
    #define T_initialize_w_params AutoTunerConfiguration::TorqueTuningRequest_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::TorqueTuningRequest_finalize_w_params
    #define T_copy       AutoTunerConfiguration::TorqueTuningRequest_copy

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
    const char *TorqueTuningStateTYPENAME = "AutoTunerConfiguration::TorqueTuningState";

    DDS_TypeCode* TorqueTuningState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member TorqueTuningState_g_tc_members[14]=
        {

            {
                (char *)"torqueFilter",/* Member name */
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
                (char *)"torqueD",/* Member name */
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
                (char *)"torqueF",/* Member name */
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
                (char *)"torqueEps",/* Member name */
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
                (char *)"torqueEpsManual",/* Member name */
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
                (char *)"torqueKcMin",/* Member name */
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
                (char *)"torqueKcMax",/* Member name */
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
                (char *)"torqueTiMin",/* Member name */
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
                (char *)"torqueTiMax",/* Member name */
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
                (char *)"torqueInitK",/* Member name */
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
                (char *)"torqueInitTau",/* Member name */
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
                (char *)"torqueInitPreFilter",/* Member name */
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
                (char *)"torqueR1",/* Member name */
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
                (char *)"torqueR2",/* Member name */
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

        static DDS_TypeCode TorqueTuningState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoTunerConfiguration::TorqueTuningState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                14, /* Number of members */
                TorqueTuningState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for TorqueTuningState*/

        if (is_initialized) {
            return &TorqueTuningState_g_tc;
        }

        TorqueTuningState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

        TorqueTuningState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        TorqueTuningState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &TorqueTuningState_g_tc;
    }

    RTIBool TorqueTuningState_initialize(
        TorqueTuningState* sample) {
        return AutoTunerConfiguration::TorqueTuningState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool TorqueTuningState_initialize_ex(
        TorqueTuningState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoTunerConfiguration::TorqueTuningState_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool TorqueTuningState_initialize_w_params(
        TorqueTuningState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initDouble(&sample->torqueFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueD)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueF)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueEps)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initBoolean(&sample->torqueEpsManual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueKcMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueKcMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueTiMin)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueTiMax)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueInitK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueInitTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueInitPreFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueR1)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueR2)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void TorqueTuningState_finalize(
        TorqueTuningState* sample)
    {

        AutoTunerConfiguration::TorqueTuningState_finalize_ex(sample,RTI_TRUE);
    }

    void TorqueTuningState_finalize_ex(
        TorqueTuningState* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        AutoTunerConfiguration::TorqueTuningState_finalize_w_params(
            sample,&deallocParams);
    }

    void TorqueTuningState_finalize_w_params(
        TorqueTuningState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void TorqueTuningState_finalize_optional_members(
        TorqueTuningState* sample, RTIBool deletePointers)
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

    RTIBool TorqueTuningState_copy(
        TorqueTuningState* dst,
        const TorqueTuningState* src)
    {

        if (!RTICdrType_copyDouble (
            &dst->torqueFilter, &src->torqueFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueD, &src->torqueD)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueF, &src->torqueF)) { 
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
            &dst->torqueKcMin, &src->torqueKcMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueKcMax, &src->torqueKcMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueTiMin, &src->torqueTiMin)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueTiMax, &src->torqueTiMax)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueInitK, &src->torqueInitK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueInitTau, &src->torqueInitTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueInitPreFilter, &src->torqueInitPreFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueR1, &src->torqueR1)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueR2, &src->torqueR2)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'TorqueTuningState' sequence class.
    */
    #define T TorqueTuningState
    #define TSeq TorqueTuningStateSeq
    #define T_initialize_w_params AutoTunerConfiguration::TorqueTuningState_initialize_w_params
    #define T_finalize_w_params   AutoTunerConfiguration::TorqueTuningState_finalize_w_params
    #define T_copy       AutoTunerConfiguration::TorqueTuningState_copy

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
} /* namespace AutoTunerConfiguration  */

