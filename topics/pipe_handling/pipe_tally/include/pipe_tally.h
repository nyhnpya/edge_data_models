

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pipe_tally.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef pipe_tally_58331204_h
#define pipe_tally_58331204_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace PipeHandling {
    static const char PIPE_TALLY[] = "PipeTally"; 

    extern const char *PipeTallyTYPENAME;

    struct PipeTallySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PipeTallyTypeSupport;
    class PipeTallyDataWriter;
    class PipeTallyDataReader;
    #endif

    class PipeTally 
    {
      public:
        typedef struct PipeTallySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PipeTallyTypeSupport TypeSupport;
        typedef PipeTallyDataWriter DataWriter;
        typedef PipeTallyDataReader DataReader;
        #endif

        DataTypes::Uuid   id ;
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

    NDDSUSERDllExport DDS_TypeCode* PipeTally_get_typecode(void); /* Type code */

    DDS_SEQUENCE(PipeTallySeq, PipeTally);                                        

    NDDSUSERDllExport
    RTIBool PipeTally_initialize(
        PipeTally* self);

    NDDSUSERDllExport
    RTIBool PipeTally_initialize_ex(
        PipeTally* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PipeTally_initialize_w_params(
        PipeTally* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void PipeTally_finalize(
        PipeTally* self);

    NDDSUSERDllExport
    void PipeTally_finalize_ex(
        PipeTally* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PipeTally_finalize_w_params(
        PipeTally* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PipeTally_finalize_optional_members(
        PipeTally* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PipeTally_copy(
        PipeTally* dst,
        const PipeTally* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace PipeHandling  */

#endif /* pipe_tally */

