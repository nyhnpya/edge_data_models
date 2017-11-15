
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "configurationSupport.h"
#include "configurationPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace Configuration {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'protocol_t' support classes.

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
    #define TTYPENAME   protocol_tTYPENAME

    /* Defines */
    #define TDataWriter protocol_tDataWriter
    #define TData       Configuration::protocol_t

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
    #define TTYPENAME   protocol_tTYPENAME

    /* Defines */
    #define TDataReader protocol_tDataReader
    #define TDataSeq    protocol_tSeq
    #define TData       Configuration::protocol_t

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
    #define TTYPENAME    protocol_tTYPENAME
    #define TPlugin_new  Configuration::protocol_tPlugin_new
    #define TPlugin_delete  Configuration::protocol_tPlugin_delete

    /* Defines */
    #define TTypeSupport protocol_tTypeSupport
    #define TData        Configuration::protocol_t
    #define TDataReader  protocol_tDataReader
    #define TDataWriter  protocol_tDataWriter
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

    Configure and implement 'interface_t' support classes.

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
    #define TTYPENAME   interface_tTYPENAME

    /* Defines */
    #define TDataWriter interface_tDataWriter
    #define TData       Configuration::interface_t

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
    #define TTYPENAME   interface_tTYPENAME

    /* Defines */
    #define TDataReader interface_tDataReader
    #define TDataSeq    interface_tSeq
    #define TData       Configuration::interface_t

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
    #define TTYPENAME    interface_tTYPENAME
    #define TPlugin_new  Configuration::interface_tPlugin_new
    #define TPlugin_delete  Configuration::interface_tPlugin_delete

    /* Defines */
    #define TTypeSupport interface_tTypeSupport
    #define TData        Configuration::interface_t
    #define TDataReader  interface_tDataReader
    #define TDataWriter  interface_tDataWriter
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

    Configure and implement 'config_data' support classes.

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
    #define TTYPENAME   config_dataTYPENAME

    /* Defines */
    #define TDataWriter config_dataDataWriter
    #define TData       Configuration::config_data

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
    #define TTYPENAME   config_dataTYPENAME

    /* Defines */
    #define TDataReader config_dataDataReader
    #define TDataSeq    config_dataSeq
    #define TData       Configuration::config_data

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
    #define TTYPENAME    config_dataTYPENAME
    #define TPlugin_new  Configuration::config_dataPlugin_new
    #define TPlugin_delete  Configuration::config_dataPlugin_delete

    /* Defines */
    #define TTypeSupport config_dataTypeSupport
    #define TData        Configuration::config_data
    #define TDataReader  config_dataDataReader
    #define TDataWriter  config_dataDataWriter
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

    Configure and implement 'Item' support classes.

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
    #define TTYPENAME   ItemTYPENAME

    /* Defines */
    #define TDataWriter ItemDataWriter
    #define TData       Configuration::Item

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
    #define TTYPENAME   ItemTYPENAME

    /* Defines */
    #define TDataReader ItemDataReader
    #define TDataSeq    ItemSeq
    #define TData       Configuration::Item

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
    #define TTYPENAME    ItemTYPENAME
    #define TPlugin_new  Configuration::ItemPlugin_new
    #define TPlugin_delete  Configuration::ItemPlugin_delete

    /* Defines */
    #define TTypeSupport ItemTypeSupport
    #define TData        Configuration::Item
    #define TDataReader  ItemDataReader
    #define TDataWriter  ItemDataWriter
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

} /* namespace Configuration  */

