

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill_simulation.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drill_simulation_1660684592_h
#define drill_simulation_1660684592_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace Simulation {
    static const char SIM_AUTODRILLER_REQUEST[] = "SimAutoDrillerRequest"; 

    extern const char *AutoDrillerRequestTYPENAME;

    struct AutoDrillerRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class AutoDrillerRequestTypeSupport;
    class AutoDrillerRequestDataWriter;
    class AutoDrillerRequestDataReader;
    #endif

    class AutoDrillerRequest 
    {
      public:
        typedef struct AutoDrillerRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef AutoDrillerRequestTypeSupport TypeSupport;
        typedef AutoDrillerRequestDataWriter DataWriter;
        typedef AutoDrillerRequestDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DDS_Double   hookload ;
        DDS_Double   ropLimit ;
        DDS_Double   wobLimit ;
        DDS_Double   differentialPressureLimit ;
        DDS_Double   torqueLimit ;
        DDS_Boolean   ropMode ;
        DDS_Boolean   wobMode ;
        DDS_Boolean   differentialPressureMode ;
        DDS_Boolean   torqueMode ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* AutoDrillerRequest_get_typecode(void); /* Type code */

    DDS_SEQUENCE(AutoDrillerRequestSeq, AutoDrillerRequest);

    NDDSUSERDllExport
    RTIBool AutoDrillerRequest_initialize(
        AutoDrillerRequest* self);

    NDDSUSERDllExport
    RTIBool AutoDrillerRequest_initialize_ex(
        AutoDrillerRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool AutoDrillerRequest_initialize_w_params(
        AutoDrillerRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void AutoDrillerRequest_finalize(
        AutoDrillerRequest* self);

    NDDSUSERDllExport
    void AutoDrillerRequest_finalize_ex(
        AutoDrillerRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void AutoDrillerRequest_finalize_w_params(
        AutoDrillerRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void AutoDrillerRequest_finalize_optional_members(
        AutoDrillerRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool AutoDrillerRequest_copy(
        AutoDrillerRequest* dst,
        const AutoDrillerRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const char SIM_AUTODRILLER_OBJECTIVE[] = "SimAutoDrillerObjective"; 

    extern const char *AutoDrillerObjectiveTYPENAME;

    struct AutoDrillerObjectiveSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class AutoDrillerObjectiveTypeSupport;
    class AutoDrillerObjectiveDataWriter;
    class AutoDrillerObjectiveDataReader;
    #endif

    class AutoDrillerObjective 
    {
      public:
        typedef struct AutoDrillerObjectiveSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef AutoDrillerObjectiveTypeSupport TypeSupport;
        typedef AutoDrillerObjectiveDataWriter DataWriter;
        typedef AutoDrillerObjectiveDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DDS_Double   hookload ;
        DDS_Double   ropLimit ;
        DDS_Double   wobLimit ;
        DDS_Double   differentialPressureLimit ;
        DDS_Double   torqueLimit ;
        DDS_Boolean   ropMode ;
        DDS_Boolean   wobMode ;
        DDS_Boolean   differentialPressureMode ;
        DDS_Boolean   torqueMode ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* AutoDrillerObjective_get_typecode(void); /* Type code */

    DDS_SEQUENCE(AutoDrillerObjectiveSeq, AutoDrillerObjective);

    NDDSUSERDllExport
    RTIBool AutoDrillerObjective_initialize(
        AutoDrillerObjective* self);

    NDDSUSERDllExport
    RTIBool AutoDrillerObjective_initialize_ex(
        AutoDrillerObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool AutoDrillerObjective_initialize_w_params(
        AutoDrillerObjective* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void AutoDrillerObjective_finalize(
        AutoDrillerObjective* self);

    NDDSUSERDllExport
    void AutoDrillerObjective_finalize_ex(
        AutoDrillerObjective* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void AutoDrillerObjective_finalize_w_params(
        AutoDrillerObjective* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void AutoDrillerObjective_finalize_optional_members(
        AutoDrillerObjective* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool AutoDrillerObjective_copy(
        AutoDrillerObjective* dst,
        const AutoDrillerObjective* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const char SIM_AUTODRILLER_STATE[] = "SimAutoDrillerState"; 

    extern const char *AutoDrillerStateTYPENAME;

    struct AutoDrillerStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class AutoDrillerStateTypeSupport;
    class AutoDrillerStateDataWriter;
    class AutoDrillerStateDataReader;
    #endif

    class AutoDrillerState 
    {
      public:
        typedef struct AutoDrillerStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef AutoDrillerStateTypeSupport TypeSupport;
        typedef AutoDrillerStateDataWriter DataWriter;
        typedef AutoDrillerStateDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DDS_Double   hookloadActual ;
        DDS_Double   ropActual ;
        DDS_Double   wobActual ;
        DDS_Double   differentialPressureActual ;
        DDS_Double   torqueActual ;
        DDS_Double   ropLimit ;
        DDS_Double   wobLimit ;
        DDS_Double   differentialPressureLimit ;
        DDS_Double   torqueLimit ;
        DDS_Boolean   ropMode ;
        DDS_Boolean   wobMode ;
        DDS_Boolean   differentialPressureMode ;
        DDS_Boolean   torqueMode ;
        DDS_Double   ropTarget ;
        DDS_Double   wobTarget ;
        DDS_Double   differentialPressureTarget ;
        DDS_Double   torqueTarget ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* AutoDrillerState_get_typecode(void); /* Type code */

    DDS_SEQUENCE(AutoDrillerStateSeq, AutoDrillerState);

    NDDSUSERDllExport
    RTIBool AutoDrillerState_initialize(
        AutoDrillerState* self);

    NDDSUSERDllExport
    RTIBool AutoDrillerState_initialize_ex(
        AutoDrillerState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool AutoDrillerState_initialize_w_params(
        AutoDrillerState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void AutoDrillerState_finalize(
        AutoDrillerState* self);

    NDDSUSERDllExport
    void AutoDrillerState_finalize_ex(
        AutoDrillerState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void AutoDrillerState_finalize_w_params(
        AutoDrillerState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void AutoDrillerState_finalize_optional_members(
        AutoDrillerState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool AutoDrillerState_copy(
        AutoDrillerState* dst,
        const AutoDrillerState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace Simulation  */

#endif /* drill_simulation */

