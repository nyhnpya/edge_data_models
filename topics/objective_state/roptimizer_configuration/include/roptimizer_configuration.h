

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef roptimizer_configuration_360071588_h
#define roptimizer_configuration_360071588_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace Shell {
    namespace Hmi {
        static const char ROPTIMIZER_CONFIGURATION[] = "RoptimizerConfiguration"; 

        extern const char *RoptimizerConfigurationTYPENAME;

        struct RoptimizerConfigurationSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class RoptimizerConfigurationTypeSupport;
        class RoptimizerConfigurationDataWriter;
        class RoptimizerConfigurationDataReader;
        #endif

        class RoptimizerConfiguration 
        {
          public:
            typedef struct RoptimizerConfigurationSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef RoptimizerConfigurationTypeSupport TypeSupport;
            typedef RoptimizerConfigurationDataWriter DataWriter;
            typedef RoptimizerConfigurationDataReader DataReader;
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

        NDDSUSERDllExport DDS_TypeCode* RoptimizerConfiguration_get_typecode(void); /* Type code */

        DDS_SEQUENCE(RoptimizerConfigurationSeq, RoptimizerConfiguration);

        NDDSUSERDllExport
        RTIBool RoptimizerConfiguration_initialize(
            RoptimizerConfiguration* self);

        NDDSUSERDllExport
        RTIBool RoptimizerConfiguration_initialize_ex(
            RoptimizerConfiguration* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool RoptimizerConfiguration_initialize_w_params(
            RoptimizerConfiguration* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void RoptimizerConfiguration_finalize(
            RoptimizerConfiguration* self);

        NDDSUSERDllExport
        void RoptimizerConfiguration_finalize_ex(
            RoptimizerConfiguration* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void RoptimizerConfiguration_finalize_w_params(
            RoptimizerConfiguration* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void RoptimizerConfiguration_finalize_optional_members(
            RoptimizerConfiguration* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool RoptimizerConfiguration_copy(
            RoptimizerConfiguration* dst,
            const RoptimizerConfiguration* src);

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

            DDS_Boolean   rpmSteadyState ;
            DDS_Boolean   ropSteadyState ;
            DDS_Boolean   wobSteadyState ;
            DDS_Boolean   torqueSteadyState ;
            DDS_Double   bitWear ;
            DDS_Double   mse ;
            DDS_Double   power ;

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
    } /* namespace Hmi  */
} /* namespace Shell  */

#endif /* roptimizer_configuration */

