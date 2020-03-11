

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_limits.idl using "rtiddsgen".
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

#include "drilling_limits.h"

#ifndef NDDS_STANDALONE_TYPE
#include "drilling_limitsPlugin.h"
#endif

#include <new>

namespace process {

    namespace plan {

        /* ========================================================================= */
        const char *DrillingLimitsTYPENAME = "process::plan::DrillingLimits";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* DrillingLimits_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillingLimits_g_tc_members[13]=
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"startDepth",/* Member name */
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
                    (char *)"endDepth",/* Member name */
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
                    (char *)"ropMin",/* Member name */
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
                    (char *)"ropMax",/* Member name */
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
                    (char *)"wobMin",/* Member name */
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
                    (char *)"wobMax",/* Member name */
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
                    (char *)"diffPMin",/* Member name */
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
                    (char *)"diffPMax",/* Member name */
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
                    (char *)"torqueMin",/* Member name */
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
                    (char *)"torqueMax",/* Member name */
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
                    (char *)"rotateMin",/* Member name */
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
                    (char *)"rotateMax",/* Member name */
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
                }
            };

            static DDS_TypeCode DrillingLimits_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"process::plan::DrillingLimits", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    13, /* Number of members */
                    DrillingLimits_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillingLimits*/

            if (is_initialized) {
                return &DrillingLimits_g_tc;
            }

            DrillingLimits_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillingLimits_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillingLimits_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingLimits_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            DrillingLimits_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillingLimits_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillingLimits_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
            DrillingLimits_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingLimits_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingLimits_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingLimits_g_tc._data._sampleAccessInfo =
            DrillingLimits_get_sample_access_info();
            DrillingLimits_g_tc._data._typePlugin =
            DrillingLimits_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillingLimits_g_tc;
        }

        #define TSeq DrillingLimitsSeq
        #define T DrillingLimits
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillingLimits_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillingLimits_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillingLimitsSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillingLimitsSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillingLimits_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillingLimits_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            process::plan::DrillingLimits *sample;

            static RTIXCdrMemberAccessInfo DrillingLimits_g_memberAccessInfos[13] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillingLimits_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillingLimits_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                process::plan::DrillingLimits);
            if (sample == NULL) {
                return NULL;
            }

            DrillingLimits_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            DrillingLimits_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->startDepth - (char *)sample);

            DrillingLimits_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->endDepth - (char *)sample);

            DrillingLimits_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMin - (char *)sample);

            DrillingLimits_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMax - (char *)sample);

            DrillingLimits_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMin - (char *)sample);

            DrillingLimits_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMax - (char *)sample);

            DrillingLimits_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPMin - (char *)sample);

            DrillingLimits_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPMax - (char *)sample);

            DrillingLimits_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMin - (char *)sample);

            DrillingLimits_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMax - (char *)sample);

            DrillingLimits_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rotateMin - (char *)sample);

            DrillingLimits_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rotateMax - (char *)sample);

            DrillingLimits_g_sampleAccessInfo.memberAccessInfos = 
            DrillingLimits_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillingLimits);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    DrillingLimits_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    DrillingLimits_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillingLimits_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillingLimits_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillingLimits_get_member_value_pointer;

            DrillingLimits_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillingLimits_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillingLimits_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillingLimits_g_typePlugin = 
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
                process::plan::DrillingLimits_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                process::plan::DrillingLimits_finalize_w_return,
                NULL
            };

            return &DrillingLimits_g_typePlugin;
        }
        #endif

        RTIBool DrillingLimits_initialize(
            DrillingLimits* sample) {
            return process::plan::DrillingLimits_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillingLimits_initialize_ex(
            DrillingLimits* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return process::plan::DrillingLimits_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillingLimits_initialize_w_params(
            DrillingLimits* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            sample->startDepth = 0.0;

            sample->endDepth = 0.0;

            sample->ropMin = 0.0;

            sample->ropMax = 0.0;

            sample->wobMin = 0.0;

            sample->wobMax = 0.0;

            sample->diffPMin = 0.0;

            sample->diffPMax = 0.0;

            sample->torqueMin = 0.0;

            sample->torqueMax = 0.0;

            sample->rotateMin = 0.0;

            sample->rotateMax = 0.0;

            return RTI_TRUE;
        }

        RTIBool DrillingLimits_finalize_w_return(
            DrillingLimits* sample)
        {
            process::plan::DrillingLimits_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillingLimits_finalize(
            DrillingLimits* sample)
        {

            process::plan::DrillingLimits_finalize_ex(sample,RTI_TRUE);
        }

        void DrillingLimits_finalize_ex(
            DrillingLimits* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            process::plan::DrillingLimits_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillingLimits_finalize_w_params(
            DrillingLimits* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

        }

        void DrillingLimits_finalize_optional_members(
            DrillingLimits* sample, RTIBool deletePointers)
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

        RTIBool DrillingLimits_copy(
            DrillingLimits* dst,
            const DrillingLimits* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->startDepth, &src->startDepth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->endDepth, &src->endDepth)) { 
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
                    &dst->wobMin, &src->wobMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobMax, &src->wobMax)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPMin, &src->diffPMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPMax, &src->diffPMax)) { 
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
                    &dst->rotateMin, &src->rotateMin)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->rotateMax, &src->rotateMax)) { 
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
        * Configure and implement 'DrillingLimits' sequence class.
        */
        #define T DrillingLimits
        #define TSeq DrillingLimitsSeq

        #define T_initialize_w_params process::plan::DrillingLimits_initialize_w_params

        #define T_finalize_w_params   process::plan::DrillingLimits_finalize_w_params
        #define T_copy       process::plan::DrillingLimits_copy

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

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<process::plan::DrillingLimits>::get() 
        {
            return (const RTIXCdrTypeCode *) process::plan::DrillingLimits_get_typecode();
        }

    } 
}
#endif
