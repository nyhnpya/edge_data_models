

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pipe_tally.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef pipe_tally_58331459_h
#define pipe_tally_58331459_h

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
        static const char PIPE_TALLY[] = "PipeTally"; 

        extern const char *PipeTallyStateTYPENAME;

        struct PipeTallyStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PipeTallyStateTypeSupport;
        class PipeTallyStateDataWriter;
        class PipeTallyStateDataReader;
        #endif

        class PipeTallyState 
        {
          public:
            typedef struct PipeTallyStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PipeTallyStateTypeSupport TypeSupport;
            typedef PipeTallyStateDataWriter DataWriter;
            typedef PipeTallyStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Uuid   objectiveId ;
            DataTypes::Time   timestamp ;
            DDS_Char *   serialNumber ;
            DDS_UnsignedLong   jointNumber ;
            DDS_UnsignedLong   standNumber ;
            DDS_Double   weight ;
            DDS_Double   outerDiameter ;
            DDS_Double   innerDiameter ;
            DDS_Double   kellyDown ;
            DDS_Double   length ;
            DDS_Double   pipeLength ;
            DDS_Double   stringLength ;
            DDS_Char *   description ;
            DataTypes::PipeType   pipeType ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* PipeTallyState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(PipeTallyStateSeq, PipeTallyState);

        NDDSUSERDllExport
        RTIBool PipeTallyState_initialize(
            PipeTallyState* self);

        NDDSUSERDllExport
        RTIBool PipeTallyState_initialize_ex(
            PipeTallyState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PipeTallyState_initialize_w_params(
            PipeTallyState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void PipeTallyState_finalize(
            PipeTallyState* self);

        NDDSUSERDllExport
        void PipeTallyState_finalize_ex(
            PipeTallyState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PipeTallyState_finalize_w_params(
            PipeTallyState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PipeTallyState_finalize_optional_members(
            PipeTallyState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PipeTallyState_copy(
            PipeTallyState* dst,
            const PipeTallyState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#endif /* pipe_tally */

