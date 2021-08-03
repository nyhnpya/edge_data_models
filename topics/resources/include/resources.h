

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from resources.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef resources_995993323_h
#define resources_995993323_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace sys {
    namespace process {
        static const char RESOURCES[] = "Resources"; 

        extern const char *ResourcesTYPENAME;

        struct ResourcesSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ResourcesTypeSupport;
        class ResourcesDataWriter;
        class ResourcesDataReader;
        #endif
        class Resources 
        {
          public:
            typedef struct ResourcesSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ResourcesTypeSupport TypeSupport;
            typedef ResourcesDataWriter DataWriter;
            typedef ResourcesDataReader DataReader;
            #endif

            DataTypes::Time   timestamp ;
            DDS_Char *   processName ;
            DDS_Long   pid ;
            DDS_Double   upTime ;
            DDS_Double   cpuPercent ;
            DDS_Double   minCpuPercent ;
            DDS_Double   maxCpuPercent ;
            DDS_Double   vmPeak ;
            DDS_Double   vmSize ;
            DDS_Double   vmSwap ;
            DDS_Double   vmMaxSwap ;
            DDS_Long   numThreads ;
            DDS_Long   minNumThreads ;
            DDS_Long   maxNumThreads ;
            DDS_Char *   osName ;
            DDS_Char *   appVersion ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * Resources_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Resources_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Resources_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Resources_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ResourcesSeq, Resources);

        NDDSUSERDllExport
        RTIBool Resources_initialize(
            Resources* self);

        NDDSUSERDllExport
        RTIBool Resources_initialize_ex(
            Resources* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Resources_initialize_w_params(
            Resources* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Resources_finalize_w_return(
            Resources* self);

        NDDSUSERDllExport
        void Resources_finalize(
            Resources* self);

        NDDSUSERDllExport
        void Resources_finalize_ex(
            Resources* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Resources_finalize_w_params(
            Resources* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Resources_finalize_optional_members(
            Resources* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Resources_copy(
            Resources* dst,
            const Resources* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace sys  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<sys::process::Resources> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* resources */

