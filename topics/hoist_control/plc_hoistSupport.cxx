
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc_hoist.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "plc_hoistSupport.h"
#include "plc_hoistPlugin.h"

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

        Configure and implement 'HoistRequest' support classes.

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
        #define TTYPENAME   HoistRequestTYPENAME

        /* Defines */
        #define TDataWriter HoistRequestDataWriter
        #define TData       plc::process::HoistRequest

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
        #define TTYPENAME   HoistRequestTYPENAME

        /* Defines */
        #define TDataReader HoistRequestDataReader
        #define TDataSeq    HoistRequestSeq
        #define TData       plc::process::HoistRequest

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
        #define TTYPENAME    HoistRequestTYPENAME
        #define TPlugin_new  plc::process::HoistRequestPlugin_new
        #define TPlugin_delete  plc::process::HoistRequestPlugin_delete

        /* Defines */
        #define TTypeSupport HoistRequestTypeSupport
        #define TData        plc::process::HoistRequest
        #define TDataReader  HoistRequestDataReader
        #define TDataWriter  HoistRequestDataWriter
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

        Configure and implement 'HoistState' support classes.

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
        #define TTYPENAME   HoistStateTYPENAME

        /* Defines */
        #define TDataWriter HoistStateDataWriter
        #define TData       plc::process::HoistState

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
        #define TTYPENAME   HoistStateTYPENAME

        /* Defines */
        #define TDataReader HoistStateDataReader
        #define TDataSeq    HoistStateSeq
        #define TData       plc::process::HoistState

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
        #define TTYPENAME    HoistStateTYPENAME
        #define TPlugin_new  plc::process::HoistStatePlugin_new
        #define TPlugin_delete  plc::process::HoistStatePlugin_delete

        /* Defines */
        #define TTypeSupport HoistStateTypeSupport
        #define TData        plc::process::HoistState
        #define TDataReader  HoistStateDataReader
        #define TDataWriter  HoistStateDataWriter
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

