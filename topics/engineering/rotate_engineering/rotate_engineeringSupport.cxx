
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "rotate_engineeringSupport.h"
#include "rotate_engineeringPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace EngineeringRotation {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'RotateEngineeringRequest' support classes.

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
    #define TTYPENAME   RotateEngineeringRequestTYPENAME

    /* Defines */
    #define TDataWriter RotateEngineeringRequestDataWriter
    #define TData       EngineeringRotation::RotateEngineeringRequest

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
    #define TTYPENAME   RotateEngineeringRequestTYPENAME

    /* Defines */
    #define TDataReader RotateEngineeringRequestDataReader
    #define TDataSeq    RotateEngineeringRequestSeq
    #define TData       EngineeringRotation::RotateEngineeringRequest

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
    #define TTYPENAME    RotateEngineeringRequestTYPENAME
    #define TPlugin_new  EngineeringRotation::RotateEngineeringRequestPlugin_new
    #define TPlugin_delete  EngineeringRotation::RotateEngineeringRequestPlugin_delete

    /* Defines */
    #define TTypeSupport RotateEngineeringRequestTypeSupport
    #define TData        EngineeringRotation::RotateEngineeringRequest
    #define TDataReader  RotateEngineeringRequestDataReader
    #define TDataWriter  RotateEngineeringRequestDataWriter
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

    Configure and implement 'RotateEngineeringObjective' support classes.

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
    #define TTYPENAME   RotateEngineeringObjectiveTYPENAME

    /* Defines */
    #define TDataWriter RotateEngineeringObjectiveDataWriter
    #define TData       EngineeringRotation::RotateEngineeringObjective

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
    #define TTYPENAME   RotateEngineeringObjectiveTYPENAME

    /* Defines */
    #define TDataReader RotateEngineeringObjectiveDataReader
    #define TDataSeq    RotateEngineeringObjectiveSeq
    #define TData       EngineeringRotation::RotateEngineeringObjective

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
    #define TTYPENAME    RotateEngineeringObjectiveTYPENAME
    #define TPlugin_new  EngineeringRotation::RotateEngineeringObjectivePlugin_new
    #define TPlugin_delete  EngineeringRotation::RotateEngineeringObjectivePlugin_delete

    /* Defines */
    #define TTypeSupport RotateEngineeringObjectiveTypeSupport
    #define TData        EngineeringRotation::RotateEngineeringObjective
    #define TDataReader  RotateEngineeringObjectiveDataReader
    #define TDataWriter  RotateEngineeringObjectiveDataWriter
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

    Configure and implement 'RotateEngineeringState' support classes.

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
    #define TTYPENAME   RotateEngineeringStateTYPENAME

    /* Defines */
    #define TDataWriter RotateEngineeringStateDataWriter
    #define TData       EngineeringRotation::RotateEngineeringState

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
    #define TTYPENAME   RotateEngineeringStateTYPENAME

    /* Defines */
    #define TDataReader RotateEngineeringStateDataReader
    #define TDataSeq    RotateEngineeringStateSeq
    #define TData       EngineeringRotation::RotateEngineeringState

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
    #define TTYPENAME    RotateEngineeringStateTYPENAME
    #define TPlugin_new  EngineeringRotation::RotateEngineeringStatePlugin_new
    #define TPlugin_delete  EngineeringRotation::RotateEngineeringStatePlugin_delete

    /* Defines */
    #define TTypeSupport RotateEngineeringStateTypeSupport
    #define TData        EngineeringRotation::RotateEngineeringState
    #define TDataReader  RotateEngineeringStateDataReader
    #define TDataWriter  RotateEngineeringStateDataWriter
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

} /* namespace EngineeringRotation  */

