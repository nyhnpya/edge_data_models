

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef rotate_79880781_h
#define rotate_79880781_h

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
        static const char ROTATE_REQUEST[] = "RotateRequest"; 

        extern const char *RotateRequestTYPENAME;

        struct RotateRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateRequestTypeSupport;
        class RotateRequestDataWriter;
        class RotateRequestDataReader;
        #endif
        class RotateRequest 
        {
          public:
            typedef struct RotateRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateRequestTypeSupport TypeSupport;
            typedef RotateRequestDataWriter DataWriter;
            typedef RotateRequestDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   objectiveId ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   targetRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* RotateRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *RotateRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *RotateRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *RotateRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(RotateRequestSeq, RotateRequest);

        NDDSUSERDllExport
        RTIBool RotateRequest_initialize(
            RotateRequest* self);

        NDDSUSERDllExport
        RTIBool RotateRequest_initialize_ex(
            RotateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateRequest_initialize_w_params(
            RotateRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool RotateRequest_finalize_w_return(
            RotateRequest* self);

        NDDSUSERDllExport
        void RotateRequest_finalize(
            RotateRequest* self);

        NDDSUSERDllExport
        void RotateRequest_finalize_ex(
            RotateRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateRequest_finalize_w_params(
            RotateRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateRequest_finalize_optional_members(
            RotateRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateRequest_copy(
            RotateRequest* dst,
            const RotateRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_OBJECTIVE[] = "RotateObjective"; 

        extern const char *RotateObjectiveTYPENAME;

        struct RotateObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateObjectiveTypeSupport;
        class RotateObjectiveDataWriter;
        class RotateObjectiveDataReader;
        #endif
        class RotateObjective 
        {
          public:
            typedef struct RotateObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateObjectiveTypeSupport TypeSupport;
            typedef RotateObjectiveDataWriter DataWriter;
            typedef RotateObjectiveDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   objectiveId ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   targetRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* RotateObjective_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *RotateObjective_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *RotateObjective_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *RotateObjective_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(RotateObjectiveSeq, RotateObjective);

        NDDSUSERDllExport
        RTIBool RotateObjective_initialize(
            RotateObjective* self);

        NDDSUSERDllExport
        RTIBool RotateObjective_initialize_ex(
            RotateObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateObjective_initialize_w_params(
            RotateObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool RotateObjective_finalize_w_return(
            RotateObjective* self);

        NDDSUSERDllExport
        void RotateObjective_finalize(
            RotateObjective* self);

        NDDSUSERDllExport
        void RotateObjective_finalize_ex(
            RotateObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateObjective_finalize_w_params(
            RotateObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateObjective_finalize_optional_members(
            RotateObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateObjective_copy(
            RotateObjective* dst,
            const RotateObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_STATE[] = "RotateState"; 

        extern const char *RotateStateTYPENAME;

        struct RotateStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateStateTypeSupport;
        class RotateStateDataWriter;
        class RotateStateDataReader;
        #endif
        class RotateState 
        {
          public:
            typedef struct RotateStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateStateTypeSupport TypeSupport;
            typedef RotateStateDataWriter DataWriter;
            typedef RotateStateDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   objectiveId ;
            DataTypes::Time   timestamp ;
            DataTypes::Status   status ;
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
        NDDSUSERDllExport DDS_TypeCode* RotateState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *RotateState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *RotateState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *RotateState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(RotateStateSeq, RotateState);

        NDDSUSERDllExport
        RTIBool RotateState_initialize(
            RotateState* self);

        NDDSUSERDllExport
        RTIBool RotateState_initialize_ex(
            RotateState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateState_initialize_w_params(
            RotateState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool RotateState_finalize_w_return(
            RotateState* self);

        NDDSUSERDllExport
        void RotateState_finalize(
            RotateState* self);

        NDDSUSERDllExport
        void RotateState_finalize_ex(
            RotateState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateState_finalize_w_params(
            RotateState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateState_finalize_optional_members(
            RotateState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateState_copy(
            RotateState* dst,
            const RotateState* src);

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
        struct type_code<nec::process::RotateRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<nec::process::RotateObjective> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<nec::process::RotateState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* rotate */

