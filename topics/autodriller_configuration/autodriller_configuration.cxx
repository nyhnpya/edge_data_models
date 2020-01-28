

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

#include "autodriller_configuration.h"

#ifndef NDDS_STANDALONE_TYPE
#include "autodriller_configurationPlugin.h"
#endif

#include <new>

namespace nec {

    namespace control {

        /* ========================================================================= */
        const char *HmiRequestTYPENAME = "nec::control::HmiRequest";

        #ifndef NDDS_STANDALONE_TYPE
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode HmiRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::HmiRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    14, /* Number of members */
                    HmiRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for HmiRequest*/

            if (is_initialized) {
                return &HmiRequest_g_tc;
            }

            HmiRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            HmiRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            HmiRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            HmiRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            HmiRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiRequest_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            HmiRequest_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

            /* Initialize the values for member annotations. */
            HmiRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            HmiRequest_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            HmiRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            HmiRequest_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
            HmiRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            HmiRequest_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            HmiRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            HmiRequest_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            HmiRequest_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
            HmiRequest_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiRequest_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiRequest_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiRequest_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            HmiRequest_g_tc_members[12]._annotations._defaultValue._u.long_value = 0;
            HmiRequest_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            HmiRequest_g_tc_members[12]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            HmiRequest_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            HmiRequest_g_tc_members[12]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            HmiRequest_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            HmiRequest_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;

            HmiRequest_g_tc._data._sampleAccessInfo =
            HmiRequest_get_sample_access_info();
            HmiRequest_g_tc._data._typePlugin =
            HmiRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &HmiRequest_g_tc;
        }

        #define TSeq HmiRequestSeq
        #define T HmiRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *HmiRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo HmiRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(HmiRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                HmiRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &HmiRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *HmiRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::control::HmiRequest *sample;

