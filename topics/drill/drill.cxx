

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill.idl using "rtiddsgen".
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

#include "drill.h"

#ifndef NDDS_STANDALONE_TYPE
#include "drillPlugin.h"
#endif

#include <new>

namespace nec {

    namespace process {

        /* ========================================================================= */
        const char *DrillRequestTYPENAME = "nec::process::DrillRequest";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* DrillRequest_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillRequest_g_tc_members[13]=
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
                    (char *)"estimatedDuration",/* Member name */
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
                    (char *)"ropTarget",/* Member name */
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
                    (char *)"wobTarget",/* Member name */
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
                    (char *)"diffPressureTarget",/* Member name */
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
                    (char *)"torqueTarget",/* Member name */
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
                    (char *)"ropMode",/* Member name */
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
                    (char *)"wobMode",/* Member name */
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
                    (char *)"diffPressureMode",/* Member name */
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
                    (char *)"torqueMode",/* Member name */
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

            static DDS_TypeCode DrillRequest_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::DrillRequest", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    13, /* Number of members */
                    DrillRequest_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillRequest*/

            if (is_initialized) {
                return &DrillRequest_g_tc;
            }

            DrillRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Priority_get_typecode();
            DrillRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            DrillRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            DrillRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequest_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequest_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillRequest_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillRequest_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillRequest_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillRequest_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

            /* Initialize the values for member annotations. */
            DrillRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillRequest_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillRequest_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
            DrillRequest_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

            DrillRequest_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequest_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequest_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequest_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequest_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequest_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequest_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequest_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequest_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequest_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            DrillRequest_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillRequest_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillRequest_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillRequest_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequest_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequest_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequest_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequest_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequest_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequest_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillRequest_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;

            DrillRequest_g_tc._data._sampleAccessInfo =
            DrillRequest_get_sample_access_info();
            DrillRequest_g_tc._data._typePlugin =
            DrillRequest_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillRequest_g_tc;
        }

        #define TSeq DrillRequestSeq
        #define T DrillRequest
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillRequest_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillRequest_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillRequestSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillRequestSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillRequest_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillRequest_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::process::DrillRequest *sample;

