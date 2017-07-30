

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from survey.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef survey_675098841_h
#define survey_675098841_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace DownholeFunctions {
    static const char SURVEY_REQUEST[] = "SurveyRequest"; 

    extern const char *SurveyRequestTYPENAME;

    struct SurveyRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class SurveyRequestTypeSupport;
    class SurveyRequestDataWriter;
    class SurveyRequestDataReader;
    #endif

    class SurveyRequest 
    {
      public:
        typedef struct SurveyRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef SurveyRequestTypeSupport TypeSupport;
        typedef SurveyRequestDataWriter DataWriter;
        typedef SurveyRequestDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DataTypes::Uuid   objectiveId ;
        DataTypes::Priority   priority ;
        DataTypes::Time   timeNeeded ;
        DataTypes::Time   estimatedDuration ;
        DataTypes::SurveyQuality   surveyQuality ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* SurveyRequest_get_typecode(void); /* Type code */

    DDS_SEQUENCE(SurveyRequestSeq, SurveyRequest);                                        

    NDDSUSERDllExport
    RTIBool SurveyRequest_initialize(
        SurveyRequest* self);

    NDDSUSERDllExport
    RTIBool SurveyRequest_initialize_ex(
        SurveyRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SurveyRequest_initialize_w_params(
        SurveyRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void SurveyRequest_finalize(
        SurveyRequest* self);

    NDDSUSERDllExport
    void SurveyRequest_finalize_ex(
        SurveyRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SurveyRequest_finalize_w_params(
        SurveyRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SurveyRequest_finalize_optional_members(
        SurveyRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SurveyRequest_copy(
        SurveyRequest* dst,
        const SurveyRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const char SURVEY_OBJECTIVE[] = "SurveyObjective"; 

    extern const char *SurveyObjectiveTYPENAME;

    struct SurveyObjectiveSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class SurveyObjectiveTypeSupport;
    class SurveyObjectiveDataWriter;
    class SurveyObjectiveDataReader;
    #endif

    class SurveyObjective 
    {
      public:
        typedef struct SurveyObjectiveSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef SurveyObjectiveTypeSupport TypeSupport;
        typedef SurveyObjectiveDataWriter DataWriter;
        typedef SurveyObjectiveDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DataTypes::Uuid   objectiveId ;
        DataTypes::Time   estimatedDuration ;
        DataTypes::SurveyQuality   requestedSurveyQuality ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* SurveyObjective_get_typecode(void); /* Type code */

    DDS_SEQUENCE(SurveyObjectiveSeq, SurveyObjective);                                        

    NDDSUSERDllExport
    RTIBool SurveyObjective_initialize(
        SurveyObjective* self);

    NDDSUSERDllExport
    RTIBool SurveyObjective_initialize_ex(
        SurveyObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SurveyObjective_initialize_w_params(
        SurveyObjective* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void SurveyObjective_finalize(
        SurveyObjective* self);

    NDDSUSERDllExport
    void SurveyObjective_finalize_ex(
        SurveyObjective* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SurveyObjective_finalize_w_params(
        SurveyObjective* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SurveyObjective_finalize_optional_members(
        SurveyObjective* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SurveyObjective_copy(
        SurveyObjective* dst,
        const SurveyObjective* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const char SURVEY_STATE[] = "SurveyState"; 

    extern const char *SurveyStateTYPENAME;

    struct SurveyStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class SurveyStateTypeSupport;
    class SurveyStateDataWriter;
    class SurveyStateDataReader;
    #endif

    class SurveyState 
    {
      public:
        typedef struct SurveyStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef SurveyStateTypeSupport TypeSupport;
        typedef SurveyStateDataWriter DataWriter;
        typedef SurveyStateDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
        DataTypes::Uuid   objectiveId ;
        DataTypes::Time   timestamp ;
        DataTypes::Status   status ;
        DataTypes::SurveyQuality   acutalSurveyQuality ;
        DDS_Double   measuredDepth ;
        DDS_Double   inclination ;
        DDS_Double   azimuth ;
        DDS_Double   totalVerticalDepth ;
        DDS_Double   dogLeg ;
        DDS_Double   verticalSection ;
        DDS_Double   eastWest ;
        DDS_Double   northSouth ;
        DDS_Double   courseLength ;
        DDS_Double   ca ;
        DDS_Double   cd ;
        DDS_Double   cl ;
        DDS_Double   buildRate ;
        DDS_Double   turnRate ;
        DDS_Double   topOfTarget ;
        DDS_Double   bottomOfTarget ;
        DDS_Double   dip ;
        DDS_Double   fault ;
        DDS_Double   surveyCost ;
        DataTypes::SurveyQuality   requestedSurveyQuality ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* SurveyState_get_typecode(void); /* Type code */

    DDS_SEQUENCE(SurveyStateSeq, SurveyState);                                        

    NDDSUSERDllExport
    RTIBool SurveyState_initialize(
        SurveyState* self);

    NDDSUSERDllExport
    RTIBool SurveyState_initialize_ex(
        SurveyState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SurveyState_initialize_w_params(
        SurveyState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void SurveyState_finalize(
        SurveyState* self);

    NDDSUSERDllExport
    void SurveyState_finalize_ex(
        SurveyState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SurveyState_finalize_w_params(
        SurveyState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SurveyState_finalize_optional_members(
        SurveyState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SurveyState_copy(
        SurveyState* dst,
        const SurveyState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace DownholeFunctions  */

#endif /* survey */

