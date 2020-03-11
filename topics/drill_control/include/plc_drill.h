

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_drill_1908030757_h
#define plc_drill_1908030757_h

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
        static const char DRILL_REQUEST_TOPIC[] = "DrillRequestTopic"; 

        extern const char *DrillRequestTopicTYPENAME;

        struct DrillRequestTopicSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillRequestTopicTypeSupport;
        class DrillRequestTopicDataWriter;
        class DrillRequestTopicDataReader;
        #endif
        class DrillRequestTopic 
        {
          public:
            typedef struct DrillRequestTopicSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillRequestTopicTypeSupport TypeSupport;
            typedef DrillRequestTopicDataWriter DataWriter;
            typedef DrillRequestTopicDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* DrillRequestTopic_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *DrillRequestTopic_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillRequestTopic_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillRequestTopic_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(DrillRequestTopicSeq, DrillRequestTopic);

        NDDSUSERDllExport
        RTIBool DrillRequestTopic_initialize(
            DrillRequestTopic* self);

        NDDSUSERDllExport
        RTIBool DrillRequestTopic_initialize_ex(
            DrillRequestTopic* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillRequestTopic_initialize_w_params(
            DrillRequestTopic* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool DrillRequestTopic_finalize_w_return(
            DrillRequestTopic* self);

        NDDSUSERDllExport
        void DrillRequestTopic_finalize(
            DrillRequestTopic* self);

        NDDSUSERDllExport
        void DrillRequestTopic_finalize_ex(
            DrillRequestTopic* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillRequestTopic_finalize_w_params(
            DrillRequestTopic* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillRequestTopic_finalize_optional_members(
            DrillRequestTopic* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillRequestTopic_copy(
            DrillRequestTopic* dst,
            const DrillRequestTopic* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char DRILL_STATE_TOPIC[] = "DrillStateTopic"; 

        extern const char *DrillStateTopicTYPENAME;

        struct DrillStateTopicSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillStateTopicTypeSupport;
        class DrillStateTopicDataWriter;
        class DrillStateTopicDataReader;
        #endif
        class DrillStateTopic 
        {
          public:
            typedef struct DrillStateTopicSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillStateTopicTypeSupport TypeSupport;
            typedef DrillStateTopicDataWriter DataWriter;
            typedef DrillStateTopicDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* DrillStateTopic_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *DrillStateTopic_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillStateTopic_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillStateTopic_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(DrillStateTopicSeq, DrillStateTopic);

        NDDSUSERDllExport
        RTIBool DrillStateTopic_initialize(
            DrillStateTopic* self);

        NDDSUSERDllExport
        RTIBool DrillStateTopic_initialize_ex(
            DrillStateTopic* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillStateTopic_initialize_w_params(
            DrillStateTopic* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool DrillStateTopic_finalize_w_return(
            DrillStateTopic* self);

        NDDSUSERDllExport
        void DrillStateTopic_finalize(
            DrillStateTopic* self);

        NDDSUSERDllExport
        void DrillStateTopic_finalize_ex(
            DrillStateTopic* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillStateTopic_finalize_w_params(
            DrillStateTopic* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillStateTopic_finalize_optional_members(
            DrillStateTopic* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillStateTopic_copy(
            DrillStateTopic* dst,
            const DrillStateTopic* src);

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
        struct type_code<plc::process::DrillRequestTopic> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plc::process::DrillStateTopic> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* plc_drill */

