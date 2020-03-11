
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rotate_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "rotate_engineeringSupport.h"
#include "rotate_engineeringPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace nec {
    namespace engineering {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'RotateEngineeringRequest' support classes.

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
        #define TTYPENAME   RotateEngineeringRequestTYPENAME

        /* Defines */
        #define TDataWriter RotateEngineeringRequestDataWriter
        #define TData       nec::engineering::RotateEngineeringRequest

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
        #define TTYPENAME   RotateEngineeringRequestTYPENAME

        /* Defines */
        #define TDataReader RotateEngineeringRequestDataReader
        #define TDataSeq    RotateEngineeringRequestSeq
        #define TData       nec::engineering::RotateEngineeringRequest

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
        #define TTYPENAME    RotateEngineeringRequestTYPENAME
        #define TPlugin_new  nec::engineering::RotateEngineeringRequestPlugin_new
        #define TPlugin_delete  nec::engineering::RotateEngineeringRequestPlugin_delete

        /* Defines */
        #define TTypeSupport RotateEngineeringRequestTypeSupport
        #define TData        nec::engineering::RotateEngineeringRequest
        #define TDataReader  RotateEngineeringRequestDataReader
        #define TDataWriter  RotateEngineeringRequestDataWriter
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

        Configure and implement 'RotateEngineeringObjective' support classes.

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
        #define TTYPENAME   RotateEngineeringObjectiveTYPENAME

        /* Defines */
        #define TDataWriter RotateEngineeringObjectiveDataWriter
        #define TData       nec::engineering::RotateEngineeringObjective

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
        #define TTYPENAME   RotateEngineeringObjectiveTYPENAME

        /* Defines */
        #define TDataReader RotateEngineeringObjectiveDataReader
        #define TDataSeq    RotateEngineeringObjectiveSeq
        #define TData       nec::engineering::RotateEngineeringObjective

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
        #define TTYPENAME    RotateEngineeringObjectiveTYPENAME
        #define TPlugin_new  nec::engineering::RotateEngineeringObjectivePlugin_new
        #define TPlugin_delete  nec::engineering::RotateEngineeringObjectivePlugin_delete

        /* Defines */
        #define TTypeSupport RotateEngineeringObjectiveTypeSupport
        #define TData        nec::engineering::RotateEngineeringObjective
        #define TDataReader  RotateEngineeringObjectiveDataReader
        #define TDataWriter  RotateEngineeringObjectiveDataWriter
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

        Configure and implement 'RotateEngineeringState' support classes.

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
        #define TTYPENAME   RotateEngineeringStateTYPENAME

        /* Defines */
        #define TDataWriter RotateEngineeringStateDataWriter
        #define TData       nec::engineering::RotateEngineeringState

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
        #define TTYPENAME   RotateEngineeringStateTYPENAME

        /* Defines */
        #define TDataReader RotateEngineeringStateDataReader
        #define TDataSeq    RotateEngineeringStateSeq
        #define TData       nec::engineering::RotateEngineeringState

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
        #define TTYPENAME    RotateEngineeringStateTYPENAME
        #define TPlugin_new  nec::engineering::RotateEngineeringStatePlugin_new
        #define TPlugin_delete  nec::engineering::RotateEngineeringStatePlugin_delete

        /* Defines */
        #define TTypeSupport RotateEngineeringStateTypeSupport
        #define TData        nec::engineering::RotateEngineeringState
        #define TDataReader  RotateEngineeringStateDataReader
        #define TDataWriter  RotateEngineeringStateDataWriter
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

    } /* namespace engineering  */
} /* namespace nec  */

