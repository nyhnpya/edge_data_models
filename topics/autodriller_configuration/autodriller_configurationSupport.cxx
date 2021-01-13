
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autodriller_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "autodriller_configurationSupport.h"
#include "autodriller_configurationPlugin.h"

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

        Configure and implement 'HmiRequest' support classes.

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
        #define TTYPENAME   HmiRequestTYPENAME

        /* Defines */
        #define TDataWriter HmiRequestDataWriter
        #define TData       nec::control::HmiRequest

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
        #define TTYPENAME   HmiRequestTYPENAME

        /* Defines */
        #define TDataReader HmiRequestDataReader
        #define TDataSeq    HmiRequestSeq
        #define TData       nec::control::HmiRequest

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
        #define TTYPENAME    HmiRequestTYPENAME
        #define TPlugin_new  nec::control::HmiRequestPlugin_new
        #define TPlugin_delete  nec::control::HmiRequestPlugin_delete

        /* Defines */
        #define TTypeSupport HmiRequestTypeSupport
        #define TData        nec::control::HmiRequest
        #define TDataReader  HmiRequestDataReader
        #define TDataWriter  HmiRequestDataWriter
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

    } /* namespace control  */
} /* namespace nec  */

