

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef circulate_engineering_1124573629_h
#define circulate_engineering_1124573629_h

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
        static const DDS_Long MaxNumberOfPumps= 4;
        typedef enum PumpStateEnum
        {
            Available ,      
            Run ,      
            NotSafe      
        } PumpStateEnum;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* PumpStateEnum_get_typecode(void); /* Type code */

        DDS_SEQUENCE(PumpStateEnumSeq, PumpStateEnum);

        NDDSUSERDllExport
        RTIBool PumpStateEnum_initialize(
            PumpStateEnum* self);

        NDDSUSERDllExport
        RTIBool PumpStateEnum_initialize_ex(
            PumpStateEnum* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PumpStateEnum_initialize_w_params(
            PumpStateEnum* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void PumpStateEnum_finalize(
            PumpStateEnum* self);

        NDDSUSERDllExport
        void PumpStateEnum_finalize_ex(
            PumpStateEnum* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PumpStateEnum_finalize_w_params(
            PumpStateEnum* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PumpStateEnum_finalize_optional_members(
            PumpStateEnum* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PumpStateEnum_copy(
            PumpStateEnum* dst,
            const PumpStateEnum* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *MudPumpEngineeringRequestTYPENAME;

        struct MudPumpEngineeringRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class MudPumpEngineeringRequestTypeSupport;
        class MudPumpEngineeringRequestDataWriter;
        class MudPumpEngineeringRequestDataReader;
        #endif

        class MudPumpEngineeringRequest 
        {
          public:
            typedef struct MudPumpEngineeringRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef MudPumpEngineeringRequestTypeSupport TypeSupport;
            typedef MudPumpEngineeringRequestDataWriter DataWriter;
            typedef MudPumpEngineeringRequestDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   duration ;
            nec::control::PumpStateEnum   targetState ;
            DDS_Double   targetVelocity ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* MudPumpEngineeringRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(MudPumpEngineeringRequestSeq, MudPumpEngineeringRequest);

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringRequest_initialize(
            MudPumpEngineeringRequest* self);

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringRequest_initialize_ex(
            MudPumpEngineeringRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringRequest_initialize_w_params(
            MudPumpEngineeringRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void MudPumpEngineeringRequest_finalize(
            MudPumpEngineeringRequest* self);

        NDDSUSERDllExport
        void MudPumpEngineeringRequest_finalize_ex(
            MudPumpEngineeringRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void MudPumpEngineeringRequest_finalize_w_params(
            MudPumpEngineeringRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void MudPumpEngineeringRequest_finalize_optional_members(
            MudPumpEngineeringRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringRequest_copy(
            MudPumpEngineeringRequest* dst,
            const MudPumpEngineeringRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *MudPumpEngineeringStateTYPENAME;

        struct MudPumpEngineeringStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class MudPumpEngineeringStateTypeSupport;
        class MudPumpEngineeringStateDataWriter;
        class MudPumpEngineeringStateDataReader;
        #endif

        class MudPumpEngineeringState 
        {
          public:
            typedef struct MudPumpEngineeringStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef MudPumpEngineeringStateTypeSupport TypeSupport;
            typedef MudPumpEngineeringStateDataWriter DataWriter;
            typedef MudPumpEngineeringStateDataReader DataReader;
            #endif

            DDS_Char *   id ;
            nec::control::PumpStateEnum   actualState ;
            DDS_Double   actualVelocity ;
            DDS_Double   actualPower ;
            DDS_Double   minVelocity ;
            DDS_Double   maxVelocity ;
            DDS_Double   maxPower ;
            nec::control::PumpStateEnum   targetState ;
            DDS_Double   targetVelocity ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* MudPumpEngineeringState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(MudPumpEngineeringStateSeq, MudPumpEngineeringState);

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringState_initialize(
            MudPumpEngineeringState* self);

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringState_initialize_ex(
            MudPumpEngineeringState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringState_initialize_w_params(
            MudPumpEngineeringState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void MudPumpEngineeringState_finalize(
            MudPumpEngineeringState* self);

        NDDSUSERDllExport
        void MudPumpEngineeringState_finalize_ex(
            MudPumpEngineeringState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void MudPumpEngineeringState_finalize_w_params(
            MudPumpEngineeringState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void MudPumpEngineeringState_finalize_optional_members(
            MudPumpEngineeringState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool MudPumpEngineeringState_copy(
            MudPumpEngineeringState* dst,
            const MudPumpEngineeringState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char CIRCULATE_ENGINEERING_REQUEST[] = "CirculateEngineeringRequest"; 

        extern const char *CirculateEngineeringRequestTYPENAME;

        struct CirculateEngineeringRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class CirculateEngineeringRequestTypeSupport;
        class CirculateEngineeringRequestDataWriter;
        class CirculateEngineeringRequestDataReader;
        #endif

        class CirculateEngineeringRequest 
        {
          public:
            typedef struct CirculateEngineeringRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef CirculateEngineeringRequestTypeSupport TypeSupport;
            typedef CirculateEngineeringRequestDataWriter DataWriter;
            typedef CirculateEngineeringRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            nec::control::MudPumpEngineeringRequestSeq  targetPumps ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* CirculateEngineeringRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(CirculateEngineeringRequestSeq, CirculateEngineeringRequest);

        NDDSUSERDllExport
        RTIBool CirculateEngineeringRequest_initialize(
            CirculateEngineeringRequest* self);

        NDDSUSERDllExport
        RTIBool CirculateEngineeringRequest_initialize_ex(
            CirculateEngineeringRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool CirculateEngineeringRequest_initialize_w_params(
            CirculateEngineeringRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void CirculateEngineeringRequest_finalize(
            CirculateEngineeringRequest* self);

        NDDSUSERDllExport
        void CirculateEngineeringRequest_finalize_ex(
            CirculateEngineeringRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void CirculateEngineeringRequest_finalize_w_params(
            CirculateEngineeringRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void CirculateEngineeringRequest_finalize_optional_members(
            CirculateEngineeringRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool CirculateEngineeringRequest_copy(
            CirculateEngineeringRequest* dst,
            const CirculateEngineeringRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char CIRCULATE_ENGINEERING_STATE[] = "CirculateEngineeringState"; 

        extern const char *CirculateEngineeringStateTYPENAME;

        struct CirculateEngineeringStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class CirculateEngineeringStateTypeSupport;
        class CirculateEngineeringStateDataWriter;
        class CirculateEngineeringStateDataReader;
        #endif

        class CirculateEngineeringState 
        {
          public:
            typedef struct CirculateEngineeringStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef CirculateEngineeringStateTypeSupport TypeSupport;
            typedef CirculateEngineeringStateDataWriter DataWriter;
            typedef CirculateEngineeringStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   timestamp ;
            nec::control::MudPumpEngineeringStateSeq  actualPumps ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* CirculateEngineeringState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(CirculateEngineeringStateSeq, CirculateEngineeringState);

        NDDSUSERDllExport
        RTIBool CirculateEngineeringState_initialize(
            CirculateEngineeringState* self);

        NDDSUSERDllExport
        RTIBool CirculateEngineeringState_initialize_ex(
            CirculateEngineeringState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool CirculateEngineeringState_initialize_w_params(
            CirculateEngineeringState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void CirculateEngineeringState_finalize(
            CirculateEngineeringState* self);

        NDDSUSERDllExport
        void CirculateEngineeringState_finalize_ex(
            CirculateEngineeringState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void CirculateEngineeringState_finalize_w_params(
            CirculateEngineeringState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void CirculateEngineeringState_finalize_optional_members(
            CirculateEngineeringState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool CirculateEngineeringState_copy(
            CirculateEngineeringState* dst,
            const CirculateEngineeringState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace control  */
} /* namespace nec  */

#endif /* circulate_engineering */

