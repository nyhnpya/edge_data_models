
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from process_info.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "process_infoSupport.h"
#include "process_infoPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace process {
    namespace maintanence {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'ProcessInfo' support classes.

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
        #define TTYPENAME   ProcessInfoTYPENAME

        /* Defines */
        #define TDataWriter ProcessInfoDataWriter
        #define TData       process::maintanence::ProcessInfo

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
        #define TTYPENAME   ProcessInfoTYPENAME

        /* Defines */
        #define TDataReader ProcessInfoDataReader
        #define TDataSeq    ProcessInfoSeq
        #define TData       process::maintanence::ProcessInfo

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
        #define TTYPENAME    ProcessInfoTYPENAME
        #define TPlugin_new  process::maintanence::ProcessInfoPlugin_new
        #define TPlugin_delete  process::maintanence::ProcessInfoPlugin_delete

        /* Defines */
        #define TTypeSupport ProcessInfoTypeSupport
        #define TData        process::maintanence::ProcessInfo
        #define TDataReader  ProcessInfoDataReader
        #define TDataWriter  ProcessInfoDataWriter
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

    } /* namespace maintanence  */
} /* namespace process  */

