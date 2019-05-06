

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drill_1648144461_h
#define drill_1648144461_h

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
        static const char DRILL_REQUEST[] = "DrillRequest"; 

        extern const char *DrillRequestTYPENAME;

        struct DrillRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillRequestTypeSupport;
        class DrillRequestDataWriter;
        class DrillRequestDataReader;
        #endif

        class DrillRequest 
        {
          public:
            typedef struct DrillRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillRequestTypeSupport TypeSupport;
            typedef DrillRequestDataWriter DataWriter;
            typedef DrillRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   ropTarget ;
            DDS_Double   wobTarget ;
            DDS_Double   diffPressureTarget ;
            DDS_Double   torqueTarget ;
            DDS_Boolean   ropMode ;
            DDS_Boolean   wobMode ;
            DDS_Boolean   diffPressureMode ;
            DDS_Boolean   torqueMode ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillRequestSeq, DrillRequest);

        NDDSUSERDllExport
        RTIBool DrillRequest_initialize(
            DrillRequest* self);

        NDDSUSERDllExport
        RTIBool DrillRequest_initialize_ex(
            DrillRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillRequest_initialize_w_params(
            DrillRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillRequest_finalize(
            DrillRequest* self);

        NDDSUSERDllExport
        void DrillRequest_finalize_ex(
            DrillRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillRequest_finalize_w_params(
            DrillRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillRequest_finalize_optional_members(
            DrillRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillRequest_copy(
            DrillRequest* dst,
            const DrillRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char DRILL_OBJECTIVE[] = "DrillObjective"; 

        extern const char *DrillObjectiveTYPENAME;

        struct DrillObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillObjectiveTypeSupport;
        class DrillObjectiveDataWriter;
        class DrillObjectiveDataReader;
        #endif

        class DrillObjective 
        {
          public:
            typedef struct DrillObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillObjectiveTypeSupport TypeSupport;
            typedef DrillObjectiveDataWriter DataWriter;
            typedef DrillObjectiveDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   estimatedDuration ;
            DDS_Double   ropTarget ;
            DDS_Double   wobTarget ;
            DDS_Double   diffPressureTarget ;
            DDS_Double   torqueTarget ;
            DDS_Boolean   ropMode ;
            DDS_Boolean   wobMode ;
            DDS_Boolean   diffPressureMode ;
            DDS_Boolean   torqueMode ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillObjective_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillObjectiveSeq, DrillObjective);

        NDDSUSERDllExport
        RTIBool DrillObjective_initialize(
            DrillObjective* self);

        NDDSUSERDllExport
        RTIBool DrillObjective_initialize_ex(
            DrillObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillObjective_initialize_w_params(
            DrillObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillObjective_finalize(
            DrillObjective* self);

        NDDSUSERDllExport
        void DrillObjective_finalize_ex(
            DrillObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillObjective_finalize_w_params(
            DrillObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillObjective_finalize_optional_members(
            DrillObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillObjective_copy(
            DrillObjective* dst,
            const DrillObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char DRILL_STATE[] = "DrillState"; 

        extern const char *DrillStateTYPENAME;

        struct DrillStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillStateTypeSupport;
        class DrillStateDataWriter;
        class DrillStateDataReader;
        #endif

        class DrillState 
        {
          public:
            typedef struct DrillStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillStateTypeSupport TypeSupport;
            typedef DrillStateDataWriter DataWriter;
            typedef DrillStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   timestamp ;
            DDS_Double   ropActual ;
            DDS_Double   wobActual ;
            DDS_Double   diffPressureActual ;
            DDS_Double   torqueActual ;
            DDS_Double   ropLimit ;
            DDS_Double   wobLimit ;
            DDS_Double   diffPressureLimit ;
            DDS_Double   torqueLimit ;
            DDS_Boolean   ropMode ;
            DDS_Boolean   wobMode ;
            DDS_Boolean   diffPressureMode ;
            DDS_Boolean   torqueMode ;
            DDS_Double   ropTarget ;
            DDS_Double   wobTarget ;
            DDS_Double   diffPressureTarget ;
            DDS_Double   torqueTarget ;
            DDS_Boolean   bitOnBottom ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillStateSeq, DrillState);

        NDDSUSERDllExport
        RTIBool DrillState_initialize(
            DrillState* self);

        NDDSUSERDllExport
        RTIBool DrillState_initialize_ex(
            DrillState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillState_initialize_w_params(
            DrillState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillState_finalize(
            DrillState* self);

        NDDSUSERDllExport
        void DrillState_finalize_ex(
            DrillState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillState_finalize_w_params(
            DrillState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillState_finalize_optional_members(
            DrillState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillState_copy(
            DrillState* dst,
            const DrillState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#endif /* drill */

