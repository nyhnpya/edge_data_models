

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from base_data_types.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef base_data_types_308715478_h
#define base_data_types_308715478_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace DataTypes {
    typedef    DDS_Char *   Uuid ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* Uuid_get_typecode(void); /* Type code */

    DDS_SEQUENCE(UuidSeq, Uuid);

    NDDSUSERDllExport
    RTIBool Uuid_initialize(
        Uuid* self);

    NDDSUSERDllExport
    RTIBool Uuid_initialize_ex(
        Uuid* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Uuid_initialize_w_params(
        Uuid* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void Uuid_finalize(
        Uuid* self);

    NDDSUSERDllExport
    void Uuid_finalize_ex(
        Uuid* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Uuid_finalize_w_params(
        Uuid* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Uuid_finalize_optional_members(
        Uuid* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Uuid_copy(
        Uuid* dst,
        const Uuid* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *TimeTYPENAME;

    struct TimeSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TimeTypeSupport;
    class TimeDataWriter;
    class TimeDataReader;
    #endif

    class Time 
    {
      public:
        typedef struct TimeSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TimeTypeSupport TypeSupport;
        typedef TimeDataWriter DataWriter;
        typedef TimeDataReader DataReader;
        #endif

        DDS_Long   sec ;
        DDS_UnsignedLong   nanosec ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* Time_get_typecode(void); /* Type code */

    DDS_SEQUENCE(TimeSeq, Time);

    NDDSUSERDllExport
    RTIBool Time_initialize(
        Time* self);

    NDDSUSERDllExport
    RTIBool Time_initialize_ex(
        Time* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Time_initialize_w_params(
        Time* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void Time_finalize(
        Time* self);

    NDDSUSERDllExport
    void Time_finalize_ex(
        Time* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Time_finalize_w_params(
        Time* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Time_finalize_optional_members(
        Time* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Time_copy(
        Time* dst,
        const Time* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum Priority
    {
        Normal ,      
        High ,      
        Critical      
    } Priority;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* Priority_get_typecode(void); /* Type code */

    DDS_SEQUENCE(PrioritySeq, Priority);

    NDDSUSERDllExport
    RTIBool Priority_initialize(
        Priority* self);

    NDDSUSERDllExport
    RTIBool Priority_initialize_ex(
        Priority* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Priority_initialize_w_params(
        Priority* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void Priority_finalize(
        Priority* self);

    NDDSUSERDllExport
    void Priority_finalize_ex(
        Priority* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Priority_finalize_w_params(
        Priority* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Priority_finalize_optional_members(
        Priority* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Priority_copy(
        Priority* dst,
        const Priority* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum SurveyQuality
    {
        Definitive ,      
        Inconclusive      
    } SurveyQuality;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* SurveyQuality_get_typecode(void); /* Type code */

    DDS_SEQUENCE(SurveyQualitySeq, SurveyQuality);

    NDDSUSERDllExport
    RTIBool SurveyQuality_initialize(
        SurveyQuality* self);

    NDDSUSERDllExport
    RTIBool SurveyQuality_initialize_ex(
        SurveyQuality* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SurveyQuality_initialize_w_params(
        SurveyQuality* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void SurveyQuality_finalize(
        SurveyQuality* self);

    NDDSUSERDllExport
    void SurveyQuality_finalize_ex(
        SurveyQuality* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SurveyQuality_finalize_w_params(
        SurveyQuality* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SurveyQuality_finalize_optional_members(
        SurveyQuality* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SurveyQuality_copy(
        SurveyQuality* dst,
        const SurveyQuality* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum Status
    {
        Fault ,      
        Good      
    } Status;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* Status_get_typecode(void); /* Type code */

    DDS_SEQUENCE(StatusSeq, Status);

    NDDSUSERDllExport
    RTIBool Status_initialize(
        Status* self);

    NDDSUSERDllExport
    RTIBool Status_initialize_ex(
        Status* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Status_initialize_w_params(
        Status* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void Status_finalize(
        Status* self);

    NDDSUSERDllExport
    void Status_finalize_ex(
        Status* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Status_finalize_w_params(
        Status* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Status_finalize_optional_members(
        Status* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Status_copy(
        Status* dst,
        const Status* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PipeType
    {
        DrillCollar ,      
        HeavyWeight ,      
        DrillPipe      
    } PipeType;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* PipeType_get_typecode(void); /* Type code */

    DDS_SEQUENCE(PipeTypeSeq, PipeType);

    NDDSUSERDllExport
    RTIBool PipeType_initialize(
        PipeType* self);

    NDDSUSERDllExport
    RTIBool PipeType_initialize_ex(
        PipeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PipeType_initialize_w_params(
        PipeType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void PipeType_finalize(
        PipeType* self);

    NDDSUSERDllExport
    void PipeType_finalize_ex(
        PipeType* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PipeType_finalize_w_params(
        PipeType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PipeType_finalize_optional_members(
        PipeType* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PipeType_copy(
        PipeType* dst,
        const PipeType* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum Objective
    {
        None ,      
        Casing ,      
        CleaningHole ,      
        Drilling ,      
        AutoReaming ,      
        Tripping      
    } Objective;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* Objective_get_typecode(void); /* Type code */

    DDS_SEQUENCE(ObjectiveSeq, Objective);

    NDDSUSERDllExport
    RTIBool Objective_initialize(
        Objective* self);

    NDDSUSERDllExport
    RTIBool Objective_initialize_ex(
        Objective* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Objective_initialize_w_params(
        Objective* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void Objective_finalize(
        Objective* self);

    NDDSUSERDllExport
    void Objective_finalize_ex(
        Objective* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Objective_finalize_w_params(
        Objective* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Objective_finalize_optional_members(
        Objective* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Objective_copy(
        Objective* dst,
        const Objective* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace DataTypes  */

#endif /* base_data_types */