            static RTIXCdrMemberAccessInfo DrillRequest_g_memberAccessInfos[13] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillRequest_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillRequest_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::process::DrillRequest);
            if (sample == NULL) {
                return NULL;
            }

            DrillRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            DrillRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            DrillRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->priority - (char *)sample);

            DrillRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timeNeeded - (char *)sample);

            DrillRequest_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->estimatedDuration - (char *)sample);

            DrillRequest_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropTarget - (char *)sample);

            DrillRequest_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobTarget - (char *)sample);

            DrillRequest_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureTarget - (char *)sample);

            DrillRequest_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTarget - (char *)sample);

            DrillRequest_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMode - (char *)sample);

            DrillRequest_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMode - (char *)sample);

            DrillRequest_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureMode - (char *)sample);

            DrillRequest_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMode - (char *)sample);

            DrillRequest_g_sampleAccessInfo.memberAccessInfos = 
            DrillRequest_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillRequest);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    DrillRequest_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    DrillRequest_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillRequest_get_member_value_pointer;

            DrillRequest_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillRequest_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillRequest_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillRequest_g_typePlugin = 
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
                nec::process::DrillRequest_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::process::DrillRequest_finalize_w_return,
                NULL
            };

            return &DrillRequest_g_typePlugin;
        }
        #endif

        RTIBool DrillRequest_initialize(
            DrillRequest* sample) {
            return nec::process::DrillRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillRequest_initialize_ex(
            DrillRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::DrillRequest_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillRequest_initialize_w_params(
            DrillRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            sample->priority = DataTypes::Normal;
            if (!DataTypes::Time_initialize_w_params(&sample->timeNeeded,
            allocParams)) {
                return RTI_FALSE;
            }
            if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
            allocParams)) {
                return RTI_FALSE;
            }

            sample->ropTarget = 0.0;

            sample->wobTarget = 0.0;

            sample->diffPressureTarget = 0.0;

            sample->torqueTarget = 0.0;

            sample->ropMode = 0;

            sample->wobMode = 0;

            sample->diffPressureMode = 0;

            sample->torqueMode = 0;

            return RTI_TRUE;
        }

        RTIBool DrillRequest_finalize_w_return(
            DrillRequest* sample)
        {
            nec::process::DrillRequest_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillRequest_finalize(
            DrillRequest* sample)
        {

            nec::process::DrillRequest_finalize_ex(sample,RTI_TRUE);
        }

        void DrillRequest_finalize_ex(
            DrillRequest* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::DrillRequest_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillRequest_finalize_w_params(
            DrillRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            DataTypes::Time_finalize_w_params(&sample->estimatedDuration,deallocParams);

        }

        void DrillRequest_finalize_optional_members(
            DrillRequest* sample, RTIBool deletePointers)
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

            DataTypes::Priority_finalize_optional_members(&sample->priority, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->timeNeeded, deallocParams->delete_pointers);
            DataTypes::Time_finalize_optional_members(&sample->estimatedDuration, deallocParams->delete_pointers);
        }

        RTIBool DrillRequest_copy(
            DrillRequest* dst,
            const DrillRequest* src)
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
                if (!RTICdrType_copyStringEx (
                    &dst->objectiveId, src->objectiveId, 
                    (36) + 1, RTI_FALSE)){
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
                    &dst->estimatedDuration,(const DataTypes::Time*)&src->estimatedDuration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->ropTarget, &src->ropTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobTarget, &src->wobTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPressureTarget, &src->diffPressureTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueTarget, &src->torqueTarget)) { 
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
                    &dst->diffPressureMode, &src->diffPressureMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->torqueMode, &src->torqueMode)) { 
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
        * Configure and implement 'DrillRequest' sequence class.
        */
        #define T DrillRequest
        #define TSeq DrillRequestSeq

        #define T_initialize_w_params nec::process::DrillRequest_initialize_w_params

        #define T_finalize_w_params   nec::process::DrillRequest_finalize_w_params
        #define T_copy       nec::process::DrillRequest_copy

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
        const char *DrillObjectiveTYPENAME = "nec::process::DrillObjective";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* DrillObjective_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillObjective_g_tc_members[11]=
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
                    (char *)"ropTarget",/* Member name */
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
                    (char *)"wobTarget",/* Member name */
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
                    (char *)"diffPressureTarget",/* Member name */
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
                    (char *)"torqueTarget",/* Member name */
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
                    (char *)"ropMode",/* Member name */
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
                    (char *)"wobMode",/* Member name */
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
                    (char *)"diffPressureMode",/* Member name */
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
                    (char *)"torqueMode",/* Member name */
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
                }
            };

            static DDS_TypeCode DrillObjective_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::DrillObjective", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    11, /* Number of members */
                    DrillObjective_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillObjective*/

            if (is_initialized) {
                return &DrillObjective_g_tc;
            }

            DrillObjective_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillObjective_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillObjective_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillObjective_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            DrillObjective_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillObjective_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillObjective_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillObjective_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillObjective_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillObjective_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillObjective_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillObjective_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

            /* Initialize the values for member annotations. */
            DrillObjective_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillObjective_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillObjective_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillObjective_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillObjective_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            DrillObjective_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillObjective_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillObjective_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            DrillObjective_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillObjective_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillObjective_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            DrillObjective_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillObjective_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillObjective_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            DrillObjective_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillObjective_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillObjective_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillObjective_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillObjective_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

            DrillObjective_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillObjective_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;

            DrillObjective_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillObjective_g_tc_members[9]._annotations._defaultValue._u.boolean_value = 0;

            DrillObjective_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillObjective_g_tc_members[10]._annotations._defaultValue._u.boolean_value = 0;

            DrillObjective_g_tc._data._sampleAccessInfo =
            DrillObjective_get_sample_access_info();
            DrillObjective_g_tc._data._typePlugin =
            DrillObjective_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillObjective_g_tc;
        }

        #define TSeq DrillObjectiveSeq
        #define T DrillObjective
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillObjective_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillObjective_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillObjectiveSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillObjectiveSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillObjective_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillObjective_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::process::DrillObjective *sample;

            static RTIXCdrMemberAccessInfo DrillObjective_g_memberAccessInfos[11] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillObjective_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillObjective_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::process::DrillObjective);
            if (sample == NULL) {
                return NULL;
            }

            DrillObjective_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            DrillObjective_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            DrillObjective_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->estimatedDuration - (char *)sample);

            DrillObjective_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropTarget - (char *)sample);

            DrillObjective_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobTarget - (char *)sample);

            DrillObjective_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureTarget - (char *)sample);

            DrillObjective_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTarget - (char *)sample);

            DrillObjective_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMode - (char *)sample);

            DrillObjective_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMode - (char *)sample);

            DrillObjective_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureMode - (char *)sample);

            DrillObjective_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMode - (char *)sample);

            DrillObjective_g_sampleAccessInfo.memberAccessInfos = 
            DrillObjective_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillObjective);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    DrillObjective_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    DrillObjective_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillObjective_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillObjective_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillObjective_get_member_value_pointer;

            DrillObjective_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillObjective_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillObjective_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillObjective_g_typePlugin = 
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
                nec::process::DrillObjective_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::process::DrillObjective_finalize_w_return,
                NULL
            };

            return &DrillObjective_g_typePlugin;
        }
        #endif

        RTIBool DrillObjective_initialize(
            DrillObjective* sample) {
            return nec::process::DrillObjective_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillObjective_initialize_ex(
            DrillObjective* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::DrillObjective_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillObjective_initialize_w_params(
            DrillObjective* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            if (!DataTypes::Time_initialize_w_params(&sample->estimatedDuration,
            allocParams)) {
                return RTI_FALSE;
            }

            sample->ropTarget = 0.0;

            sample->wobTarget = 0.0;

            sample->diffPressureTarget = 0.0;

            sample->torqueTarget = 0.0;

            sample->ropMode = 0;

            sample->wobMode = 0;

            sample->diffPressureMode = 0;

            sample->torqueMode = 0;

            return RTI_TRUE;
        }

        RTIBool DrillObjective_finalize_w_return(
            DrillObjective* sample)
        {
            nec::process::DrillObjective_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillObjective_finalize(
            DrillObjective* sample)
        {

            nec::process::DrillObjective_finalize_ex(sample,RTI_TRUE);
        }

        void DrillObjective_finalize_ex(
            DrillObjective* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::DrillObjective_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillObjective_finalize_w_params(
            DrillObjective* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

        void DrillObjective_finalize_optional_members(
            DrillObjective* sample, RTIBool deletePointers)
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

            DataTypes::Time_finalize_optional_members(&sample->estimatedDuration, deallocParams->delete_pointers);
        }

        RTIBool DrillObjective_copy(
            DrillObjective* dst,
            const DrillObjective* src)
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
                if (!RTICdrType_copyStringEx (
                    &dst->objectiveId, src->objectiveId, 
                    (36) + 1, RTI_FALSE)){
                    return RTI_FALSE;
                }
                if (!DataTypes::Time_copy(
                    &dst->estimatedDuration,(const DataTypes::Time*)&src->estimatedDuration)) {
                    return RTI_FALSE;
                } 
                if (!RTICdrType_copyDouble (
                    &dst->ropTarget, &src->ropTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobTarget, &src->wobTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPressureTarget, &src->diffPressureTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueTarget, &src->torqueTarget)) { 
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
                    &dst->diffPressureMode, &src->diffPressureMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->torqueMode, &src->torqueMode)) { 
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
        * Configure and implement 'DrillObjective' sequence class.
        */
        #define T DrillObjective
        #define TSeq DrillObjectiveSeq

        #define T_initialize_w_params nec::process::DrillObjective_initialize_w_params

        #define T_finalize_w_params   nec::process::DrillObjective_finalize_w_params
        #define T_copy       nec::process::DrillObjective_copy

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
        const char *DrillStateTYPENAME = "nec::process::DrillState";

        #ifndef NDDS_STANDALONE_TYPE
        DDS_TypeCode* DrillState_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member DrillState_g_tc_members[20]=
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
                    (char *)"ropActual",/* Member name */
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
                    (char *)"wobActual",/* Member name */
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
                    (char *)"diffPressureActual",/* Member name */
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
                    (char *)"torqueActual",/* Member name */
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
                    (char *)"ropLimit",/* Member name */
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
                    (char *)"wobLimit",/* Member name */
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
                    (char *)"diffPressureLimit",/* Member name */
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
                    (char *)"torqueLimit",/* Member name */
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
                    (char *)"ropMode",/* Member name */
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
                    (char *)"wobMode",/* Member name */
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
                    (char *)"diffPressureMode",/* Member name */
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
                    (char *)"torqueMode",/* Member name */
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
                    (char *)"ropTarget",/* Member name */
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
                    (char *)"wobTarget",/* Member name */
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
                    (char *)"diffPressureTarget",/* Member name */
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
                    (char *)"torqueTarget",/* Member name */
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
                    (char *)"bitOnBottom",/* Member name */
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

            static DDS_TypeCode DrillState_g_tc =
            {{
                    DDS_TK_STRUCT, /* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"nec::process::DrillState", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    20, /* Number of members */
                    DrillState_g_tc_members, /* Members */
                    DDS_VM_NONE, /* Ignored */
                    RTICdrTypeCodeAnnotations_INITIALIZER,
                    DDS_BOOLEAN_TRUE, /* _isCopyable */
                    NULL, /* _sampleAccessInfo: assigned later */
                    NULL /* _typePlugin: assigned later */
                }}; /* Type code for DrillState*/

            if (is_initialized) {
                return &DrillState_g_tc;
            }

            DrillState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

            DrillState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Uuid_get_typecode();
            DrillState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DataTypes::Time_get_typecode();
            DrillState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillState_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillState_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillState_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
            DrillState_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;
            DrillState_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

            /* Initialize the values for member annotations. */
            DrillState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillState_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
            DrillState_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

            DrillState_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[9]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[9]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[10]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[10]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillState_g_tc_members[11]._annotations._defaultValue._u.boolean_value = 0;

            DrillState_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillState_g_tc_members[12]._annotations._defaultValue._u.boolean_value = 0;

            DrillState_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillState_g_tc_members[13]._annotations._defaultValue._u.boolean_value = 0;

            DrillState_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillState_g_tc_members[14]._annotations._defaultValue._u.boolean_value = 0;

            DrillState_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[15]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[15]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[15]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[16]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[16]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[16]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[16]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[16]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[16]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[17]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[17]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[17]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[17]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[17]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[17]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[18]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[18]._annotations._defaultValue._u.double_value = 0.0;
            DrillState_g_tc_members[18]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[18]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
            DrillState_g_tc_members[18]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
            DrillState_g_tc_members[18]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

            DrillState_g_tc_members[19]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
            DrillState_g_tc_members[19]._annotations._defaultValue._u.boolean_value = 0;

            DrillState_g_tc._data._sampleAccessInfo =
            DrillState_get_sample_access_info();
            DrillState_g_tc._data._typePlugin =
            DrillState_get_type_plugin_info();    

            is_initialized = RTI_TRUE;

            return &DrillState_g_tc;
        }

        #define TSeq DrillStateSeq
        #define T DrillState
        #include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
        #undef T
        #undef TSeq

        RTIXCdrSampleAccessInfo *DrillState_get_sample_seq_access_info()
        {
            static RTIXCdrSampleAccessInfo DrillState_g_seqSampleAccessInfo = {
                RTI_XCDR_TYPE_BINDING_CPP, \
                {sizeof(DrillStateSeq),0,0,0}, \
                RTI_XCDR_FALSE, \
                DDS_Sequence_get_member_value_pointer, \
                DrillStateSeq_set_member_element_count, \
                NULL, \
                NULL, \
                NULL \
            };

            return &DrillState_g_seqSampleAccessInfo;
        }

        RTIXCdrSampleAccessInfo *DrillState_get_sample_access_info()
        {
            static RTIBool is_initialized = RTI_FALSE;

            nec::process::DrillState *sample;

            static RTIXCdrMemberAccessInfo DrillState_g_memberAccessInfos[20] =
            {RTIXCdrMemberAccessInfo_INITIALIZER};

            static RTIXCdrSampleAccessInfo DrillState_g_sampleAccessInfo = 
            RTIXCdrSampleAccessInfo_INITIALIZER;

            if (is_initialized) {
                return (RTIXCdrSampleAccessInfo*) &DrillState_g_sampleAccessInfo;
            }

            RTIXCdrHeap_allocateStruct(
                &sample, 
                nec::process::DrillState);
            if (sample == NULL) {
                return NULL;
            }

            DrillState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

            DrillState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->objectiveId - (char *)sample);

            DrillState_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

            DrillState_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropActual - (char *)sample);

            DrillState_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobActual - (char *)sample);

            DrillState_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureActual - (char *)sample);

            DrillState_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueActual - (char *)sample);

            DrillState_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropLimit - (char *)sample);

            DrillState_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobLimit - (char *)sample);

            DrillState_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureLimit - (char *)sample);

            DrillState_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueLimit - (char *)sample);

            DrillState_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropMode - (char *)sample);

            DrillState_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobMode - (char *)sample);

            DrillState_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureMode - (char *)sample);

            DrillState_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueMode - (char *)sample);

            DrillState_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->ropTarget - (char *)sample);

            DrillState_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->wobTarget - (char *)sample);

            DrillState_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->diffPressureTarget - (char *)sample);

            DrillState_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->torqueTarget - (char *)sample);

            DrillState_g_memberAccessInfos[19].bindingMemberValueOffset[0] = 
            (RTIXCdrUnsignedLong) ((char *)&sample->bitOnBottom - (char *)sample);

            DrillState_g_sampleAccessInfo.memberAccessInfos = 
            DrillState_g_memberAccessInfos;

            {
                size_t candidateTypeSize = sizeof(DrillState);

                if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                    DrillState_g_sampleAccessInfo.typeSize[0] =
                    RTIXCdrUnsignedLong_MAX;
                } else {
                    DrillState_g_sampleAccessInfo.typeSize[0] =
                    (RTIXCdrUnsignedLong) candidateTypeSize;
                }
            }

            DrillState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
            RTI_XCDR_TRUE;

            DrillState_g_sampleAccessInfo.getMemberValuePointerFcn = 
            DrillState_get_member_value_pointer;

            DrillState_g_sampleAccessInfo.languageBinding = 
            RTI_XCDR_TYPE_BINDING_CPP ;

            RTIXCdrHeap_freeStruct(sample);
            is_initialized = RTI_TRUE;
            return (RTIXCdrSampleAccessInfo*) &DrillState_g_sampleAccessInfo;
        }

        RTIXCdrTypePlugin *DrillState_get_type_plugin_info()
        {
            static RTIXCdrTypePlugin DrillState_g_typePlugin = 
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
                nec::process::DrillState_initialize_ex,
                NULL,
                (RTIXCdrTypePluginFinalizeSampleFunction)
                nec::process::DrillState_finalize_w_return,
                NULL
            };

            return &DrillState_g_typePlugin;
        }
        #endif

        RTIBool DrillState_initialize(
            DrillState* sample) {
            return nec::process::DrillState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
        }

        RTIBool DrillState_initialize_ex(
            DrillState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
        {

            struct DDS_TypeAllocationParams_t allocParams =
            DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

            allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
            allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

            return nec::process::DrillState_initialize_w_params(
                sample,&allocParams);

        }

        RTIBool DrillState_initialize_w_params(
            DrillState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            sample->ropActual = 0.0;

            sample->wobActual = 0.0;

            sample->diffPressureActual = 0.0;

            sample->torqueActual = 0.0;

            sample->ropLimit = 0.0;

            sample->wobLimit = 0.0;

            sample->diffPressureLimit = 0.0;

            sample->torqueLimit = 0.0;

            sample->ropMode = 0;

            sample->wobMode = 0;

            sample->diffPressureMode = 0;

            sample->torqueMode = 0;

            sample->ropTarget = 0.0;

            sample->wobTarget = 0.0;

            sample->diffPressureTarget = 0.0;

            sample->torqueTarget = 0.0;

            sample->bitOnBottom = 0;

            return RTI_TRUE;
        }

        RTIBool DrillState_finalize_w_return(
            DrillState* sample)
        {
            nec::process::DrillState_finalize_ex(sample, RTI_TRUE);

            return RTI_TRUE;
        }

        void DrillState_finalize(
            DrillState* sample)
        {

            nec::process::DrillState_finalize_ex(sample,RTI_TRUE);
        }

        void DrillState_finalize_ex(
            DrillState* sample,RTIBool deletePointers)
        {
            struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

            if (sample==NULL) {
                return;
            } 

            deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

            nec::process::DrillState_finalize_w_params(
                sample,&deallocParams);
        }

        void DrillState_finalize_w_params(
            DrillState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

        }

        void DrillState_finalize_optional_members(
            DrillState* sample, RTIBool deletePointers)
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

        RTIBool DrillState_copy(
            DrillState* dst,
            const DrillState* src)
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
                    &dst->ropActual, &src->ropActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobActual, &src->wobActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPressureActual, &src->diffPressureActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueActual, &src->torqueActual)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ropLimit, &src->ropLimit)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobLimit, &src->wobLimit)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPressureLimit, &src->diffPressureLimit)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueLimit, &src->torqueLimit)) { 
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
                    &dst->diffPressureMode, &src->diffPressureMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->torqueMode, &src->torqueMode)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->ropTarget, &src->ropTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->wobTarget, &src->wobTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->diffPressureTarget, &src->diffPressureTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyDouble (
                    &dst->torqueTarget, &src->torqueTarget)) { 
                    return RTI_FALSE;
                }
                if (!RTICdrType_copyBoolean (
                    &dst->bitOnBottom, &src->bitOnBottom)) { 
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
        * Configure and implement 'DrillState' sequence class.
        */
        #define T DrillState
        #define TSeq DrillStateSeq

        #define T_initialize_w_params nec::process::DrillState_initialize_w_params

        #define T_finalize_w_params   nec::process::DrillState_finalize_w_params
        #define T_copy       nec::process::DrillState_copy

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
        const RTIXCdrTypeCode * type_code<nec::process::DrillRequest>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::process::DrillRequest_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::process::DrillObjective>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::process::DrillObjective_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<nec::process::DrillState>::get() 
        {
            return (const RTIXCdrTypeCode *) nec::process::DrillState_get_typecode();
        }

    } 
}
#endif
