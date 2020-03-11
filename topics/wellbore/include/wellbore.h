

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from wellbore.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef wellbore_1776163055_h
#define wellbore_1776163055_h

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
    namespace process {
        static const char WELLBORE_STATE[] = "WellboreState"; 

        extern const char *WellboreStateTYPENAME;

        struct WellboreStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class WellboreStateTypeSupport;
        class WellboreStateDataWriter;
        class WellboreStateDataReader;
        #endif
        class WellboreState 
        {
          public:
            typedef struct WellboreStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef WellboreStateTypeSupport TypeSupport;
            typedef WellboreStateDataWriter DataWriter;
            typedef WellboreStateDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   objectiveId ;
            DataTypes::Time   timestamp ;
            DDS_Double   holeDepth ;
            DDS_Double   measuredDepth ;
            DDS_Double   trueVerticalDepth ;
            DDS_Double   bitDepth ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* WellboreState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *WellboreState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *WellboreState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *WellboreState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(WellboreStateSeq, WellboreState);

        NDDSUSERDllExport
        RTIBool WellboreState_initialize(
            WellboreState* self);

        NDDSUSERDllExport
        RTIBool WellboreState_initialize_ex(
            WellboreState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool WellboreState_initialize_w_params(
            WellboreState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool WellboreState_finalize_w_return(
            WellboreState* self);

        NDDSUSERDllExport
        void WellboreState_finalize(
            WellboreState* self);

        NDDSUSERDllExport
        void WellboreState_finalize_ex(
            WellboreState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void WellboreState_finalize_w_params(
            WellboreState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void WellboreState_finalize_optional_members(
            WellboreState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool WellboreState_copy(
            WellboreState* dst,
            const WellboreState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<nec::process::WellboreState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* wellbore */

