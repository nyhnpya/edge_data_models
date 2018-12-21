
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drill.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "drillSupport.h"
#include "drillPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace plc {
    namespace process {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'DrillRequest' support classes.

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
        #define TTYPENAME   DrillRequestTYPENAME

        /* Defines */
        #define TDataWriter DrillRequestDataWriter
        #define TData       plc::process::DrillRequest

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
        #define TTYPENAME   DrillRequestTYPENAME

        /* Defines */
        #define TDataReader DrillRequestDataReader
        #define TDataSeq    DrillRequestSeq
        #define TData       plc::process::DrillRequest

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
        #define TTYPENAME    DrillRequestTYPENAME
        #define TPlugin_new  plc::process::DrillRequestPlugin_new
        #define TPlugin_delete  plc::process::DrillRequestPlugin_delete

        /* Defines */
        #define TTypeSupport DrillRequestTypeSupport
        #define TData        plc::process::DrillRequest
        #define TDataReader  DrillRequestDataReader
        #define TDataWriter  DrillRequestDataWriter
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

        Configure and implement 'DrillState' support classes.

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
        #define TTYPENAME   DrillStateTYPENAME

        /* Defines */
        #define TDataWriter DrillStateDataWriter
        #define TData       plc::process::DrillState

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
        #define TTYPENAME   DrillStateTYPENAME

        /* Defines */
        #define TDataReader DrillStateDataReader
        #define TDataSeq    DrillStateSeq
        #define TData       plc::process::DrillState

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
        #define TTYPENAME    DrillStateTYPENAME
        #define TPlugin_new  plc::process::DrillStatePlugin_new
        #define TPlugin_delete  plc::process::DrillStatePlugin_delete

        /* Defines */
        #define TTypeSupport DrillStateTypeSupport
        #define TData        plc::process::DrillState
        #define TDataReader  DrillStateDataReader
        #define TDataWriter  DrillStateDataWriter
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

    } /* namespace process  */
} /* namespace plc  */

