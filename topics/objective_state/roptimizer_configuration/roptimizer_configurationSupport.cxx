
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "roptimizer_configurationSupport.h"
#include "roptimizer_configurationPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace Shell {
    namespace Hmi {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'RoptimizerConfiguration' support classes.

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
        #define TTYPENAME   RoptimizerConfigurationTYPENAME

        /* Defines */
        #define TDataWriter RoptimizerConfigurationDataWriter
        #define TData       Shell::Hmi::RoptimizerConfiguration

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
        #define TTYPENAME   RoptimizerConfigurationTYPENAME

        /* Defines */
        #define TDataReader RoptimizerConfigurationDataReader
        #define TDataSeq    RoptimizerConfigurationSeq
        #define TData       Shell::Hmi::RoptimizerConfiguration

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
        #define TTYPENAME    RoptimizerConfigurationTYPENAME
        #define TPlugin_new  Shell::Hmi::RoptimizerConfigurationPlugin_new
        #define TPlugin_delete  Shell::Hmi::RoptimizerConfigurationPlugin_delete

        /* Defines */
        #define TTypeSupport RoptimizerConfigurationTypeSupport
        #define TData        Shell::Hmi::RoptimizerConfiguration
        #define TDataReader  RoptimizerConfigurationDataReader
        #define TDataWriter  RoptimizerConfigurationDataWriter
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

        Configure and implement 'RoptimizerSteadyState' support classes.

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
        #define TTYPENAME   RoptimizerSteadyStateTYPENAME

        /* Defines */
        #define TDataWriter RoptimizerSteadyStateDataWriter
        #define TData       Shell::Hmi::RoptimizerSteadyState

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
        #define TTYPENAME   RoptimizerSteadyStateTYPENAME

        /* Defines */
        #define TDataReader RoptimizerSteadyStateDataReader
        #define TDataSeq    RoptimizerSteadyStateSeq
        #define TData       Shell::Hmi::RoptimizerSteadyState

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
        #define TTYPENAME    RoptimizerSteadyStateTYPENAME
        #define TPlugin_new  Shell::Hmi::RoptimizerSteadyStatePlugin_new
        #define TPlugin_delete  Shell::Hmi::RoptimizerSteadyStatePlugin_delete

        /* Defines */
        #define TTypeSupport RoptimizerSteadyStateTypeSupport
        #define TData        Shell::Hmi::RoptimizerSteadyState
        #define TDataReader  RoptimizerSteadyStateDataReader
        #define TDataWriter  RoptimizerSteadyStateDataWriter
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

    } /* namespace Hmi  */
} /* namespace Shell  */

