

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from resources.idl 
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
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

#include "resources.h"

#ifndef NDDS_STANDALONE_TYPE
#include "resourcesPlugin.h"
#endif

#include <new>

namespace sys {

    namespace process {

        /* ========================================================================= */
        const char *ResourcesTYPENAME = "sys::process::Resources";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * Resources_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode Resources_g_tc_processName_string = DDS_INITIALIZE_STRING_TYPECODE((36L));
            static DDS_TypeCode Resources_g_tc_osName_string = DDS_INITIALIZE_STRING_TYPECODE((255L));
            static DDS_TypeCode Resources_g_tc_appVersion_string = DDS_INITIALIZE_STRING_TYPECODE((255L));
            static DDS_TypeCode Resources_g_tc_environment_string = DDS_INITIALIZE_STRING_TYPECODE((255L));

            static DDS_TypeCode_Member Resources_g_tc_members[17]=
            {

                {
                    (char *)"timestamp",/* Member name */
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
                    (char *)"processName",/* Member name */
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
                    RTI_CDR_KEY_MEMBER , /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"pid",/* Member name */
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
                    (char *)"upTime",/* Member name */
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
                    (char *)"cpuPercent",/* Member name */
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
                    (char *)"minCpuPercent",/* Member name */
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
                    (char *)"maxCpuPercent",/* Member name */
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
                    (char *)"vmPeak",/* Member name */
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
                    (char *)"vmSize",/* Member name */
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
                    (char *)"vmSwap",/* Member name */
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
                    (char *)"vmMaxSwap",/* Member name */
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
                    (char *)"numThreads",/* Member name */
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
                    (char *)"minNumThreads",/* Member name */
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
                    (char *)"maxNumThreads",/* Member name */
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
                    (char *)"osName",/* Member name */
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
                    (char *)"appVersion",/* Member name */
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
                    (char *)"environment",/* Member name */
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
                }
            };

            static DDS_TypeCode Resources_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"sys::process::Resources", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    17, /* Number of members */
                    Resources_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for Resources*/

            if (is_initialized) {
                return &Resources_g_tc;
            }

            Resources_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            Resources_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            Resources_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Resources_g_tc_processName_string;
            Resources_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            Resources_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            Resources_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            Resources_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            Resources_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            Resources_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&Resources_g_tc_osName_string;
            Resources_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&Resources_g_tc_appVersion_string;
            Resources_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&Resources_g_tc_environment_string;

            /* Initialize the values for member annotations. */

            Resources_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            Resources_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            Resources_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
            Resources_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            Resources_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            Resources_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            Resources_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            Resources_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            Resources_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            Resources_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[11]._annotations._defaultValue._u.long_value = 0;
            Resources_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[11]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            Resources_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[11]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            Resources_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[12]._annotations._defaultValue._u.long_value = 0;
            Resources_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[12]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            Resources_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[12]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            Resources_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[13]._annotations._defaultValue._u.long_value = 0;
            Resources_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[13]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            Resources_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            Resources_g_tc_members[13]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            Resources_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            Resources_g_tc_members[14]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            Resources_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            Resources_g_tc_members[15]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            Resources_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            Resources_g_tc_members[16]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            Resources_g_tc._data._sampleAccessInfo =
            Resources_get_sample_access_info();
            Resources_g_tc._data._typePlugin =
            Resources_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &Resources_g_tc;
        }

        #define TSeq ResourcesSeq
        #define T Resources
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *Resources_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo Resources_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(ResourcesSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                ResourcesSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &Resources_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *Resources_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            sys::process::Resources *sample;

            static RTIXCdrMemberAccessInfo Resources_g_memberAccessInfos[17] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo Resources_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &Resources_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                sys::process::Resources);
            if (sample == NULL) {
                return NULL;
            }

