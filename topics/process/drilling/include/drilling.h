

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drilling_1428077360_h
#define drilling_1428077360_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace Hoisting {
    static const char DRILLING_REQUEST[] = "DrillingRequest"; 

    extern const char *DrillingRequestTYPENAME;

    struct DrillingRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class DrillingRequestTypeSupport;
    class DrillingRequestDataWriter;
    class DrillingRequestDataReader;
    #endif

    class DrillingRequest 
    {
      public:
        typedef struct DrillingRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef DrillingRequestTypeSupport TypeSupport;
        typedef DrillingRequestDataWriter DataWriter;
        typedef DrillingRequestDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DataTypes::Uuid   objectiveId ;
        DataTypes::Priority   priority ;
        DataTypes::Time   timeNeeded ;
        DataTypes::Time   duration ;
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

    NDDSUSERDllExport DDS_TypeCode* DrillingRequest_get_typecode(void); /* Type code */

    DDS_SEQUENCE(DrillingRequestSeq, DrillingRequest);                                        

    NDDSUSERDllExport
    RTIBool DrillingRequest_initialize(
        DrillingRequest* self);

    NDDSUSERDllExport
    RTIBool DrillingRequest_initialize_ex(
        DrillingRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DrillingRequest_initialize_w_params(
        DrillingRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void DrillingRequest_finalize(
        DrillingRequest* self);

    NDDSUSERDllExport
    void DrillingRequest_finalize_ex(
        DrillingRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DrillingRequest_finalize_w_params(
        DrillingRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DrillingRequest_finalize_optional_members(
        DrillingRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DrillingRequest_copy(
        DrillingRequest* dst,
        const DrillingRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const char DRILLING_OBJECTIVE[] = "DrillingObjective"; 

    extern const char *DrillingObjectiveTYPENAME;

    struct DrillingObjectiveSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class DrillingObjectiveTypeSupport;
    class DrillingObjectiveDataWriter;
    class DrillingObjectiveDataReader;
    #endif

    class DrillingObjective 
    {
      public:
        typedef struct DrillingObjectiveSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef DrillingObjectiveTypeSupport TypeSupport;
        typedef DrillingObjectiveDataWriter DataWriter;
        typedef DrillingObjectiveDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DataTypes::Uuid   objectiveId ;
        DataTypes::Time   estimatedDuration ;
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

    NDDSUSERDllExport DDS_TypeCode* DrillingObjective_get_typecode(void); /* Type code */

    DDS_SEQUENCE(DrillingObjectiveSeq, DrillingObjective);                                        

    NDDSUSERDllExport
    RTIBool DrillingObjective_initialize(
        DrillingObjective* self);

    NDDSUSERDllExport
    RTIBool DrillingObjective_initialize_ex(
        DrillingObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DrillingObjective_initialize_w_params(
        DrillingObjective* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void DrillingObjective_finalize(
        DrillingObjective* self);

    NDDSUSERDllExport
    void DrillingObjective_finalize_ex(
        DrillingObjective* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DrillingObjective_finalize_w_params(
        DrillingObjective* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DrillingObjective_finalize_optional_members(
        DrillingObjective* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DrillingObjective_copy(
        DrillingObjective* dst,
        const DrillingObjective* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const char DRILLING_STATE[] = "DrillingState"; 

    extern const char *DrillingStateTYPENAME;

    struct DrillingStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class DrillingStateTypeSupport;
    class DrillingStateDataWriter;
    class DrillingStateDataReader;
    #endif

    class DrillingState 
    {
      public:
        typedef struct DrillingStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef DrillingStateTypeSupport TypeSupport;
        typedef DrillingStateDataWriter DataWriter;
        typedef DrillingStateDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DataTypes::Uuid   objectiveId ;
        DataTypes::Time   timestamp ;
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
        DDS_Boolean   bitOnBottom ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* DrillingState_get_typecode(void); /* Type code */

    DDS_SEQUENCE(DrillingStateSeq, DrillingState);                                        

    NDDSUSERDllExport
    RTIBool DrillingState_initialize(
        DrillingState* self);

    NDDSUSERDllExport
    RTIBool DrillingState_initialize_ex(
        DrillingState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DrillingState_initialize_w_params(
        DrillingState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void DrillingState_finalize(
        DrillingState* self);

    NDDSUSERDllExport
    void DrillingState_finalize_ex(
        DrillingState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DrillingState_finalize_w_params(
        DrillingState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DrillingState_finalize_optional_members(
        DrillingState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DrillingState_copy(
        DrillingState* dst,
        const DrillingState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace Hoisting  */

#endif /* drilling */

