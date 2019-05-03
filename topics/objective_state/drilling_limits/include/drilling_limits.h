

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_limits.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drilling_limits_429958659_h
#define drilling_limits_429958659_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace process {
    namespace plan {
        static const char DRILLING_LIMITS_REQUEST[] = "DrillingLimitsRequest"; 

        extern const char *DrillingLimitsRequestTYPENAME;

        struct DrillingLimitsRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillingLimitsRequestTypeSupport;
        class DrillingLimitsRequestDataWriter;
        class DrillingLimitsRequestDataReader;
        #endif

        class DrillingLimitsRequest 
        {
          public:
            typedef struct DrillingLimitsRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillingLimitsRequestTypeSupport TypeSupport;
            typedef DrillingLimitsRequestDataWriter DataWriter;
            typedef DrillingLimitsRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
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
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillingLimitsRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillingLimitsRequestSeq, DrillingLimitsRequest);

        NDDSUSERDllExport
        RTIBool DrillingLimitsRequest_initialize(
            DrillingLimitsRequest* self);

        NDDSUSERDllExport
        RTIBool DrillingLimitsRequest_initialize_ex(
            DrillingLimitsRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillingLimitsRequest_initialize_w_params(
            DrillingLimitsRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillingLimitsRequest_finalize(
            DrillingLimitsRequest* self);

        NDDSUSERDllExport
        void DrillingLimitsRequest_finalize_ex(
            DrillingLimitsRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillingLimitsRequest_finalize_w_params(
            DrillingLimitsRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillingLimitsRequest_finalize_optional_members(
            DrillingLimitsRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillingLimitsRequest_copy(
            DrillingLimitsRequest* dst,
            const DrillingLimitsRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char DRILLING_LIMITS[] = "DrillingLimitsState"; 

        extern const char *DrillingLimitsStateTYPENAME;

        struct DrillingLimitsStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillingLimitsStateTypeSupport;
        class DrillingLimitsStateDataWriter;
        class DrillingLimitsStateDataReader;
        #endif

        class DrillingLimitsState 
        {
          public:
            typedef struct DrillingLimitsStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillingLimitsStateTypeSupport TypeSupport;
            typedef DrillingLimitsStateDataWriter DataWriter;
            typedef DrillingLimitsStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
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
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillingLimitsState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillingLimitsStateSeq, DrillingLimitsState);

        NDDSUSERDllExport
        RTIBool DrillingLimitsState_initialize(
            DrillingLimitsState* self);

        NDDSUSERDllExport
        RTIBool DrillingLimitsState_initialize_ex(
            DrillingLimitsState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillingLimitsState_initialize_w_params(
            DrillingLimitsState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillingLimitsState_finalize(
            DrillingLimitsState* self);

        NDDSUSERDllExport
        void DrillingLimitsState_finalize_ex(
            DrillingLimitsState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillingLimitsState_finalize_w_params(
            DrillingLimitsState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillingLimitsState_finalize_optional_members(
            DrillingLimitsState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillingLimitsState_copy(
            DrillingLimitsState* dst,
            const DrillingLimitsState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace plan  */
} /* namespace process  */

#endif /* drilling_limits */

