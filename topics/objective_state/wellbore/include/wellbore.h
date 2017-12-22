

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from wellbore.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef wellbore_1776161735_h
#define wellbore_1776161735_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
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

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   timestamp ;
            DDS_Double   holeDepth ;
            DDS_Double   measuredDepth ;
            DDS_Double   trueVerticalDepth ;
            DDS_Double   bitDepth ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* WellboreState_get_typecode(void); /* Type code */

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

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#endif /* wellbore */

