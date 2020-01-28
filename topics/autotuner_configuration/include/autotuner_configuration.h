

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autotuner_configuration_985795544_h
#define autotuner_configuration_985795544_h

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
            static const char MODEL_STATE_STATE[] = "ModelStateState"; 

            extern const char *ModelStateStateTYPENAME;

            struct ModelStateStateSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class ModelStateStateTypeSupport;
            class ModelStateStateDataWriter;
            class ModelStateStateDataReader;
            #endif
            class ModelStateState 
            {
              public:
                typedef struct ModelStateStateSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ModelStateStateTypeSupport TypeSupport;
                typedef ModelStateStateDataWriter DataWriter;
                typedef ModelStateStateDataReader DataReader;
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
            NDDSUSERDllExport DDS_TypeCode* ModelStateState_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *ModelStateState_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *ModelStateState_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *ModelStateState_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(ModelStateStateSeq, ModelStateState);

            NDDSUSERDllExport
            RTIBool ModelStateState_initialize(
                ModelStateState* self);

            NDDSUSERDllExport
            RTIBool ModelStateState_initialize_ex(
                ModelStateState* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ModelStateState_initialize_w_params(
                ModelStateState* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool ModelStateState_finalize_w_return(
                ModelStateState* self);

            NDDSUSERDllExport
            void ModelStateState_finalize(
                ModelStateState* self);

            NDDSUSERDllExport
            void ModelStateState_finalize_ex(
                ModelStateState* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ModelStateState_finalize_w_params(
                ModelStateState* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ModelStateState_finalize_optional_members(
                ModelStateState* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ModelStateState_copy(
                ModelStateState* dst,
                const ModelStateState* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            static const char DIFFP_TUNING_REQUEST[] = "DiffpTuningRequest"; 

            extern const char *DiffpTuningRequestTYPENAME;

            struct DiffpTuningRequestSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class DiffpTuningRequestTypeSupport;
            class DiffpTuningRequestDataWriter;
            class DiffpTuningRequestDataReader;
            #endif
            class DiffpTuningRequest 
            {
              public:
                typedef struct DiffpTuningRequestSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DiffpTuningRequestTypeSupport TypeSupport;
                typedef DiffpTuningRequestDataWriter DataWriter;
                typedef DiffpTuningRequestDataReader DataReader;
                #endif

                DDS_Double   diffPFilter ;
                DDS_Double   diffPD ;
                DDS_Double   diffPF ;
                DDS_Double   diffPEps ;
                DDS_Boolean   diffPEpsManual ;
                DDS_Double   diffPKcMin ;
                DDS_Double   diffPKcMax ;
                DDS_Double   diffPTiMin ;
                DDS_Double   diffPTiMax ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport DDS_TypeCode* DiffpTuningRequest_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *DiffpTuningRequest_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiffpTuningRequest_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiffpTuningRequest_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(DiffpTuningRequestSeq, DiffpTuningRequest);

            NDDSUSERDllExport
            RTIBool DiffpTuningRequest_initialize(
                DiffpTuningRequest* self);

            NDDSUSERDllExport
            RTIBool DiffpTuningRequest_initialize_ex(
                DiffpTuningRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DiffpTuningRequest_initialize_w_params(
                DiffpTuningRequest* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool DiffpTuningRequest_finalize_w_return(
                DiffpTuningRequest* self);

            NDDSUSERDllExport
            void DiffpTuningRequest_finalize(
                DiffpTuningRequest* self);

            NDDSUSERDllExport
            void DiffpTuningRequest_finalize_ex(
                DiffpTuningRequest* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DiffpTuningRequest_finalize_w_params(
                DiffpTuningRequest* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DiffpTuningRequest_finalize_optional_members(
                DiffpTuningRequest* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DiffpTuningRequest_copy(
                DiffpTuningRequest* dst,
                const DiffpTuningRequest* src);

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

                DDS_Double   diffPFilter ;
                DDS_Double   diffPD ;
                DDS_Double   diffPF ;
                DDS_Double   diffPEps ;
                DDS_Boolean   diffPEpsManual ;
                DDS_Double   diffPKcMin ;
                DDS_Double   diffPKcMax ;
                DDS_Double   diffPTiMin ;
                DDS_Double   diffPTiMax ;
                DDS_Double   diffPInitK ;
                DDS_Double   diffPInitTau ;
                DDS_Double   diffPInitPreFilter ;
                DDS_Double   diffPR1 ;
                DDS_Double   diffPR2 ;

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
            static const char WOB_TUNING_REQUEST[] = "WobTuningRequest"; 

            extern const char *WobTuningRequestTYPENAME;

            struct WobTuningRequestSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class WobTuningRequestTypeSupport;
            class WobTuningRequestDataWriter;
            class WobTuningRequestDataReader;
            #endif
            class WobTuningRequest 
            {
              public:
                typedef struct WobTuningRequestSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WobTuningRequestTypeSupport TypeSupport;
                typedef WobTuningRequestDataWriter DataWriter;
                typedef WobTuningRequestDataReader DataReader;
                #endif

                DDS_Double   wobFilter ;
                DDS_Double   wobD ;
                DDS_Double   wobF ;
                DDS_Double   wobEps ;
                DDS_Boolean   wobEpsManual ;
                DDS_Double   wobKcMin ;
                DDS_Double   wobKcMax ;
                DDS_Double   wobTiMin ;
                DDS_Double   wobTiMax ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport DDS_TypeCode* WobTuningRequest_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *WobTuningRequest_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *WobTuningRequest_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *WobTuningRequest_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(WobTuningRequestSeq, WobTuningRequest);

            NDDSUSERDllExport
            RTIBool WobTuningRequest_initialize(
                WobTuningRequest* self);

            NDDSUSERDllExport
            RTIBool WobTuningRequest_initialize_ex(
                WobTuningRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WobTuningRequest_initialize_w_params(
                WobTuningRequest* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool WobTuningRequest_finalize_w_return(
                WobTuningRequest* self);

            NDDSUSERDllExport
            void WobTuningRequest_finalize(
                WobTuningRequest* self);

            NDDSUSERDllExport
            void WobTuningRequest_finalize_ex(
                WobTuningRequest* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WobTuningRequest_finalize_w_params(
                WobTuningRequest* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WobTuningRequest_finalize_optional_members(
                WobTuningRequest* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WobTuningRequest_copy(
                WobTuningRequest* dst,
                const WobTuningRequest* src);

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

                DDS_Double   wobFilter ;
                DDS_Double   wobD ;
                DDS_Double   wobF ;
                DDS_Double   wobEps ;
                DDS_Boolean   wobEpsManual ;
                DDS_Double   wobKcMin ;
                DDS_Double   wobKcMax ;
                DDS_Double   wobTiMin ;
                DDS_Double   wobTiMax ;
                DDS_Double   wobInitK ;
                DDS_Double   wobInitTau ;
                DDS_Double   wobInitPreFilter ;
                DDS_Double   wobR1 ;
                DDS_Double   wobR2 ;

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
            static const char TORQUE_TUNING_REQUEST[] = "TorqueTuningRequest"; 

            extern const char *TorqueTuningRequestTYPENAME;

            struct TorqueTuningRequestSeq;
            #ifndef NDDS_STANDALONE_TYPE
            class TorqueTuningRequestTypeSupport;
            class TorqueTuningRequestDataWriter;
            class TorqueTuningRequestDataReader;
            #endif
            class TorqueTuningRequest 
            {
              public:
                typedef struct TorqueTuningRequestSeq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TorqueTuningRequestTypeSupport TypeSupport;
                typedef TorqueTuningRequestDataWriter DataWriter;
                typedef TorqueTuningRequestDataReader DataReader;
                #endif

                DDS_Double   torqueFilter ;
                DDS_Double   torqueD ;
                DDS_Double   torqueF ;
                DDS_Double   torqueEps ;
                DDS_Boolean   torqueEpsManual ;
                DDS_Double   torqueKcMin ;
                DDS_Double   torqueKcMax ;
                DDS_Double   torqueTiMin ;
                DDS_Double   torqueTiMax ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            #ifndef NDDS_STANDALONE_TYPE
            NDDSUSERDllExport DDS_TypeCode* TorqueTuningRequest_get_typecode(void); /* Type code */
            NDDSUSERDllExport RTIXCdrTypePlugin *TorqueTuningRequest_get_type_plugin_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *TorqueTuningRequest_get_sample_access_info(void);
            NDDSUSERDllExport RTIXCdrSampleAccessInfo *TorqueTuningRequest_get_sample_seq_access_info(void);
            #endif

            DDS_SEQUENCE(TorqueTuningRequestSeq, TorqueTuningRequest);

            NDDSUSERDllExport
            RTIBool TorqueTuningRequest_initialize(
                TorqueTuningRequest* self);

            NDDSUSERDllExport
            RTIBool TorqueTuningRequest_initialize_ex(
                TorqueTuningRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TorqueTuningRequest_initialize_w_params(
                TorqueTuningRequest* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            RTIBool TorqueTuningRequest_finalize_w_return(
                TorqueTuningRequest* self);

            NDDSUSERDllExport
            void TorqueTuningRequest_finalize(
                TorqueTuningRequest* self);

            NDDSUSERDllExport
            void TorqueTuningRequest_finalize_ex(
                TorqueTuningRequest* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TorqueTuningRequest_finalize_w_params(
                TorqueTuningRequest* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TorqueTuningRequest_finalize_optional_members(
                TorqueTuningRequest* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TorqueTuningRequest_copy(
                TorqueTuningRequest* dst,
                const TorqueTuningRequest* src);

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

                DDS_Double   torqueFilter ;
                DDS_Double   torqueD ;
                DDS_Double   torqueF ;
                DDS_Double   torqueEps ;
                DDS_Boolean   torqueEpsManual ;
                DDS_Double   torqueKcMin ;
                DDS_Double   torqueKcMax ;
                DDS_Double   torqueTiMin ;
                DDS_Double   torqueTiMax ;
                DDS_Double   torqueInitK ;
                DDS_Double   torqueInitTau ;
                DDS_Double   torqueInitPreFilter ;
                DDS_Double   torqueR1 ;
                DDS_Double   torqueR2 ;

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
        struct type_code<Shell::Hmi::AutoTunerConfiguration::ModelStateRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::ModelStateState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::DiffpTuningState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::WobTuningRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::WobTuningState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest> {
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

