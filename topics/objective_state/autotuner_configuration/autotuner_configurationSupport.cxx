
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "autotuner_configurationSupport.h"
#include "autotuner_configurationPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace AutoTunerConfiguration {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ModelStateRequest' support classes.

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
    #define TTYPENAME   ModelStateRequestTYPENAME

    /* Defines */
    #define TDataWriter ModelStateRequestDataWriter
    #define TData       AutoTunerConfiguration::ModelStateRequest

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
    #define TTYPENAME   ModelStateRequestTYPENAME

    /* Defines */
    #define TDataReader ModelStateRequestDataReader
    #define TDataSeq    ModelStateRequestSeq
    #define TData       AutoTunerConfiguration::ModelStateRequest

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
    #define TTYPENAME    ModelStateRequestTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::ModelStateRequestPlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::ModelStateRequestPlugin_delete

    /* Defines */
    #define TTypeSupport ModelStateRequestTypeSupport
    #define TData        AutoTunerConfiguration::ModelStateRequest
    #define TDataReader  ModelStateRequestDataReader
    #define TDataWriter  ModelStateRequestDataWriter
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

    Configure and implement 'ModelStateState' support classes.

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
    #define TTYPENAME   ModelStateStateTYPENAME

    /* Defines */
    #define TDataWriter ModelStateStateDataWriter
    #define TData       AutoTunerConfiguration::ModelStateState

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
    #define TTYPENAME   ModelStateStateTYPENAME

    /* Defines */
    #define TDataReader ModelStateStateDataReader
    #define TDataSeq    ModelStateStateSeq
    #define TData       AutoTunerConfiguration::ModelStateState

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
    #define TTYPENAME    ModelStateStateTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::ModelStateStatePlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::ModelStateStatePlugin_delete

    /* Defines */
    #define TTypeSupport ModelStateStateTypeSupport
    #define TData        AutoTunerConfiguration::ModelStateState
    #define TDataReader  ModelStateStateDataReader
    #define TDataWriter  ModelStateStateDataWriter
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

    Configure and implement 'DiffpTuningRequest' support classes.

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
    #define TTYPENAME   DiffpTuningRequestTYPENAME

    /* Defines */
    #define TDataWriter DiffpTuningRequestDataWriter
    #define TData       AutoTunerConfiguration::DiffpTuningRequest

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
    #define TTYPENAME   DiffpTuningRequestTYPENAME

    /* Defines */
    #define TDataReader DiffpTuningRequestDataReader
    #define TDataSeq    DiffpTuningRequestSeq
    #define TData       AutoTunerConfiguration::DiffpTuningRequest

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
    #define TTYPENAME    DiffpTuningRequestTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::DiffpTuningRequestPlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::DiffpTuningRequestPlugin_delete

    /* Defines */
    #define TTypeSupport DiffpTuningRequestTypeSupport
    #define TData        AutoTunerConfiguration::DiffpTuningRequest
    #define TDataReader  DiffpTuningRequestDataReader
    #define TDataWriter  DiffpTuningRequestDataWriter
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

    Configure and implement 'DiffpTuningState' support classes.

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
    #define TTYPENAME   DiffpTuningStateTYPENAME

    /* Defines */
    #define TDataWriter DiffpTuningStateDataWriter
    #define TData       AutoTunerConfiguration::DiffpTuningState

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
    #define TTYPENAME   DiffpTuningStateTYPENAME

    /* Defines */
    #define TDataReader DiffpTuningStateDataReader
    #define TDataSeq    DiffpTuningStateSeq
    #define TData       AutoTunerConfiguration::DiffpTuningState

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
    #define TTYPENAME    DiffpTuningStateTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::DiffpTuningStatePlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::DiffpTuningStatePlugin_delete

    /* Defines */
    #define TTypeSupport DiffpTuningStateTypeSupport
    #define TData        AutoTunerConfiguration::DiffpTuningState
    #define TDataReader  DiffpTuningStateDataReader
    #define TDataWriter  DiffpTuningStateDataWriter
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

    Configure and implement 'WobTuningRequest' support classes.

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
    #define TTYPENAME   WobTuningRequestTYPENAME

    /* Defines */
    #define TDataWriter WobTuningRequestDataWriter
    #define TData       AutoTunerConfiguration::WobTuningRequest

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
    #define TTYPENAME   WobTuningRequestTYPENAME

    /* Defines */
    #define TDataReader WobTuningRequestDataReader
    #define TDataSeq    WobTuningRequestSeq
    #define TData       AutoTunerConfiguration::WobTuningRequest

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
    #define TTYPENAME    WobTuningRequestTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::WobTuningRequestPlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::WobTuningRequestPlugin_delete

    /* Defines */
    #define TTypeSupport WobTuningRequestTypeSupport
    #define TData        AutoTunerConfiguration::WobTuningRequest
    #define TDataReader  WobTuningRequestDataReader
    #define TDataWriter  WobTuningRequestDataWriter
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

    Configure and implement 'WobTuningState' support classes.

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
    #define TTYPENAME   WobTuningStateTYPENAME

    /* Defines */
    #define TDataWriter WobTuningStateDataWriter
    #define TData       AutoTunerConfiguration::WobTuningState

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
    #define TTYPENAME   WobTuningStateTYPENAME

    /* Defines */
    #define TDataReader WobTuningStateDataReader
    #define TDataSeq    WobTuningStateSeq
    #define TData       AutoTunerConfiguration::WobTuningState

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
    #define TTYPENAME    WobTuningStateTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::WobTuningStatePlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::WobTuningStatePlugin_delete

    /* Defines */
    #define TTypeSupport WobTuningStateTypeSupport
    #define TData        AutoTunerConfiguration::WobTuningState
    #define TDataReader  WobTuningStateDataReader
    #define TDataWriter  WobTuningStateDataWriter
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

    Configure and implement 'TorqueTuningRequest' support classes.

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
    #define TTYPENAME   TorqueTuningRequestTYPENAME

    /* Defines */
    #define TDataWriter TorqueTuningRequestDataWriter
    #define TData       AutoTunerConfiguration::TorqueTuningRequest

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
    #define TTYPENAME   TorqueTuningRequestTYPENAME

    /* Defines */
    #define TDataReader TorqueTuningRequestDataReader
    #define TDataSeq    TorqueTuningRequestSeq
    #define TData       AutoTunerConfiguration::TorqueTuningRequest

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
    #define TTYPENAME    TorqueTuningRequestTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::TorqueTuningRequestPlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::TorqueTuningRequestPlugin_delete

    /* Defines */
    #define TTypeSupport TorqueTuningRequestTypeSupport
    #define TData        AutoTunerConfiguration::TorqueTuningRequest
    #define TDataReader  TorqueTuningRequestDataReader
    #define TDataWriter  TorqueTuningRequestDataWriter
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

    Configure and implement 'TorqueTuningState' support classes.

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
    #define TTYPENAME   TorqueTuningStateTYPENAME

    /* Defines */
    #define TDataWriter TorqueTuningStateDataWriter
    #define TData       AutoTunerConfiguration::TorqueTuningState

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
    #define TTYPENAME   TorqueTuningStateTYPENAME

    /* Defines */
    #define TDataReader TorqueTuningStateDataReader
    #define TDataSeq    TorqueTuningStateSeq
    #define TData       AutoTunerConfiguration::TorqueTuningState

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
    #define TTYPENAME    TorqueTuningStateTYPENAME
    #define TPlugin_new  AutoTunerConfiguration::TorqueTuningStatePlugin_new
    #define TPlugin_delete  AutoTunerConfiguration::TorqueTuningStatePlugin_delete

    /* Defines */
    #define TTypeSupport TorqueTuningStateTypeSupport
    #define TData        AutoTunerConfiguration::TorqueTuningState
    #define TDataReader  TorqueTuningStateDataReader
    #define TDataWriter  TorqueTuningStateDataWriter
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

} /* namespace AutoTunerConfiguration  */

