

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_rotate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef plc_rotate_1508020914_h
#define plc_rotate_1508020914_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace plc {
    namespace process {
        static const char ROTATE_REQUEST_TOPIC[] = "RotateRequestTopic"; 

        extern const char *RotateRequestTYPENAME;

        struct RotateRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateRequestTypeSupport;
        class RotateRequestDataWriter;
        class RotateRequestDataReader;
        #endif

        class RotateRequest 
        {
          public:
            typedef struct RotateRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateRequestTypeSupport TypeSupport;
            typedef RotateRequestDataWriter DataWriter;
            typedef RotateRequestDataReader DataReader;
            #endif

            DDS_Double   targetRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* RotateRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(RotateRequestSeq, RotateRequest);

        NDDSUSERDllExport
        RTIBool RotateRequest_initialize(
            RotateRequest* self);

        NDDSUSERDllExport
        RTIBool RotateRequest_initialize_ex(
            RotateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateRequest_initialize_w_params(
            RotateRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void RotateRequest_finalize(
            RotateRequest* self);

        NDDSUSERDllExport
        void RotateRequest_finalize_ex(
            RotateRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateRequest_finalize_w_params(
            RotateRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateRequest_finalize_optional_members(
            RotateRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateRequest_copy(
            RotateRequest* dst,
            const RotateRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char ROTATE_STATE_TOPIC[] = "RotateStateTopic"; 

        extern const char *RotateStateTYPENAME;

        struct RotateStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RotateStateTypeSupport;
        class RotateStateDataWriter;
        class RotateStateDataReader;
        #endif

        class RotateState 
        {
          public:
            typedef struct RotateStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RotateStateTypeSupport TypeSupport;
            typedef RotateStateDataWriter DataWriter;
            typedef RotateStateDataReader DataReader;
            #endif

            DDS_Long   status ;
            DDS_Double   actualRate ;
            DDS_Double   minRate ;
            DDS_Double   maxRate ;
            DDS_Double   targetRate ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* RotateState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(RotateStateSeq, RotateState);

        NDDSUSERDllExport
        RTIBool RotateState_initialize(
            RotateState* self);

        NDDSUSERDllExport
        RTIBool RotateState_initialize_ex(
            RotateState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RotateState_initialize_w_params(
            RotateState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void RotateState_finalize(
            RotateState* self);

        NDDSUSERDllExport
        void RotateState_finalize_ex(
            RotateState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RotateState_finalize_w_params(
            RotateState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RotateState_finalize_optional_members(
            RotateState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RotateState_copy(
            RotateState* dst,
            const RotateState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace plc  */

#endif /* plc_rotate */

