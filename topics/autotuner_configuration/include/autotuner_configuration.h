

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autotuner_configuration_985793306_h
#define autotuner_configuration_985793306_h

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
            static const char AUTOTUNER_TUNING_REQUEST[] = "AutoTunerTuningRequest"; 

            extern const char *AutoTunerTuningRequestTYPENAME;

            struct AutoTunerTuningRequestSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class AutoTunerTuningRequestTypeSupport;
            class AutoTunerTuningRequestDataWriter;
            class AutoTunerTuningRequestDataReader;
            #endif
            class AutoTunerTuningRequest 
            {
              public:
                typedef struct AutoTunerTuningRequestSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AutoTunerTuningRequestTypeSupport TypeSupport;
                typedef AutoTunerTuningRequestDataWriter DataWriter;
                typedef AutoTunerTuningRequestDataReader DataReader;
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

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport DDS_TypeCode* AutoTunerTuningRequest_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *AutoTunerTuningRequest_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *AutoTunerTuningRequest_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *AutoTunerTuningRequest_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(AutoTunerTuningRequestSeq, AutoTunerTuningRequest);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningRequest_initialize(
                AutoTunerTuningRequest* self);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningRequest_initialize_ex(
                AutoTunerTuningRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningRequest_initialize_w_params(
                AutoTunerTuningRequest* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool AutoTunerTuningRequest_finalize_w_return(
                AutoTunerTuningRequest* self);

            NDDSUSERDllExport
            void AutoTunerTuningRequest_finalize(
                AutoTunerTuningRequest* self);

            NDDSUSERDllExport
            void AutoTunerTuningRequest_finalize_ex(
                AutoTunerTuningRequest* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AutoTunerTuningRequest_finalize_w_params(
                AutoTunerTuningRequest* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AutoTunerTuningRequest_finalize_optional_members(
                AutoTunerTuningRequest* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AutoTunerTuningRequest_copy(
                AutoTunerTuningRequest* dst,
                const AutoTunerTuningRequest* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            static const char AUTOTUNER_TUNING_STATE[] = "AutoTunerTuningState"; 

            extern const char *AutoTunerTuningStateTYPENAME;

            struct AutoTunerTuningStateSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class AutoTunerTuningStateTypeSupport;
            class AutoTunerTuningStateDataWriter;
            class AutoTunerTuningStateDataReader;
            #endif
            class AutoTunerTuningState 
            {
              public:
                typedef struct AutoTunerTuningStateSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AutoTunerTuningStateTypeSupport TypeSupport;
                typedef AutoTunerTuningStateDataWriter DataWriter;
                typedef AutoTunerTuningStateDataReader DataReader;
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
            NDDSUSERDllExport DDS_TypeCode* AutoTunerTuningState_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *AutoTunerTuningState_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *AutoTunerTuningState_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *AutoTunerTuningState_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(AutoTunerTuningStateSeq, AutoTunerTuningState);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningState_initialize(
                AutoTunerTuningState* self);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningState_initialize_ex(
                AutoTunerTuningState* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AutoTunerTuningState_initialize_w_params(
                AutoTunerTuningState* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool AutoTunerTuningState_finalize_w_return(
                AutoTunerTuningState* self);

            NDDSUSERDllExport
            void AutoTunerTuningState_finalize(
                AutoTunerTuningState* self);

            NDDSUSERDllExport
            void AutoTunerTuningState_finalize_ex(
                AutoTunerTuningState* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AutoTunerTuningState_finalize_w_params(
                AutoTunerTuningState* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AutoTunerTuningState_finalize_optional_members(
                AutoTunerTuningState* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AutoTunerTuningState_copy(
                AutoTunerTuningState* dst,
                const AutoTunerTuningState* src);

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
        struct type_code<Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* autotuner_configuration */

