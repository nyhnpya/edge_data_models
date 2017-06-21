

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from process_info.idl using "rtiddsgen".
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

#include "process_info.h"

namespace ProcessMonitor {

    /* ========================================================================= */
    const char *ProcessInfoTYPENAME = "ProcessMonitor::ProcessInfo";

    DDS_TypeCode* ProcessInfo_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode ProcessInfo_g_tc_processName_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,128, NULL,NULL);
        static DDS_TypeCode_Member ProcessInfo_g_tc_members[6]=
        {

            {
                (char *)"processName",/* Member name */
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
                (char *)"pid",/* Member name */
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
                (char *)"totalVirtualMemory",/* Member name */
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
                (char *)"usedVirtualMemory",/* Member name */
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
                (char *)"totalPhysicalMemory",/* Member name */
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
                (char *)"usedPhysicalMemory",/* Member name */
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
            }
        };

        static DDS_TypeCode ProcessInfo_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"ProcessMonitor::ProcessInfo", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                6, /* Number of members */
                ProcessInfo_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for ProcessInfo*/

        if (is_initialized) {
            return &ProcessInfo_g_tc;
        }

        ProcessInfo_g_tc_processName_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

        ProcessInfo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ProcessInfo_g_tc_processName_array;
        ProcessInfo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

        ProcessInfo_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

        ProcessInfo_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

        ProcessInfo_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

        ProcessInfo_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

        is_initialized = RTI_TRUE;

        return &ProcessInfo_g_tc;
    }

    RTIBool ProcessInfo_initialize(
        ProcessInfo* sample) {
        return ProcessMonitor::ProcessInfo_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool ProcessInfo_initialize_ex(
        ProcessInfo* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return ProcessMonitor::ProcessInfo_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool ProcessInfo_initialize_w_params(
        ProcessInfo* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (!RTICdrType_initArray(
            sample->processName, (128), RTI_CDR_CHAR_SIZE)) {
            return RTI_FALSE;
        }

        if (!RTICdrType_initLong(&sample->pid)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initLongLong(&sample->totalVirtualMemory)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initLongLong(&sample->usedVirtualMemory)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initLongLong(&sample->totalPhysicalMemory)) {
            return RTI_FALSE;
        }     

        if (!RTICdrType_initLongLong(&sample->usedPhysicalMemory)) {
            return RTI_FALSE;
        }     

        return RTI_TRUE;
    }

    void ProcessInfo_finalize(
        ProcessInfo* sample)
    {

        ProcessMonitor::ProcessInfo_finalize_ex(sample,RTI_TRUE);
    }

    void ProcessInfo_finalize_ex(
        ProcessInfo* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        ProcessMonitor::ProcessInfo_finalize_w_params(
            sample,&deallocParams);
    }

    void ProcessInfo_finalize_w_params(
        ProcessInfo* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

    }

    void ProcessInfo_finalize_optional_members(
        ProcessInfo* sample, RTIBool deletePointers)
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

    RTIBool ProcessInfo_copy(
        ProcessInfo* dst,
        const ProcessInfo* src)
    {

        if (!RTICdrType_copyArray(
            dst->processName ,src->processName,(128), RTI_CDR_CHAR_SIZE)) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->pid, &src->pid)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLongLong (
            &dst->totalVirtualMemory, &src->totalVirtualMemory)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLongLong (
            &dst->usedVirtualMemory, &src->usedVirtualMemory)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLongLong (
            &dst->totalPhysicalMemory, &src->totalPhysicalMemory)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLongLong (
            &dst->usedPhysicalMemory, &src->usedPhysicalMemory)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'ProcessInfo' sequence class.
    */
    #define T ProcessInfo
    #define TSeq ProcessInfoSeq
    #define T_initialize_w_params ProcessMonitor::ProcessInfo_initialize_w_params
    #define T_finalize_w_params   ProcessMonitor::ProcessInfo_finalize_w_params
    #define T_copy       ProcessMonitor::ProcessInfo_copy

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
} /* namespace ProcessMonitor  */

