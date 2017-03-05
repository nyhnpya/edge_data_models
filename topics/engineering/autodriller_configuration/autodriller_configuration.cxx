

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

namespace AutoDrillerConfiguration {

    /* ========================================================================= */
    const char *HmiRequestTYPENAME = "AutoDrillerConfiguration::HmiRequest";

    DDS_TypeCode* HmiRequest_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member HmiRequest_g_tc_members[41]=
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
                (char *)"kpKpCalculated",/* Member name */
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
                (char *)"deltaPressureKpCurrent",/* Member name */
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
                (char *)"dpTiCalculated",/* Member name */
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
                (char *)"dpTiCurrent",/* Member name */
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
                (char *)"ropKpCalculated",/* Member name */
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
                (char *)"ropKpCurrent",/* Member name */
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
                (char *)"ropTiCalcualted",/* Member name */
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
                (char *)"ropTiCurrent",/* Member name */
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
                (char *)"torqueKpCalculated",/* Member name */
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
                (char *)"torqueKpCurrent",/* Member name */
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
                (char *)"torqueTiCalculated",/* Member name */
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
                (char *)"toqueTiCurrent",/* Member name */
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
                (char *)"wobKpCalculated",/* Member name */
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
                (char *)"wobKpCurrent",/* Member name */
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
                (char *)"wobTiCalculated",/* Member name */
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
                (char *)"wobTiCurrent",/* Member name */
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
                (char *)"mode",/* Member name */
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
                (char *)"modeController",/* Member name */
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
                (char *)"onDataAvailable",/* Member name */
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
                (char *)"onLivelinessLost",/* Member name */
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
                (char *)"modelOneDpRequestK",/* Member name */
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
                (char *)"modelOneDpRequestTau",/* Member name */
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
                (char *)"modelOneRopRequestK",/* Member name */
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
                (char *)"modelOneRopRequestTau",/* Member name */
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
                (char *)"modelOneTorqueRequestK",/* Member name */
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
                (char *)"modelOneTorqueRequestTau",/* Member name */
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
                (char *)"modelOneWobRequestK",/* Member name */
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
                (char *)"modelOneWobRequestTau",/* Member name */
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
                (char *)"modelTwoDpRequestK",/* Member name */
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
                (char *)"modelTwoDpRequestTau",/* Member name */
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
                (char *)"modelTwoRopRequestK",/* Member name */
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
                (char *)"modelTwoRopRequestTau",/* Member name */
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
                (char *)"modelTwoTorqueRequestK",/* Member name */
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
                (char *)"modelTwoTorqueRequestTau",/* Member name */
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
                (char *)"modelTwoWobRequestK",/* Member name */
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
                (char *)"modelTwoWobRequestTau",/* Member name */
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
                (char *)"status",/* Member name */
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
                (char *)"tuningDisable",/* Member name */
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
                (char *)"tuningEnable",/* Member name */
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
            }
        };

        static DDS_TypeCode HmiRequest_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoDrillerConfiguration::HmiRequest", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                41, /* Number of members */
                HmiRequest_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for HmiRequest*/

        if (is_initialized) {
            return &HmiRequest_g_tc;
        }

        HmiRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        HmiRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        HmiRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiRequest_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &HmiRequest_g_tc;
    }

    RTIBool HmiRequest_initialize(
        HmiRequest* sample) {
        return AutoDrillerConfiguration::HmiRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool HmiRequest_initialize_ex(
        HmiRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoDrillerConfiguration::HmiRequest_initialize_w_params(
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

        if (!RTICdrType_initDouble(&sample->kpKpCalculated)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->deltaPressureKpCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->dpTiCalculated)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->dpTiCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->ropKpCalculated)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->ropKpCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->ropTiCalcualted)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->ropTiCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueKpCalculated)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueKpCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueTiCalculated)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->toqueTiCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobKpCalculated)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobKpCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobTiCalculated)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobTiCurrent)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->mode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modeController)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->onDataAvailable)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->onLivelinessLost)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneDpRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneDpRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneRopRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneRopRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneTorqueRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneTorqueRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneWobRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelOneWobRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoDpRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoDpRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoRopRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoRopRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoTorqueRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoTorqueRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoWobRequestK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelTwoWobRequestTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->status)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->tuningDisable)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->tuningEnable)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void HmiRequest_finalize(
        HmiRequest* sample)
    {

        AutoDrillerConfiguration::HmiRequest_finalize_ex(sample,RTI_TRUE);
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

        AutoDrillerConfiguration::HmiRequest_finalize_w_params(
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
        if (!RTICdrType_copyDouble (
            &dst->kpKpCalculated, &src->kpKpCalculated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->deltaPressureKpCurrent, &src->deltaPressureKpCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->dpTiCalculated, &src->dpTiCalculated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->dpTiCurrent, &src->dpTiCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->ropKpCalculated, &src->ropKpCalculated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->ropKpCurrent, &src->ropKpCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->ropTiCalcualted, &src->ropTiCalcualted)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->ropTiCurrent, &src->ropTiCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueKpCalculated, &src->torqueKpCalculated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueKpCurrent, &src->torqueKpCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueTiCalculated, &src->torqueTiCalculated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->toqueTiCurrent, &src->toqueTiCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobKpCalculated, &src->wobKpCalculated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobKpCurrent, &src->wobKpCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobTiCalculated, &src->wobTiCalculated)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobTiCurrent, &src->wobTiCurrent)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->mode, &src->mode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modeController, &src->modeController)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->onDataAvailable, &src->onDataAvailable)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->onLivelinessLost, &src->onLivelinessLost)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneDpRequestK, &src->modelOneDpRequestK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneDpRequestTau, &src->modelOneDpRequestTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneRopRequestK, &src->modelOneRopRequestK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneRopRequestTau, &src->modelOneRopRequestTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneTorqueRequestK, &src->modelOneTorqueRequestK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneTorqueRequestTau, &src->modelOneTorqueRequestTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneWobRequestK, &src->modelOneWobRequestK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelOneWobRequestTau, &src->modelOneWobRequestTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelTwoDpRequestK, &src->modelTwoDpRequestK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelTwoDpRequestTau, &src->modelTwoDpRequestTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelTwoRopRequestK, &src->modelTwoRopRequestK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelTwoRopRequestTau, &src->modelTwoRopRequestTau)) { 
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
            &dst->modelTwoWobRequestK, &src->modelTwoWobRequestK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modelTwoWobRequestTau, &src->modelTwoWobRequestTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->status, &src->status)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->tuningDisable, &src->tuningDisable)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
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
    #define T_initialize_w_params AutoDrillerConfiguration::HmiRequest_initialize_w_params
    #define T_finalize_w_params   AutoDrillerConfiguration::HmiRequest_finalize_w_params
    #define T_copy       AutoDrillerConfiguration::HmiRequest_copy

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
    const char *HmiStateTYPENAME = "AutoDrillerConfiguration::HmiState";

    DDS_TypeCode* HmiState_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode_Member HmiState_g_tc_members[76]=
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
                (char *)"modelReset",/* Member name */
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
                (char *)"pipeInnerDiameter",/* Member name */
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
                (char *)"pipeOuterDiameter",/* Member name */
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
                (char *)"differentialPressureInitializeK",/* Member name */
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
                (char *)"differentialPressureInitializeTau",/* Member name */
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
                (char *)"differentialPressurePreFilter",/* Member name */
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
                (char *)"differentialPressureR1",/* Member name */
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
                (char *)"differentialPressureR2",/* Member name */
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
                (char *)"rateOfPenetrationInitializeK",/* Member name */
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
                (char *)"rateOfPenetrationInitializeTau",/* Member name */
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
                (char *)"rateOfPenetrationInitializePreFilter",/* Member name */
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
                (char *)"rateOfPenetrationInitializeR1",/* Member name */
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
                (char *)"rateOfPenetrationInitializeR2",/* Member name */
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
                (char *)"torqueInitializeK",/* Member name */
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
                (char *)"torqueInitializeTau",/* Member name */
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
                (char *)"torqueInitializePreFilter",/* Member name */
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
                (char *)"torqueInitializeR1",/* Member name */
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
                (char *)"torqueInitializeR2",/* Member name */
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
                (char *)"wobInitializeK",/* Member name */
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
                (char *)"wobInitializeTau",/* Member name */
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
                (char *)"wobInitializePreFilter",/* Member name */
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
                (char *)"wobInitializeR1",/* Member name */
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
                (char *)"wobInitializeR2",/* Member name */
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
                (char *)"devMin",/* Member name */
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
                (char *)"intervalMin",/* Member name */
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
                (char *)"differentialPressureFilter",/* Member name */
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
                (char *)"differentialPressureKcMax",/* Member name */
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
                (char *)"differentialPressureKcMin",/* Member name */
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
                (char *)"differentialPressureTdMax",/* Member name */
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
                (char *)"differentialPressureTdMin",/* Member name */
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
                (char *)"differentialPressureTiMax",/* Member name */
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
                (char *)"differentialPressureTiMin",/* Member name */
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
                (char *)"differentialPressureD",/* Member name */
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
                (char *)"differentialPressureEps",/* Member name */
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
                (char *)"differentialPressureEpsManual",/* Member name */
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
                (char *)"differentialPressureF",/* Member name */
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
                (char *)"rateOfPenetrationFilter",/* Member name */
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
                (char *)"rateOfPenetrationKcMax",/* Member name */
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
                (char *)"rateOfPenetrationKcMin",/* Member name */
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
                (char *)"rateOfPenetrationTdMax",/* Member name */
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
                (char *)"rateOfPenetrationTdMin",/* Member name */
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
                (char *)"rateOfPenetrationTiMax",/* Member name */
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
                (char *)"rateOfPenetrationTiMin",/* Member name */
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
                (char *)"rateOfPenetrationD",/* Member name */
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
                (char *)"rateOfPenetrationEps",/* Member name */
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
                (char *)"rateOfPenetrationEpsManual",/* Member name */
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
                (char *)"rateOfPenetrationF",/* Member name */
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
                (char *)"weightOnBitFilter",/* Member name */
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
                (char *)"weightOnBitKcMax",/* Member name */
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
                (char *)"weightOnBitKcMin",/* Member name */
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
                (char *)"weightOnBitTdMax",/* Member name */
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
                (char *)"weightOnBitTdMin",/* Member name */
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
                (char *)"weightOnBitTiMax",/* Member name */
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
                (char *)"weightOnBitTiMin",/* Member name */
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
                (char *)"weightOnBitD",/* Member name */
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
                (char *)"weightOnBitEps",/* Member name */
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
                (char *)"weightOnBitEpsManual",/* Member name */
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
                (char *)"weightOnBitF",/* Member name */
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
                (char *)"torqueFilter",/* Member name */
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
                (char *)"torqueKcMax",/* Member name */
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
                (char *)"torqueKcMin",/* Member name */
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
                (char *)"torqueTdMax",/* Member name */
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
                (char *)"torqueTdMin",/* Member name */
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
                (char *)"torqueTiMax",/* Member name */
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
                (char *)"torqueTiMin",/* Member name */
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
                (char *)"torqueD",/* Member name */
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
                (char *)"torqueEps",/* Member name */
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
                (char *)"torqueEpsManual",/* Member name */
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
                (char *)"torqueF",/* Member name */
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
                (char *)"status",/* Member name */
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
                (char *)"tuningDisable",/* Member name */
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
                (char *)"tuningEnable",/* Member name */
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
            }
        };

        static DDS_TypeCode HmiState_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"AutoDrillerConfiguration::HmiState", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                76, /* Number of members */
                HmiState_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for HmiState*/

        if (is_initialized) {
            return &HmiState_g_tc;
        }

        HmiState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();

        HmiState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();

        HmiState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

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

        HmiState_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

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

        HmiState_g_tc_members[52]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

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

        HmiState_g_tc_members[63]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

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

        HmiState_g_tc_members[74]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        HmiState_g_tc_members[75]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

        is_initialized = RTI_TRUE;

        return &HmiState_g_tc;
    }

    RTIBool HmiState_initialize(
        HmiState* sample) {
        return AutoDrillerConfiguration::HmiState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool HmiState_initialize_ex(
        HmiState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return AutoDrillerConfiguration::HmiState_initialize_w_params(
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

        if (!RTICdrType_initDouble(&sample->mode)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modeController)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->modelReset)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->pipeInnerDiameter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->pipeOuterDiameter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressureInitializeK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressureInitializeTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->differentialPressurePreFilter)) {
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

        if (!RTICdrType_initDouble(&sample->wobInitializeK)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobInitializeTau)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobInitializePreFilter)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobInitializeR1)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->wobInitializeR2)) {
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

        if (!RTICdrType_initDouble(&sample->differentialPressureEpsManual)) {
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

        if (!RTICdrType_initDouble(&sample->rateOfPenetrationEpsManual)) {
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

        if (!RTICdrType_initDouble(&sample->weightOnBitEpsManual)) {
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

        if (!RTICdrType_initDouble(&sample->torqueEpsManual)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->torqueF)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->status)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->tuningDisable)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initDouble(&sample->tuningEnable)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void HmiState_finalize(
        HmiState* sample)
    {

        AutoDrillerConfiguration::HmiState_finalize_ex(sample,RTI_TRUE);
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

        AutoDrillerConfiguration::HmiState_finalize_w_params(
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
        if (!RTICdrType_copyDouble (
            &dst->mode, &src->mode)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->modeController, &src->modeController)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
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
            &dst->differentialPressureInitializeK, &src->differentialPressureInitializeK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->differentialPressureInitializeTau, &src->differentialPressureInitializeTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->differentialPressurePreFilter, &src->differentialPressurePreFilter)) { 
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
            &dst->wobInitializeK, &src->wobInitializeK)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobInitializeTau, &src->wobInitializeTau)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobInitializePreFilter, &src->wobInitializePreFilter)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobInitializeR1, &src->wobInitializeR1)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->wobInitializeR2, &src->wobInitializeR2)) { 
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
        if (!RTICdrType_copyDouble (
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
        if (!RTICdrType_copyDouble (
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
        if (!RTICdrType_copyDouble (
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
        if (!RTICdrType_copyDouble (
            &dst->torqueEpsManual, &src->torqueEpsManual)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->torqueF, &src->torqueF)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->status, &src->status)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->tuningDisable, &src->tuningDisable)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
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
    * Configure and implement 'HmiState' sequence class.
    */
    #define T HmiState
    #define TSeq HmiStateSeq
    #define T_initialize_w_params AutoDrillerConfiguration::HmiState_initialize_w_params
    #define T_finalize_w_params   AutoDrillerConfiguration::HmiState_finalize_w_params
    #define T_copy       AutoDrillerConfiguration::HmiState_copy

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
} /* namespace AutoDrillerConfiguration  */

