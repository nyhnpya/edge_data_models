

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_drill_1908030917_h
#define plc_drill_1908030917_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace plc {
    namespace process {
        static const char PLC_DRILL_REQUEST_TOPIC[] = "DrillRequestTopic"; 

        extern const char *PlcDrillRequestTopicTYPENAME;

        struct PlcDrillRequestTopicSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcDrillRequestTopicTypeSupport;
        class PlcDrillRequestTopicDataWriter;
        class PlcDrillRequestTopicDataReader;
        #endif
        class PlcDrillRequestTopic 
        {
          public:
            typedef struct PlcDrillRequestTopicSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcDrillRequestTopicTypeSupport TypeSupport;
            typedef PlcDrillRequestTopicDataWriter DataWriter;
            typedef PlcDrillRequestTopicDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* PlcDrillRequestTopic_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcDrillRequestTopic_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcDrillRequestTopic_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcDrillRequestTopic_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcDrillRequestTopicSeq, PlcDrillRequestTopic);

        NDDSUSERDllExport
        RTIBool PlcDrillRequestTopic_initialize(
            PlcDrillRequestTopic* self);

        NDDSUSERDllExport
        RTIBool PlcDrillRequestTopic_initialize_ex(
            PlcDrillRequestTopic* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcDrillRequestTopic_initialize_w_params(
            PlcDrillRequestTopic* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcDrillRequestTopic_finalize_w_return(
            PlcDrillRequestTopic* self);

        NDDSUSERDllExport
        void PlcDrillRequestTopic_finalize(
            PlcDrillRequestTopic* self);

        NDDSUSERDllExport
        void PlcDrillRequestTopic_finalize_ex(
            PlcDrillRequestTopic* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcDrillRequestTopic_finalize_w_params(
            PlcDrillRequestTopic* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcDrillRequestTopic_finalize_optional_members(
            PlcDrillRequestTopic* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcDrillRequestTopic_copy(
            PlcDrillRequestTopic* dst,
            const PlcDrillRequestTopic* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char PLC_DRILL_STATE_TOPIC[] = "DrillStateTopic"; 

        extern const char *PlcDrillStateTopicTYPENAME;

        struct PlcDrillStateTopicSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PlcDrillStateTopicTypeSupport;
        class PlcDrillStateTopicDataWriter;
        class PlcDrillStateTopicDataReader;
        #endif
        class PlcDrillStateTopic 
        {
          public:
            typedef struct PlcDrillStateTopicSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PlcDrillStateTopicTypeSupport TypeSupport;
            typedef PlcDrillStateTopicDataWriter DataWriter;
            typedef PlcDrillStateTopicDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* PlcDrillStateTopic_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PlcDrillStateTopic_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcDrillStateTopic_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PlcDrillStateTopic_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PlcDrillStateTopicSeq, PlcDrillStateTopic);

        NDDSUSERDllExport
        RTIBool PlcDrillStateTopic_initialize(
            PlcDrillStateTopic* self);

        NDDSUSERDllExport
        RTIBool PlcDrillStateTopic_initialize_ex(
            PlcDrillStateTopic* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PlcDrillStateTopic_initialize_w_params(
            PlcDrillStateTopic* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PlcDrillStateTopic_finalize_w_return(
            PlcDrillStateTopic* self);

        NDDSUSERDllExport
        void PlcDrillStateTopic_finalize(
            PlcDrillStateTopic* self);

        NDDSUSERDllExport
        void PlcDrillStateTopic_finalize_ex(
            PlcDrillStateTopic* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PlcDrillStateTopic_finalize_w_params(
            PlcDrillStateTopic* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PlcDrillStateTopic_finalize_optional_members(
            PlcDrillStateTopic* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PlcDrillStateTopic_copy(
            PlcDrillStateTopic* dst,
            const PlcDrillStateTopic* src);

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
        struct type_code<plc::process::PlcDrillRequestTopic> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plc::process::PlcDrillStateTopic> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* plc_drill */

