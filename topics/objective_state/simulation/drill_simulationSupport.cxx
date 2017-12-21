
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill_simulation.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "drill_simulationSupport.h"
#include "drill_simulationPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace Simulation {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'AutoDrillerRequest' support classes.

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
    #define TTYPENAME   AutoDrillerRequestTYPENAME

    /* Defines */
    #define TDataWriter AutoDrillerRequestDataWriter
    #define TData       Simulation::AutoDrillerRequest

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
    #define TTYPENAME   AutoDrillerRequestTYPENAME

    /* Defines */
    #define TDataReader AutoDrillerRequestDataReader
    #define TDataSeq    AutoDrillerRequestSeq
    #define TData       Simulation::AutoDrillerRequest

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
    #define TTYPENAME    AutoDrillerRequestTYPENAME
    #define TPlugin_new  Simulation::AutoDrillerRequestPlugin_new
    #define TPlugin_delete  Simulation::AutoDrillerRequestPlugin_delete

    /* Defines */
    #define TTypeSupport AutoDrillerRequestTypeSupport
    #define TData        Simulation::AutoDrillerRequest
    #define TDataReader  AutoDrillerRequestDataReader
    #define TDataWriter  AutoDrillerRequestDataWriter
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

    Configure and implement 'AutoDrillerObjective' support classes.

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
    #define TTYPENAME   AutoDrillerObjectiveTYPENAME

    /* Defines */
    #define TDataWriter AutoDrillerObjectiveDataWriter
    #define TData       Simulation::AutoDrillerObjective

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
    #define TTYPENAME   AutoDrillerObjectiveTYPENAME

    /* Defines */
    #define TDataReader AutoDrillerObjectiveDataReader
    #define TDataSeq    AutoDrillerObjectiveSeq
    #define TData       Simulation::AutoDrillerObjective

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
    #define TTYPENAME    AutoDrillerObjectiveTYPENAME
    #define TPlugin_new  Simulation::AutoDrillerObjectivePlugin_new
    #define TPlugin_delete  Simulation::AutoDrillerObjectivePlugin_delete

    /* Defines */
    #define TTypeSupport AutoDrillerObjectiveTypeSupport
    #define TData        Simulation::AutoDrillerObjective
    #define TDataReader  AutoDrillerObjectiveDataReader
    #define TDataWriter  AutoDrillerObjectiveDataWriter
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

    Configure and implement 'AutoDrillerState' support classes.

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
    #define TTYPENAME   AutoDrillerStateTYPENAME

    /* Defines */
    #define TDataWriter AutoDrillerStateDataWriter
    #define TData       Simulation::AutoDrillerState

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
    #define TTYPENAME   AutoDrillerStateTYPENAME

    /* Defines */
    #define TDataReader AutoDrillerStateDataReader
    #define TDataSeq    AutoDrillerStateSeq
    #define TData       Simulation::AutoDrillerState

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
    #define TTYPENAME    AutoDrillerStateTYPENAME
    #define TPlugin_new  Simulation::AutoDrillerStatePlugin_new
    #define TPlugin_delete  Simulation::AutoDrillerStatePlugin_delete

    /* Defines */
    #define TTypeSupport AutoDrillerStateTypeSupport
    #define TData        Simulation::AutoDrillerState
    #define TDataReader  AutoDrillerStateDataReader
    #define TDataWriter  AutoDrillerStateDataWriter
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

} /* namespace Simulation  */

