
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

namespace Shell {
    namespace Hmi {
        namespace AutoTunerConfiguration {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'ModelState' support classes.

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
            #define TTYPENAME   ModelStateTYPENAME

            /* Defines */
            #define TDataWriter ModelStateDataWriter
            #define TData       Shell::Hmi::AutoTunerConfiguration::ModelState

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

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
            #define TTYPENAME   ModelStateTYPENAME

            /* Defines */
            #define TDataReader ModelStateDataReader
            #define TDataSeq    ModelStateSeq
            #define TData       Shell::Hmi::AutoTunerConfiguration::ModelState

            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

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
            #define TTYPENAME    ModelStateTYPENAME
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::ModelStatePlugin_delete

            /* Defines */
            #define TTypeSupport ModelStateTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::ModelState
            #define TDataReader  ModelStateDataReader
            #define TDataWriter  ModelStateDataWriter
            #define TGENERATE_SER_CODE
            #ifndef NDDS_STANDALONE_TYPE
            #define TGENERATE_TYPECODE
            #endif

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #ifndef NDDS_STANDALONE_TYPE
            #undef TGENERATE_TYPECODE
            #endif
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
            #define TData       Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

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
            #define TData       Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest

            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

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
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequestPlugin_delete

            /* Defines */
            #define TTypeSupport DiffpTuningRequestTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest
            #define TDataReader  DiffpTuningRequestDataReader
            #define TDataWriter  DiffpTuningRequestDataWriter
            #define TGENERATE_SER_CODE
            #ifndef NDDS_STANDALONE_TYPE
            #define TGENERATE_TYPECODE
            #endif

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #ifndef NDDS_STANDALONE_TYPE
            #undef TGENERATE_TYPECODE
            #endif
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
            #define TData       Shell::Hmi::AutoTunerConfiguration::DiffpTuningState

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

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
            #define TData       Shell::Hmi::AutoTunerConfiguration::DiffpTuningState

            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

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
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::DiffpTuningStatePlugin_delete

            /* Defines */
            #define TTypeSupport DiffpTuningStateTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::DiffpTuningState
            #define TDataReader  DiffpTuningStateDataReader
            #define TDataWriter  DiffpTuningStateDataWriter
            #define TGENERATE_SER_CODE
            #ifndef NDDS_STANDALONE_TYPE
            #define TGENERATE_TYPECODE
            #endif

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #ifndef NDDS_STANDALONE_TYPE
            #undef TGENERATE_TYPECODE
            #endif
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
            #define TData       Shell::Hmi::AutoTunerConfiguration::WobTuningRequest

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

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
            #define TData       Shell::Hmi::AutoTunerConfiguration::WobTuningRequest

            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

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
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::WobTuningRequestPlugin_delete

            /* Defines */
            #define TTypeSupport WobTuningRequestTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::WobTuningRequest
            #define TDataReader  WobTuningRequestDataReader
            #define TDataWriter  WobTuningRequestDataWriter
            #define TGENERATE_SER_CODE
            #ifndef NDDS_STANDALONE_TYPE
            #define TGENERATE_TYPECODE
            #endif

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #ifndef NDDS_STANDALONE_TYPE
            #undef TGENERATE_TYPECODE
            #endif
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
            #define TData       Shell::Hmi::AutoTunerConfiguration::WobTuningState

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

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
            #define TData       Shell::Hmi::AutoTunerConfiguration::WobTuningState

            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

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
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::WobTuningStatePlugin_delete

            /* Defines */
            #define TTypeSupport WobTuningStateTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::WobTuningState
            #define TDataReader  WobTuningStateDataReader
            #define TDataWriter  WobTuningStateDataWriter
            #define TGENERATE_SER_CODE
            #ifndef NDDS_STANDALONE_TYPE
            #define TGENERATE_TYPECODE
            #endif

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #ifndef NDDS_STANDALONE_TYPE
            #undef TGENERATE_TYPECODE
            #endif
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
            #define TData       Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

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
            #define TData       Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest

            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

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
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequestPlugin_delete

            /* Defines */
            #define TTypeSupport TorqueTuningRequestTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest
            #define TDataReader  TorqueTuningRequestDataReader
            #define TDataWriter  TorqueTuningRequestDataWriter
            #define TGENERATE_SER_CODE
            #ifndef NDDS_STANDALONE_TYPE
            #define TGENERATE_TYPECODE
            #endif

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #ifndef NDDS_STANDALONE_TYPE
            #undef TGENERATE_TYPECODE
            #endif
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
            #define TData       Shell::Hmi::AutoTunerConfiguration::TorqueTuningState

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

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
            #define TData       Shell::Hmi::AutoTunerConfiguration::TorqueTuningState

            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

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
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::TorqueTuningStatePlugin_delete

            /* Defines */
            #define TTypeSupport TorqueTuningStateTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::TorqueTuningState
            #define TDataReader  TorqueTuningStateDataReader
            #define TDataWriter  TorqueTuningStateDataWriter
            #define TGENERATE_SER_CODE
            #ifndef NDDS_STANDALONE_TYPE
            #define TGENERATE_TYPECODE
            #endif

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #ifndef NDDS_STANDALONE_TYPE
            #undef TGENERATE_TYPECODE
            #endif
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace AutoTunerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

