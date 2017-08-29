

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from wellbore.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef wellbore_1776161730_h
#define wellbore_1776161730_h

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

        extern const char *WellboreTYPENAME;

        struct WellboreSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class WellboreTypeSupport;
        class WellboreDataWriter;
        class WellboreDataReader;
        #endif

        class Wellbore 
        {
          public:
            typedef struct WellboreSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef WellboreTypeSupport TypeSupport;
            typedef WellboreDataWriter DataWriter;
            typedef WellboreDataReader DataReader;
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

        NDDSUSERDllExport DDS_TypeCode* Wellbore_get_typecode(void); /* Type code */

        DDS_SEQUENCE(WellboreSeq, Wellbore);                                        

        NDDSUSERDllExport
        RTIBool Wellbore_initialize(
            Wellbore* self);

        NDDSUSERDllExport
        RTIBool Wellbore_initialize_ex(
            Wellbore* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Wellbore_initialize_w_params(
            Wellbore* self,
            const struct DDS_TypeAllocationParams_t * allocParams);        

        NDDSUSERDllExport
        void Wellbore_finalize(
            Wellbore* self);

        NDDSUSERDllExport
        void Wellbore_finalize_ex(
            Wellbore* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Wellbore_finalize_w_params(
            Wellbore* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Wellbore_finalize_optional_members(
            Wellbore* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Wellbore_copy(
            Wellbore* dst,
            const Wellbore* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#endif /* wellbore */

