
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objective.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "objectiveSupport.h"
#include "objectivePlugin.h"

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

        Configure and implement 'ObjectiveState' support classes.

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
        #define TTYPENAME   ObjectiveStateTYPENAME

        /* Defines */
        #define TDataWriter ObjectiveStateDataWriter
        #define TData       process::plan::ObjectiveState

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
        #define TTYPENAME   ObjectiveStateTYPENAME

        /* Defines */
        #define TDataReader ObjectiveStateDataReader
        #define TDataSeq    ObjectiveStateSeq
        #define TData       process::plan::ObjectiveState

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
        #define TTYPENAME    ObjectiveStateTYPENAME
        #define TPlugin_new  process::plan::ObjectiveStatePlugin_new
        #define TPlugin_delete  process::plan::ObjectiveStatePlugin_delete

        /* Defines */
        #define TTypeSupport ObjectiveStateTypeSupport
        #define TData        process::plan::ObjectiveState
        #define TDataReader  ObjectiveStateDataReader
        #define TDataWriter  ObjectiveStateDataWriter
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

