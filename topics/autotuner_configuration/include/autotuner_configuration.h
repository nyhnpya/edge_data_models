

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autotuner_configuration_985793073_h
#define autotuner_configuration_985793073_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace Shell {
    namespace Hmi {
        namespace AutoTunerConfiguration {
            static const char MODEL_STATE_REQUEST[] = "ModelStateRequest"; 

            extern const char *ModelStateRequestTYPENAME;

            struct ModelStateRequestSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class ModelStateRequestTypeSupport;
            class ModelStateRequestDataWriter;
            class ModelStateRequestDataReader;
            #endif
            class ModelStateRequest 
            {
              public:
                typedef struct ModelStateRequestSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ModelStateRequestTypeSupport TypeSupport;
                typedef ModelStateRequestDataWriter DataWriter;
                typedef ModelStateRequestDataReader DataReader;
                #endif

                DDS_Boolean   modelReset ;
                DDS_Double   pipeInnerDiameter ;
                DDS_Double   pipeOuterDiameter ;
                DDS_Double   slopeFilter ;
                DDS_Double   tauMax ;
                DDS_Double   tauMin ;
                DDS_Double   tauMultiplier ;
                DDS_Double   maxDeviation ;
                DDS_Double   minInterval ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport DDS_TypeCode* ModelStateRequest_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *ModelStateRequest_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *ModelStateRequest_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *ModelStateRequest_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(ModelStateRequestSeq, ModelStateRequest);

            NDDSUSERDllExport
            RTIBool ModelStateRequest_initialize(
                ModelStateRequest* self);

            NDDSUSERDllExport
            RTIBool ModelStateRequest_initialize_ex(
                ModelStateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ModelStateRequest_initialize_w_params(
                ModelStateRequest* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool ModelStateRequest_finalize_w_return(
                ModelStateRequest* self);

            NDDSUSERDllExport
            void ModelStateRequest_finalize(
                ModelStateRequest* self);

            NDDSUSERDllExport
            void ModelStateRequest_finalize_ex(
                ModelStateRequest* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ModelStateRequest_finalize_w_params(
                ModelStateRequest* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ModelStateRequest_finalize_optional_members(
                ModelStateRequest* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ModelStateRequest_copy(
                ModelStateRequest* dst,
                const ModelStateRequest* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            static const char MODEL_STATE[] = "ModelState"; 

            extern const char *ModelStateTYPENAME;

            struct ModelStateSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class ModelStateTypeSupport;
            class ModelStateDataWriter;
            class ModelStateDataReader;
            #endif
            class ModelState 
            {
              public:
                typedef struct ModelStateSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ModelStateTypeSupport TypeSupport;
                typedef ModelStateDataWriter DataWriter;
                typedef ModelStateDataReader DataReader;
                #endif

                DDS_Double   pipeInnerDiameter ;
                DDS_Double   pipeOuterDiameter ;
                DDS_Double   slopeFilter ;
                DDS_Double   tauMax ;
                DDS_Double   tauMin ;
                DDS_Double   tauMultiplier ;
                DDS_Double   maxDeviation ;
                DDS_Double   minInterval ;
                DDS_Boolean   tunerEnabled ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport DDS_TypeCode* ModelState_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *ModelState_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *ModelState_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *ModelState_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(ModelStateSeq, ModelState);

            NDDSUSERDllExport
            RTIBool ModelState_initialize(
                ModelState* self);

            NDDSUSERDllExport
            RTIBool ModelState_initialize_ex(
                ModelState* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ModelState_initialize_w_params(
                ModelState* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool ModelState_finalize_w_return(
                ModelState* self);

            NDDSUSERDllExport
            void ModelState_finalize(
                ModelState* self);

            NDDSUSERDllExport
            void ModelState_finalize_ex(
                ModelState* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ModelState_finalize_w_params(
                ModelState* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ModelState_finalize_optional_members(
                ModelState* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ModelState_copy(
                ModelState* dst,
                const ModelState* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            static const char AUTOTUNER_TUNING_CONFIGURATION[] = "AutoTunerTuningConfiguration"; 

            extern const char *AutoTunerTuningConfigurationTYPENAME;

            struct AutoTunerTuningConfigurationSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class AutoTunerTuningConfigurationTypeSupport;
            class AutoTunerTuningConfigurationDataWriter;
            class AutoTunerTuningConfigurationDataReader;
            #endif
            class AutoTunerTuningConfiguration 
            {
              public:
                typedef struct AutoTunerTuningConfigurationSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AutoTunerTuningConfigurationTypeSupport TypeSupport;
                typedef AutoTunerTuningConfigurationDataWriter DataWriter;
                typedef AutoTunerTuningConfigurationDataReader DataReader;
                #endif

                DDS_Char *   id ;
                DDS_Double   filter ;
                DDS_Double   d ;
                DDS_Double   f ;
                DDS_Double   epsilon ;
                DDS_Boolean   epsilonManual ;
                DDS_Double   kcMin ;
                DDS_Double   kcMax ;
                DDS_Double   tiMin ;
                DDS_Double   tiMax ;
                DDS_Double   initK ;
                DDS_Double   initTau ;
                DDS_Double   initPreFilter ;
                DDS_Double   r1 ;
                DDS_Double   r2 ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport DDS_TypeCode* AutoTunerTuningConfiguration_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *AutoTunerTuningConfiguration_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *AutoTunerTuningConfiguration_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *AutoTunerTuningConfiguration_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(AutoTunerTuningConfigurationSeq, AutoTunerTuningConfiguration);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningConfiguration_initialize(
                AutoTunerTuningConfiguration* self);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningConfiguration_initialize_ex(
                AutoTunerTuningConfiguration* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningConfiguration_initialize_w_params(
                AutoTunerTuningConfiguration* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool AutoTunerTuningConfiguration_finalize_w_return(
                AutoTunerTuningConfiguration* self);

            NDDSUSERDllExport
            void AutoTunerTuningConfiguration_finalize(
                AutoTunerTuningConfiguration* self);

            NDDSUSERDllExport
            void AutoTunerTuningConfiguration_finalize_ex(
                AutoTunerTuningConfiguration* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AutoTunerTuningConfiguration_finalize_w_params(
                AutoTunerTuningConfiguration* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AutoTunerTuningConfiguration_finalize_optional_members(
                AutoTunerTuningConfiguration* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AutoTunerTuningConfiguration_copy(
                AutoTunerTuningConfiguration* dst,
                const AutoTunerTuningConfiguration* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace AutoTunerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::ModelStateRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::ModelState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* autotuner_configuration */

