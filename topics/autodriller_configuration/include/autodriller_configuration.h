

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autodriller_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autodriller_configuration_730530391_h
#define autodriller_configuration_730530391_h

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
    } /* namespace control  */
} /* namespace nec  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<nec::control::HmiRequest> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* autodriller_configuration */

