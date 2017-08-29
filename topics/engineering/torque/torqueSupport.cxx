
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from torque.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "torqueSupport.h"
#include "torquePlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace nec {
    namespace control {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'TorqueRequest' support classes.

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
        #define TTYPENAME   TorqueRequestTYPENAME

        /* Defines */
        #define TDataWriter TorqueRequestDataWriter
        #define TData       nec::control::TorqueRequest

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
        #define TTYPENAME   TorqueRequestTYPENAME

        /* Defines */
        #define TDataReader TorqueRequestDataReader
        #define TDataSeq    TorqueRequestSeq
        #define TData       nec::control::TorqueRequest

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
        #define TTYPENAME    TorqueRequestTYPENAME
        #define TPlugin_new  nec::control::TorqueRequestPlugin_new
        #define TPlugin_delete  nec::control::TorqueRequestPlugin_delete

        /* Defines */
        #define TTypeSupport TorqueRequestTypeSupport
        #define TData        nec::control::TorqueRequest
        #define TDataReader  TorqueRequestDataReader
        #define TDataWriter  TorqueRequestDataWriter
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

        Configure and implement 'TorqueObjective' support classes.

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
        #define TTYPENAME   TorqueObjectiveTYPENAME

        /* Defines */
        #define TDataWriter TorqueObjectiveDataWriter
        #define TData       nec::control::TorqueObjective

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
        #define TTYPENAME   TorqueObjectiveTYPENAME

        /* Defines */
        #define TDataReader TorqueObjectiveDataReader
        #define TDataSeq    TorqueObjectiveSeq
        #define TData       nec::control::TorqueObjective

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
        #define TTYPENAME    TorqueObjectiveTYPENAME
        #define TPlugin_new  nec::control::TorqueObjectivePlugin_new
        #define TPlugin_delete  nec::control::TorqueObjectivePlugin_delete

        /* Defines */
        #define TTypeSupport TorqueObjectiveTypeSupport
        #define TData        nec::control::TorqueObjective
        #define TDataReader  TorqueObjectiveDataReader
        #define TDataWriter  TorqueObjectiveDataWriter
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

        Configure and implement 'TorqueState' support classes.

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
        #define TTYPENAME   TorqueStateTYPENAME

        /* Defines */
        #define TDataWriter TorqueStateDataWriter
        #define TData       nec::control::TorqueState

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
        #define TTYPENAME   TorqueStateTYPENAME

        /* Defines */
        #define TDataReader TorqueStateDataReader
        #define TDataSeq    TorqueStateSeq
        #define TData       nec::control::TorqueState

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
        #define TTYPENAME    TorqueStateTYPENAME
        #define TPlugin_new  nec::control::TorqueStatePlugin_new
        #define TPlugin_delete  nec::control::TorqueStatePlugin_delete

        /* Defines */
        #define TTypeSupport TorqueStateTypeSupport
        #define TData        nec::control::TorqueState
        #define TDataReader  TorqueStateDataReader
        #define TDataWriter  TorqueStateDataWriter
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

    } /* namespace control  */
} /* namespace nec  */

