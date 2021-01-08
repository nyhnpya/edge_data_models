

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autodriller_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autodriller_configuration_730533710_h
#define autodriller_configuration_730533710_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace nec {
    namespace control {
        static const char HMI_REQUEST[] = "HmiRequest"; 

        extern const char *HmiRequestTYPENAME;

        struct HmiRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HmiRequestTypeSupport;
        class HmiRequestDataWriter;
        class HmiRequestDataReader;
        #endif
        class HmiRequest 
        {
          public:
            typedef struct HmiRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HmiRequestTypeSupport TypeSupport;
            typedef HmiRequestDataWriter DataWriter;
            typedef HmiRequestDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DataTypes::Time   timestamp ;
            DDS_Long   mode ;
            DDS_Double   modeController ;
            DDS_Double   differentialPressureRequestK ;
            DDS_Double   differentialPressureRequestTau ;
            DDS_Double   rateOfPenetrationRequestK ;
            DDS_Double   rateOfPenetrationRequestTau ;
            DDS_Double   torqueRequestK ;
            DDS_Double   torqueRequestTau ;
            DDS_Double   weightOnBitRequestK ;
            DDS_Double   weightOnBitRequestTau ;
            DDS_Long   status ;
            DDS_Boolean   tuningEnable ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* HmiRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *HmiRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HmiRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HmiRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(HmiRequestSeq, HmiRequest);

        NDDSUSERDllExport
        RTIBool HmiRequest_initialize(
            HmiRequest* self);

        NDDSUSERDllExport
        RTIBool HmiRequest_initialize_ex(
            HmiRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HmiRequest_initialize_w_params(
            HmiRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HmiRequest_finalize_w_return(
            HmiRequest* self);

        NDDSUSERDllExport
        void HmiRequest_finalize(
            HmiRequest* self);

        NDDSUSERDllExport
        void HmiRequest_finalize_ex(
            HmiRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void HmiRequest_finalize_w_params(
            HmiRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void HmiRequest_finalize_optional_members(
            HmiRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool HmiRequest_copy(
            HmiRequest* dst,
            const HmiRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char HMI_STATE[] = "HmiState"; 

        extern const char *HmiStateTYPENAME;

        struct HmiStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HmiStateTypeSupport;
        class HmiStateDataWriter;
        class HmiStateDataReader;
        #endif
        class HmiState 
        {
          public:
            typedef struct HmiStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HmiStateTypeSupport TypeSupport;
            typedef HmiStateDataWriter DataWriter;
            typedef HmiStateDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DataTypes::Time   timestamp ;
            DDS_Long   mode ;
            DDS_Long   modeController ;
            DDS_Double   pipeInnerDiameter ;
            DDS_Double   pipeOuterDiameter ;
            DDS_Double   slopeFilter ;
            DDS_Double   tauMax ;
            DDS_Double   tauMin ;
            DDS_Double   tauMultiplier ;
            DDS_Double   differentialPressureInitializeK ;
            DDS_Double   differentialPressureInitializeTau ;
            DDS_Double   differentialPressureInitializePreFilter ;
            DDS_Double   differentialPressureR1 ;
            DDS_Double   differentialPressureR2 ;
            DDS_Double   rateOfPenetrationInitializeK ;
            DDS_Double   rateOfPenetrationInitializeTau ;
            DDS_Double   rateOfPenetrationInitializePreFilter ;
            DDS_Double   rateOfPenetrationInitializeR1 ;
            DDS_Double   rateOfPenetrationInitializeR2 ;
            DDS_Double   torqueInitializeK ;
            DDS_Double   torqueInitializeTau ;
            DDS_Double   torqueInitializePreFilter ;
            DDS_Double   torqueInitializeR1 ;
            DDS_Double   torqueInitializeR2 ;
            DDS_Double   weightOnBitInitializeK ;
            DDS_Double   weightOnBitInitializeTau ;
            DDS_Double   weightOnBitInitializePreFilter ;
            DDS_Double   weightOnBitInitializeR1 ;
            DDS_Double   weightOnBitInitializeR2 ;
            DDS_Double   devMin ;
            DDS_Double   intervalMin ;
            DDS_Double   differentialPressureFilter ;
            DDS_Double   differentialPressureKcMax ;
            DDS_Double   differentialPressureKcMin ;
            DDS_Double   differentialPressureTdMax ;
            DDS_Double   differentialPressureTdMin ;
            DDS_Double   differentialPressureTiMax ;
            DDS_Double   differentialPressureTiMin ;
            DDS_Double   differentialPressureD ;
            DDS_Double   differentialPressureEps ;
            DDS_Boolean   differentialPressureEpsManual ;
            DDS_Double   differentialPressureF ;
            DDS_Double   rateOfPenetrationFilter ;
            DDS_Double   rateOfPenetrationKcMax ;
            DDS_Double   rateOfPenetrationKcMin ;
            DDS_Double   rateOfPenetrationTdMax ;
            DDS_Double   rateOfPenetrationTdMin ;
            DDS_Double   rateOfPenetrationTiMax ;
            DDS_Double   rateOfPenetrationTiMin ;
            DDS_Double   rateOfPenetrationD ;
            DDS_Double   rateOfPenetrationEps ;
            DDS_Boolean   rateOfPenetrationEpsManual ;
            DDS_Double   rateOfPenetrationF ;
            DDS_Double   weightOnBitFilter ;
            DDS_Double   weightOnBitKcMax ;
            DDS_Double   weightOnBitKcMin ;
            DDS_Double   weightOnBitTdMax ;
            DDS_Double   weightOnBitTdMin ;
            DDS_Double   weightOnBitTiMax ;
            DDS_Double   weightOnBitTiMin ;
            DDS_Double   weightOnBitD ;
            DDS_Double   weightOnBitEps ;
            DDS_Boolean   weightOnBitEpsManual ;
            DDS_Double   weightOnBitF ;
            DDS_Double   torqueFilter ;
            DDS_Double   torqueKcMax ;
            DDS_Double   torqueKcMin ;
            DDS_Double   torqueTdMax ;
            DDS_Double   torqueTdMin ;
            DDS_Double   torqueTiMax ;
            DDS_Double   torqueTiMin ;
            DDS_Double   torqueD ;
            DDS_Double   torqueEps ;
            DDS_Boolean   torqueEpsManual ;
            DDS_Double   torqueF ;
            DDS_Long   status ;
            DDS_Boolean   tuningEnabled ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* HmiState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *HmiState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HmiState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HmiState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(HmiStateSeq, HmiState);

        NDDSUSERDllExport
        RTIBool HmiState_initialize(
            HmiState* self);

        NDDSUSERDllExport
        RTIBool HmiState_initialize_ex(
            HmiState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HmiState_initialize_w_params(
            HmiState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HmiState_finalize_w_return(
            HmiState* self);

        NDDSUSERDllExport
        void HmiState_finalize(
            HmiState* self);

        NDDSUSERDllExport
        void HmiState_finalize_ex(
            HmiState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void HmiState_finalize_w_params(
            HmiState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void HmiState_finalize_optional_members(
            HmiState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool HmiState_copy(
            HmiState* dst,
            const HmiState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace control  */
} /* namespace nec  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<nec::control::HmiRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<nec::control::HmiState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* autodriller_configuration */

