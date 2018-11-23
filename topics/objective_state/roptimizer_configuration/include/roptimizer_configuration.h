

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef roptimizer_configuration_360071551_h
#define roptimizer_configuration_360071551_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace Shell {
    namespace Hmi {
        namespace RoptimizerConfiguration {
            static const char ROPTIMIZER_CONFIGURATION_REQUEST[] = "RoptimizerConfigurationRequest"; 

            extern const char *RoptimizerConfigurationRequestTYPENAME;

            struct RoptimizerConfigurationRequestSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class RoptimizerConfigurationRequestTypeSupport;
            class RoptimizerConfigurationRequestDataWriter;
            class RoptimizerConfigurationRequestDataReader;
            #endif

            class RoptimizerConfigurationRequest 
            {
              public:
                typedef struct RoptimizerConfigurationRequestSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RoptimizerConfigurationRequestTypeSupport TypeSupport;
                typedef RoptimizerConfigurationRequestDataWriter DataWriter;
                typedef RoptimizerConfigurationRequestDataReader DataReader;
                #endif

                DDS_Long   steadyStateWindow ;
                DDS_Long   steadyStateMin ;
                DDS_Long   rpmStepSize ;
                DDS_Long   ropStepSize ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RoptimizerConfigurationRequest_get_typecode(void); /* Type code */

            DDS_SEQUENCE(RoptimizerConfigurationRequestSeq, RoptimizerConfigurationRequest);

            NDDSUSERDllExport
            RTIBool RoptimizerConfigurationRequest_initialize(
                RoptimizerConfigurationRequest* self);

            NDDSUSERDllExport
            RTIBool RoptimizerConfigurationRequest_initialize_ex(
                RoptimizerConfigurationRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RoptimizerConfigurationRequest_initialize_w_params(
                RoptimizerConfigurationRequest* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RoptimizerConfigurationRequest_finalize(
                RoptimizerConfigurationRequest* self);

            NDDSUSERDllExport
            void RoptimizerConfigurationRequest_finalize_ex(
                RoptimizerConfigurationRequest* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RoptimizerConfigurationRequest_finalize_w_params(
                RoptimizerConfigurationRequest* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RoptimizerConfigurationRequest_finalize_optional_members(
                RoptimizerConfigurationRequest* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RoptimizerConfigurationRequest_copy(
                RoptimizerConfigurationRequest* dst,
                const RoptimizerConfigurationRequest* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            static const char ROPTIMIZER_STEADY_STATE[] = "RoptimizerSteadyState"; 

            extern const char *RoptimizerSteadyStateTYPENAME;

            struct RoptimizerSteadyStateSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class RoptimizerSteadyStateTypeSupport;
            class RoptimizerSteadyStateDataWriter;
            class RoptimizerSteadyStateDataReader;
            #endif

            class RoptimizerSteadyState 
            {
              public:
                typedef struct RoptimizerSteadyStateSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RoptimizerSteadyStateTypeSupport TypeSupport;
                typedef RoptimizerSteadyStateDataWriter DataWriter;
                typedef RoptimizerSteadyStateDataReader DataReader;
                #endif

                DDS_Double   rpmState ;
                DDS_Double   ropState ;
                DDS_Double   wobState ;
                DDS_Double   torqueState ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RoptimizerSteadyState_get_typecode(void); /* Type code */

            DDS_SEQUENCE(RoptimizerSteadyStateSeq, RoptimizerSteadyState);

            NDDSUSERDllExport
            RTIBool RoptimizerSteadyState_initialize(
                RoptimizerSteadyState* self);

            NDDSUSERDllExport
            RTIBool RoptimizerSteadyState_initialize_ex(
                RoptimizerSteadyState* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RoptimizerSteadyState_initialize_w_params(
                RoptimizerSteadyState* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RoptimizerSteadyState_finalize(
                RoptimizerSteadyState* self);

            NDDSUSERDllExport
            void RoptimizerSteadyState_finalize_ex(
                RoptimizerSteadyState* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RoptimizerSteadyState_finalize_w_params(
                RoptimizerSteadyState* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RoptimizerSteadyState_finalize_optional_members(
                RoptimizerSteadyState* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RoptimizerSteadyState_copy(
                RoptimizerSteadyState* dst,
                const RoptimizerSteadyState* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace RoptimizerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

#endif /* roptimizer_configuration */

