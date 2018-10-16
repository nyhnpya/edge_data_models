

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
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

#include "roptimizer_configuration.h"

#include <new>

namespace Shell {
    namespace Hmi {
        namespace RoptimizerConfiguration {

            /* ========================================================================= */
            const char *RoptimizerConfigurationRequestTYPENAME = "Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest";

            DDS_TypeCode* RoptimizerConfigurationRequest_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RoptimizerConfigurationRequest_g_tc_members[4]=
                {

                    {
                        (char *)"steadyStateWindow",/* Member name */
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
                        (char *)"steadyStateMin",/* Member name */
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
                        (char *)"rpmStepSize",/* Member name */
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
                        (char *)"ropStepSize",/* Member name */
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

                static DDS_TypeCode RoptimizerConfigurationRequest_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        RoptimizerConfigurationRequest_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RoptimizerConfigurationRequest*/

                if (is_initialized) {
                    return &RoptimizerConfigurationRequest_g_tc;
                }

                RoptimizerConfigurationRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RoptimizerConfigurationRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RoptimizerConfigurationRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RoptimizerConfigurationRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &RoptimizerConfigurationRequest_g_tc;
            }

            RTIBool RoptimizerConfigurationRequest_initialize(
                RoptimizerConfigurationRequest* sample) {
                return Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RoptimizerConfigurationRequest_initialize_ex(
                RoptimizerConfigurationRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RoptimizerConfigurationRequest_initialize_w_params(
                RoptimizerConfigurationRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->steadyStateWindow)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->steadyStateMin)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->rpmStepSize)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->ropStepSize)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void RoptimizerConfigurationRequest_finalize(
                RoptimizerConfigurationRequest* sample)
            {

                Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest_finalize_ex(sample,RTI_TRUE);
            }

            void RoptimizerConfigurationRequest_finalize_ex(
                RoptimizerConfigurationRequest* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest_finalize_w_params(
                    sample,&deallocParams);
            }

            void RoptimizerConfigurationRequest_finalize_w_params(
                RoptimizerConfigurationRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void RoptimizerConfigurationRequest_finalize_optional_members(
                RoptimizerConfigurationRequest* sample, RTIBool deletePointers)
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

            RTIBool RoptimizerConfigurationRequest_copy(
                RoptimizerConfigurationRequest* dst,
                const RoptimizerConfigurationRequest* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->steadyStateWindow, &src->steadyStateWindow)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->steadyStateMin, &src->steadyStateMin)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->rpmStepSize, &src->rpmStepSize)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->ropStepSize, &src->ropStepSize)) { 
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
            * Configure and implement 'RoptimizerConfigurationRequest' sequence class.
            */
            #define T RoptimizerConfigurationRequest
            #define TSeq RoptimizerConfigurationRequestSeq

            #define T_initialize_w_params Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest_finalize_w_params
            #define T_copy       Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest_copy

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
            const char *RoptimizerSteadyStateTYPENAME = "Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState";

            DDS_TypeCode* RoptimizerSteadyState_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RoptimizerSteadyState_g_tc_members[4]=
                {

                    {
                        (char *)"rpmState",/* Member name */
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
                        (char *)"ropState",/* Member name */
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
                        (char *)"wobState",/* Member name */
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
                        (char *)"torqueState",/* Member name */
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

                static DDS_TypeCode RoptimizerSteadyState_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        RoptimizerSteadyState_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RoptimizerSteadyState*/

                if (is_initialized) {
                    return &RoptimizerSteadyState_g_tc;
                }

                RoptimizerSteadyState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RoptimizerSteadyState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RoptimizerSteadyState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RoptimizerSteadyState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &RoptimizerSteadyState_g_tc;
            }

            RTIBool RoptimizerSteadyState_initialize(
                RoptimizerSteadyState* sample) {
                return Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RoptimizerSteadyState_initialize_ex(
                RoptimizerSteadyState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RoptimizerSteadyState_initialize_w_params(
                RoptimizerSteadyState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->rpmState)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->ropState)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->wobState)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->torqueState)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void RoptimizerSteadyState_finalize(
                RoptimizerSteadyState* sample)
            {

                Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState_finalize_ex(sample,RTI_TRUE);
            }

            void RoptimizerSteadyState_finalize_ex(
                RoptimizerSteadyState* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState_finalize_w_params(
                    sample,&deallocParams);
            }

            void RoptimizerSteadyState_finalize_w_params(
                RoptimizerSteadyState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void RoptimizerSteadyState_finalize_optional_members(
                RoptimizerSteadyState* sample, RTIBool deletePointers)
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

            RTIBool RoptimizerSteadyState_copy(
                RoptimizerSteadyState* dst,
                const RoptimizerSteadyState* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->rpmState, &src->rpmState)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->ropState, &src->ropState)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->wobState, &src->wobState)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->torqueState, &src->torqueState)) { 
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
            * Configure and implement 'RoptimizerSteadyState' sequence class.
            */
            #define T RoptimizerSteadyState
            #define TSeq RoptimizerSteadyStateSeq

            #define T_initialize_w_params Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState_initialize_w_params

            #define T_finalize_w_params   Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState_finalize_w_params
            #define T_copy       Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState_copy

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
        } /* namespace RoptimizerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

