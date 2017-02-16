
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_calibration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "drilling_calibrationSupport.h"
#include "drilling_calibrationPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace CalibrationHoisting {

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'DrillingCalibrationRequest' support classes.

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
    #define TTYPENAME   DrillingCalibrationRequestTYPENAME

    /* Defines */
    #define TDataWriter DrillingCalibrationRequestDataWriter
    #define TData       CalibrationHoisting::DrillingCalibrationRequest

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
    #define TTYPENAME   DrillingCalibrationRequestTYPENAME

    /* Defines */
    #define TDataReader DrillingCalibrationRequestDataReader
    #define TDataSeq    DrillingCalibrationRequestSeq
    #define TData       CalibrationHoisting::DrillingCalibrationRequest

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
    #define TTYPENAME    DrillingCalibrationRequestTYPENAME
    #define TPlugin_new  CalibrationHoisting::DrillingCalibrationRequestPlugin_new
    #define TPlugin_delete  CalibrationHoisting::DrillingCalibrationRequestPlugin_delete

    /* Defines */
    #define TTypeSupport DrillingCalibrationRequestTypeSupport
    #define TData        CalibrationHoisting::DrillingCalibrationRequest
    #define TDataReader  DrillingCalibrationRequestDataReader
    #define TDataWriter  DrillingCalibrationRequestDataWriter
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

    Configure and implement 'DrillingCalibrationState' support classes.

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
    #define TTYPENAME   DrillingCalibrationStateTYPENAME

    /* Defines */
    #define TDataWriter DrillingCalibrationStateDataWriter
    #define TData       CalibrationHoisting::DrillingCalibrationState

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
    #define TTYPENAME   DrillingCalibrationStateTYPENAME

    /* Defines */
    #define TDataReader DrillingCalibrationStateDataReader
    #define TDataSeq    DrillingCalibrationStateSeq
    #define TData       CalibrationHoisting::DrillingCalibrationState

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
    #define TTYPENAME    DrillingCalibrationStateTYPENAME
    #define TPlugin_new  CalibrationHoisting::DrillingCalibrationStatePlugin_new
    #define TPlugin_delete  CalibrationHoisting::DrillingCalibrationStatePlugin_delete

    /* Defines */
    #define TTypeSupport DrillingCalibrationStateTypeSupport
    #define TData        CalibrationHoisting::DrillingCalibrationState
    #define TDataReader  DrillingCalibrationStateDataReader
    #define TDataWriter  DrillingCalibrationStateDataWriter
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

} /* namespace CalibrationHoisting  */

