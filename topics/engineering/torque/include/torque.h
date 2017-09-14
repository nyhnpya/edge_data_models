

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from torque.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef torque_1680233190_h
#define torque_1680233190_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace nec {
    namespace control {
        static const char TORQUE_REQUEST[] = "TorqueState"; 

        extern const char *TorqueRequestTYPENAME;

        struct TorqueRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TorqueRequestTypeSupport;
        class TorqueRequestDataWriter;
        class TorqueRequestDataReader;
        #endif

        class TorqueRequest 
        {
          public:
            typedef struct TorqueRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TorqueRequestTypeSupport TypeSupport;
            typedef TorqueRequestDataWriter DataWriter;
            typedef TorqueRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   duration ;
            DDS_Double   target ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* TorqueRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(TorqueRequestSeq, TorqueRequest);

        NDDSUSERDllExport
        RTIBool TorqueRequest_initialize(
            TorqueRequest* self);

        NDDSUSERDllExport
        RTIBool TorqueRequest_initialize_ex(
            TorqueRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TorqueRequest_initialize_w_params(
            TorqueRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void TorqueRequest_finalize(
            TorqueRequest* self);

        NDDSUSERDllExport
        void TorqueRequest_finalize_ex(
            TorqueRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TorqueRequest_finalize_w_params(
            TorqueRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TorqueRequest_finalize_optional_members(
            TorqueRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TorqueRequest_copy(
            TorqueRequest* dst,
            const TorqueRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char TORQUE_OBJECTIVE[] = "TorqueState"; 

        extern const char *TorqueObjectiveTYPENAME;

        struct TorqueObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TorqueObjectiveTypeSupport;
        class TorqueObjectiveDataWriter;
        class TorqueObjectiveDataReader;
        #endif

        class TorqueObjective 
        {
          public:
            typedef struct TorqueObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TorqueObjectiveTypeSupport TypeSupport;
            typedef TorqueObjectiveDataWriter DataWriter;
            typedef TorqueObjectiveDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   limit ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* TorqueObjective_get_typecode(void); /* Type code */

        DDS_SEQUENCE(TorqueObjectiveSeq, TorqueObjective);

        NDDSUSERDllExport
        RTIBool TorqueObjective_initialize(
            TorqueObjective* self);

        NDDSUSERDllExport
        RTIBool TorqueObjective_initialize_ex(
            TorqueObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TorqueObjective_initialize_w_params(
            TorqueObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void TorqueObjective_finalize(
            TorqueObjective* self);

        NDDSUSERDllExport
        void TorqueObjective_finalize_ex(
            TorqueObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TorqueObjective_finalize_w_params(
            TorqueObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TorqueObjective_finalize_optional_members(
            TorqueObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TorqueObjective_copy(
            TorqueObjective* dst,
            const TorqueObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char TORQUE_STATE[] = "TorqueState"; 

        extern const char *TorqueStateTYPENAME;

        struct TorqueStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TorqueStateTypeSupport;
        class TorqueStateDataWriter;
        class TorqueStateDataReader;
        #endif

        class TorqueState 
        {
          public:
            typedef struct TorqueStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TorqueStateTypeSupport TypeSupport;
            typedef TorqueStateDataWriter DataWriter;
            typedef TorqueStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Status   status ;
            DDS_Double   actual ;
            DDS_Double   minForce ;
            DDS_Double   maxForce ;
            DDS_Double   limit ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* TorqueState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(TorqueStateSeq, TorqueState);

        NDDSUSERDllExport
        RTIBool TorqueState_initialize(
            TorqueState* self);

        NDDSUSERDllExport
        RTIBool TorqueState_initialize_ex(
            TorqueState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TorqueState_initialize_w_params(
            TorqueState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void TorqueState_finalize(
            TorqueState* self);

        NDDSUSERDllExport
        void TorqueState_finalize_ex(
            TorqueState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TorqueState_finalize_w_params(
            TorqueState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TorqueState_finalize_optional_members(
            TorqueState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TorqueState_copy(
            TorqueState* dst,
            const TorqueState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace control  */
} /* namespace nec  */

#endif /* torque */

