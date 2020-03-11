

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_state.idl using "rtiddsgen".
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
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
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

#include "roptimizer_state.h"

#ifndef NDDS_STANDALONE_TYPE
#include "roptimizer_statePlugin.h"
#endif

#include <new>

namespace Shell {

    namespace Process {

        /* ========================================================================= */
        const char *RoptimizerStateTYPENAME = "Shell::Process::RoptimizerState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* RoptimizerState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member RoptimizerState_g_tc_members[39]=
            {

                {
                    (char *)"objectiveId",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"bitDepth",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"steadyStateWindow",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"steadyStateMin",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"rpmStepSize",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"ropStepSize",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"rpmSteadyState",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"ropSteadyState",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"wobSteadyState",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"torqueSteadyState",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"ropMode",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"wobMode",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"diffpMode",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"torqueMode",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"targetRate",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"actualRate",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"minRate",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"maxRate",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"ropTarget",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"ropActual",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"ropMin",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"ropMax",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"wobTarget",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"wobActual",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"wobMin",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"wobMax",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"diffpTarget",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"diffpActual",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"diffpMin",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"diffpMax",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"torqueTarget",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"torqueActual",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"torqueMin",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"torqueMax",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"bitWear",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"mse",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"power",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode RoptimizerState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"Shell::Process::RoptimizerState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    39, /* Number of members */
                    RoptimizerState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for RoptimizerState*/

            if (is_initialized) {
                return &RoptimizerState_g_tc;
            }

            RoptimizerState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            RoptimizerState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            RoptimizerState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            RoptimizerState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            RoptimizerState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            RoptimizerState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            RoptimizerState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            RoptimizerState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            RoptimizerState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            RoptimizerState_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            RoptimizerState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            RoptimizerState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            RoptimizerState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
            RoptimizerState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
            RoptimizerState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[6]._annotations._defaultValue._u.long_value = 0;
            RoptimizerState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[6]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[6]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
            RoptimizerState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[7]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            RoptimizerState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            RoptimizerState_g_tc_members[7]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            RoptimizerState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            RoptimizerState_g_tc_members[15]._annotations._defaultValue._u.boolean_value = 0;

            RoptimizerState_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[18]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[18]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[19]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[19]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[20]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[20]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[20]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[20]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[20]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[21]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[21]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[21]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[21]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[21]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[22]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[22]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[22]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[22]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[22]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[23]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[23]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[23]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[23]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[23]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[24]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[24]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[24]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[24]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[24]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[25]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[25]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[25]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[25]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[25]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[26]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[26]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[26]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[26]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[26]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[27]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[27]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[27]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[27]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[27]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[28]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[28]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[28]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[28]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[28]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[29]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[29]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[29]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[29]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[29]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[30]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[30]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[30]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[30]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[30]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[31]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[31]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[31]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[31]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[31]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[32]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[32]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[32]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[32]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[32]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[33]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[33]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[33]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[33]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[33]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[34]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[34]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[34]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[34]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[34]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[35]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[35]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[35]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[35]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[35]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[36]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[36]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[36]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[36]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[36]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[37]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[37]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[37]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[37]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[37]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[38]._annotations._defaultValue._u.double_value = 0.0;
            RoptimizerState_g_tc_members[38]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[38]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            RoptimizerState_g_tc_members[38]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            RoptimizerState_g_tc_members[38]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            RoptimizerState_g_tc._data._sampleAccessInfo =
            RoptimizerState_get_sample_access_info();
            RoptimizerState_g_tc._data._typePlugin =
            RoptimizerState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &RoptimizerState_g_tc;
        }

        #define TSeq RoptimizerStateSeq
        #define T RoptimizerState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *RoptimizerState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo RoptimizerState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(RoptimizerStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                RoptimizerStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &RoptimizerState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *RoptimizerState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            Shell::Process::RoptimizerState *sample;

            static RTIXCdrMemberAccessInfo RoptimizerState_g_memberAccessInfos[39] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo RoptimizerState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &RoptimizerState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                Shell::Process::RoptimizerState);
            if (sample == NULL) {
                return NULL;
            }

            RoptimizerState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            RoptimizerState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            RoptimizerState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->bitDepth - (char *)sample);

