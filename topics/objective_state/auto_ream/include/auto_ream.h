

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from auto_ream.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef auto_ream_426526490_h
#define auto_ream_426526490_h

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
        static const char AUTO_REAM_REQUEST[] = "AutoReamRequest"; 

        extern const char *AutoReamRequestTYPENAME;

        struct AutoReamRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class AutoReamRequestTypeSupport;
        class AutoReamRequestDataWriter;
        class AutoReamRequestDataReader;
        #endif

        class AutoReamRequest 
        {
          public:
            typedef struct AutoReamRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef AutoReamRequestTypeSupport TypeSupport;
            typedef AutoReamRequestDataWriter DataWriter;
            typedef AutoReamRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   duration ;
            DDS_Double   QuillTipPosPV_m ;
            DDS_Double   Hole_depth ;
            DDS_Double   Dp_PressurePV_kPa ;
            DDS_Double   WeightOnBitPV_daN ;
            DDS_Double   StandpipePressUnfiltPV_kPa ;
            DDS_Double   BlockSpeedPV_mps ;
            DDS_Double   TD_Quill_SpeedPV_rpm ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* AutoReamRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(AutoReamRequestSeq, AutoReamRequest);                                        

        NDDSUSERDllExport
        RTIBool AutoReamRequest_initialize(
            AutoReamRequest* self);

        NDDSUSERDllExport
        RTIBool AutoReamRequest_initialize_ex(
            AutoReamRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool AutoReamRequest_initialize_w_params(
            AutoReamRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);        

        NDDSUSERDllExport
        void AutoReamRequest_finalize(
            AutoReamRequest* self);

        NDDSUSERDllExport
        void AutoReamRequest_finalize_ex(
            AutoReamRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void AutoReamRequest_finalize_w_params(
            AutoReamRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void AutoReamRequest_finalize_optional_members(
            AutoReamRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool AutoReamRequest_copy(
            AutoReamRequest* dst,
            const AutoReamRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char AUTO_REAM_OBJECTIVE[] = "AutoReamObjective"; 

        extern const char *AutoReamObjectiveTYPENAME;

        struct AutoReamObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class AutoReamObjectiveTypeSupport;
        class AutoReamObjectiveDataWriter;
        class AutoReamObjectiveDataReader;
        #endif

        class AutoReamObjective 
        {
          public:
            typedef struct AutoReamObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef AutoReamObjectiveTypeSupport TypeSupport;
            typedef AutoReamObjectiveDataWriter DataWriter;
            typedef AutoReamObjectiveDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   QuillTipPosPV_m ;
            DDS_Double   Hole_depth ;
            DDS_Double   Dp_PressurePV_kPa ;
            DDS_Double   WeightOnBitPV_daN ;
            DDS_Double   StandpipePressUnfiltPV_kPa ;
            DDS_Double   BlockSpeedPV_mps ;
            DDS_Double   TD_Quill_SpeedPV_rpm ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* AutoReamObjective_get_typecode(void); /* Type code */

        DDS_SEQUENCE(AutoReamObjectiveSeq, AutoReamObjective);                                        

        NDDSUSERDllExport
        RTIBool AutoReamObjective_initialize(
            AutoReamObjective* self);

        NDDSUSERDllExport
        RTIBool AutoReamObjective_initialize_ex(
            AutoReamObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool AutoReamObjective_initialize_w_params(
            AutoReamObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);        

        NDDSUSERDllExport
        void AutoReamObjective_finalize(
            AutoReamObjective* self);

        NDDSUSERDllExport
        void AutoReamObjective_finalize_ex(
            AutoReamObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void AutoReamObjective_finalize_w_params(
            AutoReamObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void AutoReamObjective_finalize_optional_members(
            AutoReamObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool AutoReamObjective_copy(
            AutoReamObjective* dst,
            const AutoReamObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char AUTO_REAM_STATE[] = "AutoReamState"; 

        extern const char *AutoReamStateTYPENAME;

        struct AutoReamStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class AutoReamStateTypeSupport;
        class AutoReamStateDataWriter;
        class AutoReamStateDataReader;
        #endif

        class AutoReamState 
        {
          public:
            typedef struct AutoReamStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef AutoReamStateTypeSupport TypeSupport;
            typedef AutoReamStateDataWriter DataWriter;
            typedef AutoReamStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   timestamp ;
            DataTypes::Status   status ;
            DDS_Double   hookloadActual ;
            DDS_Double   holeDepthActual ;
            DDS_Double   differentialPressureActual ;
            DDS_Double   weightOnBitActual ;
            DDS_Double   standpipePressureActual ;
            DDS_Double   blockSpeedActual ;
            DDS_Double   quillPositionActual ;
            DDS_Double   quillRateActual ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* AutoReamState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(AutoReamStateSeq, AutoReamState);                                        

        NDDSUSERDllExport
        RTIBool AutoReamState_initialize(
            AutoReamState* self);

        NDDSUSERDllExport
        RTIBool AutoReamState_initialize_ex(
            AutoReamState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool AutoReamState_initialize_w_params(
            AutoReamState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);        

        NDDSUSERDllExport
        void AutoReamState_finalize(
            AutoReamState* self);

        NDDSUSERDllExport
        void AutoReamState_finalize_ex(
            AutoReamState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void AutoReamState_finalize_w_params(
            AutoReamState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void AutoReamState_finalize_optional_members(
            AutoReamState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool AutoReamState_copy(
            AutoReamState* dst,
            const AutoReamState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#endif /* auto_ream */

