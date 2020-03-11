

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from hoist.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef hoist_1013697568_h
#define hoist_1013697568_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace nec {
    namespace process {
        static const char HOIST_REQUEST[] = "HoistRequest"; 

        extern const char *HoistRequestTYPENAME;

        struct HoistRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HoistRequestTypeSupport;
        class HoistRequestDataWriter;
        class HoistRequestDataReader;
        #endif
        class HoistRequest 
        {
          public:
            typedef struct HoistRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HoistRequestTypeSupport TypeSupport;
            typedef HoistRequestDataWriter DataWriter;
            typedef HoistRequestDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   objectiveId ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   estimatedDuration ;
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
        NDDSUSERDllExport DDS_TypeCode* HoistRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *HoistRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HoistRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HoistRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(HoistRequestSeq, HoistRequest);

        NDDSUSERDllExport
        RTIBool HoistRequest_initialize(
            HoistRequest* self);

        NDDSUSERDllExport
        RTIBool HoistRequest_initialize_ex(
            HoistRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HoistRequest_initialize_w_params(
            HoistRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HoistRequest_finalize_w_return(
            HoistRequest* self);

        NDDSUSERDllExport
        void HoistRequest_finalize(
            HoistRequest* self);

        NDDSUSERDllExport
        void HoistRequest_finalize_ex(
            HoistRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void HoistRequest_finalize_w_params(
            HoistRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void HoistRequest_finalize_optional_members(
            HoistRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool HoistRequest_copy(
            HoistRequest* dst,
            const HoistRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char HOIST_OBJECTIVE[] = "HoistObjective"; 

        extern const char *HoistObjectiveTYPENAME;

        struct HoistObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HoistObjectiveTypeSupport;
        class HoistObjectiveDataWriter;
        class HoistObjectiveDataReader;
        #endif
        class HoistObjective 
        {
          public:
            typedef struct HoistObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HoistObjectiveTypeSupport TypeSupport;
            typedef HoistObjectiveDataWriter DataWriter;
            typedef HoistObjectiveDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   objectiveId ;
            DataTypes::Time   estimatedDuration ;
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
        NDDSUSERDllExport DDS_TypeCode* HoistObjective_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *HoistObjective_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HoistObjective_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HoistObjective_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(HoistObjectiveSeq, HoistObjective);

        NDDSUSERDllExport
        RTIBool HoistObjective_initialize(
            HoistObjective* self);

        NDDSUSERDllExport
        RTIBool HoistObjective_initialize_ex(
            HoistObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HoistObjective_initialize_w_params(
            HoistObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HoistObjective_finalize_w_return(
            HoistObjective* self);

        NDDSUSERDllExport
        void HoistObjective_finalize(
            HoistObjective* self);

        NDDSUSERDllExport
        void HoistObjective_finalize_ex(
            HoistObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void HoistObjective_finalize_w_params(
            HoistObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void HoistObjective_finalize_optional_members(
            HoistObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool HoistObjective_copy(
            HoistObjective* dst,
            const HoistObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char HOIST_STATE[] = "HoistState"; 

        extern const char *HoistStateTYPENAME;

        struct HoistStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HoistStateTypeSupport;
        class HoistStateDataWriter;
        class HoistStateDataReader;
        #endif
        class HoistState 
        {
          public:
            typedef struct HoistStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HoistStateTypeSupport TypeSupport;
            typedef HoistStateDataWriter DataWriter;
            typedef HoistStateDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   objectiveId ;
            DataTypes::Time   timestamp ;
            DataTypes::Status   status ;
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
        NDDSUSERDllExport DDS_TypeCode* HoistState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *HoistState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HoistState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HoistState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(HoistStateSeq, HoistState);

        NDDSUSERDllExport
        RTIBool HoistState_initialize(
            HoistState* self);

        NDDSUSERDllExport
        RTIBool HoistState_initialize_ex(
            HoistState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HoistState_initialize_w_params(
            HoistState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HoistState_finalize_w_return(
            HoistState* self);

        NDDSUSERDllExport
        void HoistState_finalize(
            HoistState* self);

        NDDSUSERDllExport
        void HoistState_finalize_ex(
            HoistState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void HoistState_finalize_w_params(
            HoistState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void HoistState_finalize_optional_members(
            HoistState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool HoistState_copy(
            HoistState* dst,
            const HoistState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<nec::process::HoistRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<nec::process::HoistObjective> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<nec::process::HoistState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* hoist */

