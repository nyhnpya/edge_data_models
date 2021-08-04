

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autotuner_configuration_985793172_h
#define autotuner_configuration_985793172_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace Shell {
    namespace Hmi {
        namespace AutoTunerConfiguration {
            static const char MODEL_STATE_STATE[] = "ModelState"; 

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
            static const char DIFFP_TUNING_STATE[] = "DiffpTuningState"; 

            extern const char *DiffpTuningStateTYPENAME;

            struct DiffpTuningStateSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class DiffpTuningStateTypeSupport;
            class DiffpTuningStateDataWriter;
            class DiffpTuningStateDataReader;
            #endif
            class DiffpTuningState 
            {
              public:
                typedef struct DiffpTuningStateSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DiffpTuningStateTypeSupport TypeSupport;
                typedef DiffpTuningStateDataWriter DataWriter;
                typedef DiffpTuningStateDataReader DataReader;
                #endif

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
            NDDSUSERDllExport DDS_TypeCode* DiffpTuningState_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *DiffpTuningState_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiffpTuningState_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiffpTuningState_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(DiffpTuningStateSeq, DiffpTuningState);

            NDDSUSERDllExport
            RTIBool DiffpTuningState_initialize(
                DiffpTuningState* self);

            NDDSUSERDllExport
            RTIBool DiffpTuningState_initialize_ex(
                DiffpTuningState* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DiffpTuningState_initialize_w_params(
                DiffpTuningState* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool DiffpTuningState_finalize_w_return(
                DiffpTuningState* self);

            NDDSUSERDllExport
            void DiffpTuningState_finalize(
                DiffpTuningState* self);

            NDDSUSERDllExport
            void DiffpTuningState_finalize_ex(
                DiffpTuningState* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DiffpTuningState_finalize_w_params(
                DiffpTuningState* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DiffpTuningState_finalize_optional_members(
                DiffpTuningState* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DiffpTuningState_copy(
                DiffpTuningState* dst,
                const DiffpTuningState* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            static const char WOB_TUNING_STATE[] = "WobTuningState"; 

            extern const char *WobTuningStateTYPENAME;

            struct WobTuningStateSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class WobTuningStateTypeSupport;
            class WobTuningStateDataWriter;
            class WobTuningStateDataReader;
            #endif
            class WobTuningState 
            {
              public:
                typedef struct WobTuningStateSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WobTuningStateTypeSupport TypeSupport;
                typedef WobTuningStateDataWriter DataWriter;
                typedef WobTuningStateDataReader DataReader;
                #endif

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
            NDDSUSERDllExport DDS_TypeCode* WobTuningState_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *WobTuningState_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *WobTuningState_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *WobTuningState_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(WobTuningStateSeq, WobTuningState);

            NDDSUSERDllExport
            RTIBool WobTuningState_initialize(
                WobTuningState* self);

            NDDSUSERDllExport
            RTIBool WobTuningState_initialize_ex(
                WobTuningState* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WobTuningState_initialize_w_params(
                WobTuningState* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool WobTuningState_finalize_w_return(
                WobTuningState* self);

            NDDSUSERDllExport
            void WobTuningState_finalize(
                WobTuningState* self);

            NDDSUSERDllExport
            void WobTuningState_finalize_ex(
                WobTuningState* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WobTuningState_finalize_w_params(
                WobTuningState* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WobTuningState_finalize_optional_members(
                WobTuningState* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WobTuningState_copy(
                WobTuningState* dst,
                const WobTuningState* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            static const char TORQUE_TUNING_STATE[] = "TorqueTuningState"; 

            extern const char *TorqueTuningStateTYPENAME;

            struct TorqueTuningStateSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class TorqueTuningStateTypeSupport;
            class TorqueTuningStateDataWriter;
            class TorqueTuningStateDataReader;
            #endif
            class TorqueTuningState 
            {
              public:
                typedef struct TorqueTuningStateSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TorqueTuningStateTypeSupport TypeSupport;
                typedef TorqueTuningStateDataWriter DataWriter;
                typedef TorqueTuningStateDataReader DataReader;
                #endif

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
            NDDSUSERDllExport DDS_TypeCode* TorqueTuningState_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *TorqueTuningState_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *TorqueTuningState_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *TorqueTuningState_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(TorqueTuningStateSeq, TorqueTuningState);

            NDDSUSERDllExport
            RTIBool TorqueTuningState_initialize(
                TorqueTuningState* self);

            NDDSUSERDllExport
            RTIBool TorqueTuningState_initialize_ex(
                TorqueTuningState* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TorqueTuningState_initialize_w_params(
                TorqueTuningState* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool TorqueTuningState_finalize_w_return(
                TorqueTuningState* self);

            NDDSUSERDllExport
            void TorqueTuningState_finalize(
                TorqueTuningState* self);

            NDDSUSERDllExport
            void TorqueTuningState_finalize_ex(
                TorqueTuningState* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TorqueTuningState_finalize_w_params(
                TorqueTuningState* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TorqueTuningState_finalize_optional_members(
                TorqueTuningState* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TorqueTuningState_copy(
                TorqueTuningState* dst,
                const TorqueTuningState* src);

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
        struct type_code<Shell::Hmi::AutoTunerConfiguration::ModelState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::DiffpTuningState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::WobTuningState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::TorqueTuningState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* autotuner_configuration */

