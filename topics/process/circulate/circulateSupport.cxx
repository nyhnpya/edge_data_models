
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "circulateSupport.h"
#include "circulatePlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace ProcessCirculation {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'CirculateRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   CirculateRequestTYPENAME

    /* Defines */
    #define TDataWriter CirculateRequestDataWriter
    #define TData       ProcessCirculation::CirculateRequest

    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   CirculateRequestTYPENAME

    /* Defines */
    #define TDataReader CirculateRequestDataReader
    #define TDataSeq    CirculateRequestSeq
    #define TData       ProcessCirculation::CirculateRequest

    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    CirculateRequestTYPENAME
    #define TPlugin_new  ProcessCirculation::CirculateRequestPlugin_new
    #define TPlugin_delete  ProcessCirculation::CirculateRequestPlugin_delete

    /* Defines */
    #define TTypeSupport CirculateRequestTypeSupport
    #define TData        ProcessCirculation::CirculateRequest
    #define TDataReader  CirculateRequestDataReader
    #define TDataWriter  CirculateRequestDataWriter
    #define TGENERATE_SER_CODE
    #define TGENERATE_TYPECODE

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #undef TGENERATE_TYPECODE
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'CirculateObjective' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   CirculateObjectiveTYPENAME

    /* Defines */
    #define TDataWriter CirculateObjectiveDataWriter
    #define TData       ProcessCirculation::CirculateObjective

    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   CirculateObjectiveTYPENAME

    /* Defines */
    #define TDataReader CirculateObjectiveDataReader
    #define TDataSeq    CirculateObjectiveSeq
    #define TData       ProcessCirculation::CirculateObjective

    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    CirculateObjectiveTYPENAME
    #define TPlugin_new  ProcessCirculation::CirculateObjectivePlugin_new
    #define TPlugin_delete  ProcessCirculation::CirculateObjectivePlugin_delete

    /* Defines */
    #define TTypeSupport CirculateObjectiveTypeSupport
    #define TData        ProcessCirculation::CirculateObjective
    #define TDataReader  CirculateObjectiveDataReader
    #define TDataWriter  CirculateObjectiveDataWriter
    #define TGENERATE_SER_CODE
    #define TGENERATE_TYPECODE

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #undef TGENERATE_TYPECODE
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'CirculateState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   CirculateStateTYPENAME

    /* Defines */
    #define TDataWriter CirculateStateDataWriter
    #define TData       ProcessCirculation::CirculateState

    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   CirculateStateTYPENAME

    /* Defines */
    #define TDataReader CirculateStateDataReader
    #define TDataSeq    CirculateStateSeq
    #define TData       ProcessCirculation::CirculateState

    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    CirculateStateTYPENAME
    #define TPlugin_new  ProcessCirculation::CirculateStatePlugin_new
    #define TPlugin_delete  ProcessCirculation::CirculateStatePlugin_delete

    /* Defines */
    #define TTypeSupport CirculateStateTypeSupport
    #define TData        ProcessCirculation::CirculateState
    #define TDataReader  CirculateStateDataReader
    #define TDataWriter  CirculateStateDataWriter
    #define TGENERATE_SER_CODE
    #define TGENERATE_TYPECODE

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #undef TGENERATE_TYPECODE
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

} /* namespace ProcessCirculation  */

