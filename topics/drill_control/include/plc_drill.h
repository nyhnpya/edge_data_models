

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_drill_1908030870_h
#define plc_drill_1908030870_h

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
        static const char PLC_DRILL_REQUEST_TOPIC[] = "DrillRequestTopic"; 

        extern const char *DrillRequestTYPENAME;

        struct DrillRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillRequestTypeSupport;
        class DrillRequestDataWriter;
        class DrillRequestDataReader;
        #endif
        class DrillRequest 
        {
          public:
            typedef struct DrillRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillRequestTypeSupport TypeSupport;
            typedef DrillRequestDataWriter DataWriter;
            typedef DrillRequestDataReader DataReader;
            #endif

            DDS_Double   ropLimit ;
            DDS_Double   wobLimit ;
            DDS_Double   diffPressureLimit ;
            DDS_Double   torqueLimit ;
            DDS_Boolean   ropMode ;
            DDS_Boolean   wobMode ;
            DDS_Boolean   diffPressureMode ;
            DDS_Boolean   torqueMode ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* DrillRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *DrillRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(DrillRequestSeq, DrillRequest);

        NDDSUSERDllExport
        RTIBool DrillRequest_initialize(
            DrillRequest* self);

        NDDSUSERDllExport
        RTIBool DrillRequest_initialize_ex(
            DrillRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillRequest_initialize_w_params(
            DrillRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool DrillRequest_finalize_w_return(
            DrillRequest* self);

        NDDSUSERDllExport
        void DrillRequest_finalize(
            DrillRequest* self);

        NDDSUSERDllExport
        void DrillRequest_finalize_ex(
            DrillRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillRequest_finalize_w_params(
            DrillRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillRequest_finalize_optional_members(
            DrillRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillRequest_copy(
            DrillRequest* dst,
            const DrillRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char PLC_DRILL_STATE_TOPIC[] = "DrillStateTopic"; 

        extern const char *DrillStateTYPENAME;

        struct DrillStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillStateTypeSupport;
        class DrillStateDataWriter;
        class DrillStateDataReader;
        #endif
        class DrillState 
        {
          public:
            typedef struct DrillStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillStateTypeSupport TypeSupport;
            typedef DrillStateDataWriter DataWriter;
            typedef DrillStateDataReader DataReader;
            #endif

            DDS_Double   ropActual ;
            DDS_Double   wobActual ;
            DDS_Double   diffPressureActual ;
            DDS_Double   torqueActual ;
            DDS_Double   ropMachineLimit ;
            DDS_Double   wobMachineLimit ;
            DDS_Double   diffPressureMachineLimit ;
            DDS_Double   torqueMachineLimit ;
            DDS_Boolean   ropMode ;
            DDS_Boolean   wobMode ;
            DDS_Boolean   diffPressureMode ;
            DDS_Boolean   torqueMode ;
            DDS_Double   ropLimit ;
            DDS_Double   wobLimit ;
            DDS_Double   diffPressureLimit ;
            DDS_Double   torqueLimit ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* DrillState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *DrillState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(DrillStateSeq, DrillState);

        NDDSUSERDllExport
        RTIBool DrillState_initialize(
            DrillState* self);

        NDDSUSERDllExport
        RTIBool DrillState_initialize_ex(
            DrillState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillState_initialize_w_params(
            DrillState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool DrillState_finalize_w_return(
            DrillState* self);

        NDDSUSERDllExport
        void DrillState_finalize(
            DrillState* self);

        NDDSUSERDllExport
        void DrillState_finalize_ex(
            DrillState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillState_finalize_w_params(
            DrillState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillState_finalize_optional_members(
            DrillState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillState_copy(
            DrillState* dst,
            const DrillState* src);

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
        struct type_code<plc::process::DrillRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plc::process::DrillState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* plc_drill */

