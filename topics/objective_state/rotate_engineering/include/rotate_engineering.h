

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef rotate_engineering_182435578_h
#define rotate_engineering_182435578_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace nec {
    namespace engineering {
        typedef enum State
        {
            Available ,      
            Unavailable ,      
            NotSafe      
        } State;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* State_get_typecode(void); /* Type code */

        DDS_SEQUENCE(StateSeq, State);

        NDDSUSERDllExport
        RTIBool State_initialize(
            State* self);

        NDDSUSERDllExport
        RTIBool State_initialize_ex(
            State* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool State_initialize_w_params(
            State* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void State_finalize(
            State* self);

        NDDSUSERDllExport
        void State_finalize_ex(
            State* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void State_finalize_w_params(
            State* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void State_finalize_optional_members(
            State* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool State_copy(
            State* dst,
            const State* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        typedef enum Mode
        {
            Locka ,      
            Remote ,      
            QuillOscillation      
        } Mode;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* Mode_get_typecode(void); /* Type code */

        DDS_SEQUENCE(ModeSeq, Mode);

        NDDSUSERDllExport
        RTIBool Mode_initialize(
            Mode* self);

        NDDSUSERDllExport
        RTIBool Mode_initialize_ex(
            Mode* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Mode_initialize_w_params(
            Mode* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void Mode_finalize(
            Mode* self);

        NDDSUSERDllExport
        void Mode_finalize_ex(
            Mode* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Mode_finalize_w_params(
            Mode* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Mode_finalize_optional_members(
            Mode* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Mode_copy(
            Mode* dst,
            const Mode* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_ENGINEERING_REQUEST[] = "RotateEngineeringRequest"; 

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

            DataTypes::Uuid   id ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   duration ;
            DDS_Double   targetRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* RotateRequest_get_typecode(void); /* Type code */

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

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_ENGINEERING_OBJECTIVE[] = "RotateEngineeringObjective"; 

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

            DataTypes::Uuid   id ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   targetRate ;
            DDS_Double   targetTorque ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* RotateObjective_get_typecode(void); /* Type code */

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

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_ENGINEERING_STATE[] = "RotateEngineeringState"; 

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

            DataTypes::Uuid   id ;
            DataTypes::Status   status ;
            DataTypes::Time   timestamp ;
            nec::engineering::State   state ;
            nec::engineering::Mode   mode ;
            DDS_Double   actualVelocity ;
            DDS_Double   actualTorque ;
            DDS_Double   actualPosition ;
            DDS_Double   actualPower ;
            DDS_Double   minVelocity ;
            DDS_Double   maxVelocity ;
            DDS_Double   minTorque ;
            DDS_Double   maxTorque ;
            DDS_Double   minPosition ;
            DDS_Double   maxPosition ;
            DDS_Double   torqueVelocity ;
            DDS_Double   torqueTorque ;
            DDS_Double   torquePosition ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* RotateState_get_typecode(void); /* Type code */

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

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace engineering  */
} /* namespace nec  */

#endif /* rotate_engineering */