            RoptimizerState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->holeDepth - (char *)sample);

            RoptimizerState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->steadyStateWindow - (char *)sample);

            RoptimizerState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->steadyStateMin - (char *)sample);

            RoptimizerState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rpmStepSize - (char *)sample);

            RoptimizerState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropStepSize - (char *)sample);

            RoptimizerState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rpmSteadyState - (char *)sample);

            RoptimizerState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropSteadyState - (char *)sample);

            RoptimizerState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobSteadyState - (char *)sample);

            RoptimizerState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueSteadyState - (char *)sample);

            RoptimizerState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMode - (char *)sample);

            RoptimizerState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMode - (char *)sample);

            RoptimizerState_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffpMode - (char *)sample);

            RoptimizerState_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMode - (char *)sample);

            RoptimizerState_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->targetRate - (char *)sample);

            RoptimizerState_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->actualRate - (char *)sample);

            RoptimizerState_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minRate - (char *)sample);

            RoptimizerState_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxRate - (char *)sample);

            RoptimizerState_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropTarget - (char *)sample);

            RoptimizerState_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropActual - (char *)sample);

            RoptimizerState_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMin - (char *)sample);

            RoptimizerState_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMax - (char *)sample);

            RoptimizerState_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobTarget - (char *)sample);

            RoptimizerState_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobActual - (char *)sample);

            RoptimizerState_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMin - (char *)sample);

            RoptimizerState_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMax - (char *)sample);

            RoptimizerState_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffpTarget - (char *)sample);

            RoptimizerState_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffpActual - (char *)sample);

            RoptimizerState_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffpMin - (char *)sample);

            RoptimizerState_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffpMax - (char *)sample);

            RoptimizerState_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTarget - (char *)sample);

            RoptimizerState_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueActual - (char *)sample);

            RoptimizerState_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMin - (char *)sample);

            RoptimizerState_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMax - (char *)sample);

            RoptimizerState_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->bitWear - (char *)sample);

            RoptimizerState_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->mse - (char *)sample);

            RoptimizerState_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->power - (char *)sample);

            RoptimizerState_g_sampleAccessInfo.memberAccessInfos = 
            RoptimizerState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(RoptimizerState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    RoptimizerState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    RoptimizerState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            RoptimizerState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            RoptimizerState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            RoptimizerState_get_member_value_pointer;

            RoptimizerState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &RoptimizerState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *RoptimizerState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin RoptimizerState_g_typePlugin = 
            {
                NULL, /* serialize */
                NULL, /* serialize_key */
                NULL, /* deserialize_sample */
                NULL, /* deserialize_key_sample */
                NULL, /* skip */
                NULL, /* get_serialized_sample_size */
                NULL, /* get_serialized_sample_max_size_ex */
                NULL, /* get_serialized_key_max_size_ex */
                NULL, /* get_serialized_sample_min_size */
                NULL, /* serialized_sample_to_key */
                (RTIXCdrTypePluginInitializeSampleFunction) 
                Shell::Process::RoptimizerState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                Shell::Process::RoptimizerState_finalize_w_return,
                NULL
            };

            return &RoptimizerState_g_typePlugin;
        }
        #endif

        RTIBool RoptimizerState_initialize(
            RoptimizerState* sample) {
            return Shell::Process::RoptimizerState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool RoptimizerState_initialize_ex(
            RoptimizerState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return Shell::Process::RoptimizerState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool RoptimizerState_initialize_w_params(
            RoptimizerState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->objectiveId = DDS_String_alloc((36));
                RTICdrType_copyStringEx(
                    &sample->objectiveId,
                    "",
                    (36),
                    RTI_FALSE);
                if (sample->objectiveId == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->objectiveId != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->objectiveId,
                        "",
                        (36),
                        RTI_FALSE);
                    if (sample->objectiveId == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }

            sample->bitDepth = 0.0;

            sample->holeDepth = 0.0;

            sample->steadyStateWindow = 0;

            sample->steadyStateMin = 0;

            sample->rpmStepSize = 0;

            sample->ropStepSize = 0;

            sample->rpmSteadyState = 0;

            sample->ropSteadyState = 0;

            sample->wobSteadyState = 0;

            sample->torqueSteadyState = 0;

            sample->ropMode = 0;

            sample->wobMode = 0;

            sample->diffpMode = 0;

            sample->torqueMode = 0;

            sample->targetRate = 0.0;

            sample->actualRate = 0.0;

            sample->minRate = 0.0;

            sample->maxRate = 0.0;

            sample->ropTarget = 0.0;

            sample->ropActual = 0.0;

            sample->ropMin = 0.0;

            sample->ropMax = 0.0;

            sample->wobTarget = 0.0;

            sample->wobActual = 0.0;

            sample->wobMin = 0.0;

            sample->wobMax = 0.0;

            sample->diffpTarget = 0.0;

            sample->diffpActual = 0.0;

            sample->diffpMin = 0.0;

            sample->diffpMax = 0.0;

            sample->torqueTarget = 0.0;

            sample->torqueActual = 0.0;

            sample->torqueMin = 0.0;

            sample->torqueMax = 0.0;

            sample->bitWear = 0.0;

            sample->mse = 0.0;

            sample->power = 0.0;

            return RTI_TRUE;
        }

        RTIBool RoptimizerState_finalize_w_return(
            RoptimizerState* sample)
        {
            Shell::Process::RoptimizerState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void RoptimizerState_finalize(
            RoptimizerState* sample)
        {

            Shell::Process::RoptimizerState_finalize_ex(sample,RTI_TRUE);
        }

        void RoptimizerState_finalize_ex(
            RoptimizerState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            Shell::Process::RoptimizerState_finalize_w_params(
                sample,&deallocParams);
        }

        void RoptimizerState_finalize_w_params(
            RoptimizerState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            if (sample->objectiveId != NULL) {
                DDS_String_free(sample->objectiveId);
                sample->objectiveId=NULL;

            }
            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

        }

        void RoptimizerState_finalize_optional_members(
            RoptimizerState* sample, RTIBool deletePointers)
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

            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        }

        RTIBool RoptimizerState_copy(
            RoptimizerState* dst,
            const RoptimizerState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->objectiveId, src->objectiveId, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->bitDepth, &src->bitDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->holeDepth, &src->holeDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->steadyStateWindow, &src->steadyStateWindow)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->steadyStateMin, &src->steadyStateMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->rpmStepSize, &src->rpmStepSize)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->ropStepSize, &src->ropStepSize)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->rpmSteadyState, &src->rpmSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->ropSteadyState, &src->ropSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->wobSteadyState, &src->wobSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->torqueSteadyState, &src->torqueSteadyState)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->ropMode, &src->ropMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->wobMode, &src->wobMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->diffpMode, &src->diffpMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->torqueMode, &src->torqueMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->targetRate, &src->targetRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->actualRate, &src->actualRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minRate, &src->minRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxRate, &src->maxRate)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ropTarget, &src->ropTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ropActual, &src->ropActual)) { 
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
                    &dst->wobTarget, &src->wobTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobActual, &src->wobActual)) { 
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
                    &dst->diffpTarget, &src->diffpTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffpActual, &src->diffpActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffpMin, &src->diffpMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffpMax, &src->diffpMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueTarget, &src->torqueTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueActual, &src->torqueActual)) { 
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
                    &dst->bitWear, &src->bitWear)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->mse, &src->mse)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->power, &src->power)) { 
                    return RTI_FALSE;
                }

                return RTI_TRUE;

            } catch (const std::bad_alloc&) {
                return RTI_FALSE;
            }
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'RoptimizerState' sequence class.
        */
        #define T RoptimizerState
        #define TSeq RoptimizerStateSeq

        #define T_initialize_w_params Shell::Process::RoptimizerState_initialize_w_params

        #define T_finalize_w_params   Shell::Process::RoptimizerState_finalize_w_params
        #define T_copy       Shell::Process::RoptimizerState_copy

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

    } /* namespace Process  */

} /* namespace Shell  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Shell::Process::RoptimizerState>::get() 
        {
            return (const RTIXCdrTypeCode *) Shell::Process::RoptimizerState_get_typecode();
        }

    } 
}
#endif