            static RTIXCdrMemberAccessInfo HmiRequest_g_memberAccessInfos[14] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo HmiRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &HmiRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::control::HmiRequest);
            if (sample == NULL) {
                return NULL;
            }

            HmiRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            HmiRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            HmiRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

            HmiRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modeController - (char *)sample);

            HmiRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoDifferentialPressureRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoDifferentialPressureRequestTau - (char *)sample);

            HmiRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoRateOfPenetrationRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoRateOfPenetrationRequestTau - (char *)sample);

            HmiRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoTorqueRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoTorqueRequestTau - (char *)sample);

            HmiRequest_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoWeightOnBitRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modelTwoWeightOnBitRequestTau - (char *)sample);

            HmiRequest_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            HmiRequest_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->tuningEnable - (char *)sample);

            HmiRequest_g_sampleAccessInfo.memberAccessInfos = 
            HmiRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(HmiRequest);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    HmiRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    HmiRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            HmiRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            HmiRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            HmiRequest_get_member_value_pointer;

            HmiRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &HmiRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *HmiRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin HmiRequest_g_typePlugin = 
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
                nec::control::HmiRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::control::HmiRequest_finalize_w_return,
                NULL
            };

            return &HmiRequest_g_typePlugin;
        }
        #endif

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

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }

            sample->mode = 0;

            sample->modeController = 0.0;

            sample->modelTwoDifferentialPressureRequestK = 0.0;

            sample->modelTwoDifferentialPressureRequestTau = 0.0;

            sample->modelTwoRateOfPenetrationRequestK = 0.0;

            sample->modelTwoRateOfPenetrationRequestTau = 0.0;

            sample->modelTwoTorqueRequestK = 0.0;

            sample->modelTwoTorqueRequestTau = 0.0;

            sample->modelTwoWeightOnBitRequestK = 0.0;

            sample->modelTwoWeightOnBitRequestTau = 0.0;

            sample->status = 0;

            sample->tuningEnable = 0;

            return RTI_TRUE;
        }

        RTIBool HmiRequest_finalize_w_return(
            HmiRequest* sample)
        {
            nec::control::HmiRequest_finalize_ex(sample, RTI_TRUE);

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

            if (deallocParams == NULL) {
                return;
            }

            if (sample->id != NULL) {
                DDS_String_free(sample->id);
                sample->id=NULL;

            }
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

            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        }

        RTIBool HmiRequest_copy(
            HmiRequest* dst,
            const HmiRequest* src)
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
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
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

            } catch (const std::bad_alloc&) {
                return RTI_FALSE;
            }
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

        #ifndef NDDS_STANDALONE_TYPE
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }
            };

            static DDS_TypeCode HmiState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::HmiState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    78, /* Number of members */
                    HmiState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for HmiState*/

            if (is_initialized) {
                return &HmiState_g_tc;
            }

            HmiState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            HmiState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            HmiState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            HmiState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            HmiState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            HmiState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            HmiState_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[43]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[44]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[45]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[46]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[47]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[48]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[49]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[50]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[51]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[52]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            HmiState_g_tc_members[53]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[54]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[55]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[56]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[57]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[58]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[59]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[60]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[61]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[62]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[63]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            HmiState_g_tc_members[64]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[65]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[66]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[67]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[68]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[69]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[70]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[71]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[72]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[73]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[74]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            HmiState_g_tc_members[75]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            HmiState_g_tc_members[76]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
            HmiState_g_tc_members[77]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

            /* Initialize the values for member annotations. */
            HmiState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            HmiState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            HmiState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
            HmiState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            HmiState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            HmiState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
            HmiState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            HmiState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            HmiState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[15]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[18]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[18]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[19]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[19]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[20]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[20]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[20]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[20]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[20]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[20]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[21]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[21]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[21]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[21]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[21]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[21]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[22]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[22]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[22]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[22]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[22]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[22]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[23]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[23]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[23]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[23]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[23]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[23]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[24]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[24]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[24]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[24]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[24]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[24]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[25]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[25]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[25]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[25]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[25]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[25]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[26]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[26]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[26]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[26]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[26]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[26]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[27]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[27]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[27]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[27]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[27]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[27]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[28]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[28]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[28]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[28]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[28]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[28]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[29]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[29]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[29]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[29]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[29]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[29]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[30]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[30]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[30]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[30]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[30]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[30]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[31]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[31]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[31]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[31]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[31]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[31]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[32]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[32]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[32]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[32]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[32]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[32]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[33]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[33]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[33]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[33]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[33]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[33]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[34]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[34]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[34]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[34]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[34]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[34]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[35]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[35]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[35]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[35]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[35]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[35]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[36]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[36]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[36]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[36]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[36]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[36]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[37]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[37]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[37]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[37]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[37]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[37]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[38]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[38]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[38]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[38]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[38]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[38]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[39]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[39]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[39]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[39]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[39]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[39]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[40]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[40]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[40]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[40]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[40]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[40]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[41]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            HmiState_g_tc_members[41]._annotations._defaultValue._u.boolean_value = 0;

            HmiState_g_tc_members[42]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[42]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[42]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[42]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[42]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[42]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[43]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[43]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[43]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[43]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[43]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[43]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[44]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[44]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[44]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[44]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[44]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[44]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[45]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[45]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[45]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[45]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[45]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[45]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[46]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[46]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[46]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[46]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[46]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[46]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[47]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[47]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[47]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[47]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[47]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[47]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[48]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[48]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[48]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[48]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[48]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[48]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[49]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[49]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[49]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[49]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[49]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[49]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[50]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[50]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[50]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[50]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[50]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[50]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[51]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[51]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[51]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[51]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[51]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[51]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[52]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            HmiState_g_tc_members[52]._annotations._defaultValue._u.boolean_value = 0;

            HmiState_g_tc_members[53]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[53]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[53]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[53]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[53]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[53]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[54]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[54]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[54]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[54]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[54]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[54]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[55]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[55]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[55]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[55]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[55]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[55]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[56]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[56]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[56]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[56]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[56]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[56]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[57]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[57]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[57]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[57]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[57]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[57]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[58]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[58]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[58]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[58]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[58]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[58]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[59]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[59]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[59]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[59]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[59]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[59]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[60]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[60]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[60]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[60]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[60]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[60]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[61]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[61]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[61]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[61]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[61]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[61]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[62]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[62]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[62]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[62]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[62]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[62]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[63]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            HmiState_g_tc_members[63]._annotations._defaultValue._u.boolean_value = 0;

            HmiState_g_tc_members[64]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[64]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[64]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[64]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[64]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[64]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[65]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[65]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[65]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[65]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[65]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[65]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[66]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[66]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[66]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[66]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[66]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[66]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[67]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[67]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[67]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[67]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[67]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[67]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[68]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[68]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[68]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[68]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[68]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[68]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[69]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[69]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[69]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[69]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[69]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[69]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[70]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[70]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[70]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[70]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[70]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[70]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[71]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[71]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[71]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[71]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[71]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[71]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[72]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[72]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[72]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[72]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[72]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[72]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[73]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[73]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[73]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[73]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[73]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[73]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[74]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            HmiState_g_tc_members[74]._annotations._defaultValue._u.boolean_value = 0;

            HmiState_g_tc_members[75]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[75]._annotations._defaultValue._u.double_value = 0.0;
            HmiState_g_tc_members[75]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[75]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            HmiState_g_tc_members[75]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            HmiState_g_tc_members[75]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            HmiState_g_tc_members[76]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[76]._annotations._defaultValue._u.long_value = 0;
            HmiState_g_tc_members[76]._annotations._minValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[76]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
            HmiState_g_tc_members[76]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
            HmiState_g_tc_members[76]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

            HmiState_g_tc_members[77]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            HmiState_g_tc_members[77]._annotations._defaultValue._u.boolean_value = 0;

            HmiState_g_tc._data._sampleAccessInfo =
            HmiState_get_sample_access_info();
            HmiState_g_tc._data._typePlugin =
            HmiState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &HmiState_g_tc;
        }

        #define TSeq HmiStateSeq
        #define T HmiState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *HmiState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo HmiState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(HmiStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                HmiStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &HmiState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *HmiState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::control::HmiState *sample;

            static RTIXCdrMemberAccessInfo HmiState_g_memberAccessInfos[78] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo HmiState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &HmiState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::control::HmiState);
            if (sample == NULL) {
                return NULL;
            }

            HmiState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            HmiState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            HmiState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

            HmiState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->modeController - (char *)sample);

            HmiState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->pipeInnerDiameter - (char *)sample);

            HmiState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->pipeOuterDiameter - (char *)sample);

            HmiState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->slopeFilter - (char *)sample);

            HmiState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->tauMax - (char *)sample);

            HmiState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->tauMin - (char *)sample);

            HmiState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->tauMultiplier - (char *)sample);

            HmiState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureInitializeK - (char *)sample);

            HmiState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureInitializeTau - (char *)sample);

            HmiState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureInitializePreFilter - (char *)sample);

            HmiState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureR1 - (char *)sample);

            HmiState_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureR2 - (char *)sample);

            HmiState_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationInitializeK - (char *)sample);

            HmiState_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationInitializeTau - (char *)sample);

            HmiState_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationInitializePreFilter - (char *)sample);

            HmiState_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationInitializeR1 - (char *)sample);

            HmiState_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationInitializeR2 - (char *)sample);

            HmiState_g_memberAccessInfos[20].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitializeK - (char *)sample);

            HmiState_g_memberAccessInfos[21].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitializeTau - (char *)sample);

            HmiState_g_memberAccessInfos[22].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitializePreFilter - (char *)sample);

            HmiState_g_memberAccessInfos[23].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitializeR1 - (char *)sample);

            HmiState_g_memberAccessInfos[24].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueInitializeR2 - (char *)sample);

            HmiState_g_memberAccessInfos[25].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitInitializeK - (char *)sample);

            HmiState_g_memberAccessInfos[26].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitInitializeTau - (char *)sample);

            HmiState_g_memberAccessInfos[27].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitInitializePreFilter - (char *)sample);

            HmiState_g_memberAccessInfos[28].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitInitializeR1 - (char *)sample);

            HmiState_g_memberAccessInfos[29].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitInitializeR2 - (char *)sample);

            HmiState_g_memberAccessInfos[30].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->devMin - (char *)sample);

            HmiState_g_memberAccessInfos[31].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->intervalMin - (char *)sample);

            HmiState_g_memberAccessInfos[32].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureFilter - (char *)sample);

            HmiState_g_memberAccessInfos[33].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureKcMax - (char *)sample);

            HmiState_g_memberAccessInfos[34].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureKcMin - (char *)sample);

            HmiState_g_memberAccessInfos[35].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureTdMax - (char *)sample);

            HmiState_g_memberAccessInfos[36].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureTdMin - (char *)sample);

            HmiState_g_memberAccessInfos[37].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureTiMax - (char *)sample);

            HmiState_g_memberAccessInfos[38].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureTiMin - (char *)sample);

            HmiState_g_memberAccessInfos[39].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureD - (char *)sample);

            HmiState_g_memberAccessInfos[40].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureEps - (char *)sample);

            HmiState_g_memberAccessInfos[41].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureEpsManual - (char *)sample);

            HmiState_g_memberAccessInfos[42].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureF - (char *)sample);

            HmiState_g_memberAccessInfos[43].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationFilter - (char *)sample);

            HmiState_g_memberAccessInfos[44].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationKcMax - (char *)sample);

            HmiState_g_memberAccessInfos[45].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationKcMin - (char *)sample);

            HmiState_g_memberAccessInfos[46].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationTdMax - (char *)sample);

            HmiState_g_memberAccessInfos[47].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationTdMin - (char *)sample);

            HmiState_g_memberAccessInfos[48].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationTiMax - (char *)sample);

            HmiState_g_memberAccessInfos[49].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationTiMin - (char *)sample);

            HmiState_g_memberAccessInfos[50].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationD - (char *)sample);

            HmiState_g_memberAccessInfos[51].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationEps - (char *)sample);

            HmiState_g_memberAccessInfos[52].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationEpsManual - (char *)sample);

            HmiState_g_memberAccessInfos[53].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationF - (char *)sample);

            HmiState_g_memberAccessInfos[54].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitFilter - (char *)sample);

            HmiState_g_memberAccessInfos[55].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitKcMax - (char *)sample);

            HmiState_g_memberAccessInfos[56].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitKcMin - (char *)sample);

            HmiState_g_memberAccessInfos[57].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitTdMax - (char *)sample);

            HmiState_g_memberAccessInfos[58].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitTdMin - (char *)sample);

            HmiState_g_memberAccessInfos[59].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitTiMax - (char *)sample);

            HmiState_g_memberAccessInfos[60].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitTiMin - (char *)sample);

            HmiState_g_memberAccessInfos[61].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitD - (char *)sample);

            HmiState_g_memberAccessInfos[62].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitEps - (char *)sample);

            HmiState_g_memberAccessInfos[63].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitEpsManual - (char *)sample);

            HmiState_g_memberAccessInfos[64].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitF - (char *)sample);

            HmiState_g_memberAccessInfos[65].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueFilter - (char *)sample);

            HmiState_g_memberAccessInfos[66].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueKcMax - (char *)sample);

            HmiState_g_memberAccessInfos[67].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueKcMin - (char *)sample);

            HmiState_g_memberAccessInfos[68].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTdMax - (char *)sample);

            HmiState_g_memberAccessInfos[69].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTdMin - (char *)sample);

            HmiState_g_memberAccessInfos[70].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTiMax - (char *)sample);

            HmiState_g_memberAccessInfos[71].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTiMin - (char *)sample);

            HmiState_g_memberAccessInfos[72].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueD - (char *)sample);

            HmiState_g_memberAccessInfos[73].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueEps - (char *)sample);

            HmiState_g_memberAccessInfos[74].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueEpsManual - (char *)sample);

            HmiState_g_memberAccessInfos[75].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueF - (char *)sample);

            HmiState_g_memberAccessInfos[76].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            HmiState_g_memberAccessInfos[77].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->tuningEnabled - (char *)sample);

            HmiState_g_sampleAccessInfo.memberAccessInfos = 
            HmiState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(HmiState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    HmiState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    HmiState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            HmiState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            HmiState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            HmiState_get_member_value_pointer;

            HmiState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &HmiState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *HmiState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin HmiState_g_typePlugin = 
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
                nec::control::HmiState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::control::HmiState_finalize_w_return,
                NULL
            };

            return &HmiState_g_typePlugin;
        }
        #endif

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

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }

            sample->mode = 0;

            sample->modeController = 0;

            sample->pipeInnerDiameter = 0.0;

            sample->pipeOuterDiameter = 0.0;

            sample->slopeFilter = 0.0;

            sample->tauMax = 0.0;

            sample->tauMin = 0.0;

            sample->tauMultiplier = 0.0;

            sample->differentialPressureInitializeK = 0.0;

            sample->differentialPressureInitializeTau = 0.0;

            sample->differentialPressureInitializePreFilter = 0.0;

            sample->differentialPressureR1 = 0.0;

            sample->differentialPressureR2 = 0.0;

            sample->rateOfPenetrationInitializeK = 0.0;

            sample->rateOfPenetrationInitializeTau = 0.0;

            sample->rateOfPenetrationInitializePreFilter = 0.0;

            sample->rateOfPenetrationInitializeR1 = 0.0;

            sample->rateOfPenetrationInitializeR2 = 0.0;

            sample->torqueInitializeK = 0.0;

            sample->torqueInitializeTau = 0.0;

            sample->torqueInitializePreFilter = 0.0;

            sample->torqueInitializeR1 = 0.0;

            sample->torqueInitializeR2 = 0.0;

            sample->weightOnBitInitializeK = 0.0;

            sample->weightOnBitInitializeTau = 0.0;

            sample->weightOnBitInitializePreFilter = 0.0;

            sample->weightOnBitInitializeR1 = 0.0;

            sample->weightOnBitInitializeR2 = 0.0;

            sample->devMin = 0.0;

            sample->intervalMin = 0.0;

            sample->differentialPressureFilter = 0.0;

            sample->differentialPressureKcMax = 0.0;

            sample->differentialPressureKcMin = 0.0;

            sample->differentialPressureTdMax = 0.0;

            sample->differentialPressureTdMin = 0.0;

            sample->differentialPressureTiMax = 0.0;

            sample->differentialPressureTiMin = 0.0;

            sample->differentialPressureD = 0.0;

            sample->differentialPressureEps = 0.0;

            sample->differentialPressureEpsManual = 0;

            sample->differentialPressureF = 0.0;

            sample->rateOfPenetrationFilter = 0.0;

            sample->rateOfPenetrationKcMax = 0.0;

            sample->rateOfPenetrationKcMin = 0.0;

            sample->rateOfPenetrationTdMax = 0.0;

            sample->rateOfPenetrationTdMin = 0.0;

            sample->rateOfPenetrationTiMax = 0.0;

            sample->rateOfPenetrationTiMin = 0.0;

            sample->rateOfPenetrationD = 0.0;

            sample->rateOfPenetrationEps = 0.0;

            sample->rateOfPenetrationEpsManual = 0;

            sample->rateOfPenetrationF = 0.0;

            sample->weightOnBitFilter = 0.0;

            sample->weightOnBitKcMax = 0.0;

            sample->weightOnBitKcMin = 0.0;

            sample->weightOnBitTdMax = 0.0;

            sample->weightOnBitTdMin = 0.0;

            sample->weightOnBitTiMax = 0.0;

            sample->weightOnBitTiMin = 0.0;

            sample->weightOnBitD = 0.0;

            sample->weightOnBitEps = 0.0;

            sample->weightOnBitEpsManual = 0;

            sample->weightOnBitF = 0.0;

            sample->torqueFilter = 0.0;

            sample->torqueKcMax = 0.0;

            sample->torqueKcMin = 0.0;

            sample->torqueTdMax = 0.0;

            sample->torqueTdMin = 0.0;

            sample->torqueTiMax = 0.0;

            sample->torqueTiMin = 0.0;

            sample->torqueD = 0.0;

            sample->torqueEps = 0.0;

            sample->torqueEpsManual = 0;

            sample->torqueF = 0.0;

            sample->status = 0;

            sample->tuningEnabled = 0;

            return RTI_TRUE;
        }

        RTIBool HmiState_finalize_w_return(
            HmiState* sample)
        {
            nec::control::HmiState_finalize_ex(sample, RTI_TRUE);

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

            if (deallocParams == NULL) {
                return;
            }

            if (sample->id != NULL) {
                DDS_String_free(sample->id);
                sample->id=NULL;

            }
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

            DataTypes::Time_finalize_optional_members(&sample->timestamp, deallocParams->delete_pointers);
        }

        RTIBool HmiState_copy(
            HmiState* dst,
            const HmiState* src)
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
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
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

            } catch (const std::bad_alloc&) {
                return RTI_FALSE;
            }
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

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<nec::control::HmiRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::control::HmiRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::control::HmiState>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::control::HmiState_get_typecode();
        }

    } 
}
#endif
