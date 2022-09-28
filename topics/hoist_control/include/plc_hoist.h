

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_hoist.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_hoist_1752499246_h
#define plc_hoist_1752499246_h

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
        static const char PLC_HOIST_REQUEST_TOPIC[] = "HoistRequestTopic"; 

        extern const char *PlcHoistRequestTYPENAME;

        struct PlcHoistRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcHoistRequestTypeSupport;
        class PlcHoistRequestDataWriter;
        class PlcHoistRequestDataReader;
        #endif
        class PlcHoistRequest 
        {
          public:
            typedef struct PlcHoistRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcHoistRequestTypeSupport TypeSupport;
            typedef PlcHoistRequestDataWriter DataWriter;
            typedef PlcHoistRequestDataReader DataReader;
            #endif

            DDS_Double   targetVelocity ;
            DDS_Double   targetPosition ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PlcHoistRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcHoistRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcHoistRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcHoistRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcHoistRequestSeq, PlcHoistRequest);

        NDDSUSERDllExport
        RTIBool PlcHoistRequest_initialize(
            PlcHoistRequest* self);

        NDDSUSERDllExport
        RTIBool PlcHoistRequest_initialize_ex(
            PlcHoistRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcHoistRequest_initialize_w_params(
            PlcHoistRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcHoistRequest_finalize_w_return(
            PlcHoistRequest* self);

        NDDSUSERDllExport
        void PlcHoistRequest_finalize(
            PlcHoistRequest* self);

        NDDSUSERDllExport
        void PlcHoistRequest_finalize_ex(
            PlcHoistRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcHoistRequest_finalize_w_params(
            PlcHoistRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcHoistRequest_finalize_optional_members(
            PlcHoistRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcHoistRequest_copy(
            PlcHoistRequest* dst,
            const PlcHoistRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char PLC_HOIST_STATE_TOPIC[] = "HoistStateTopic"; 

        extern const char *PlcHoistStateTYPENAME;

        struct PlcHoistStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcHoistStateTypeSupport;
        class PlcHoistStateDataWriter;
        class PlcHoistStateDataReader;
        #endif
        class PlcHoistState 
        {
          public:
            typedef struct PlcHoistStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcHoistStateTypeSupport TypeSupport;
            typedef PlcHoistStateDataWriter DataWriter;
            typedef PlcHoistStateDataReader DataReader;
            #endif

            DDS_Long   status ;
            DDS_Double   actualHookload ;
            DDS_Double   actualVelocity ;
            DDS_Double   actualPosition ;
            DDS_Double   maxHookload ;
            DDS_Double   maxHoistVelocity ;
            DDS_Double   maxLowerVelocity ;
            DDS_Double   maxHoistPosition ;
            DDS_Double   maxLowerPosition ;
            DDS_Double   targetVelocity ;
            DDS_Double   targetPosition ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PlcHoistState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcHoistState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcHoistState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcHoistState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcHoistStateSeq, PlcHoistState);

        NDDSUSERDllExport
        RTIBool PlcHoistState_initialize(
            PlcHoistState* self);

        NDDSUSERDllExport
        RTIBool PlcHoistState_initialize_ex(
            PlcHoistState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcHoistState_initialize_w_params(
            PlcHoistState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcHoistState_finalize_w_return(
            PlcHoistState* self);

        NDDSUSERDllExport
        void PlcHoistState_finalize(
            PlcHoistState* self);

        NDDSUSERDllExport
        void PlcHoistState_finalize_ex(
            PlcHoistState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcHoistState_finalize_w_params(
            PlcHoistState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcHoistState_finalize_optional_members(
            PlcHoistState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcHoistState_copy(
            PlcHoistState* dst,
            const PlcHoistState* src);

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
        struct type_code<plc::process::PlcHoistRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plc::process::PlcHoistState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* plc_hoist */

