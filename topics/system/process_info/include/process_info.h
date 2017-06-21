

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from process_info.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef process_info_1743012901_h
#define process_info_1743012901_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace ProcessMonitor {
    static const char PROCESS_INFO[] = "ProcessInfo"; 

    extern const char *ProcessInfoTYPENAME;

    struct ProcessInfoSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ProcessInfoTypeSupport;
    class ProcessInfoDataWriter;
    class ProcessInfoDataReader;
    #endif

    class ProcessInfo 
    {
      public:
        typedef struct ProcessInfoSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ProcessInfoTypeSupport TypeSupport;
        typedef ProcessInfoDataWriter DataWriter;
        typedef ProcessInfoDataReader DataReader;
        #endif

        DDS_Char   processName [128];
        DDS_Long   pid ;
        DDS_LongLong   totalVirtualMemory ;
        DDS_LongLong   usedVirtualMemory ;
        DDS_LongLong   totalPhysicalMemory ;
        DDS_LongLong   usedPhysicalMemory ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* ProcessInfo_get_typecode(void); /* Type code */

    DDS_SEQUENCE(ProcessInfoSeq, ProcessInfo);                                        

    NDDSUSERDllExport
    RTIBool ProcessInfo_initialize(
        ProcessInfo* self);

    NDDSUSERDllExport
    RTIBool ProcessInfo_initialize_ex(
        ProcessInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ProcessInfo_initialize_w_params(
        ProcessInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void ProcessInfo_finalize(
        ProcessInfo* self);

    NDDSUSERDllExport
    void ProcessInfo_finalize_ex(
        ProcessInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ProcessInfo_finalize_w_params(
        ProcessInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ProcessInfo_finalize_optional_members(
        ProcessInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ProcessInfo_copy(
        ProcessInfo* dst,
        const ProcessInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace ProcessMonitor  */

#endif /* process_info */

