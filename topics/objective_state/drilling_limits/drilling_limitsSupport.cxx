
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_limits.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "drilling_limitsSupport.h"
#include "drilling_limitsPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace process {
    namespace plan {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'DrillingLimitsRequest' support classes.

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
        #define TTYPENAME   DrillingLimitsRequestTYPENAME

        /* Defines */
        #define TDataWriter DrillingLimitsRequestDataWriter
        #define TData       process::plan::DrillingLimitsRequest

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
        #define TTYPENAME   DrillingLimitsRequestTYPENAME

        /* Defines */
        #define TDataReader DrillingLimitsRequestDataReader
        #define TDataSeq    DrillingLimitsRequestSeq
        #define TData       process::plan::DrillingLimitsRequest

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
        #define TTYPENAME    DrillingLimitsRequestTYPENAME
        #define TPlugin_new  process::plan::DrillingLimitsRequestPlugin_new
        #define TPlugin_delete  process::plan::DrillingLimitsRequestPlugin_delete

        /* Defines */
        #define TTypeSupport DrillingLimitsRequestTypeSupport
        #define TData        process::plan::DrillingLimitsRequest
        #define TDataReader  DrillingLimitsRequestDataReader
        #define TDataWriter  DrillingLimitsRequestDataWriter
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

        Configure and implement 'DrillingLimitsState' support classes.

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
        #define TTYPENAME   DrillingLimitsStateTYPENAME

        /* Defines */
        #define TDataWriter DrillingLimitsStateDataWriter
        #define TData       process::plan::DrillingLimitsState

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
        #define TTYPENAME   DrillingLimitsStateTYPENAME

        /* Defines */
        #define TDataReader DrillingLimitsStateDataReader
        #define TDataSeq    DrillingLimitsStateSeq
        #define TData       process::plan::DrillingLimitsState

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
        #define TTYPENAME    DrillingLimitsStateTYPENAME
        #define TPlugin_new  process::plan::DrillingLimitsStatePlugin_new
        #define TPlugin_delete  process::plan::DrillingLimitsStatePlugin_delete

        /* Defines */
        #define TTypeSupport DrillingLimitsStateTypeSupport
        #define TData        process::plan::DrillingLimitsState
        #define TDataReader  DrillingLimitsStateDataReader
        #define TDataWriter  DrillingLimitsStateDataWriter
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

    } /* namespace plan  */
} /* namespace process  */

