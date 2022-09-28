

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from auto_ream.idl 
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

#include "auto_ream.h"

#ifndef NDDS_STANDALONE_TYPE
#include "auto_reamPlugin.h"
#endif

#include <new>

namespace nec {

    namespace process {

        /* ========================================================================= */
        const char *AutoReamRequestTYPENAME = "nec::process::AutoReamRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * AutoReamRequest_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member AutoReamRequest_g_tc_members[12]=
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
                    (char *)"objectiveId",/* Member name */
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
                    (char *)"priority",/* Member name */
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
                    (char *)"timeNeeded",/* Member name */
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
                    (char *)"duration",/* Member name */
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
                    (char *)"QuillTipPosPV_m",/* Member name */
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
                    (char *)"Hole_depth",/* Member name */
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
                    (char *)"Dp_PressurePV_kPa",/* Member name */
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
                    (char *)"WeightOnBitPV_daN",/* Member name */
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
                    (char *)"StandpipePressUnfiltPV_kPa",/* Member name */
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
                    (char *)"BlockSpeedPV_mps",/* Member name */
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
                    (char *)"TD_Quill_SpeedPV_rpm",/* Member name */
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
                }
            };

            static DDS_TypeCode AutoReamRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::AutoReamRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    12, /* Number of members */
                    AutoReamRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for AutoReamRequest*/

            if (is_initialized) {
                return &AutoReamRequest_g_tc;
            }

            AutoReamRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            AutoReamRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            AutoReamRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            AutoReamRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();
            AutoReamRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            AutoReamRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            AutoReamRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamRequest_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamRequest_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            AutoReamRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            AutoReamRequest_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            AutoReamRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            AutoReamRequest_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            AutoReamRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            AutoReamRequest_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

            AutoReamRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamRequest_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamRequest_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamRequest_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamRequest_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamRequest_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamRequest_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamRequest_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamRequest_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamRequest_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamRequest_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamRequest_g_tc._data._sampleAccessInfo =
            AutoReamRequest_get_sample_access_info();
            AutoReamRequest_g_tc._data._typePlugin =
            AutoReamRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &AutoReamRequest_g_tc;
        }

        #define TSeq AutoReamRequestSeq
        #define T AutoReamRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *AutoReamRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo AutoReamRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(AutoReamRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                AutoReamRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &AutoReamRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *AutoReamRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::process::AutoReamRequest *sample;

            static RTIXCdrMemberAccessInfo AutoReamRequest_g_memberAccessInfos[12] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo AutoReamRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &AutoReamRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::process::AutoReamRequest);
            if (sample == NULL) {
                return NULL;
            }

            AutoReamRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->priority - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timeNeeded - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->duration - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->QuillTipPosPV_m - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->Hole_depth - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->Dp_PressurePV_kPa - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->WeightOnBitPV_daN - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->StandpipePressUnfiltPV_kPa - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->BlockSpeedPV_mps - (char *)sample);

            AutoReamRequest_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->TD_Quill_SpeedPV_rpm - (char *)sample);

            AutoReamRequest_g_sampleAccessInfo.memberAccessInfos = 
            AutoReamRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(AutoReamRequest);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    AutoReamRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    AutoReamRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            AutoReamRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            AutoReamRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            AutoReamRequest_get_member_value_pointer;

            AutoReamRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &AutoReamRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *AutoReamRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin AutoReamRequest_g_typePlugin = 
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
                nec::process::AutoReamRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::process::AutoReamRequest_finalize_w_return,
                NULL
            };

            return &AutoReamRequest_g_typePlugin;
        }
        #endif

        RTIBool AutoReamRequest_initialize(
            AutoReamRequest* sample) {
            return nec::process::AutoReamRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool AutoReamRequest_initialize_ex(
            AutoReamRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::AutoReamRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool AutoReamRequest_initialize_w_params(
            AutoReamRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (allocParams->allocate_memory) {
                sample->objectiveId = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->objectiveId,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->objectiveId == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->objectiveId != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->objectiveId,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->objectiveId == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            sample->priority = DataTypes::Normal;
            if (!DataTypes::Time_initialize_w_params(&sample->timeNeeded,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->duration,
            allocParams)) {
                return RTI_FALSE;
            }
            sample->QuillTipPosPV_m = 0.0;

            sample->Hole_depth = 0.0;

            sample->Dp_PressurePV_kPa = 0.0;

            sample->WeightOnBitPV_daN = 0.0;

            sample->StandpipePressUnfiltPV_kPa = 0.0;

            sample->BlockSpeedPV_mps = 0.0;

            sample->TD_Quill_SpeedPV_rpm = 0.0;

            return RTI_TRUE;
        }

        RTIBool AutoReamRequest_finalize_w_return(
            AutoReamRequest* sample)
        {
            nec::process::AutoReamRequest_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void AutoReamRequest_finalize(
            AutoReamRequest* sample)
        {

            nec::process::AutoReamRequest_finalize_ex(sample,RTI_TRUE);
        }

        void AutoReamRequest_finalize_ex(
            AutoReamRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::AutoReamRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void AutoReamRequest_finalize_w_params(
            AutoReamRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
            if (sample->objectiveId != NULL) {
                DDS_String_free(sample->objectiveId);
                sample->objectiveId=NULL;

            }
            DataTypes::Priority_finalize_w_params(&sample->priority,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->timeNeeded,deallocParams);

            DataTypes::Time_finalize_w_params(&sample->duration,deallocParams);

        }

        void AutoReamRequest_finalize_optional_members(
            AutoReamRequest* sample, RTIBool deletePointers)
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

        RTIBool AutoReamRequest_copy(
            AutoReamRequest* dst,
            const AutoReamRequest* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->objectiveId, src->objectiveId, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Priority_copy(
                    &dst->priority,(const DataTypes::Priority*)&src->priority)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->timeNeeded,(const DataTypes::Time*)&src->timeNeeded)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Time_copy(
                    &dst->duration,(const DataTypes::Time*)&src->duration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->QuillTipPosPV_m, &src->QuillTipPosPV_m)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->Hole_depth, &src->Hole_depth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->Dp_PressurePV_kPa, &src->Dp_PressurePV_kPa)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->WeightOnBitPV_daN, &src->WeightOnBitPV_daN)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->StandpipePressUnfiltPV_kPa, &src->StandpipePressUnfiltPV_kPa)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->BlockSpeedPV_mps, &src->BlockSpeedPV_mps)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->TD_Quill_SpeedPV_rpm, &src->TD_Quill_SpeedPV_rpm)) { 
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
        * Configure and implement 'AutoReamRequest' sequence class.
        */
        #define T AutoReamRequest
        #define TSeq AutoReamRequestSeq

        #define T_initialize_w_params nec::process::AutoReamRequest_initialize_w_params

        #define T_finalize_w_params   nec::process::AutoReamRequest_finalize_w_params
        #define T_copy       nec::process::AutoReamRequest_copy

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
        const char *AutoReamObjectiveTYPENAME = "nec::process::AutoReamObjective";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * AutoReamObjective_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member AutoReamObjective_g_tc_members[10]=
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
                    (char *)"objectiveId",/* Member name */
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
                    (char *)"estimatedDuration",/* Member name */
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
                    (char *)"QuillTipPosPV_m",/* Member name */
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
                    (char *)"Hole_depth",/* Member name */
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
                    (char *)"Dp_PressurePV_kPa",/* Member name */
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
                    (char *)"WeightOnBitPV_daN",/* Member name */
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
                    (char *)"StandpipePressUnfiltPV_kPa",/* Member name */
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
                    (char *)"BlockSpeedPV_mps",/* Member name */
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
                    (char *)"TD_Quill_SpeedPV_rpm",/* Member name */
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
                }
            };

            static DDS_TypeCode AutoReamObjective_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::AutoReamObjective", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    10, /* Number of members */
                    AutoReamObjective_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for AutoReamObjective*/

            if (is_initialized) {
                return &AutoReamObjective_g_tc;
            }

            AutoReamObjective_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            AutoReamObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            AutoReamObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            AutoReamObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            AutoReamObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamObjective_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamObjective_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamObjective_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamObjective_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamObjective_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamObjective_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            AutoReamObjective_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            AutoReamObjective_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            AutoReamObjective_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            AutoReamObjective_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            AutoReamObjective_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamObjective_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamObjective_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamObjective_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamObjective_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamObjective_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamObjective_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamObjective_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamObjective_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamObjective_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamObjective_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamObjective_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamObjective_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamObjective_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamObjective_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamObjective_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamObjective_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamObjective_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamObjective_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamObjective_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamObjective_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamObjective_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamObjective_g_tc._data._sampleAccessInfo =
            AutoReamObjective_get_sample_access_info();
            AutoReamObjective_g_tc._data._typePlugin =
            AutoReamObjective_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &AutoReamObjective_g_tc;
        }

        #define TSeq AutoReamObjectiveSeq
        #define T AutoReamObjective
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *AutoReamObjective_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo AutoReamObjective_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(AutoReamObjectiveSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                AutoReamObjectiveSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &AutoReamObjective_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *AutoReamObjective_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::process::AutoReamObjective *sample;

            static RTIXCdrMemberAccessInfo AutoReamObjective_g_memberAccessInfos[10] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo AutoReamObjective_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &AutoReamObjective_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::process::AutoReamObjective);
            if (sample == NULL) {
                return NULL;
            }

            AutoReamObjective_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->estimatedDuration - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->QuillTipPosPV_m - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->Hole_depth - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->Dp_PressurePV_kPa - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->WeightOnBitPV_daN - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->StandpipePressUnfiltPV_kPa - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->BlockSpeedPV_mps - (char *)sample);

            AutoReamObjective_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->TD_Quill_SpeedPV_rpm - (char *)sample);

            AutoReamObjective_g_sampleAccessInfo.memberAccessInfos = 
            AutoReamObjective_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(AutoReamObjective);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    AutoReamObjective_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    AutoReamObjective_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            AutoReamObjective_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            AutoReamObjective_g_sampleAccessInfo.getMemberValuePointerFcn = 
            AutoReamObjective_get_member_value_pointer;

            AutoReamObjective_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &AutoReamObjective_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *AutoReamObjective_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin AutoReamObjective_g_typePlugin = 
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
                nec::process::AutoReamObjective_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::process::AutoReamObjective_finalize_w_return,
                NULL
            };

            return &AutoReamObjective_g_typePlugin;
        }
        #endif

        RTIBool AutoReamObjective_initialize(
            AutoReamObjective* sample) {
            return nec::process::AutoReamObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool AutoReamObjective_initialize_ex(
            AutoReamObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::AutoReamObjective_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool AutoReamObjective_initialize_w_params(
            AutoReamObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (allocParams->allocate_memory) {
                sample->objectiveId = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->objectiveId,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->objectiveId == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->objectiveId != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->objectiveId,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->objectiveId == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
            allocParams)) {
                return RTI_FALSE;
            }
            sample->QuillTipPosPV_m = 0.0;

            sample->Hole_depth = 0.0;

            sample->Dp_PressurePV_kPa = 0.0;

            sample->WeightOnBitPV_daN = 0.0;

            sample->StandpipePressUnfiltPV_kPa = 0.0;

            sample->BlockSpeedPV_mps = 0.0;

            sample->TD_Quill_SpeedPV_rpm = 0.0;

            return RTI_TRUE;
        }

        RTIBool AutoReamObjective_finalize_w_return(
            AutoReamObjective* sample)
        {
            nec::process::AutoReamObjective_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void AutoReamObjective_finalize(
            AutoReamObjective* sample)
        {

            nec::process::AutoReamObjective_finalize_ex(sample,RTI_TRUE);
        }

        void AutoReamObjective_finalize_ex(
            AutoReamObjective* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::AutoReamObjective_finalize_w_params(
                sample,&deallocParams);
        }

        void AutoReamObjective_finalize_w_params(
            AutoReamObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
            if (sample->objectiveId != NULL) {
                DDS_String_free(sample->objectiveId);
                sample->objectiveId=NULL;

            }
            DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

        }

        void AutoReamObjective_finalize_optional_members(
            AutoReamObjective* sample, RTIBool deletePointers)
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

        RTIBool AutoReamObjective_copy(
            AutoReamObjective* dst,
            const AutoReamObjective* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->objectiveId, src->objectiveId, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Time_copy(
                    &dst->estimatedDuration,(const DataTypes::Time*)&src->estimatedDuration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->QuillTipPosPV_m, &src->QuillTipPosPV_m)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->Hole_depth, &src->Hole_depth)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->Dp_PressurePV_kPa, &src->Dp_PressurePV_kPa)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->WeightOnBitPV_daN, &src->WeightOnBitPV_daN)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->StandpipePressUnfiltPV_kPa, &src->StandpipePressUnfiltPV_kPa)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->BlockSpeedPV_mps, &src->BlockSpeedPV_mps)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->TD_Quill_SpeedPV_rpm, &src->TD_Quill_SpeedPV_rpm)) { 
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
        * Configure and implement 'AutoReamObjective' sequence class.
        */
        #define T AutoReamObjective
        #define TSeq AutoReamObjectiveSeq

        #define T_initialize_w_params nec::process::AutoReamObjective_initialize_w_params

        #define T_finalize_w_params   nec::process::AutoReamObjective_finalize_w_params
        #define T_copy       nec::process::AutoReamObjective_copy

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
        const char *AutoReamStateTYPENAME = "nec::process::AutoReamState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * AutoReamState_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member AutoReamState_g_tc_members[12]=
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
                    (char *)"objectiveId",/* Member name */
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
                    NULL, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER
                }, 
                {
                    (char *)"status",/* Member name */
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
                    (char *)"hookloadActual",/* Member name */
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
                    (char *)"holeDepthActual",/* Member name */
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
                    (char *)"differentialPressureActual",/* Member name */
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
                    (char *)"weightOnBitActual",/* Member name */
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
                    (char *)"standpipePressureActual",/* Member name */
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
                    (char *)"blockSpeedActual",/* Member name */
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
                    (char *)"quillPositionActual",/* Member name */
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
                    (char *)"quillRateActual",/* Member name */
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
                }
            };

            static DDS_TypeCode AutoReamState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::AutoReamState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    12, /* Number of members */
                    AutoReamState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for AutoReamState*/

            if (is_initialized) {
                return &AutoReamState_g_tc;
            }

            AutoReamState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            AutoReamState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            AutoReamState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            AutoReamState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            AutoReamState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Status_get_typecode();
            AutoReamState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            AutoReamState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            AutoReamState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            AutoReamState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            AutoReamState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            AutoReamState_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            AutoReamState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            AutoReamState_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

            AutoReamState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
            AutoReamState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            AutoReamState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            AutoReamState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            AutoReamState_g_tc._data._sampleAccessInfo =
            AutoReamState_get_sample_access_info();
            AutoReamState_g_tc._data._typePlugin =
            AutoReamState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &AutoReamState_g_tc;
        }

        #define TSeq AutoReamStateSeq
        #define T AutoReamState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *AutoReamState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo AutoReamState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(AutoReamStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                AutoReamStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &AutoReamState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *AutoReamState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::process::AutoReamState *sample;

            static RTIXCdrMemberAccessInfo AutoReamState_g_memberAccessInfos[12] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo AutoReamState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &AutoReamState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::process::AutoReamState);
            if (sample == NULL) {
                return NULL;
            }

            AutoReamState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            AutoReamState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            AutoReamState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            AutoReamState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

            AutoReamState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->hookloadActual - (char *)sample);

            AutoReamState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->holeDepthActual - (char *)sample);

            AutoReamState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureActual - (char *)sample);

            AutoReamState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->weightOnBitActual - (char *)sample);

            AutoReamState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->standpipePressureActual - (char *)sample);

            AutoReamState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->blockSpeedActual - (char *)sample);

            AutoReamState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->quillPositionActual - (char *)sample);

            AutoReamState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->quillRateActual - (char *)sample);

            AutoReamState_g_sampleAccessInfo.memberAccessInfos = 
            AutoReamState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(AutoReamState);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    AutoReamState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    AutoReamState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            AutoReamState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            AutoReamState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            AutoReamState_get_member_value_pointer;

            AutoReamState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &AutoReamState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *AutoReamState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin AutoReamState_g_typePlugin = 
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
                nec::process::AutoReamState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::process::AutoReamState_finalize_w_return,
                NULL
            };

            return &AutoReamState_g_typePlugin;
        }
        #endif

        RTIBool AutoReamState_initialize(
            AutoReamState* sample) {
            return nec::process::AutoReamState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool AutoReamState_initialize_ex(
            AutoReamState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::AutoReamState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool AutoReamState_initialize_w_params(
            AutoReamState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
        {

            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (allocParams == NULL) {
                return RTI_FALSE;
            }

            if (allocParams->allocate_memory) {
                sample->id = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->id,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->id == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->id != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->id,
                        "",
                        (36L),
                        RTI_FALSE);
                    if (sample->id == NULL) {
                        return RTI_FALSE;
                    }
                }
            }

            if (allocParams->allocate_memory) {
                sample->objectiveId = DDS_String_alloc((36L));
                RTICdrType_copyStringEx(
                    &sample->objectiveId,
                    "",
                    (36L),
                    RTI_FALSE);
                if (sample->objectiveId == NULL) {
                    return RTI_FALSE;
                }
            } else {
                if (sample->objectiveId != NULL) {
                    RTICdrType_copyStringEx(
                        &sample->objectiveId,
                        "",
                        (36L),
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
            sample->status = DataTypes::Fault;
            sample->hookloadActual = 0.0;

            sample->holeDepthActual = 0.0;

            sample->differentialPressureActual = 0.0;

            sample->weightOnBitActual = 0.0;

            sample->standpipePressureActual = 0.0;

            sample->blockSpeedActual = 0.0;

            sample->quillPositionActual = 0.0;

            sample->quillRateActual = 0.0;

            return RTI_TRUE;
        }

        RTIBool AutoReamState_finalize_w_return(
            AutoReamState* sample)
        {
            nec::process::AutoReamState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void AutoReamState_finalize(
            AutoReamState* sample)
        {

            nec::process::AutoReamState_finalize_ex(sample,RTI_TRUE);
        }

        void AutoReamState_finalize_ex(
            AutoReamState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::AutoReamState_finalize_w_params(
                sample,&deallocParams);
        }

        void AutoReamState_finalize_w_params(
            AutoReamState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
            if (sample->objectiveId != NULL) {
                DDS_String_free(sample->objectiveId);
                sample->objectiveId=NULL;

            }
            DataTypes::Time_finalize_w_params(&sample->timestamp,deallocParams);

            DataTypes::Status_finalize_w_params(&sample->status,deallocParams);

        }

        void AutoReamState_finalize_optional_members(
            AutoReamState* sample, RTIBool deletePointers)
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

        RTIBool AutoReamState_copy(
            AutoReamState* dst,
            const AutoReamState* src)
        {
            try {

                if (dst == NULL || src == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_copyStringEx (
                    &dst->id, src->id, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyStringEx (
                    &dst->objectiveId, src->objectiveId, 
                    (36L) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!DataTypes::Status_copy(
                    &dst->status,(const DataTypes::Status*)&src->status)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->hookloadActual, &src->hookloadActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->holeDepthActual, &src->holeDepthActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->differentialPressureActual, &src->differentialPressureActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->weightOnBitActual, &src->weightOnBitActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->standpipePressureActual, &src->standpipePressureActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->blockSpeedActual, &src->blockSpeedActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->quillPositionActual, &src->quillPositionActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->quillRateActual, &src->quillRateActual)) { 
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
        * Configure and implement 'AutoReamState' sequence class.
        */
        #define T AutoReamState
        #define TSeq AutoReamStateSeq

        #define T_initialize_w_params nec::process::AutoReamState_initialize_w_params

        #define T_finalize_w_params   nec::process::AutoReamState_finalize_w_params
        #define T_copy       nec::process::AutoReamState_copy

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

} /* namespace nec  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<nec::process::AutoReamRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::process::AutoReamRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::process::AutoReamObjective>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::process::AutoReamObjective_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::process::AutoReamState>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::process::AutoReamState_get_typecode();
        }

    } 
}
#endif
