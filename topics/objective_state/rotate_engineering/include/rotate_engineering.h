

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef rotate_engineering_182436148_h
#define rotate_engineering_182436148_h

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

        extern const char *RotateEngineeringRequestTYPENAME;

        struct RotateEngineeringRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateEngineeringRequestTypeSupport;
        class RotateEngineeringRequestDataWriter;
        class RotateEngineeringRequestDataReader;
        #endif

        class RotateEngineeringRequest 
        {
          public:
            typedef struct RotateEngineeringRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateEngineeringRequestTypeSupport TypeSupport;
            typedef RotateEngineeringRequestDataWriter DataWriter;
            typedef RotateEngineeringRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   duration ;
            DDS_Double   targetRate ;
            DDS_Double   torque ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* RotateEngineeringRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(RotateEngineeringRequestSeq, RotateEngineeringRequest);

        NDDSUSERDllExport
        RTIBool RotateEngineeringRequest_initialize(
            RotateEngineeringRequest* self);

        NDDSUSERDllExport
        RTIBool RotateEngineeringRequest_initialize_ex(
            RotateEngineeringRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateEngineeringRequest_initialize_w_params(
            RotateEngineeringRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void RotateEngineeringRequest_finalize(
            RotateEngineeringRequest* self);

        NDDSUSERDllExport
        void RotateEngineeringRequest_finalize_ex(
            RotateEngineeringRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateEngineeringRequest_finalize_w_params(
            RotateEngineeringRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateEngineeringRequest_finalize_optional_members(
            RotateEngineeringRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateEngineeringRequest_copy(
            RotateEngineeringRequest* dst,
            const RotateEngineeringRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_ENGINEERING_OBJECTIVE[] = "RotateEngineeringObjective"; 

        extern const char *RotateEngineeringObjectiveTYPENAME;

        struct RotateEngineeringObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateEngineeringObjectiveTypeSupport;
        class RotateEngineeringObjectiveDataWriter;
        class RotateEngineeringObjectiveDataReader;
        #endif

        class RotateEngineeringObjective 
        {
          public:
            typedef struct RotateEngineeringObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateEngineeringObjectiveTypeSupport TypeSupport;
            typedef RotateEngineeringObjectiveDataWriter DataWriter;
            typedef RotateEngineeringObjectiveDataReader DataReader;
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

        NDDSUSERDllExport DDS_TypeCode* RotateEngineeringObjective_get_typecode(void); /* Type code */

        DDS_SEQUENCE(RotateEngineeringObjectiveSeq, RotateEngineeringObjective);

        NDDSUSERDllExport
        RTIBool RotateEngineeringObjective_initialize(
            RotateEngineeringObjective* self);

        NDDSUSERDllExport
        RTIBool RotateEngineeringObjective_initialize_ex(
            RotateEngineeringObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateEngineeringObjective_initialize_w_params(
            RotateEngineeringObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void RotateEngineeringObjective_finalize(
            RotateEngineeringObjective* self);

        NDDSUSERDllExport
        void RotateEngineeringObjective_finalize_ex(
            RotateEngineeringObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateEngineeringObjective_finalize_w_params(
            RotateEngineeringObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateEngineeringObjective_finalize_optional_members(
            RotateEngineeringObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateEngineeringObjective_copy(
            RotateEngineeringObjective* dst,
            const RotateEngineeringObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_ENGINEERING_STATE[] = "RotateEngineeringState"; 

        extern const char *RotateEngineeringStateTYPENAME;

        struct RotateEngineeringStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateEngineeringStateTypeSupport;
        class RotateEngineeringStateDataWriter;
        class RotateEngineeringStateDataReader;
        #endif

        class RotateEngineeringState 
        {
          public:
            typedef struct RotateEngineeringStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateEngineeringStateTypeSupport TypeSupport;
            typedef RotateEngineeringStateDataWriter DataWriter;
            typedef RotateEngineeringStateDataReader DataReader;
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
            DDS_Double   targetVelocity ;
            DDS_Double   targetTorque ;
            DDS_Double   targetPosition ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* RotateEngineeringState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(RotateEngineeringStateSeq, RotateEngineeringState);

        NDDSUSERDllExport
        RTIBool RotateEngineeringState_initialize(
            RotateEngineeringState* self);

        NDDSUSERDllExport
        RTIBool RotateEngineeringState_initialize_ex(
            RotateEngineeringState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateEngineeringState_initialize_w_params(
            RotateEngineeringState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void RotateEngineeringState_finalize(
            RotateEngineeringState* self);

        NDDSUSERDllExport
        void RotateEngineeringState_finalize_ex(
            RotateEngineeringState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateEngineeringState_finalize_w_params(
            RotateEngineeringState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateEngineeringState_finalize_optional_members(
            RotateEngineeringState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateEngineeringState_copy(
            RotateEngineeringState* dst,
            const RotateEngineeringState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace engineering  */
} /* namespace nec  */

#endif /* rotate_engineering */

