

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_rotate.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_rotate_1508021044_h
#define plc_rotate_1508021044_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace plc {
    namespace process {
        static const char PLC_ROTATE_REQUEST_TOPIC[] = "RotateRequestTopic"; 

        extern const char *PlcRotateRequestTYPENAME;

        struct PlcRotateRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcRotateRequestTypeSupport;
        class PlcRotateRequestDataWriter;
        class PlcRotateRequestDataReader;
        #endif
        class PlcRotateRequest 
        {
          public:
            typedef struct PlcRotateRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcRotateRequestTypeSupport TypeSupport;
            typedef PlcRotateRequestDataWriter DataWriter;
            typedef PlcRotateRequestDataReader DataReader;
            #endif

            DDS_Double   targetRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PlcRotateRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcRotateRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcRotateRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcRotateRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcRotateRequestSeq, PlcRotateRequest);

        NDDSUSERDllExport
        RTIBool PlcRotateRequest_initialize(
            PlcRotateRequest* self);

        NDDSUSERDllExport
        RTIBool PlcRotateRequest_initialize_ex(
            PlcRotateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcRotateRequest_initialize_w_params(
            PlcRotateRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcRotateRequest_finalize_w_return(
            PlcRotateRequest* self);

        NDDSUSERDllExport
        void PlcRotateRequest_finalize(
            PlcRotateRequest* self);

        NDDSUSERDllExport
        void PlcRotateRequest_finalize_ex(
            PlcRotateRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcRotateRequest_finalize_w_params(
            PlcRotateRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcRotateRequest_finalize_optional_members(
            PlcRotateRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcRotateRequest_copy(
            PlcRotateRequest* dst,
            const PlcRotateRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char PLC_ROTATE_STATE_TOPIC[] = "RotateStateTopic"; 

        extern const char *PlcRotateStateTYPENAME;

        struct PlcRotateStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcRotateStateTypeSupport;
        class PlcRotateStateDataWriter;
        class PlcRotateStateDataReader;
        #endif
        class PlcRotateState 
        {
          public:
            typedef struct PlcRotateStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcRotateStateTypeSupport TypeSupport;
            typedef PlcRotateStateDataWriter DataWriter;
            typedef PlcRotateStateDataReader DataReader;
            #endif

            DDS_Long   status ;
            DDS_Double   actualRate ;
            DDS_Double   minRate ;
            DDS_Double   maxRate ;
            DDS_Double   targetRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PlcRotateState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcRotateState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcRotateState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcRotateState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcRotateStateSeq, PlcRotateState);

        NDDSUSERDllExport
        RTIBool PlcRotateState_initialize(
            PlcRotateState* self);

        NDDSUSERDllExport
        RTIBool PlcRotateState_initialize_ex(
            PlcRotateState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcRotateState_initialize_w_params(
            PlcRotateState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcRotateState_finalize_w_return(
            PlcRotateState* self);

        NDDSUSERDllExport
        void PlcRotateState_finalize(
            PlcRotateState* self);

        NDDSUSERDllExport
        void PlcRotateState_finalize_ex(
            PlcRotateState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcRotateState_finalize_w_params(
            PlcRotateState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcRotateState_finalize_optional_members(
            PlcRotateState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcRotateState_copy(
            PlcRotateState* dst,
            const PlcRotateState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace plc  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<plc::process::PlcRotateRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plc::process::PlcRotateState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* plc_rotate */

