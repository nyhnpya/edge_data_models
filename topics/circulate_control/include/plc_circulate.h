

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_circulate.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_circulate_1662823208_h
#define plc_circulate_1662823208_h

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
        static const char PLC_CIRCULATE_REQUEST_TOPIC[] = "CirculateRequestTopic"; 

        extern const char *PlcCirculateRequestTYPENAME;

        struct PlcCirculateRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcCirculateRequestTypeSupport;
        class PlcCirculateRequestDataWriter;
        class PlcCirculateRequestDataReader;
        #endif
        class PlcCirculateRequest 
        {
          public:
            typedef struct PlcCirculateRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcCirculateRequestTypeSupport TypeSupport;
            typedef PlcCirculateRequestDataWriter DataWriter;
            typedef PlcCirculateRequestDataReader DataReader;
            #endif

            DDS_Double   targetFlowRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PlcCirculateRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcCirculateRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcCirculateRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcCirculateRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcCirculateRequestSeq, PlcCirculateRequest);

        NDDSUSERDllExport
        RTIBool PlcCirculateRequest_initialize(
            PlcCirculateRequest* self);

        NDDSUSERDllExport
        RTIBool PlcCirculateRequest_initialize_ex(
            PlcCirculateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcCirculateRequest_initialize_w_params(
            PlcCirculateRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcCirculateRequest_finalize_w_return(
            PlcCirculateRequest* self);

        NDDSUSERDllExport
        void PlcCirculateRequest_finalize(
            PlcCirculateRequest* self);

        NDDSUSERDllExport
        void PlcCirculateRequest_finalize_ex(
            PlcCirculateRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcCirculateRequest_finalize_w_params(
            PlcCirculateRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcCirculateRequest_finalize_optional_members(
            PlcCirculateRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcCirculateRequest_copy(
            PlcCirculateRequest* dst,
            const PlcCirculateRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char PLC_CIRCULATE_STATE_TOPIC[] = "CirculateStateTopic"; 

        extern const char *PlcCirculateStateTYPENAME;

        struct PlcCirculateStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcCirculateStateTypeSupport;
        class PlcCirculateStateDataWriter;
        class PlcCirculateStateDataReader;
        #endif
        class PlcCirculateState 
        {
          public:
            typedef struct PlcCirculateStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcCirculateStateTypeSupport TypeSupport;
            typedef PlcCirculateStateDataWriter DataWriter;
            typedef PlcCirculateStateDataReader DataReader;
            #endif

            DDS_Long   status ;
            DDS_Double   actualFlowRate ;
            DDS_Double   actualStandpipePressure ;
            DDS_Double   minFlowRate ;
            DDS_Double   maxFlowRate ;
            DDS_Double   minStandpipePressure ;
            DDS_Double   maxStandpipePressure ;
            DDS_Double   targetFlowRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PlcCirculateState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcCirculateState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcCirculateState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcCirculateState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcCirculateStateSeq, PlcCirculateState);

        NDDSUSERDllExport
        RTIBool PlcCirculateState_initialize(
            PlcCirculateState* self);

        NDDSUSERDllExport
        RTIBool PlcCirculateState_initialize_ex(
            PlcCirculateState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcCirculateState_initialize_w_params(
            PlcCirculateState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcCirculateState_finalize_w_return(
            PlcCirculateState* self);

        NDDSUSERDllExport
        void PlcCirculateState_finalize(
            PlcCirculateState* self);

        NDDSUSERDllExport
        void PlcCirculateState_finalize_ex(
            PlcCirculateState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcCirculateState_finalize_w_params(
            PlcCirculateState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcCirculateState_finalize_optional_members(
            PlcCirculateState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcCirculateState_copy(
            PlcCirculateState* dst,
            const PlcCirculateState* src);

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
        struct type_code<plc::process::PlcCirculateRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plc::process::PlcCirculateState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* plc_circulate */

