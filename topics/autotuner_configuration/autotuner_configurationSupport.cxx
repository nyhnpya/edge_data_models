
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
            #define TData       Shell::Hmi::AutoTunerConfiguration::ModelStateRequest

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
            #define TTYPENAME   ModelStateRequestTYPENAME

            /* Defines */
            #define TDataReader ModelStateRequestDataReader
            #define TDataSeq    ModelStateRequestSeq
            #define TData       Shell::Hmi::AutoTunerConfiguration::ModelStateRequest

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
            #define TTYPENAME    ModelStateRequestTYPENAME
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::ModelStateRequestPlugin_delete

            /* Defines */
            #define TTypeSupport ModelStateRequestTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::ModelStateRequest
            #define TDataReader  ModelStateRequestDataReader
            #define TDataWriter  ModelStateRequestDataWriter
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

            Configure and implement 'AutoTunerTuningRequest' support classes.

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
            #define TTYPENAME   AutoTunerTuningRequestTYPENAME

            /* Defines */
            #define TDataWriter AutoTunerTuningRequestDataWriter
            #define TData       Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest

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
            #define TTYPENAME   AutoTunerTuningRequestTYPENAME

            /* Defines */
            #define TDataReader AutoTunerTuningRequestDataReader
            #define TDataSeq    AutoTunerTuningRequestSeq
            #define TData       Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest

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
            #define TTYPENAME    AutoTunerTuningRequestTYPENAME
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequestPlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequestPlugin_delete

            /* Defines */
            #define TTypeSupport AutoTunerTuningRequestTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest
            #define TDataReader  AutoTunerTuningRequestDataReader
            #define TDataWriter  AutoTunerTuningRequestDataWriter
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

            Configure and implement 'AutoTunerTuningState' support classes.

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
            #define TTYPENAME   AutoTunerTuningStateTYPENAME

            /* Defines */
            #define TDataWriter AutoTunerTuningStateDataWriter
            #define TData       Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState

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
            #define TTYPENAME   AutoTunerTuningStateTYPENAME

            /* Defines */
            #define TDataReader AutoTunerTuningStateDataReader
            #define TDataSeq    AutoTunerTuningStateSeq
            #define TData       Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState

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
            #define TTYPENAME    AutoTunerTuningStateTYPENAME
            #define TPlugin_new  Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningStatePlugin_new
            #define TPlugin_delete  Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningStatePlugin_delete

            /* Defines */
            #define TTypeSupport AutoTunerTuningStateTypeSupport
            #define TData        Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState
            #define TDataReader  AutoTunerTuningStateDataReader
            #define TDataWriter  AutoTunerTuningStateDataWriter
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

