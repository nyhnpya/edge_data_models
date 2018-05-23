
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "circulate_engineeringSupport.h"
#include "circulate_engineeringPlugin.h"

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

        Configure and implement 'MudPumpEngineeringRequest' support classes.

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
        #define TTYPENAME   MudPumpEngineeringRequestTYPENAME

        /* Defines */
        #define TDataWriter MudPumpEngineeringRequestDataWriter
        #define TData       nec::control::MudPumpEngineeringRequest

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
        #define TTYPENAME   MudPumpEngineeringRequestTYPENAME

        /* Defines */
        #define TDataReader MudPumpEngineeringRequestDataReader
        #define TDataSeq    MudPumpEngineeringRequestSeq
        #define TData       nec::control::MudPumpEngineeringRequest

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
        #define TTYPENAME    MudPumpEngineeringRequestTYPENAME
        #define TPlugin_new  nec::control::MudPumpEngineeringRequestPlugin_new
        #define TPlugin_delete  nec::control::MudPumpEngineeringRequestPlugin_delete

        /* Defines */
        #define TTypeSupport MudPumpEngineeringRequestTypeSupport
        #define TData        nec::control::MudPumpEngineeringRequest
        #define TDataReader  MudPumpEngineeringRequestDataReader
        #define TDataWriter  MudPumpEngineeringRequestDataWriter
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

        Configure and implement 'MudPumpEngineeringState' support classes.

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
        #define TTYPENAME   MudPumpEngineeringStateTYPENAME

        /* Defines */
        #define TDataWriter MudPumpEngineeringStateDataWriter
        #define TData       nec::control::MudPumpEngineeringState

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
        #define TTYPENAME   MudPumpEngineeringStateTYPENAME

        /* Defines */
        #define TDataReader MudPumpEngineeringStateDataReader
        #define TDataSeq    MudPumpEngineeringStateSeq
        #define TData       nec::control::MudPumpEngineeringState

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
        #define TTYPENAME    MudPumpEngineeringStateTYPENAME
        #define TPlugin_new  nec::control::MudPumpEngineeringStatePlugin_new
        #define TPlugin_delete  nec::control::MudPumpEngineeringStatePlugin_delete

        /* Defines */
        #define TTypeSupport MudPumpEngineeringStateTypeSupport
        #define TData        nec::control::MudPumpEngineeringState
        #define TDataReader  MudPumpEngineeringStateDataReader
        #define TDataWriter  MudPumpEngineeringStateDataWriter
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

        Configure and implement 'CirculateEngineeringRequest' support classes.

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
        #define TTYPENAME   CirculateEngineeringRequestTYPENAME

        /* Defines */
        #define TDataWriter CirculateEngineeringRequestDataWriter
        #define TData       nec::control::CirculateEngineeringRequest

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
        #define TTYPENAME   CirculateEngineeringRequestTYPENAME

        /* Defines */
        #define TDataReader CirculateEngineeringRequestDataReader
        #define TDataSeq    CirculateEngineeringRequestSeq
        #define TData       nec::control::CirculateEngineeringRequest

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
        #define TTYPENAME    CirculateEngineeringRequestTYPENAME
        #define TPlugin_new  nec::control::CirculateEngineeringRequestPlugin_new
        #define TPlugin_delete  nec::control::CirculateEngineeringRequestPlugin_delete

        /* Defines */
        #define TTypeSupport CirculateEngineeringRequestTypeSupport
        #define TData        nec::control::CirculateEngineeringRequest
        #define TDataReader  CirculateEngineeringRequestDataReader
        #define TDataWriter  CirculateEngineeringRequestDataWriter
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

        Configure and implement 'CirculateEngineeringState' support classes.

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
        #define TTYPENAME   CirculateEngineeringStateTYPENAME

        /* Defines */
        #define TDataWriter CirculateEngineeringStateDataWriter
        #define TData       nec::control::CirculateEngineeringState

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
        #define TTYPENAME   CirculateEngineeringStateTYPENAME

        /* Defines */
        #define TDataReader CirculateEngineeringStateDataReader
        #define TDataSeq    CirculateEngineeringStateSeq
        #define TData       nec::control::CirculateEngineeringState

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
        #define TTYPENAME    CirculateEngineeringStateTYPENAME
        #define TPlugin_new  nec::control::CirculateEngineeringStatePlugin_new
        #define TPlugin_delete  nec::control::CirculateEngineeringStatePlugin_delete

        /* Defines */
        #define TTypeSupport CirculateEngineeringStateTypeSupport
        #define TData        nec::control::CirculateEngineeringState
        #define TDataReader  CirculateEngineeringStateDataReader
        #define TDataWriter  CirculateEngineeringStateDataWriter
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

