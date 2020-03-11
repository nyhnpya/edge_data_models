
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_rotate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "plc_rotateSupport.h"
#include "plc_rotatePlugin.h"

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

        Configure and implement 'PlcRotateRequest' support classes.

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
        #define TTYPENAME   PlcRotateRequestTYPENAME

        /* Defines */
        #define TDataWriter PlcRotateRequestDataWriter
        #define TData       plc::process::PlcRotateRequest

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
        #define TTYPENAME   PlcRotateRequestTYPENAME

        /* Defines */
        #define TDataReader PlcRotateRequestDataReader
        #define TDataSeq    PlcRotateRequestSeq
        #define TData       plc::process::PlcRotateRequest

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
        #define TTYPENAME    PlcRotateRequestTYPENAME
        #define TPlugin_new  plc::process::PlcRotateRequestPlugin_new
        #define TPlugin_delete  plc::process::PlcRotateRequestPlugin_delete

        /* Defines */
        #define TTypeSupport PlcRotateRequestTypeSupport
        #define TData        plc::process::PlcRotateRequest
        #define TDataReader  PlcRotateRequestDataReader
        #define TDataWriter  PlcRotateRequestDataWriter
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

        Configure and implement 'PlcRotateState' support classes.

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
        #define TTYPENAME   PlcRotateStateTYPENAME

        /* Defines */
        #define TDataWriter PlcRotateStateDataWriter
        #define TData       plc::process::PlcRotateState

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
        #define TTYPENAME   PlcRotateStateTYPENAME

        /* Defines */
        #define TDataReader PlcRotateStateDataReader
        #define TDataSeq    PlcRotateStateSeq
        #define TData       plc::process::PlcRotateState

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
        #define TTYPENAME    PlcRotateStateTYPENAME
        #define TPlugin_new  plc::process::PlcRotateStatePlugin_new
        #define TPlugin_delete  plc::process::PlcRotateStatePlugin_delete

        /* Defines */
        #define TTypeSupport PlcRotateStateTypeSupport
        #define TData        plc::process::PlcRotateState
        #define TDataReader  PlcRotateStateDataReader
        #define TDataWriter  PlcRotateStateDataWriter
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

    } /* namespace process  */
} /* namespace plc  */

