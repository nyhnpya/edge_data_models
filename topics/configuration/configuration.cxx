

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from configuration.idl using "rtiddsgen".
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

#include "configuration.h"

namespace Configuration {

    /* ========================================================================= */
    const char *ItemTYPENAME = "Configuration::Item";

    DDS_TypeCode* Item_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode Item_g_tc_key_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode Item_g_tc_value_string = DDS_INITIALIZE_STRING_TYPECODE((255));
        static DDS_TypeCode_Member Item_g_tc_members[2]=
        {

            {
                (char *)"key",/* Member name */
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
                (char *)"value",/* Member name */
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
            }
        };

        static DDS_TypeCode Item_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"Configuration::Item", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                2, /* Number of members */
                Item_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for Item*/

        if (is_initialized) {
            return &Item_g_tc;
        }

        Item_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Item_g_tc_key_string;

        Item_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Item_g_tc_value_string;

        is_initialized = RTI_TRUE;

        return &Item_g_tc;
    }

    RTIBool Item_initialize(
        Item* sample) {
        return Configuration::Item_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool Item_initialize_ex(
        Item* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return Configuration::Item_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool Item_initialize_w_params(
        Item* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (allocParams) {} /* To avoid warnings */

        if (allocParams->allocate_memory){
            sample->key= DDS_String_alloc ((255));
            if (sample->key == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->key!= NULL) { 
                sample->key[0] = '\0';
            }
        }

        if (allocParams->allocate_memory){
            sample->value= DDS_String_alloc ((255));
            if (sample->value == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->value!= NULL) { 
                sample->value[0] = '\0';
            }
        }

        return RTI_TRUE;
    }

    void Item_finalize(
        Item* sample)
    {

        Configuration::Item_finalize_ex(sample,RTI_TRUE);
    }

    void Item_finalize_ex(
        Item* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        Configuration::Item_finalize_w_params(
            sample,&deallocParams);
    }

    void Item_finalize_w_params(
        Item* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }
        if (deallocParams) {} /* To avoid warnings */

        if (sample->key != NULL) {
            DDS_String_free(sample->key);
            sample->key=NULL;

        }
        if (sample->value != NULL) {
            DDS_String_free(sample->value);
            sample->value=NULL;

        }
    }

    void Item_finalize_optional_members(
        Item* sample, RTIBool deletePointers)
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

    RTIBool Item_copy(
        Item* dst,
        const Item* src)
    {

        if (!RTICdrType_copyStringEx (
            &dst->key, src->key, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyStringEx (
            &dst->value, src->value, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'Item' sequence class.
    */
    #define T Item
    #define TSeq ItemSeq
    #define T_initialize_w_params Configuration::Item_initialize_w_params
    #define T_finalize_w_params   Configuration::Item_finalize_w_params
    #define T_copy       Configuration::Item_copy

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
} /* namespace Configuration  */

