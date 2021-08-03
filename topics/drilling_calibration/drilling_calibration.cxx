

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_calibration.idl 
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

#include "drilling_calibration.h"

#ifndef NDDS_STANDALONE_TYPE
#include "drilling_calibrationPlugin.h"
#endif

#include <new>

namespace nec {

    namespace control {

        /* ========================================================================= */
        const char *DrillingCalibrationRequestTYPENAME = "nec::control::DrillingCalibrationRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * DrillingCalibrationRequest_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillingCalibrationRequest_g_tc_members[8]=
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
                    (char *)"wobProportional",/* Member name */
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
                    (char *)"wobIntegral",/* Member name */
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
                    (char *)"differentialPressureProportional",/* Member name */
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
                    (char *)"differentialPressureIntegral",/* Member name */
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
                    (char *)"torqueProportional",/* Member name */
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
                    (char *)"torqueIntegral",/* Member name */
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
                }
            };

            static DDS_TypeCode DrillingCalibrationRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::DrillingCalibrationRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    8, /* Number of members */
                    DrillingCalibrationRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillingCalibrationRequest*/

            if (is_initialized) {
                return &DrillingCalibrationRequest_g_tc;
            }

            DrillingCalibrationRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillingCalibrationRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillingCalibrationRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            DrillingCalibrationRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            DrillingCalibrationRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillingCalibrationRequest_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillingCalibrationRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationRequest_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationRequest_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationRequest_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationRequest_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationRequest_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationRequest_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationRequest_g_tc._data._sampleAccessInfo =
            DrillingCalibrationRequest_get_sample_access_info();
            DrillingCalibrationRequest_g_tc._data._typePlugin =
            DrillingCalibrationRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillingCalibrationRequest_g_tc;
        }

        #define TSeq DrillingCalibrationRequestSeq
        #define T DrillingCalibrationRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillingCalibrationRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillingCalibrationRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillingCalibrationRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillingCalibrationRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillingCalibrationRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillingCalibrationRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::control::DrillingCalibrationRequest *sample;

            static RTIXCdrMemberAccessInfo DrillingCalibrationRequest_g_memberAccessInfos[8] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillingCalibrationRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillingCalibrationRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::control::DrillingCalibrationRequest);
            if (sample == NULL) {
                return NULL;
            }

            DrillingCalibrationRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            DrillingCalibrationRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            DrillingCalibrationRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobProportional - (char *)sample);

            DrillingCalibrationRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobIntegral - (char *)sample);

            DrillingCalibrationRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureProportional - (char *)sample);

            DrillingCalibrationRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureIntegral - (char *)sample);

            DrillingCalibrationRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueProportional - (char *)sample);

            DrillingCalibrationRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueIntegral - (char *)sample);

            DrillingCalibrationRequest_g_sampleAccessInfo.memberAccessInfos = 
            DrillingCalibrationRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillingCalibrationRequest);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    DrillingCalibrationRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    DrillingCalibrationRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillingCalibrationRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillingCalibrationRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillingCalibrationRequest_get_member_value_pointer;

            DrillingCalibrationRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillingCalibrationRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillingCalibrationRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillingCalibrationRequest_g_typePlugin = 
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
                nec::control::DrillingCalibrationRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::control::DrillingCalibrationRequest_finalize_w_return,
                NULL
            };

            return &DrillingCalibrationRequest_g_typePlugin;
        }
        #endif

        RTIBool DrillingCalibrationRequest_initialize(
            DrillingCalibrationRequest* sample) {
            return nec::control::DrillingCalibrationRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillingCalibrationRequest_initialize_ex(
            DrillingCalibrationRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::DrillingCalibrationRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillingCalibrationRequest_initialize_w_params(
            DrillingCalibrationRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            sample->wobProportional = 0.0;

            sample->wobIntegral = 0.0;

            sample->differentialPressureProportional = 0.0;

            sample->differentialPressureIntegral = 0.0;

            sample->torqueProportional = 0.0;

            sample->torqueIntegral = 0.0;

            return RTI_TRUE;
        }

        RTIBool DrillingCalibrationRequest_finalize_w_return(
            DrillingCalibrationRequest* sample)
        {
            nec::control::DrillingCalibrationRequest_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillingCalibrationRequest_finalize(
            DrillingCalibrationRequest* sample)
        {

            nec::control::DrillingCalibrationRequest_finalize_ex(sample,RTI_TRUE);
        }

        void DrillingCalibrationRequest_finalize_ex(
            DrillingCalibrationRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::DrillingCalibrationRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillingCalibrationRequest_finalize_w_params(
            DrillingCalibrationRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

        void DrillingCalibrationRequest_finalize_optional_members(
            DrillingCalibrationRequest* sample, RTIBool deletePointers)
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

        RTIBool DrillingCalibrationRequest_copy(
            DrillingCalibrationRequest* dst,
            const DrillingCalibrationRequest* src)
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
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->wobProportional, &src->wobProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobIntegral, &src->wobIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->differentialPressureProportional, &src->differentialPressureProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->differentialPressureIntegral, &src->differentialPressureIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueProportional, &src->torqueProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueIntegral, &src->torqueIntegral)) { 
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
        * Configure and implement 'DrillingCalibrationRequest' sequence class.
        */
        #define T DrillingCalibrationRequest
        #define TSeq DrillingCalibrationRequestSeq

        #define T_initialize_w_params nec::control::DrillingCalibrationRequest_initialize_w_params

        #define T_finalize_w_params   nec::control::DrillingCalibrationRequest_finalize_w_params
        #define T_copy       nec::control::DrillingCalibrationRequest_copy

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
        const char *DrillingCalibrationStateTYPENAME = "nec::control::DrillingCalibrationState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode * DrillingCalibrationState_get_typecode(void)
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillingCalibrationState_g_tc_members[20]=
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
                    (char *)"wobProportional",/* Member name */
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
                    (char *)"wobIntegral",/* Member name */
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
                    (char *)"differentialPressureProportional",/* Member name */
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
                    (char *)"differentialPressureIntegral",/* Member name */
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
                    (char *)"torqueProportional",/* Member name */
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
                    (char *)"torqueIntegral",/* Member name */
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
                    (char *)"minWobProportional",/* Member name */
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
                    (char *)"maxWobProportional",/* Member name */
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
                    (char *)"minWobIntegral",/* Member name */
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
                    (char *)"maxWobIntegral",/* Member name */
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
                    (char *)"minDifferentialPressureProportional",/* Member name */
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
                    (char *)"maxDifferentialPressureProportional",/* Member name */
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
                    (char *)"minDifferentialPressureIntegral",/* Member name */
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
                    (char *)"maxDifferentialPressureIntegral",/* Member name */
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
                    (char *)"minTorqueProportional",/* Member name */
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
                    (char *)"maxTorqueProportional",/* Member name */
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
                    (char *)"minTorqueIntegral",/* Member name */
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
                    (char *)"maxTorqueIntegral",/* Member name */
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
                }
            };

            static DDS_TypeCode DrillingCalibrationState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::control::DrillingCalibrationState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    20, /* Number of members */
                    DrillingCalibrationState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillingCalibrationState*/

            if (is_initialized) {
                return &DrillingCalibrationState_g_tc;
            }

            DrillingCalibrationState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillingCalibrationState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillingCalibrationState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            DrillingCalibrationState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillingCalibrationState_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

            /* Initialize the values for member annotations. */
            DrillingCalibrationState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillingCalibrationState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillingCalibrationState_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[11]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[11]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[12]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[12]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[14]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[14]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[15]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[18]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[18]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[19]._annotations._defaultValue._u.double_value = 0.0;
            DrillingCalibrationState_g_tc_members[19]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[19]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillingCalibrationState_g_tc_members[19]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillingCalibrationState_g_tc_members[19]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillingCalibrationState_g_tc._data._sampleAccessInfo =
            DrillingCalibrationState_get_sample_access_info();
            DrillingCalibrationState_g_tc._data._typePlugin =
            DrillingCalibrationState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillingCalibrationState_g_tc;
        }

        #define TSeq DrillingCalibrationStateSeq
        #define T DrillingCalibrationState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillingCalibrationState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillingCalibrationState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillingCalibrationStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillingCalibrationStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillingCalibrationState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillingCalibrationState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::control::DrillingCalibrationState *sample;

            static RTIXCdrMemberAccessInfo DrillingCalibrationState_g_memberAccessInfos[20] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillingCalibrationState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillingCalibrationState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::control::DrillingCalibrationState);
            if (sample == NULL) {
                return NULL;
            }

            DrillingCalibrationState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->differentialPressureIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minWobProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxWobProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minWobIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxWobIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minDifferentialPressureProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxDifferentialPressureProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minDifferentialPressureIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxDifferentialPressureIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minTorqueProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxTorqueProportional - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->minTorqueIntegral - (char *)sample);

            DrillingCalibrationState_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->maxTorqueIntegral - (char *)sample);

            DrillingCalibrationState_g_sampleAccessInfo.memberAccessInfos = 
            DrillingCalibrationState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillingCalibrationState);

                if (candidateTypeSize > RTIXCdrLong_MAX) {
                    DrillingCalibrationState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrLong_MAX;
                } else {
                    DrillingCalibrationState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillingCalibrationState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillingCalibrationState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillingCalibrationState_get_member_value_pointer;

            DrillingCalibrationState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillingCalibrationState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillingCalibrationState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillingCalibrationState_g_typePlugin = 
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
                nec::control::DrillingCalibrationState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::control::DrillingCalibrationState_finalize_w_return,
                NULL
            };

            return &DrillingCalibrationState_g_typePlugin;
        }
        #endif

        RTIBool DrillingCalibrationState_initialize(
            DrillingCalibrationState* sample) {
            return nec::control::DrillingCalibrationState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillingCalibrationState_initialize_ex(
            DrillingCalibrationState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::control::DrillingCalibrationState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillingCalibrationState_initialize_w_params(
            DrillingCalibrationState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            if (!DataTypes::Time_initialize_w_params(&sample->timestamp,
            allocParams)) {
                return RTI_FALSE;
            }
            sample->wobProportional = 0.0;

            sample->wobIntegral = 0.0;

            sample->differentialPressureProportional = 0.0;

            sample->differentialPressureIntegral = 0.0;

            sample->torqueProportional = 0.0;

            sample->torqueIntegral = 0.0;

            sample->minWobProportional = 0.0;

            sample->maxWobProportional = 0.0;

            sample->minWobIntegral = 0.0;

            sample->maxWobIntegral = 0.0;

            sample->minDifferentialPressureProportional = 0.0;

            sample->maxDifferentialPressureProportional = 0.0;

            sample->minDifferentialPressureIntegral = 0.0;

            sample->maxDifferentialPressureIntegral = 0.0;

            sample->minTorqueProportional = 0.0;

            sample->maxTorqueProportional = 0.0;

            sample->minTorqueIntegral = 0.0;

            sample->maxTorqueIntegral = 0.0;

            return RTI_TRUE;
        }

        RTIBool DrillingCalibrationState_finalize_w_return(
            DrillingCalibrationState* sample)
        {
            nec::control::DrillingCalibrationState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillingCalibrationState_finalize(
            DrillingCalibrationState* sample)
        {

            nec::control::DrillingCalibrationState_finalize_ex(sample,RTI_TRUE);
        }

        void DrillingCalibrationState_finalize_ex(
            DrillingCalibrationState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::control::DrillingCalibrationState_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillingCalibrationState_finalize_w_params(
            DrillingCalibrationState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

        void DrillingCalibrationState_finalize_optional_members(
            DrillingCalibrationState* sample, RTIBool deletePointers)
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

        RTIBool DrillingCalibrationState_copy(
            DrillingCalibrationState* dst,
            const DrillingCalibrationState* src)
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
                if (!DataTypes::Time_copy(
                    &dst->timestamp,(const DataTypes::Time*)&src->timestamp)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->wobProportional, &src->wobProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobIntegral, &src->wobIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->differentialPressureProportional, &src->differentialPressureProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->differentialPressureIntegral, &src->differentialPressureIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueProportional, &src->torqueProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueIntegral, &src->torqueIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minWobProportional, &src->minWobProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxWobProportional, &src->maxWobProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minWobIntegral, &src->minWobIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxWobIntegral, &src->maxWobIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minDifferentialPressureProportional, &src->minDifferentialPressureProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxDifferentialPressureProportional, &src->maxDifferentialPressureProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minDifferentialPressureIntegral, &src->minDifferentialPressureIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxDifferentialPressureIntegral, &src->maxDifferentialPressureIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minTorqueProportional, &src->minTorqueProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxTorqueProportional, &src->maxTorqueProportional)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->minTorqueIntegral, &src->minTorqueIntegral)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->maxTorqueIntegral, &src->maxTorqueIntegral)) { 
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
        * Configure and implement 'DrillingCalibrationState' sequence class.
        */
        #define T DrillingCalibrationState
        #define TSeq DrillingCalibrationStateSeq

        #define T_initialize_w_params nec::control::DrillingCalibrationState_initialize_w_params

        #define T_finalize_w_params   nec::control::DrillingCalibrationState_finalize_w_params
        #define T_copy       nec::control::DrillingCalibrationState_copy

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
        const RTIXCdrTypeCode * type_code<nec::control::DrillingCalibrationRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::control::DrillingCalibrationRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::control::DrillingCalibrationState>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::control::DrillingCalibrationState_get_typecode();
        }

    } 
}
#endif
