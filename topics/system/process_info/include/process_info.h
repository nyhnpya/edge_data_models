

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from process_info.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef process_info_1743013001_h
#define process_info_1743013001_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace process {
    namespace maintanence {
        static const char PROCESS_INFO[] = "ProcessInfo"; 

        extern const char *ProcessStateTYPENAME;

        struct ProcessStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ProcessStateTypeSupport;
        class ProcessStateDataWriter;
        class ProcessStateDataReader;
        #endif

        class ProcessState 
        {
          public:
            typedef struct ProcessStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ProcessStateTypeSupport TypeSupport;
            typedef ProcessStateDataWriter DataWriter;
            typedef ProcessStateDataReader DataReader;
            #endif

            DDS_Char   processName [128];
            DDS_Long   pid ;
            DDS_LongLong   upTime ;
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

        NDDSUSERDllExport DDS_TypeCode* ProcessState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(ProcessStateSeq, ProcessState);

        NDDSUSERDllExport
        RTIBool ProcessState_initialize(
            ProcessState* self);

        NDDSUSERDllExport
        RTIBool ProcessState_initialize_ex(
            ProcessState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ProcessState_initialize_w_params(
            ProcessState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void ProcessState_finalize(
            ProcessState* self);

        NDDSUSERDllExport
        void ProcessState_finalize_ex(
            ProcessState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ProcessState_finalize_w_params(
            ProcessState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ProcessState_finalize_optional_members(
            ProcessState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ProcessState_copy(
            ProcessState* dst,
            const ProcessState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace maintanence  */
} /* namespace process  */

#endif /* process_info */

