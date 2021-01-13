

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
                    (char *)"differentialPressureRequestK",/* Member name */
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
                    (char *)"differentialPressureRequestTau",/* Member name */
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
                    (char *)"rateOfPenetrationRequestK",/* Member name */
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
                    (char *)"rateOfPenetrationRequestTau",/* Member name */
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
                    (char *)"torqueRequestK",/* Member name */
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
                    (char *)"torqueRequestTau",/* Member name */
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
                    (char *)"weightOnBitRequestK",/* Member name */
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
                    (char *)"weightOnBitRequestTau",/* Member name */
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
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureRequestTau - (char *)sample);

            HmiRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->rateOfPenetrationRequestTau - (char *)sample);

            HmiRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueRequestTau - (char *)sample);

            HmiRequest_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitRequestK - (char *)sample);

            HmiRequest_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitRequestTau - (char *)sample);

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

            sample->differentialPressureRequestK = 0.0;

            sample->differentialPressureRequestTau = 0.0;

            sample->rateOfPenetrationRequestK = 0.0;

            sample->rateOfPenetrationRequestTau = 0.0;

            sample->torqueRequestK = 0.0;

            sample->torqueRequestTau = 0.0;

            sample->weightOnBitRequestK = 0.0;

            sample->weightOnBitRequestTau = 0.0;

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
                    &dst->differentialPressureRequestK, &src->differentialPressureRequestK)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->differentialPressureRequestTau, &src->differentialPressureRequestTau)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->rateOfPenetrationRequestK, &src->rateOfPenetrationRequestK)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->rateOfPenetrationRequestTau, &src->rateOfPenetrationRequestTau)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueRequestK, &src->torqueRequestK)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueRequestTau, &src->torqueRequestTau)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->weightOnBitRequestK, &src->weightOnBitRequestK)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->weightOnBitRequestTau, &src->weightOnBitRequestTau)) { 
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

    } /* namespace control  */

} /* namespace nec  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<nec::control::HmiRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::control::HmiRequest_get_typecode();
        }

    } 
}
#endif
