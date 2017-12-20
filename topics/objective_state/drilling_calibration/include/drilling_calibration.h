

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_calibration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drilling_calibration_1168089606_h
#define drilling_calibration_1168089606_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace nec {
    namespace control {
        static const char DRILLING_CALIBRATION_REQUEST[] = "DrillingCalibrationRequest"; 

        extern const char *DrillingCalibrationRequestTYPENAME;

        struct DrillingCalibrationRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillingCalibrationRequestTypeSupport;
        class DrillingCalibrationRequestDataWriter;
        class DrillingCalibrationRequestDataReader;
        #endif

        class DrillingCalibrationRequest 
        {
          public:
            typedef struct DrillingCalibrationRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillingCalibrationRequestTypeSupport TypeSupport;
            typedef DrillingCalibrationRequestDataWriter DataWriter;
            typedef DrillingCalibrationRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Time   timestamp ;
            DDS_Double   wobProportional ;
            DDS_Double   wobIntegral ;
            DDS_Double   differentialPressureProportional ;
            DDS_Double   differentialPressureIntegral ;
            DDS_Double   torqueProportional ;
            DDS_Double   torqueIntegral ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillingCalibrationRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillingCalibrationRequestSeq, DrillingCalibrationRequest);

        NDDSUSERDllExport
        RTIBool DrillingCalibrationRequest_initialize(
            DrillingCalibrationRequest* self);

        NDDSUSERDllExport
        RTIBool DrillingCalibrationRequest_initialize_ex(
            DrillingCalibrationRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillingCalibrationRequest_initialize_w_params(
            DrillingCalibrationRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillingCalibrationRequest_finalize(
            DrillingCalibrationRequest* self);

        NDDSUSERDllExport
        void DrillingCalibrationRequest_finalize_ex(
            DrillingCalibrationRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillingCalibrationRequest_finalize_w_params(
            DrillingCalibrationRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillingCalibrationRequest_finalize_optional_members(
            DrillingCalibrationRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillingCalibrationRequest_copy(
            DrillingCalibrationRequest* dst,
            const DrillingCalibrationRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char DRILLING_CALIBRATION_STATE[] = "DrillingCalibrationState"; 

        extern const char *DrillingCalibrationStateTYPENAME;

        struct DrillingCalibrationStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillingCalibrationStateTypeSupport;
        class DrillingCalibrationStateDataWriter;
        class DrillingCalibrationStateDataReader;
        #endif

        class DrillingCalibrationState 
        {
          public:
            typedef struct DrillingCalibrationStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillingCalibrationStateTypeSupport TypeSupport;
            typedef DrillingCalibrationStateDataWriter DataWriter;
            typedef DrillingCalibrationStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Time   timestamp ;
            DDS_Double   wobProportional ;
            DDS_Double   wobIntegral ;
            DDS_Double   differentialPressureProportional ;
            DDS_Double   differentialPressureIntegral ;
            DDS_Double   torqueProportional ;
            DDS_Double   torqueIntegral ;
            DDS_Double   minWobProportional ;
            DDS_Double   maxWobProportional ;
            DDS_Double   minWobIntegral ;
            DDS_Double   maxWobIntegral ;
            DDS_Double   minDifferentialPressureProportional ;
            DDS_Double   maxDifferentialPressureProportional ;
            DDS_Double   minDifferentialPressureIntegral ;
            DDS_Double   maxDifferentialPressureIntegral ;
            DDS_Double   minTorqueProportional ;
            DDS_Double   maxTorqueProportional ;
            DDS_Double   minTorqueIntegral ;
            DDS_Double   maxTorqueIntegral ;
            DDS_Boolean   ropMode ;
            DDS_Boolean   wobMode ;
            DDS_Boolean   differentialPressureMode ;
            DDS_Boolean   torqueMode ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillingCalibrationState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillingCalibrationStateSeq, DrillingCalibrationState);

        NDDSUSERDllExport
        RTIBool DrillingCalibrationState_initialize(
            DrillingCalibrationState* self);

        NDDSUSERDllExport
        RTIBool DrillingCalibrationState_initialize_ex(
            DrillingCalibrationState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillingCalibrationState_initialize_w_params(
            DrillingCalibrationState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillingCalibrationState_finalize(
            DrillingCalibrationState* self);

        NDDSUSERDllExport
        void DrillingCalibrationState_finalize_ex(
            DrillingCalibrationState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillingCalibrationState_finalize_w_params(
            DrillingCalibrationState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillingCalibrationState_finalize_optional_members(
            DrillingCalibrationState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillingCalibrationState_copy(
            DrillingCalibrationState* dst,
            const DrillingCalibrationState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace control  */
} /* namespace nec  */

#endif /* drilling_calibration */

