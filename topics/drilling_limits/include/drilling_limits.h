

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_limits.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drilling_limits_429958456_h
#define drilling_limits_429958456_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace process {
    namespace plan {
        static const char DRILLING_LIMITS[] = "DrillingLimits"; 

        extern const char *DrillingLimitsTYPENAME;

        struct DrillingLimitsSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillingLimitsTypeSupport;
        class DrillingLimitsDataWriter;
        class DrillingLimitsDataReader;
        #endif
        class DrillingLimits 
        {
          public:
            typedef struct DrillingLimitsSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillingLimitsTypeSupport TypeSupport;
            typedef DrillingLimitsDataWriter DataWriter;
            typedef DrillingLimitsDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Double   startDepth ;
            DDS_Double   endDepth ;
            DDS_Double   ropMin ;
            DDS_Double   ropMax ;
            DDS_Double   wobMin ;
            DDS_Double   wobMax ;
            DDS_Double   diffPMin ;
            DDS_Double   diffPMax ;
            DDS_Double   torqueMin ;
            DDS_Double   torqueMax ;
            DDS_Double   rotateMin ;
            DDS_Double   rotateMax ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* DrillingLimits_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *DrillingLimits_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillingLimits_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *DrillingLimits_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(DrillingLimitsSeq, DrillingLimits);

        NDDSUSERDllExport
        RTIBool DrillingLimits_initialize(
            DrillingLimits* self);

        NDDSUSERDllExport
        RTIBool DrillingLimits_initialize_ex(
            DrillingLimits* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillingLimits_initialize_w_params(
            DrillingLimits* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool DrillingLimits_finalize_w_return(
            DrillingLimits* self);

        NDDSUSERDllExport
        void DrillingLimits_finalize(
            DrillingLimits* self);

        NDDSUSERDllExport
        void DrillingLimits_finalize_ex(
            DrillingLimits* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillingLimits_finalize_w_params(
            DrillingLimits* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillingLimits_finalize_optional_members(
            DrillingLimits* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillingLimits_copy(
            DrillingLimits* dst,
            const DrillingLimits* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace plan  */
} /* namespace process  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<process::plan::DrillingLimits> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* drilling_limits */
