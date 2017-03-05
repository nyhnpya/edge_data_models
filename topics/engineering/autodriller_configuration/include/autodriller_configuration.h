

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autodriller_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autodriller_configuration_730533854_h
#define autodriller_configuration_730533854_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace AutoDrillerConfiguration {

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

        DataTypes::Uuid   id ;
        DataTypes::Time   timestamp ;
        DDS_Double   kpKpCalculated ;
        DDS_Double   deltaPressureKpCurrent ;
        DDS_Double   dpTiCalculated ;
        DDS_Double   dpTiCurrent ;
        DDS_Double   ropKpCalculated ;
        DDS_Double   ropKpCurrent ;
        DDS_Double   ropTiCalcualted ;
        DDS_Double   ropTiCurrent ;
        DDS_Double   torqueKpCalculated ;
        DDS_Double   torqueKpCurrent ;
        DDS_Double   torqueTiCalculated ;
        DDS_Double   toqueTiCurrent ;
        DDS_Double   wobKpCalculated ;
        DDS_Double   wobKpCurrent ;
        DDS_Double   wobTiCalculated ;
        DDS_Double   wobTiCurrent ;
        DDS_Double   mode ;
        DDS_Double   modeController ;
        DDS_Double   onDataAvailable ;
        DDS_Double   onLivelinessLost ;
        DDS_Double   modelOneDpRequestK ;
        DDS_Double   modelOneDpRequestTau ;
        DDS_Double   modelOneRopRequestK ;
        DDS_Double   modelOneRopRequestTau ;
        DDS_Double   modelOneTorqueRequestK ;
        DDS_Double   modelOneTorqueRequestTau ;
        DDS_Double   modelOneWobRequestK ;
        DDS_Double   modelOneWobRequestTau ;
        DDS_Double   modelTwoDpRequestK ;
        DDS_Double   modelTwoDpRequestTau ;
        DDS_Double   modelTwoRopRequestK ;
        DDS_Double   modelTwoRopRequestTau ;
        DDS_Double   modelTwoTorqueRequestK ;
        DDS_Double   modelTwoTorqueRequestTau ;
        DDS_Double   modelTwoWobRequestK ;
        DDS_Double   modelTwoWobRequestTau ;
        DDS_Double   status ;
        DDS_Double   tuningDisable ;
        DDS_Double   tuningEnable ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* HmiRequest_get_typecode(void); /* Type code */

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

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

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

        DataTypes::Uuid   id ;
        DataTypes::Time   timestamp ;
        DDS_Double   mode ;
        DDS_Double   modeController ;
        DDS_Double   modelReset ;
        DDS_Double   pipeInnerDiameter ;
        DDS_Double   pipeOuterDiameter ;
        DDS_Double   differentialPressureInitializeK ;
        DDS_Double   differentialPressureInitializeTau ;
        DDS_Double   differentialPressurePreFilter ;
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
        DDS_Double   wobInitializeK ;
        DDS_Double   wobInitializeTau ;
        DDS_Double   wobInitializePreFilter ;
        DDS_Double   wobInitializeR1 ;
        DDS_Double   wobInitializeR2 ;
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
        DDS_Double   differentialPressureEpsManual ;
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
        DDS_Double   rateOfPenetrationEpsManual ;
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
        DDS_Double   weightOnBitEpsManual ;
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
        DDS_Double   torqueEpsManual ;
        DDS_Double   torqueF ;
        DDS_Double   status ;
        DDS_Double   tuningDisable ;
        DDS_Double   tuningEnable ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* HmiState_get_typecode(void); /* Type code */

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

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace AutoDrillerConfiguration  */

#endif /* autodriller_configuration */

