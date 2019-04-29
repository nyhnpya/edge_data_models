

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef circulate_1746883503_h
#define circulate_1746883503_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace nec {
    namespace process {
        static const char CIRCULATE_REQUEST[] = "CirculateRequest"; 

        extern const char *CirculateRequestTYPENAME;

        struct CirculateRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class CirculateRequestTypeSupport;
        class CirculateRequestDataWriter;
        class CirculateRequestDataReader;
        #endif

        class CirculateRequest 
        {
          public:
            typedef struct CirculateRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef CirculateRequestTypeSupport TypeSupport;
            typedef CirculateRequestDataWriter DataWriter;
            typedef CirculateRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   targetFlowRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* CirculateRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(CirculateRequestSeq, CirculateRequest);

        NDDSUSERDllExport
        RTIBool CirculateRequest_initialize(
            CirculateRequest* self);

        NDDSUSERDllExport
        RTIBool CirculateRequest_initialize_ex(
            CirculateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool CirculateRequest_initialize_w_params(
            CirculateRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void CirculateRequest_finalize(
            CirculateRequest* self);

        NDDSUSERDllExport
        void CirculateRequest_finalize_ex(
            CirculateRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void CirculateRequest_finalize_w_params(
            CirculateRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void CirculateRequest_finalize_optional_members(
            CirculateRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool CirculateRequest_copy(
            CirculateRequest* dst,
            const CirculateRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char CIRCULATE_OBJECTIVE[] = "CirculateObjective"; 

        extern const char *CirculateObjectiveTYPENAME;

        struct CirculateObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class CirculateObjectiveTypeSupport;
        class CirculateObjectiveDataWriter;
        class CirculateObjectiveDataReader;
        #endif

        class CirculateObjective 
        {
          public:
            typedef struct CirculateObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef CirculateObjectiveTypeSupport TypeSupport;
            typedef CirculateObjectiveDataWriter DataWriter;
            typedef CirculateObjectiveDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   targetFlowRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* CirculateObjective_get_typecode(void); /* Type code */

        DDS_SEQUENCE(CirculateObjectiveSeq, CirculateObjective);

        NDDSUSERDllExport
        RTIBool CirculateObjective_initialize(
            CirculateObjective* self);

        NDDSUSERDllExport
        RTIBool CirculateObjective_initialize_ex(
            CirculateObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool CirculateObjective_initialize_w_params(
            CirculateObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void CirculateObjective_finalize(
            CirculateObjective* self);

        NDDSUSERDllExport
        void CirculateObjective_finalize_ex(
            CirculateObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void CirculateObjective_finalize_w_params(
            CirculateObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void CirculateObjective_finalize_optional_members(
            CirculateObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool CirculateObjective_copy(
            CirculateObjective* dst,
            const CirculateObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char CIRCULATE_STATE[] = "CirculateState"; 

        extern const char *CirculateStateTYPENAME;

        struct CirculateStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class CirculateStateTypeSupport;
        class CirculateStateDataWriter;
        class CirculateStateDataReader;
        #endif

        class CirculateState 
        {
          public:
            typedef struct CirculateStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef CirculateStateTypeSupport TypeSupport;
            typedef CirculateStateDataWriter DataWriter;
            typedef CirculateStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   timestamp ;
            DataTypes::Status   status ;
            DDS_Double   actualFlowRate ;
            DDS_Double   actualStandpipePressure ;
            DDS_Double   minFlowRate ;
            DDS_Double   maxFlowRate ;
            DDS_Double   minStandpipePressure ;
            DDS_Double   maxStandpipePressure ;
            DDS_Double   targetFlowRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* CirculateState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(CirculateStateSeq, CirculateState);

        NDDSUSERDllExport
        RTIBool CirculateState_initialize(
            CirculateState* self);

        NDDSUSERDllExport
        RTIBool CirculateState_initialize_ex(
            CirculateState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool CirculateState_initialize_w_params(
            CirculateState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void CirculateState_finalize(
            CirculateState* self);

        NDDSUSERDllExport
        void CirculateState_finalize_ex(
            CirculateState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void CirculateState_finalize_w_params(
            CirculateState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void CirculateState_finalize_optional_members(
            CirculateState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool CirculateState_copy(
            CirculateState* dst,
            const CirculateState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#endif /* circulate */