            Resources_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            Resources_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->processName - (char *)sample);

            Resources_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->pid - (char *)sample);

            Resources_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->upTime - (char *)sample);

            Resources_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->cpuPercent - (char *)sample);

            Resources_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minCpuPercent - (char *)sample);

            Resources_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxCpuPercent - (char *)sample);

            Resources_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->vmPeak - (char *)sample);

            Resources_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->vmSize - (char *)sample);

            Resources_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->vmSwap - (char *)sample);

            Resources_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->vmMaxSwap - (char *)sample);

            Resources_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->numThreads - (char *)sample);

            Resources_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minNumThreads - (char *)sample);

            Resources_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxNumThreads - (char *)sample);

            Resources_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->osName - (char *)sample);

            Resources_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->appVersion - (char *)sample);

            Resources_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->environment - (char *)sample);

            Resources_g_sampleAccessInfo.memberAccessInfos = 
            Resources_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(Resources);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    Resources_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    Resources_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            Resources_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            Resources_g_sampleAccessInfo.getMemberValuePointerFcn = 
            Resources_get_member_value_pointer;

            Resources_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &Resources_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *Resources_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin Resources_g_typePlugin = 
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
                sys::process::Resources_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                sys::process::Resources_finalize_w_return,
                NULL
            };

            return &Resources_g_typePlugin;
        }
        #endif

        RTIBool Resources_initialize(
            Resources* sample) {
            return sys::process::Resources_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool Resources_initialize_ex(
            Resources* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return sys::process::Resources_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool Resources_initialize_w_params(
            Resources* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->processName = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->processName,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->processName == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->processName != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->processName,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->processName == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            sample->pid = 0;

            sample->upTime = 0.0;

            sample->cpuPercent = 0.0;

            sample->minCpuPercent = 0.0;

            sample->maxCpuPercent = 0.0;

            sample->vmPeak = 0.0;

            sample->vmSize = 0.0;

            sample->vmSwap = 0.0;

            sample->vmMaxSwap = 0.0;

            sample->numThreads = 0;

            sample->minNumThreads = 0;

            sample->maxNumThreads = 0;

            if (allocParams->allocate_memory) {
                sample->osName = DDS_String_alloc((255L));
                RTICdrType_copyStringEx(
                    &sample->osName,
                    "",
                    (255L),
                    RTI_FALSE);
                if (sample->osName == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->osName != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->osName,
                        "",
                        (255L),
                        RTI_FALSE);
                    if (sample->osName == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (allocParams->allocate_memory) {
                sample->appVersion = DDS_String_alloc((255L));
                RTICdrType_copyStringEx(
                    &sample->appVersion,
                    "",
                    (255L),
                    RTI_FALSE);
                if (sample->appVersion == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->appVersion != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->appVersion,
                        "",
                        (255L),
                        RTI_FALSE);
                    if (sample->appVersion == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (allocParams->allocate_memory) {
                sample->environment = DDS_String_alloc((255L));
                RTICdrType_copyStringEx(
                    &sample->environment,
                    "",
                    (255L),
                    RTI_FALSE);
                if (sample->environment == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->environment != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->environment,
                        "",
                        (255L),
                        RTI_FALSE);
                    if (sample->environment == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            return RTI_TRUE;
        }

        RTIBool Resources_finalize_w_return(
            Resources* sample)
        {
            sys::process::Resources_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void Resources_finalize(
            Resources* sample)
        {

            sys::process::Resources_finalize_ex(sample,RTI_TRUE);
        }

        void Resources_finalize_ex(
            Resources* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            sys::process::Resources_finalize_w_params(
                sample,&deallocParams);
        }

        void Resources_finalize_w_params(
            Resources* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
        {

            if (sample==NULL) {
                return;
            }

            if (deallocParams == NULL) {
                return;
            }

            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            if (sample->processName != NULL) {
                DDS_String_free(sample->processName);
                sample->processName=NULL;

            }

            if (sample->osName != NULL) {
                DDS_String_free(sample->osName);
                sample->osName=NULL;

            }
            if (sample->appVersion != NULL) {
                DDS_String_free(sample->appVersion);
                sample->appVersion=NULL;

            }
            if (sample->environment != NULL) {
                DDS_String_free(sample->environment);
                sample->environment=NULL;

            }
        }

        void Resources_finalize_optional_members(
            Resources* sample, RTIBool deletePointers)
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

        RTIBool Resources_copy(
            Resources* dst,
            const Resources* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyStringEx (
                    &dst->processName, src->processName, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->pid, &src->pid)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->upTime, &src->upTime)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->cpuPercent, &src->cpuPercent)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minCpuPercent, &src->minCpuPercent)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxCpuPercent, &src->maxCpuPercent)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmPeak, &src->vmPeak)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmSize, &src->vmSize)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmSwap, &src->vmSwap)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->vmMaxSwap, &src->vmMaxSwap)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->numThreads, &src->numThreads)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->minNumThreads, &src->minNumThreads)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyLong (
                    &dst->maxNumThreads, &src->maxNumThreads)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->osName, src->osName, 
                    (255L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->appVersion, src->appVersion, 
                    (255L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->environment, src->environment, 
                    (255L) + 1, RTI_FALSE)){
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
        * Configure and implement 'Resources' sequence class.
        */
        #define T Resources
        #define TSeq ResourcesSeq

        #define T_initialize_w_params sys::process::Resources_initialize_w_params

        #define T_finalize_w_params   sys::process::Resources_finalize_w_params
        #define T_copy       sys::process::Resources_copy

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

} /* namespace sys  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<sys::process::Resources>::get() 
        {
            return (const RTIXCdrTypeCode *) sys::process::Resources_get_typecode();
        }

    } 
}
#endif
